#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define NAME_LEN 30
#define ABBREV_LEN 15
#define CLASS_LEN 20
#define MAX_UNITS 20

typedef struct {
    char name[NAME_LEN];
    char abbrev[ABBREV_LEN];
    char class[CLASS_LEN];
    double standard;
} unit_t;

int find_unit(unit_t units[], int n, char str[]) {
    for (int i = 0; i < n; i++) {
        if (strcmp(units[i].name, str) == 0 || 
            strcmp(units[i].abbrev, str) == 0) {
            return i;
        }
    }
    return -1;
}

int main() {
    unit_t units[MAX_UNITS];
    int count = 0;

    FILE *fp = fopen("units.txt", "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Read file
    while (fscanf(fp, "%s %s %s %lf",
                  units[count].name,
                  units[count].abbrev,
                  units[count].class,
                  &units[count].standard) != EOF) {
        count++;
    }
    fclose(fp);

    char input[100];
    double quantity;
    char old_units[NAME_LEN], new_units[NAME_LEN];

    while (1) {
        printf("\nEnter a conversion problem or q to quit:\n> ");

        fgets(input, sizeof(input), stdin);

        if (input[0] == 'q')
            break;

        sscanf(input, "%lf %s %s", &quantity, old_units, new_units);

        printf("Attempting conversion of %.4f %s to %s...\n",
               quantity, old_units, new_units);

        int old_index = find_unit(units, count, old_units);
        int new_index = find_unit(units, count, new_units);

        if (old_index == -1 || new_index == -1) {
            printf("Invalid units entered.\n");
            continue;
        }

        if (strcmp(units[old_index].class,
                   units[new_index].class) != 0) {

            printf("Cannot convert %s (%s) to %s (%s)\n",
                   units[old_index].name, units[old_index].class,
                   units[new_index].name, units[new_index].class);
            continue;
        }

        double result = (quantity * units[old_index].standard) /
                         units[new_index].standard;

        printf("%.4f%s = %.4f %s\n",
               quantity, old_units, result, new_units);
    }

    return 0;
}
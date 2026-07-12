#include <stdio.h>
#define MONTHS 12
int main()
{
    FILE *f1, *f2;
    int hdd[MONTHS], solar[MONTHS];
    int month;
    float heating_req, efficiency, floor_space;
    float heat_loss, energy_resource, area;

    // Open files
    f1 = fopen("hdd.txt", "r");
    f2 = fopen("solar.txt", "r");

    // Read file data
    for(int i = 0; i < MONTHS; i++)
        fscanf(f1, "%d", &hdd[i]);

    for(int i = 0; i < MONTHS; i++)
        fscanf(f2, "%d", &solar[i]);

    // Inputs
    printf("Enter coldest month (1-12): ");
    scanf("%d", &month);

    printf("Enter heating requirement: ");
    scanf("%f", &heating_req);

    printf("Enter efficiency (%%): ");
    scanf("%f", &efficiency);

    printf("Enter floor space: ");
    scanf("%f", &floor_space);

    // Get values
    int heat_deg_days = hdd[month-1];
    int solar_insol = solar[month-1];

    // Calculations
    heat_loss = heating_req * heat_deg_days * floor_space;

    energy_resource = solar_insol * 30 * (efficiency / 100);

    area = heat_loss / energy_resource;

    // Output
    printf("\nHeat loss = %.0f BTU\n", heat_loss);
    printf("Required collecting area = %.0f sq.ft\n", area);

    // Close files
    fclose(f1);
    fclose(f2);

    return 0;
}
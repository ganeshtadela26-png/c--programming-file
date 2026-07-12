#include<iostream>
using namespace std;
class bank{
    private:
    int pass;
    public:
    int depo,n,bal;
    bank(int n,int depo){
        for(int i=0;i<n;i++){
            this->depo+=depo;
    }
        }
    void disp(){
        cout<<depo;
    }
};
int main(){
    bank b1(2,1000);
    b1.disp();
    return 0;
}
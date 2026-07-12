#include<iostream>
using namespace std;
class num{
    public:
    int x;
    num(){

    }
    num(num &obj){
        x=obj.x;
    }
};
int main(){
    num s1;
    s1.x=100;
    num s2(s1);
    cout<<s1.x<<endl;
    cout<<s2.x;
    return 0;
}
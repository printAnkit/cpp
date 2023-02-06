#include<iostream>
using namespace std;
int main(){
    int a;
    int b;
    int pow=1;
    cin>>a>>b;
    while(b!=0){
        pow=pow*a;
        b--;
    }
    cout<<pow;
return 0;
}
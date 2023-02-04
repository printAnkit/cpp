#include<iostream>
using namespace std;
int main(){
    int n,i,sum;
    int a=0, b=1,c=1;
    cin>>n;
    
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else if(n==2)
        return 1;
    
    
    
    if(n>2)
    {
        for(i=3;i<=n;i++){
            sum=a+b+c;
            if(n==i){
            cout<<sum;
            }
            a=b;
            b=c;
            c=sum;
    }
    }
return 0;
}
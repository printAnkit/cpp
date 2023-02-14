#include<iostream>
using namespace std;
int mySqrt(int x) {
        if(x<=1){
            return x;
        }
        long i=1;
        for(i=1;i<=(x>>1);i++){
            if(x==i*i){
            return (int) i;
            }
            else if(x<=i*i)
            return (int) (i-1);
        }
        return (int) i-1;
    }
int main(){
    int x;
    cin>>x;

    cout<<mySqrt(x);
}
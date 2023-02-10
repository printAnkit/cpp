#include<iostream>
using namespace std;
int main()
{
    int n;
    int product=1;
    int sum=0;
    int num;
    cin>>n;

    while(n!=0){
        num=n%10;
        product=product*num;
        sum=sum+num;
        n=n/10;
    }
    int answer=product-sum;
    cout<<answer;

return 0;
}
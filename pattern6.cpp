#include<iostream>
using namespace std;
int main()
{
    int n,i,j,k;
    cin>>n;

    for ( i = 1; i <= n; i++)
    {
        int space=n-i,s;
        for(s=space;s>0;s--)
        {
            cout<<" ";
        }
        for ( j = 1; j<=i; j++)
        {
            cout<<j;
        }
        if(i>1){
        for ( k = i-1; k >0; k--)
        {
            cout<<k;
        }
        }
        cout<<endl;
        
    }
    
return 0;
}
// Pattern for n=5;
//     1
//    121
//   12321
//  1234321
// 123454321

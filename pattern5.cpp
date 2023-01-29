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
        for ( j = i; j >0; j--)
        {
            cout<<"*";
        }
        if(i>1){
        for ( k = i-1; k >0; k--)
        {
            cout<<"*";
        }
        }
        cout<<endl;
        
    }
    
return 0;
}
// Pattern for n=5;
//     *
//    ***
//   *****
//  *******
// *********

#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cin>>n;

    for(i=1;i<=n;i++)
    {
        int s,space=n-i;
        for(s=space;s>0;s--)
        {
            cout<<" ";
        }
        for(j=i;j>0;j--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}

// Pattern for n=5
// *****
//  ****
//   ***
//    **
//     *

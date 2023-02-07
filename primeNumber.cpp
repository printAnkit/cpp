#include <iostream>
using namespace std;
int main()
{
    int n,itr=0;
    bool isPrime=1;

    cin >> n;
    for (int i=2;i<n/2;i++)
    {   
        if(n%i==0){
            isPrime=0;
            break;
        }
        itr++;
    }
    if (isPrime==0)
        {
            cout << "Not Prime"<<endl;
        }
    else
        {
            cout << "Prime"<<endl;
        }
    cout<<itr;
    return 0;
}
#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter size"<<endl;
    cin>>size;

    int arr[size],i,j,key,temp;

    cout<<"Enter "<<size<<" number"<<endl;
    for(i=1;i<=size;i++)
    cin>>arr[i];

    for(i=2;i<=size;i++)
    {
        key=arr[i];
        for(j=i-1;(j>=1)&&(arr[j]>key);j--)
        {
            arr[j+1]=arr[j];
            arr[j]=key;
        }
    }

    cout<<"Sorted array is:"<<endl;
    for(i=1;i<=size;i++)
    cout<<arr[i]<<",";
return 0;
}

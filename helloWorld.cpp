#include<iostream>
#include<string>
using namespace std;
class Print{
    public:
        string message;
};
int main(){
    cout<<"We are going to print 'Hello World'"<<endl;

    Print p1;
    p1.message="Hello World";

    cout<<p1.message;

return 0;
}
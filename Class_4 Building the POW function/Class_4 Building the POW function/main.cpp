#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    int mul=1;
    for(int i=1; i<=b; i++)
    {
        mul=mul*a;
    }
    cout<<"Result: "<<mul<<endl;
}


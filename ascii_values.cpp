#include <iostream>

using namespace std;

int main() {
    char a;
    cout<<"Enter the value = ",cin>>a;
    if(a>=97 && a<=122){
    cout<<"This is a Lowercase Letter";
    }
    else if(a>=65 && a<=90)
    {
    cout<<"This is a Uppercase Letter";
    }
    else if (a>=48 && a<=57)
    {
    cout<<"This is a Number";
    }
    else
    cout<<"Wrong Input";
    
    
    
}
#include <iostream>

using namespace std;

int main() {
    //Table of given no upto 10 using for loop
    int no;
    cout<<"Enter the table number = ",cin>>no;
    for (int i = 1; i <= 10; i++)
    {
        cout<< no  << "*"<< i <<" "<<"="<< no*i<<endl;
    }
     
}
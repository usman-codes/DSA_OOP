#include <iostream>

using namespace std;

int main() {
    // Your code here
    int no;
     cout<<"Enter the  number = ",cin>>no;
    for (int i = 1; i <= no; i++)
    {
        for (int j = 1; j <= no; j++)
        {
            cout<<no-j+1;
        }
        cout<<endl;
    }
    
}
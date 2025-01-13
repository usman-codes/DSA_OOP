#include <iostream>

using namespace std;

int main() {
        //Table of given no upto 10 using for loop
    
    // int no;
    // cout<<"Enter the table number = ",cin>>no;
    // for (int i = 1; i <= 10; i++)
    // {
    //     cout<< no  << "*"<< i <<" "<<"="<< no*i<<endl;
    // }

        //Table of given no upto 10 using While loop 
    //  int no;
    //  cout<<"Enter the table number = ",cin>>no;
    //  int i=1;
    //  while (i<=10)
    //  {
        // cout<< no  << "*"<< i <<" "<<"="<< no*i<<endl;
        // i++;

    //  }

         //Table of given no upto 10 using While loop 
    int no;
     cout<<"Enter the table number = ",cin>>no;
    int i=1;
    do
    {
        cout<< no  << "*"<< i <<" "<<"="<< no*i<<endl;
        i++;
    } while (i<=10);
    

     
}
#include <iostream>

using namespace std;

int main() {
    int no;
     cout<<"Enter the  number = ",cin>>no;
     int sum=0;
     for (int i = 1; i <= no; i++)
     {
        
        if (i%2==0)
        {
            sum=sum+i;
        }
        
     }
     cout<<"The Sum of all Even Numbers is = "<<sum;
     
}
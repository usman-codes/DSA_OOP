#include <iostream>
using namespace std;
int main() {
    int cp,sp,result ;
    cout<<"Enter the Cost Price = ",cin>>cp;
    cout<<"Enter the Selling Price = ",cin>>sp;
    if (sp>cp)
    {
        result=sp-cp;
        cout<<"You are in profit of :"<<result;
    }else if (cp>sp)
    {
        result=cp-sp;
        cout<<"You are in Loss of :"<<result;
    }else if (cp==sp)
    {
        cout<<"You are not in profit or loss";
     }
     else
    
        cout<<"Invalid Input";
    
    

}
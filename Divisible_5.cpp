#include<iostream>
using namespace std;
int main(){
    int a,b,res;
    cout<<"Enter 1st no : ";
    cin>>a;
    // cout<<"Enter 1nd no : ";
    // cin>>b;
    if(a>0 && a%5==0){
         cout<<"The given no is Divisibel by 5  ";
         
    }else if(a>0 && a%5!=0){
        cout<<"The given no is not Divisibel by 5  ";
    }else{
        cout<<"Invalid Number ";
    }
//    cout<<"Result of Sum is :"<<res;
}
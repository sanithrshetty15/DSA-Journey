// program to check whether a given number is a palindrome or not.

#include<iostream>
using namespace std;

int main(){
    int num,rem,rev=0,temp=0;
    
    cout<<"Enter the number: ";
    cin>>num;
    temp=num;

    while(num>0){
        rem=num%10;
        rev=rev*10+rem;
        num/=10;
    }
    if (temp==rev){
        cout<<"The number "<<temp<<" is Palindrome."<<endl;    
    }
    else{
        cout<<"The number "<<temp<<" is not a Palindrome."<<endl;
    }
    return 0;
}
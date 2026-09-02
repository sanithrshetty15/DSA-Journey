// program to check whether a given number is a Harshad number or not.

#include<iostream>
using namespace std;
 
int main(){
    long num,sum=0,rem,temp;

    cout<<"Enter the number: ";
    cin>>num;
    temp=num;

    while(num>0){
        rem=num%10;
        sum+=rem;
        num/=10;
    }
    if (temp%sum==0){
        cout<<temp<<" is a Harshad number."<<endl;
    }
    else{
        cout<<temp<<" is not a Harshad number."<<endl;
    }
    
    return 0;
}
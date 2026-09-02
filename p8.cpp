// program to check whether a given number is an Armstrong number or not

#include<iostream>
using namespace std;

int main(){
    long num,temp,sum=0,rem;

    cout<<"Enter the number: ";
    cin>>num;
    temp=num;

    while(num>0){
        rem=num%10;
        sum+=rem*rem*rem;
        num/=10;
    }

    if (temp==sum){
        cout<<temp<<" is an Armstrong number."<<endl;
    }
    else {
        cout<<temp<<" is not an Armstrong number."<<endl;
    }
    
    return 0;
}
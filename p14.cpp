// program to find the sum of the digits of a number

#include<iostream>
using namespace std;

int main(){
    long num,sum=0,temp;

    cout<<"Enter the number: ";
    cin>>num;

    while (num!=0){
        temp=num%10;
        sum+=temp;
        num/=10;
    }
    cout<<"Sum of digits = "<<sum<<endl;

    return 0;
    
}

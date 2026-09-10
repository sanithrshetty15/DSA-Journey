// program to find the difference between the first and last digit of a given number.

#include<iostream>
using namespace std;

int main(){
    long num,first=0,last=0,diff=0;

    cout<<"Enter the number: ";
    cin>>num;

    last=num%10;

    while(num>0 || num<0)
    {
        first=num%10;
        num/=10;
    }
    diff=first-last;
    cout<<"Difference = "<<diff<<endl;

    return 0;
}
// program to find the first and last digit of a given number.

#include<iostream>
using namespace std;

int main(){
    int num,first=0,last=0,rem;

    cout<<"Enter the number: ";
    cin>>num;

    last=num%10;
    
    while(num!=0){
        rem=num%10;
        first=rem;
        num/=10;
    }
    cout<<"First Digit of given number is: "<<first<<endl;
    cout<<"Last Digit of given number is: "<<last<<endl;

    return 0;

}
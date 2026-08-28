// program to calculate L.C.M. of two numbers

#include<iostream>
using namespace std;

int gcd(int n1,int n2){
    int temp;

    while(n2!=0){
        temp=n1%n2;
        n1=n2;
        n2=temp;
    }
    return(n1);
}

int main(){
    int num1,num2,g,lcm;

    cout<<"Enter the first number: ";
    cin>>num1;
    cout<<"Enter the second number: ";
    cin>>num2;

    g=gcd(num1,num2);
    lcm=(num1*num2)/g;

    cout<<"LCM of "<<num1<<" & "<<num2<<" is: "<<lcm<<endl;
    return 0;
}
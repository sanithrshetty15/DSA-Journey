// program to calculate G.C.D. or HCF of two numbers

#include<iostream>
#include<math.h>
using namespace std;

long gcd(long n1, long n2){
    long temp;

    while (n2!=0){
        temp=n1%n2;
        n1=n2;
        n2=temp;
    }
    return(n1);
}

int main(){
    long i,num1,num2,g;

    cout<<"Enter the first number: ";
    cin>>num1;

    cout<<"Enter the second number: ";
    cin>>num2;

    g=gcd(num1,num2);

    cout<<"GCD of "<<num1<<" & "<<num2<<" is: "<<g<<endl;

    return 0;
}
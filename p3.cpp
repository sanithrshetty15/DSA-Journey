//Program to compute x^n/n!

#include<iostream>
using namespace std;

int main() {
    long x,n,fact=1,power=1;
    double result;
    
    cout<<"Enter the base: ";
    cin>>x;

    cout<<"Enter the power: ";
    cin>>n;

    for(int i=1;i<=n;i++){
        power*=x;
    }

    for (int i=1;i<=n;i++){
        fact*=i;
    }
    result=(double)power/fact;
    cout<<"Result = "<<result<<endl;
    return 0;
}
//Program to compute 1/n!

#include<iostream>
using namespace std;

int main() {
    long n,fact=1;
    double result;
    cout<<"Enter the number: ";
    cin>>n;
    for (int i=1;i<=n;i++){
        fact*=i;
    }
    result=1.0/fact;
    cout<<"Result = "<<result<<endl;
    return 0;

}
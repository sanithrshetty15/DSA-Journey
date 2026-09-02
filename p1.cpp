//Program to find the sum of n natural numbers

#include<iostream>
using namespace std;

int main() {
    int n,sum;
    cout<<"Enter the number :";
    cin>>n;
    sum=n*(n+1)/2;
    cout<<"Sum = "<<sum<<endl;

    return 0;
}
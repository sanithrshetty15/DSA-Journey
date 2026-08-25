//program to count the number of digits in an integer

#include<iostream>
using namespace std;

int main(){
    long n,count=0;
    
    cout<<"Enter the number: ";
    cin>>n;

    while (n>0){
        n=n/10;
        count++;
    }
    cout<<"Digits = "<<count<<endl;
    return 0;

}
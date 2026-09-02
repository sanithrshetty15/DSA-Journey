// program to check whether a given number is a prime number or not

#include<iostream>
using namespace std;

int main(){
    long num;

    cout<<"Enter the number: ";
    cin>>num;

    for(int i=2;i<=num/2;++i){
        if(num%i==0){
            cout<<num<<" is not Prime number."<<endl;
            exit(0);
        }
    }
    cout<<num<<" is a Prime number."<<endl;

    return 0;
    
}
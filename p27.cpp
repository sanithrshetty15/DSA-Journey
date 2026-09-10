// program to count how many digits are present in a given number.

#include<iostream>
using namespace std;

int main(){
    long num,digits=0,temp;

    cout<<"Enter the number: ";
    cin>>num;
    temp=num;

    if(num==0){
        digits=1;
    }

    while(num!=0){
        num/=10;
        digits++;
    }

    cout<<temp<<" contains "<<digits<<" digits"<<endl;

    return 0;
}
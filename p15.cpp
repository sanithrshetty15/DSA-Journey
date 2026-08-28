// program to calculate the prime factors of a number

#include<iostream>
using namespace std;

int main(){
    long num,i=2;
    
    cout<<"Enter the number: ";
    cin>>num;

    cout<<"Prime factors: ";

    while(num>0){
        if (num%i==0){
            num=num/i;
            cout<<i<<" ";
        }
        else {
            i++;
        }
        if (num<i){
            cout<<endl;
            break;
            } 
    }
    return 0;
}
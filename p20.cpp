//program to check whether a given number is an Automorphic number or not.

#include<iostream>
#include<math.h>
using namespace std;

int main(){
    long num,temp=1,square,rem,digits=0,org;

    cout<<"Enter the number: ";
    cin>>num;
    org=num;

    square=num*num;
    while (num>0){
        num/=10;
        digits++;
    }
    temp=pow(10,digits);

    rem=square%temp;

    if(rem==org){
        cout<<org<<" is an Automorphic number."<<endl;
    }
    else{
        cout<<org<<" is not an Automorphic number."<<endl;
    }
}
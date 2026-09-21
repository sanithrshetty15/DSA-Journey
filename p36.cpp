// program to remove the first digit from a given number.

#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int num,result,temp,place=0;

    cout<<"Enter the number: ";
    cin>>num;
    temp=num;

    while(num!=0){
        place++;
        num/=10;
    }
    place=pow(10,(place-1));

    result=temp%place;

    cout<<"Result: "<<result<<endl;
}
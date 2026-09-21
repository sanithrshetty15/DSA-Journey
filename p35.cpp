//program to swap the first and last digit of a given number.

#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int num,first,middle,last,place=0,temp,newnum;

    cout<<"Enter the number: ";
    cin>>num;
    temp=num;

    last=num%10;

    while(num!=0){
        place++;
        num/=10;
    }
    place=pow(10,(place-1));
    first=temp/place;

    middle=(temp-last-(first*place))/10;
    newnum=last*place+middle*10+first;
    cout<<newnum<<endl;

    return 0;
}
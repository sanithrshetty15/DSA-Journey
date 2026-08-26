// program to check whether a given number is a strong number or not

#include<iostream>
using namespace std;

int fact(int num){
    int f=1;
    for (int i=1;i<=num;i++)
    {
        f=f*i;
    }
    return f;
}
int main(){
    int num,sum=0,digit,temp;
    
    cout<<"Enter the number: ";
    cin>>num;
    temp=num;

    while(num>0){
        digit=num%10;
        sum+=fact(digit);
        num/=10;
    }
    if (temp==sum){
        cout<<temp<<" is a Strong number."<<endl;
    }
    else {
        cout<<temp<<" is not a Strong number."<<endl;
    }
    return 0;
}
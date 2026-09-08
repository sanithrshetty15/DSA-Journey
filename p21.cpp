// program to find out whether the given number is magic number or not.

#include<iostream>
using namespace std;

int add(int n){
    int rem,result=0;

    while(n>0){
        rem=n%10;
        result+=rem;
        n/=10;
    }

    return(result);
}

int main(){
    int num,sum=0,temp;

    cout<<"Enter the number: ";
    cin>>num;
    temp=num;

    while(num>0){
    sum=add(num);
    num=sum;
    if(num>=10){
        continue;
    }
    else{
        break;
    }
    }

    if(num==1 || sum==1){
        cout<<temp<<" is a Magic Number."<<endl;
    }
    else{
        cout<<temp<<" is not a Magic number."<<endl;
    }
    return 0;
}


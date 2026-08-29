// program to check whether a given number is an Abundant number or not.

#include<iostream>
using namespace std;

int main(){
    int num,sum=0,temp;

    cout<<"enter the number: ";
    cin>>num;
    temp=num;

    for(int i=1;i<num;i++){
        if(num%i==0){
            sum+=i;
        }
    }
    if (temp<sum){
        cout<<temp<<" is an Abundant number."<<endl;
    }
    else {
        cout<<temp<<" is not an Abundant number."<<endl;
    }
    return 0;
}
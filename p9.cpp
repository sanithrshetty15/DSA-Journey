// program to check whether a given number is a perfect number or not

#include<iostream>
using namespace std;

int main(){
    int i,num,temp,sum=0;
    
    cout<<"Enter the number: ";
    cin>>num;
    temp=num;

    for (i=1;i<num;i++){
        if(num%i==0){
            sum+=i;
        }
    }
    if (temp==sum){
        cout<<temp<<" is a Perfect number."<<endl;
    }
    else {
        cout<<temp<<" is not a Perfect number."<<endl;
    }
    return 0;
}
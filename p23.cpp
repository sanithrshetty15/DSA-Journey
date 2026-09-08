// program to find the sum of all prime numbers between 1 and N.

#include<iostream>
using namespace std;

int Isprime(int n){
    bool prime=true;
    for (int i=2;i*i<=n;i++){
        if(n%i==0){
            prime=false;
            break;
        }
    }
    if(prime){
        return n;
    }
    else{
        return 0;
    }
    
}
int main(){
    long num,result=0,temp;
    

    cout<<"Enter a number:";
    cin>>num;
    temp=num;
    while(num>=2){
    result+=Isprime(num);
    num=num-1;
    }
    cout<<"Sum of Prime numbers from 2 to "<<temp<<" is: "<<result<<endl;
    return 0;
}
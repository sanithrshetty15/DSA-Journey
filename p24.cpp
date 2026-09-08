// program to find the sum of the Fibonacci series up to N terms.

#include<iostream>
using namespace std;

int fib(int n){
    int n1=0,n2=1,nth=0,sum=0,count=0;
    if (n==0){
        return 0;
    }
    while(n>count){
        sum+=n1;
        nth=n1+n2;
        n1=n2;
        n2=nth;
        count++;
    }
    return sum;
}
int main(){
    int num,result=0;

    cout<<"Enter the number: ";
    cin>>num;

    result=fib(num);

    cout<<"Sum of Fibonacci Series is: "<<result<<endl;

}
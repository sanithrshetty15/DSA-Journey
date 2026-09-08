// program to find the sum of the series

#include<iostream>
using namespace std;

int main(){
    long num,result=0;

    cout<<"Enter the number: ";
    cin>>num;

    for (int i=1;i<=num;i++){
        result+=i;
    }
    cout<<"Sum : "<<result<<endl;
    return 0;
}
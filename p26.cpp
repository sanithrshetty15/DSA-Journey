// program to find the sum of the series

#include<iostream>
using namespace std;

int main(){
    int num,result=0;

    cout<<"Enter the Number: ";
    cin>>num;

    for (int i=1;i<=num;i++){
        result+=(i*i);
    }
    cout<<"Result: "<<result<<endl;

    return 0;
}
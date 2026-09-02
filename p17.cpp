// program to check whether a given number is a perfect square number or not.

#include<iostream>
using namespace std;
 int main(){
    int num,product=0;

    cout<<"Enter the number: ";
    cin>>num;

    for (int i=1;i*i<=num;i++){
        product=i*i;
        if(num==product){
            cout<<num<<" is a Perfect square."<<endl;
            exit(0);
        }
    }
    cout<<num<<" is not a Perfect square."<<endl;

    return 0;
    
}
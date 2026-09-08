// program to check whether a given number is a Friendly Pair or not.

#include<iostream>
using namespace std;

int div(int num){
    int result=1;

    for(int i=2;i<num;i++){
        if(num%i==0){
            result+=num/i;
        }
    }
    return(result);
}
int main(){
    int num1,num2;
    float ratio1,ratio2,sum1=0.0,sum2=0.0;

    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter second number: ";
    cin>>num2;

    sum1=div(num1);
    sum2=div(num2);

    ratio1=sum1/num1;
    ratio2=sum2/num2;

    if (ratio1==ratio2){
        cout<<num1<<" & "<<num2<<" are a Friendly Pair."<<endl;
    }

    else{
        cout<<num1<<" & "<<num2<<" are not a Friendly Pair."<<endl;
    }



    return 0;
}
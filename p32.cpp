//pattern
/*
    Enter the number: 5
    A 
    B B 
    C C C 
    D D D D 
    E E E E E 
*/

#include<iostream>
using namespace std;

int main()
{
    int num;

    cout<<"Enter the number: ";
    cin>>num;
    char ch='A';
    for (int i=0;i<num;i++){
        for (int j=0;j<i+1;j++){
            cout<<ch<<" ";
        }
        cout<<endl;
        ch=ch+1;
    }
    return 0;
}
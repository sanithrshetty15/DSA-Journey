//Floyd's Triangle pattern
/*
Enter the number: 4
1  
2  3  
4  5  6  
7  8  9  10  

AND


A
B  C
D  E  F
G  H  I  J
*/

#include<iostream>
using namespace std;

int main(){
    int num;

    cout<<"Enter the number : ";
    cin>>num;
    int k=1;
    for(int i=0;i<num;i++){
        for (int j=0;j<i+1;j++){
            cout<<k<<"  ";
            k++;
        }
        cout<<endl;
    }

    char ch='A';

    cout<<endl;
    for(int i=0;i<num;i++){
        for(int j=0;j<i+1;j++){
            cout<<ch<<"  ";
            ch++;
        }
        cout<<endl;
    }

}

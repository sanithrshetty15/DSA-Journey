//Floyd's Triangle pattern
/*
Enter the number: 4
1  
2  3  
4  5  6  
7  8  9  10  
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
}

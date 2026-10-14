// Inverted triangle pattern
/*
1 1 1 1
  2 2 2
    3 3
      4
*/

#include<iostream>
using namespace std;

int main()
{
    int num,i,j;

    cout<<"Enter the number: ";
    cin>>num;

    for(i=0;i<num;i++){
        for(j=0;j<i;j++)
        {
           cout<<" "; 
        }
        for (j=0;j<(num-i);j++){
            cout<<i+1;
        }
        cout<<endl;
    }
}
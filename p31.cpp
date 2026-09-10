//pattern
/*
Enter the number: 5
1
2       2
3       3       3
4       4       4       4
5       5       5       5       5
*/

#include<iostream>
using namespace std;

int main()
{
    int num;
    
    cout<<"Enter the number: ";
    cin>>num;

    for(int i=0;i<num;i++){
        for(int j=0;j<i+1;j++)
        {
            cout<<(i+1)<<"\t";
        }
        cout<<endl;
    }
}
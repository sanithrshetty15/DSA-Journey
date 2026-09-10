//Pattern
/*Enter the number:3
1       2       3
4       5       6
7       8       9*/

#include<iostream>
using namespace std;

int main(){
    int num=1,n;

    cout<<"Enter the number:";
    cin>>n;

    for(int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            cout<<num<<"\t";
            num++;
        }
        cout<<endl;
    }
    return 0;
}
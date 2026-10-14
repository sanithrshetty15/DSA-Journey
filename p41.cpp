//Find the largest element in an array

#include<iostream>
using namespace std;

class LargestElement
{
    public:
        int FindLargest(int arr[],int n1){
            int largest=arr[0];
            for(int i=1;i<n1;i++){
                if(largest<arr[i])
                    largest=arr[i];
            }
            return largest;
        }
};

int main()
{
    int num[10],n,result;
    cout<<"Enter the number of elements: ";
    cin>>n;
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    LargestElement a1;
    result=a1.FindLargest(num,n);

    cout<<"Largest number in the array is: "<<result<<endl;

    return 0;
}


#include <iostream>
using namespace std;

int pSum(int arr[],int size,int target)
{
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[i]+arr[j]==target)
            cout<< " "<< arr[i]<< " " << arr[j];

        }
    }
}

int main()
{
    int arr[]={1,2,-2,3,4,5};
    int size=6;
    int target=0;
    pSum(arr,6,0);
    return 0;
}

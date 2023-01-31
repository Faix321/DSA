#include <iostream>
using namespace std;

int getMax(int arr[],int n)
{
    int max=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    return max;
}

int getMin(int arr[],int n)
{
    int min=99999;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    return min;
}

int main()
{
    int size;
    cin >> size;

    int arr[100];
    for(int i=0 ;i <size; i++){
    cin >> arr[i];
    }

    cout<<"The Maximum Elemnt in the Array is" << getMax(arr,size) << endl ;
    cout<<"The Minimum Elemnt in the Array is" << getMin(arr,size) << endl ;
}
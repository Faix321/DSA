#include <iostream>
using namespace std;

int duplicate(int arr[],int size)
{
    int ans=0;
    for(int i =0;i< size; i++)
    {
        ans=ans^arr[i];
    }

    for(int i =0;i< size;i++)
    {
        ans=ans^i ;
    }
}
int main()
{
 int arr[6]={1,2,3,4,5,6};
 int size=6;
 duplicate(arr,6);

 return 0;
}
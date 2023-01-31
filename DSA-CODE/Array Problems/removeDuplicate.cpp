#include <iostream>
using namespace std;

void rduplicate(int arr[],int size)
{
    int res=1;
    for(int i=1;i<size;i++)
    {
          if(arr[i]!=arr[res-1])
          {
            arr[res]=arr[i];
            res++;
          }
    }
}

int main()
{
    int arr[]={1,2,3,4,5,1,2};
    int size=7;
    rduplicate(arr,7);

    for(int i=0;i<size;i++)
    cout<< arr[i] << " ";

    return 0;
}

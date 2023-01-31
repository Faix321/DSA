#include <iostream>
using namespace std;
int  main()
{
  int arr[10];
  int size=sizeof(arr)/sizeof(arr[0]);
  for(int i=0;i<size;i++)
  {
    arr[i]=8;
    cout<< arr[i];
  }
}
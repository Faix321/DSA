#include <iostream>
using namespace std;

int linearSearch(int arr[],int size,int x)
{
    for(int i=0;i<size;i++)
    {
    if(arr[i]==x)
    {
    return i;
    } //gives the index
    }
    return -1;
    //base case

}

int main()
{
    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(int);
    int x=50; // element to be Search
    int result=linearSearch(arr,size,x);
    if(result==-1)
    cout<<"Element not Found";
    else
    cout<<endl<<"Element found at index"<< " " << result;
     return 0;
}
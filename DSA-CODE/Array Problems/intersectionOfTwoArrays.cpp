#include <iostream>
using namespace std;

void Intersection(int arr1[],int arr2[],int m,int n)
{
    for(int i=0;i<m;i++){
        int element=arr1[i];
        for(int j=0;j<n;j++){
            if(element==arr2[j])
            {
                cout<<  arr2[j] << " ";
                arr2[j]=-1122;
                break;
            }
        }

    }

}

int main()
{
    int arr1[]={1,2,3,4,5,6};
    int arr2[]={2,3,5,6};
    int m=6;int n=4;
    Intersection(arr1,arr2,6,4);
}
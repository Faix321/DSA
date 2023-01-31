#include<iostream>
using namespace std;

int main(){

cout<< "Enter the range ";
int n;
cin >> n;
int a=0;
cout<<a;
int b=1;
cout<<b;
for(int i=0;i<=n;i++)
{
    int sum=a+b;
    cout<< " " << sum << " ";
    a=b;
    b=sum;
    
}
}
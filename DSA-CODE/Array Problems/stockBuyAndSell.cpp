#include<iostream>
using namespace std;

int stockBandS(int price[],int start,int end)
{
    if(end<=start)
    return 0;
    int profit=0;
    for(int i=start;i<end;i++)
    {
        for(int j=start;j<=end;j++)
        {
            if(price[j]>price[i])
            {
                int curr_profit=price[j]-price[i]+stockBandS(price,start,i-1)+stockBandS(price,j+1,end);
                profit=max(profit,curr_profit);
            }
        }     
    }
    return profit;
}



int main()
{
    int price[]={1,5,3,8,12};
    int size=5;
    cout<< stockBandS(price,0,5);
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
   int c0=0,c1=0,c2=0;
   for(int i=0;i<n-1;i++)
   {
       if(arr[i]==0)
       c0++;
       else if(arr[i]==1)
       c1++;
       else if(arr[i]==2)
       c2++;
   }
   for(int i=0;i<n;i++)
   {
       if(c0>-1)
       {
           arr[i]=0;
           c0=c0-1;
       }
       else if(c1!=0)
       {
           arr[i]=1;
           c1=c1-1;
       }
       else if(c2!=0)
       {
           arr[i]=2;
           c2=c2-1;
       }
   }
   for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

}
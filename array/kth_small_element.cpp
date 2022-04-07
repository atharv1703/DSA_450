#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>> n;
    int arr[n];
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int k;
    cin>>k;
    int min=arr[0];
    int temp;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i;j<n-1;j++)
        {
            if(arr[j+1]<min)
            {
                arr[j]=temp;
                min=arr[j+1];
                temp=arr[j+1];
            }
        }
    }
    cout<<arr[k];
}
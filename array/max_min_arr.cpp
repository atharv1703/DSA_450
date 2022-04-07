#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;
int main(){
    int n; 
    cin>>n;
    int arr[n];
    int max,min;
    for(int i =0;i<n;i++)
    {
        cin>>arr[i];
    }
     max=arr[0];
     min=arr[0];
    for(int i=0;i<n-1;i++)
    {
       
        if(arr[i+1]>max)
        {
            max=arr[i+1];
        }
        else if(arr[i+1]<min)
        {
            min=arr[i+1];
        }
    }
    cout<<max<<endl;
    cout<<min;
}
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int n, arr[50],i,j,temp;
    cout <<"Enter the size";
    cin>>n;
    for(i=0;i<n;i++)
        cin>>arr[i];
    for (i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]> arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    cout<<"array sorted succesfull ! \n";
    cout<<" the new array is : \n";
    for(i=0;i<n;i++)
        cout<< arr[i]<<" ";
        return 0;

}

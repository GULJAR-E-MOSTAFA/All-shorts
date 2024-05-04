#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,temp,arr[30];
    cout<<"enter the size";
    cin>>n;
    cout<<"Enter the element";
    for(i=0;i<n; i++)
    {
    cin>>arr[i];
    }
    for(i=1;i<n-1;i++)
        {
            temp=arr[i];
            j=i-1;
            while ((temp<arr[j])&&(j>=0))
            {
                arr[j+1]=arr[j];
                j=j-1;
            }

             arr[j+1]=temp;
        }
        cout<< "sort list is \n";
        for(i=0;i<n;i++)
        {
            cout <<arr[i]<<" ";

        }
         return 0;
}

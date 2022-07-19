//2nd largest element in an array
#include<iostream>
using namespace std;
int small(int arr[],int n)
{
    int i,max,max2;
    max=arr[0];
    for(i=0;i<n;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    max2=arr[0];
    for(i=0;i<n;i++)
    {
        if((arr[i]!=max) && (max2<arr[i]))
        {
            max2=arr[i];
        }
    }
    return max2;
}
int main()
{
    int n,i;
    int arr[n];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int result=small(arr,n);
    cout<<result;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0,i,j;
    cout<<"Enter the Array size....";
    cin>>n;
    int arr[n]={0};
    cout<<"Enter the Array elements...."<<endl;
    for(i=0;i<n;i++)
    	cin>>arr[i];
    sort(arr,arr+n);
    cout<<"Enter the Sum of Pairs....";
    cin>>sum;
    for(i=0;i<n;i++){
      for(j=i+1;j<n;j++){
      	if(arr[i]+arr[j]==sum)
      	{
      		cout<<"PAIR FOUND->"<<arr[i]<<"+"<<arr[j]<<"="<<sum<<endl;
      	}
      }   
    }
	return 0;
}
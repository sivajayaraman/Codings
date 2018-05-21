#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<int,int> no_count;
    int n,x,i,j;
    cout<<"Enter the Array size....";
    cin>>n;
    cout<<"Enter the Array elements...."<<endl;
    for(i=0;i<n;i++)
    {
    	cin>>x;
    	no_count[x]++;
    }
    int max=0,element;
    for(auto k:no_count){
        if(k.second>max){
            max=k.second;
            element=k.first;
        }
    }
    if(max>n/2)
     cout<<element<<endl;
     else cout<<"NONE"<<endl;
	return 0;
}
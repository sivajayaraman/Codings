#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<int,int> odd_count;
    int n,x,i,j;
    cout<<"Enter the Array size....";
    cin>>n;
    cout<<"Enter the Array elements...."<<endl;
    for(i=0;i<n;i++)
    {
    	cin>>x;
    	odd_count[x]++;
    }
    for(auto k:odd_count){
        if(k.second%2!=0){
            n=0;
          cout<<k.first<<endl;
        }
    }
    if(n!=0) cout<<"No such elements"<<endl;
	return 0;
}
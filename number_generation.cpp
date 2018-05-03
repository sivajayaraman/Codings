#include <bits/stdc++.h>
#define MAX 100000
using namespace std;
int visited[MAX]={0};
int main() 
{
   int n,t,k;
   long long int i,j;
   for(i=2;i<=MAX;i++)
    {
        if(visited[i]!=1)
        {
         for(j=i*2;j<=MAX;j=j+i)
         {
           visited[j]=1;   
         }
        }
    }
    cin>>t;
   while(t--)
   {
    cin>>n>>k;
    n=n*10;
    int count=0;
    if(k==0)
    {
        cout<<"no"<<endl;
        continue;
    }
    if(visited[n+1]!=1)
    {
        k--;
        count++;
    }
    if(visited[n+3]!=1)
    {
        k--;
        count++;
    }
    if(visited[n+5]!=1)
    {
        k--;
        count++;
    }
    if(visited[n+7]!=1)
    {
        k--;
        count++;
    }
    if(visited[n+9]!=1)
    {
        k--;
        count++;
    }
    if(k>=0 && count!=0)
        cout<<"yes"<<endl;
    else
        cout<<"no"<<endl;
   }
	return 0;
}
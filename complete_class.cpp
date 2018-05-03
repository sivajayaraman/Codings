#include <bits/stdc++.h>
using namespace std;
int main() 
{
  int t,e,c,n,max,i;
  cin>>t;
  while(t--)
  {
      max=0;
      char s[100];
      cin>>e>>c;
      cin>>n;
      while(n--)
      {
       cin>>s;
       for(i=0;i<strlen(s);i++)
        {
          if(s[i]=='b')
            max=max+1;
           else if(s[i]=='g')
            max=max+2;
           else if(s[i]=='d')
            max=max+3;
           else if(s[i]=='s')
            max=max+4;
           else if(s[i]=='m')
            max=max+5;
        }
      }
   if(max>e)
   {
    int need=max-e;
    if(need%10>0)
    {
      need=((need/10)+1)*10;
    }
     if(c-need>=0)
     {
         cout<<need-(max-e)<<"\t"<<c-need<<endl;
     }
     else
     {
         cout<<"Incomplete Class"<<endl;
     }
   }
   else 
   {
       cout<<e-max<<"\t"<<c<<endl;
   }
  }
  return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
     float x,y;
     cin>>x>>y;
     int t1=x*100,t2=y*100;
     int hour=t1/100+t2/100;
     int min=t1%100+t2%100;
     if(min>=60)
     {
        hour=hour+1;
        min=min-60;
     }
     if(hour-12>0)
     hour=hour-12;
    // cout<<hour<<":"<<min<<endl;
     if(hour>4)
     {
         cout<<"Not Enough Sleep"<<endl;
     }
     else
        {
          if(hour<=4 && min<=30)
          {
           cout<<"Enough Sleep"<<endl;
          }
          else
          {
           cout<<"Not Enough Sleep"<<endl;
          }
        }
    }
    return 0;
}

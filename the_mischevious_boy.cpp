#include <bits/stdc++.h>
using namespace std;
int main() 
{
     int i=0,len,j=0,k=0,n;
     char s[101],temp[2];
     cin.getline(s,sizeof(s));
     cin>>n;
     len=strlen(s);
      while(i!=len+1)
      {
          if(s[i]==' ')
           n--;
        if(s[i]==' ' || n-1==0 )
        {
            j=i+1;
         while(s[j]!=' ' && s[j]!='\0')
         {
             j++;
         }
         k=i;
         while(k<j)
         {
            temp[0]=s[j-1];
            s[j-1]=s[k];
            s[k]=temp[0];
            k++;
            j--;
         }
         break;
        }
        i++;
      }
     cout<<s<<endl;
    return 0;
}
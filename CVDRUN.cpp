#include <iostream>
using namespace std;

int main() {
	int t=0;
	cin>>t;
	while(t--)
	{
	    long n=0,x=0,y=0,k=0,d=0,a=0,flag=0,l=0,m=0,i=0;
	    cin>>n>>k>>x>>y;
	    
	    if(y>n)
	    {cout<<"NO"<<endl;}
	    
	  for(i=0;i<n;i++)
	  {
	      if((x+k*i)%n==y)
	      {flag=0;
	          cout<<"YES"<<endl;
	         break;
	      }
	      else
	      {flag++;}
	  }
	    if(flag>0)
	    {cout<<"NO"<<endl;}
	    
	    
	}
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define rep(i, n)  for(ll i = 0; i < (n); ++i)
#define rep1(i,n)  for(ll i = 1;i <= (n); ++i)
#define pb push_back
#define M 1000000007
unordered_map<ll,ll>mp;

int main()
{
    fastIO
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;string str;
        int f[32];
        for(int i=0;i<32;i++)
            f[i]=0;
        cin>>n;
        for(ll i=1;i<=n;i++)
        {
            cin>>str;
            int mask=0;
            for(char ch: str)
            {
                if(ch=='a')
                mask=mask | (1<<0);
                if(ch=='e')
                mask=mask |(1<<1);
                if(ch=='i')
                mask=mask |(1<<2);
                if(ch=='o')
                mask=mask |(1<<3);
                if(ch=='u')
                mask=mask |(1<<4);

            }
            f[mask]++;
        }

        ll res=0;
        for(int i=1;i<32;i++)
        {
            for(int j=i+1;j<32;j++)
            {
            if((i|j)==31)
            res=res+f[i]*f[j];
            }
        }
        res=res+(f[31]*(f[31]-1))/2;
        cout<<res<<"\n";
    }
	return 0;
}

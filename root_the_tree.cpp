#include<bits/stdc++.h>
#include<stdio.h>
#include<stdlib.h>
#include <ext/pb_ds/assoc_container.hpp> // Common file 
#include <ext/pb_ds/tree_policy.hpp> 
#include <functional>
using namespace __gnu_pbds;
using namespace std;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> new_data_set; 
#define endl "\n"
#define FILEIO freopen("input.txt", "r", stdin);freopen("output1.txt", "w", stdout);
#define LL long long 
#define mod 1000000007LL
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define pb push_back
#define pp pop_back
//#define p push
#define I insert
#define bg begin()
#define ed end()
#define sz size()
#define all(v) v.begin(),v.end()
#define ALL(v) v.rbegin(),v.rend()
typedef vector<LL> vi;
typedef pair<LL,LL> pii;
typedef vector<pii> vii;
typedef map<LL ,LL > mii;
typedef priority_queue<int> pq;
typedef queue<int>que;
typedef stack<int>stk;
typedef pair<int, pair<int , int>> ppi;
#define Inf 100000005LL
#define f first
#define s second
 

void solve(){
    
	int n;
	cin>>n;
	vi vect[10001];
	for (int i=0;i<n-1;i++){
		LL a , b;
		cin>>a>>b;
		vect[a].pb(b);
	}
	LL ans=0;
	vi indegree(n+1);
	for(int i=1;i<=n;i++){
		for(auto x:vect[i])
		    indegree[x]++;
	}
	for(int i=1;i<=n;i++)
	   ans+=max(indegree[i]-1 , (LL)0);
	cout<<ans<<endl;


}

int main()
{
    fast
	int t;
	cin>>t;
	while(t--)
	   solve();
}

// https://www.hackerearth.com/code_mania_20/algorithm/listing-names-3/


#include<bits/stdc++.h> 
using namespace std;
 
int dp[100005][40];
int A[100005];
 
 
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int T,i,j,N,Q;
	cin>>T;
	
	map<string,int> M;
	M.clear();
	
	vector<string> V;
	V.clear();
	
	
	while(T--)
	{
		string s;
		cin>>s;
		M[s]++;
		if(M[s]==1)
			V.push_back(s);
	}
	
	sort(V.begin(),V.end());
	
	for(i=0;i<V.size();i++)
		cout<<V[i]<<" "<<M[V[i]]<<"\n";
	
	
	return 0;
}

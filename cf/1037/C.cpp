#include<bits/stdc++.h>

using namespace std;

#define make_graph(m,G) for (int i = 0; i<m; i++) { int a,b; cin>>a>>b;G[a-1].push_back(b-1); G[b-1].push_back(a-1);}
#define make_dir_graph(m,G) for (int i = 0; i<m; i++) { int a,b; cin>>a>>b;G[a-1].push_back(b-1);}
#define make_weighted_graph(m,G,w) for (int i = 0; i<m; i++) { int a,b; cin>>a>>b; cin>>w[a-1][b-1];w[b-1][a-1]=w[a-1][b-1];G[a-1].push_back(b-1); G[b-1].push_back(a-1);}
#define make_weighted_dir_graph(m,G,w) for (int i = 0; i<m; i++) { int a,b; cin>>a>>b; cin>>w[a-1][b-1]; G[a-1].push_back(b-1);}

int main()
{
	int Testcases=1;
	//cin>>Testcases;
	while (Testcases--)
	{
		// code
		int n; cin>>n;

		string a,b;
		cin>>a>>b;

		int a1=0, b1=0;
		for (int i = 0; i<n; i++)
		{
			if (a[i] == '1') a1++;
			if (b[i] == '1') b1++;
		}
		int ans=0;
		for (int i=0; i<n; i++)
		{
			if (a[i] != b[i])
			{
				if (i+1<n and a[i+1]!=b[i+1] and a[i]!=a[i+1])
				{
					ans++;
					i++;
				}
				else ans++;
			}
		}
		cout<<ans<<endl;
	}
}
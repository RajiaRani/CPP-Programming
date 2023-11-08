#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int ThreeLCS(vector<int>s1,vector<int>s2,vector<int>s3, int m, int n, int p)
{
	vector<vector<vector<int>>>longest(m+1,vector<vector<int>>(n+1,vector<int>(p+1)));
	int i,j,k;
	for(i=0;i<=m;i++)
	{
		for(j=0;j<=n;j++)
		{
			for(k=0;k<=p;k++)
			{
				if(i==0||j==0||k==0)
				{
					longest[i][j][k]=0;
					continue;
				}
				else if( s1[i-1]==s2[j-1] && s1[i-1]==s3[k-1])
				{
					longest[i][j][k]=longest[i-1][j-1][k-1]+1;
					continue;
				}
				else
				longest[i][j][k]=max(max(longest[i-1][j][k],longest[i][j-1][k]),longest[i][j][k-1]);
			}
		}
	}
	return longest[m][n][p];
}
int main()
{
	int m,n,p;
	cin >> m;
	vector<int> One(m);
	for (int i = 0; i < m; i++)
		cin >> One[i];

	cin >> n;
	vector<int> Second(n);
	for (int i = 0; i < n; i++) 
		cin >> Second[i];

	cin >> p;
	vector<int> Third(p);
	for (int i = 0; i < p; i++)
		cin >> Third[i];

	cout << ThreeLCS(One, Second, Third, m, n,p) << endl;
	return 0;
}
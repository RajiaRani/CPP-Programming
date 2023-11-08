#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int LCS(string s1, string s2,int m, int n)
{
	vector<vector<int>>longest(m+1,vector<int>(n+1));
	int i,j;
	for(i=0;i<=m;i++)
	{
		for(j=0;j<=n;j++)
		{
			if(i==0 || j==0)
			{
				longest[i][j]=0;
			}
			else if(s1[i-1]==s2[j-1])
			{
				longest[i][j]=longest[i-1][j-1]+1;
			}
			else
			longest[i][j]=max(longest[i-1][j],longest[i][j-1]);
		}
	}
	return longest[m][n];
}
int main()
{
	int m, n;
	string s1= "", s2 = "";
	cin >> m;
	int Tempo;
	for (size_t i = 0; i < m; i++) {
		cin >> Tempo;
		s1 += Tempo;
	}
	cin >> n;
	for (size_t i = 0; i < n; i++) {
		cin >> Tempo;
		s2 += Tempo;
	}
	cout << LCS(s1,s2, m, n) << endl;
	return 0;
}
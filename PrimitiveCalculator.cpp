#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int>minOperations(int n)
{
	vector<int>dp(n+1,INT_MAX);
	dp[1]=0;
	for(int i=1;i<=n;++i)
	{
		if(i+1<=n)
		{
			dp[i+1]=min(dp[i+1],dp[i]+1);
		}
		
		if(2*i<=n)
		{
			dp[i*2]=min(dp[i*2],dp[i]+1);
		}
		if(3*i<=n)
		{
			dp[3*i]=min(dp[3*i],dp[i]+1);
		}
	}
	
	
	vector<int>seq;
	int curr_num=n;
	while(curr_num>1)
	{
		seq.push_back(curr_num);
		
		if(curr_num%3==0 && dp[curr_num]-1==dp[curr_num/3])
		{
			curr_num/=3;
		}
		else if(curr_num %2==0 && dp[curr_num]-1==dp[curr_num/2])
		{
			curr_num/=2;
		}
		
		else
		curr_num-=1;
	}
	
	seq.push_back(1);
	reverse (seq.begin(),seq.end());
	return seq;
}
int main()
{
int n;
    cin >> n;

    vector<int> seq = minOperations(n);
    cout << seq.size() - 1 << endl;  // Output the minimum number of operations.
    
    for (int num : seq) {
        cout << num << " ";  // Output the sequence of intermediate numbers.
    }
return 0;
}
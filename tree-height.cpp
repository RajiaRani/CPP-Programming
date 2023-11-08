#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
class TreeHeight{
	int n;
	vector<int>parent;
	vector<int>depth;
	public:
		void read()
		{
			cin>>n;
			parent.resize(n);
			depth.resize(n);
			for(int i=0;i<n;i++)
			{
				cin>>parent[i];
			}
		}
	   int compute_height()
	   {
        int maxHeight = 0;
        // empty tree
        if(n == 0)
            return n;
        // fill depth of all nodes
        for(int i = 0; i < n; i++){
            fillDepth(i);
        }
        for(int i = 0; i < n; i++){
            int height = depth[i];
            maxHeight = max(maxHeight, height);
        }
        return maxHeight;
    }
      void fillDepth(int nodeNumber){
        // root node, depth = 1
        if(parent[nodeNumber] == -1){
            depth[nodeNumber] = 1;
            return;
        }
        // the depth of this node has been calculated
        if(depth[nodeNumber])
            return;
        // if depth of parent is not calculated, put the parent node to recursive to get the depth
        if(!depth[parent[nodeNumber]])
            fillDepth(parent[nodeNumber]);  // 跳入recursive 拆到最後找到parent depth, 會跳到下面那行

        // depth of this node = depth of parent plus 1
        depth[nodeNumber] = depth[parent[nodeNumber]] + 1;
    }
};
int main(){
    ios_base::sync_with_stdio(0);
    TreeHeight tree;
    tree.read();
    cout << tree.compute_height() << endl;
}
	
//Div2 500 pts.

#include <iostream>
#include <vector>
#include <string>
#include <stdio.h>
#include <string.h>
#include <algorithm>

using namespace std;

vector<int> G[55];
int N;
bool used[55];
bool child[55];
vector<int> P;


void dfs(int index) {
	for(int i=0 ; i<G[index].size() ; i++) {
		if(!used[G[index][i]]) {
			used[G[index][i]] = true;
			N--;
			dfs(G[index][i]);
		}
	}
}


class CellRemoval
{
public:
	int cellsLeft(vector<int> parent, int deletedCell) {
		if( parent[deletedCell] == -1)
			return 0;

		int n = parent.size();
		N = n;
		P = parent;
		memset(used, false, sizeof(used));
		memset(child, false, sizeof(used));

		for(int i=0 ; i<55 ; i++) {
			G[i].clear();
		}

		for(int i=0 ; i<n ; i++) {
			if(parent[i] == -1) {
				continue;
			} else {
				G[parent[i]].push_back(i);
			}
		}

		for(int i=0 ; i<n ; i++) {
			if(G[i].size() == 0) {
				child[i] = true;
			}
		}

		dfs(deletedCell);
		int ans = 0;
		for(int i=0 ; i<n ; i++) {
			if(child[i] && !used[i])
				ans++;
		}

	}
	
};




















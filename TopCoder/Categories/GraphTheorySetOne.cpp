//Div2 500 pts.

#include <iostream>
#include <vector>
#include <string>
#include <stdio.h>
#include <string.h>
#include <algorithm>

using namespace std;

// vector<int> G[55];
// int N;
// bool used[55];
// bool child[55];
// vector<int> P;


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

//Div2 500 -- 62.44% success rate.






class MazeWanderingEasy
{
public:

	struct node {
		int x,y,n;
	};

	vector<string> tmp;
	int n, m;
	bool used[55][55];

	const int dir[5][2] = {{0,1} , {1,0} , {0,-1} , {-1,0}};

	bool check(node now) {
		int x = now.x , y=now.y;
		int cnt = 0;
		if(x>0 && !used[x-1][y] && tmp[x-1][y] != 'X') {
			cnt++;
		}
		//...check for all 4 cases

		if(cnt > 1)
			return 1;
		else
			return 0;
	}

	int decisions(vector<string> maze) {
		tmp = maze;
		memset(used , 0, sizeof(used));
		n = maze.size();
		m = maze[0].size();
		int mx,my,cx,cy;

		for(int i=0 ; i<n ; i++) {
			for(int j=0 ; j<m ; j++) {
				if(maze[i][j]=='M') {
					mx = i;
					my = j;
				}
				if(maze[i][j]=='*') {
					cx = i;
					cy = j;
				}

			}
		}

		queue<node> que;
		node mid;
		mid.x = mx;
		mid.y= my;
		mid.n  =0;
		que.push(mid);

		while(!que.empty()) {
			mid = que.front();
			que.pop();

			used[mid.x][mid.y] = 1;
			if(check(mid))
				mid.n++;


			for(int i=0 i<=3 ; i++) {
				int xx = mid.x + dir[i][0];
				int yy = mid.y + dir[i][1];

				if(xx<0 || yy<0 || xx>n || yy>m)
					continue;
				if(maze[xx][yy] == 'X')
					continue;
				if(used[xx][yy] == 1)
					continue;

				node qqq = mid;
				qqq.x = xx;
				qqq.y = yy;
				que.push(qqq);
			}

		}

		return mid.n;

	}
	
};

































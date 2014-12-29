#include <stdio.h>
#include <iostream>
#include <math.h>
#include <assert.h>
#include <vector>
#include <algorithm>
#include <utility>
#include <map>
#include <stack>
#include <string.h>
#include <cctype>
#include <queue>

using namespace std;

//489B BerSU Ball
// int main(int argc, char const *argv[])
// {
// 	//const int MAXN = 100 + 10;
//     int m, n;

//     int res = 0;

//     cin >> n;
//     int boys[n];
//     for(int i=0 ; i<n ; i++) {
//     	cin >> boys[i];
//     }

//     cin >> m;
//     int girls[m];
//     for(int i=0 ; i<m ; i++) {
//     	cin >> girls[i];
//     }

//     sort(boys , boys+n);
//     sort(girls , girls+m);

//     for(int i=0 ; i<n ; i++) {
//     	for(int j=0 ; j<m ; j++) {
//     		if(abs(boys[i] - girls[j]) <= 1) {
//     			res++;
//     			girls[j] = 1000;
//     			break;
//     		}
//     	}
//     }

//     cout << res << endl;
// 	return 0;
// }


//377A Maze


struct node
{
    node(int _x,int _y){x=_x;y=_y;}
    int x;
    int y;
};

int main(int argc, char const *argv[])
{
	const int N=550;
	char maps[N][N];
	bool changed[N][N];
	bool visited[N][N];
	int dir[4][2]={{1,0},{-1,0},{0,-1},{0,1}};
	int n,m,k;

	while(cin >> n >> m >> k) {
		memset(changed,0,sizeof(changed));
        memset(visited,0,sizeof(visited));

        int curx= 0;
        int cury = 0;
        int cnt = 0;

        for(int i=0 ; i<n ; i++) {
        	for(int j=0 ; j<m ; j++) {
        		cin >> maps[i][j];
        		if(maps[i][j] == '.') {
        			curx = i;
        			cury = j;
        			cnt++;
        		}
        	}
        }

        int target = cnt - k;
        queue<node> q;
        q.push(node(curx,cury));
        while(target > 0) {
        	node d = q.front();
        	q.pop();
        	changed[d.x][d.y] = true;
        	visited[d.x][d.y] = true;
        	target -- ;
        	if(target <= 0) {
        		break;
        	}
        	for(int i=0 ; i<4 ; i++) {
        		int nextx = d.x+dir[i][0];
                int nexty = d.y+dir[i][1];
                if(nextx>=0&&nextx<n&&nexty>=0&&nexty<m&&!visited[nextx][nexty]&&maps[nextx][nexty]=='.')
                {
                    q.push(node(nextx,nexty));
                    visited[nextx][nexty]=true;
                }
        	}
        }

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(maps[i][j]!='.')
                    cout<<maps[i][j];
                else if(changed[i][j]==false)
                    cout<<'X';
                else
                    cout<<maps[i][j];
            }
            cout<<endl;
        }
	}
	
	return 0;
}
















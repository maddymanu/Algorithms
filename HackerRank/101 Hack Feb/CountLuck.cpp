#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <vector>
#include <string>
#include <algorithm>
#include <utility>
#include <stack>
#include <queue>
#include <cmath>
#include <map>
#include <sstream>
#include <functional>
#include <numeric>


/*
	INCOMPLETE.
*/


using namespace std;

int n, m, ret, k;
vector<string> v;
pair<int, int> target, source;

vector< pair<int, int> > walked; //dunno for what
vector< pair<int, int> > dads; //dunno for what

void dfs(pair<int, int>dad, pair<int, int>child)  {

}

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while(t--) {
		cin >> n >> m;
		walked.clear();
		v.clear();
		for(int i=0 ; i< n ; i++) {
			string tt;
			cin >> tt;
			v.push_back(tt);
			for (int j = 0; i < m; ++i)
			{
				if(v[i][j] == '*') {
					target = make_pair(i, j);
					v[i][j] = '.';
				}
				if (v[i][j] == 'M')
				{
					source = make_pair(i,j);
					v[i][j] = '.';
				}
			}
		}
		cin >> k;
		ret = 0;
		dfs(make_pair(-1,-1) , source);
		printf("%s\n", ret==k?"Impressed":"Oops!");
	}
	return 0;
}








































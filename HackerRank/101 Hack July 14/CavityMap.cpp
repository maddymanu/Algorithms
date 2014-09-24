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


using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	vector<string> a(n);
	for(int i=0 ; i<n ; i++) {
		cin >> a[i];
	}
	vector<string> b = a;
	const int dx[] = {0,0,1,-1};
	const int dy[] = {1,-1,0,0};

	for(int i=0 ; i<n ; ++) {
		for(int j=0 ; j<n ; j++) {
			bool cave = true;
			for(int dr = 0 ; dr<4 ; dr++) {
				int ni = i+dx[dr];
				int nj = j+dy[dr];

				if(ni<0 || ni>=n || nj<0 || nj>=n) {
					cave = false;
					break;
				}

				if(a[ni][nj] >= a[i][j]) {
					cave = false;
					break;
				}
			}

			if(cave) {
				b[i][j] = 'X';
			}
		}
	}

	for(int i=0 ; i<n ; i++) {
		cout << b[i] << endl;
	}


	return 0;
}





























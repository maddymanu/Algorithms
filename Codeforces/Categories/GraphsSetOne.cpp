#include <stdio.h>
#include <iostream>
#include <math.h>
#include <assert.h>
#include <vector>
#include <algorithm>
#include <utility>
#include <stack>
#include <string.h>

using namespace std;


//Party --- 115A

int manager[2001];
int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	memset(manager , -1, sizeof(manager));

	for(int i=0 ; i<n ; i++) {
		int man ; 
		cin >> man;
		manager[i+1] = man;

	}

	int depth = 0;
	for(int i=1 ; i<=n ; i++) {
		int d = 1, ptr = 1;
		while(manager[ptr] != -1) {
			ptr = manager[ptr];
			d++;
		}
		depth = max(depth , d);
	}

	cout << depth << endl;

	return 0;
}

//Start from RoadConstruction.

































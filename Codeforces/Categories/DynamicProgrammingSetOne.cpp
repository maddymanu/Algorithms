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

using namespace std;

//327A Flipping Game
int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	vector<int> input;
	vector<int> gain;
	int S = 0;

	for(int i=0 ; i<n ; i++) {
		int x;
		cin >> x;
		input.push_back(x);

		if(x == 1) {
			gain.push_back(-1);
			S++;
		}else {
			gain.push_back(1);
		}
	}

	//maximul subarray problem on gain. + S;
	int maxSoFar = 0 , maxHere = 0;
	for(int i=0 ; i<n ; i++) {
		maxHere = maxHere + gain[i];
		if(maxHere < 0) {
			maxHere = 0;
		}
		if(maxSoFar < maxHere) {
			maxSoFar = maxHere;
		}
	}

	int ans = maxSoFar+S;
	cout << ans << endl;

	return 0;
}

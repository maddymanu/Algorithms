#include <iostream>
#include <stdio.h>
#include <assert.h> 
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int T;
	cin>>T;
	assert(1<=T);
	while(T--) {
		int K ;
		cin >> K;
		if(K%2==0) {
			cout << (K/2)*(K/2) << endl;
		} else {
			cout << (K/2)*(K/2 + 1) << endl;
		}

	}// end of hwile loop
	return 0;
}
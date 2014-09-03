#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class BoxesDiv2 {
public:

	int nextP2(int x) {
		int p=1;
		while(p<x) {
			p *= 2;
		}
		return p;
	} 


	int findSize(vector<int> candyCounts) {
		int n = candyCounts.size();
		vector<int> boxes(n);
		for(int i=0 ; i<n ; i++) {
			boxes[i] = nextP2(candyCounts[i]);
		}

		while(boxes.size() > 1) {
			int n=boxes.size();
			sort(boxes.begin() , boxes.end());
			boxes[n-2] = nextP2(boxes[n-1] + boxes[n-2]);
			boxes.resize(n-1);
		}
		return boxes[0];
	}



};
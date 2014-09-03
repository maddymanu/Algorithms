#include <iostream>
#include <vector>

using namespace std;

vector<int> ans(2);

class SilverbachConjecture {
public:

	bool isComp(int x) {
		for(int p=2 ; p<=x/p; p++) {
			if(x%p==0)
				return true;
		}
		return false;
	}

	vector<int> solve(int n) {
		for(int a=4 ; a<n; a++) {
			int b = n-a;

			if(isComp(a) && isComp(b)) {
				ans[0] = a;
				ans[1] = b;
				return ans;
			}
		}
		//return {};
	}
};
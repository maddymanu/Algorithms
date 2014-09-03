#include <iostream>
#include <vector>

using namespace std;

class SlimeXSlimonadeTycoon {
public:
	int sell(vector<int> morning, vector<int> customers, int stale_limit) {
		int n = morning.size();
		vector<int> X(n);
		int sales = 0;
		int k=0;
		for(int i=0; i< n ; i++) {
			X[i] = morning[i];
			if(i - stale_limit >= 0) {
				X[i - stale_limit] = 0;
			}
			int c = customers[i];
			while( (c>0) && (k<=i)) {
				int m=min(c, X[k]);
				c = c-m;
				X[k] = X[k] - m;
				sales += m;
				if(c>0)
					k++;
			}
		}
		return sales;
	}
};
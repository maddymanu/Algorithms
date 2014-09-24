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
	int t;
	cin >> t;
	while(t--) {
		map <int , priority_queue<int , vector<int> , greater<int> > >  val;
		int n;
		cin >> n;
		vector<int> vec(n);
		for(int i=0 ; i<n ; i++) {
			int temp ; 
			cin >> temp;
			vec[i] = temp;
		}
		sort(vec.begin(), vec.end());
		for(int i=0 ; i<n ; i++) {
			int temp = vec[i];
			int now = 0;
			auto it = val.find(temp-1);
			if(it != val.end()) {
				now = it->second.top();
				it->second.pop();
			}
			now++;
			val[temp].push(now);
		}

		int ans = INT_MAX;
		for(auto x : val) {
			if(x.second.size()) {
				ans = min(ans , x.second.top());
			}
		}
		if(ans >= INT_MAX) {
			ans = 0;
		}
		cout << ans << endl;

	}
	return 0;
}





































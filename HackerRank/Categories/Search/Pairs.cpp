#include <iostream>
#include <unordered_set>
using namespace std;

unordered_set<int> s;

int main(int argc, char const *argv[])
{
	int n, k;
	cin >> n >> k;
	for(int i=0 ; i<n ; i++) {
		int val;
		cin>>val;
		s.insert(val);
	}

	int ans = 0;
	for(auto it = s.begin() ; it != s.end() ; it++) {
		if(s.find(*it+k) != s.end()) {
			ans++;
		}
	}

	cout << ans << endl;
	return 0;
}
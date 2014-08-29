#include <iostream>
#include <assert.h> 

using namespace std;

int main() {
	int T;
	long long int c,d;
	long long a,b,n,i;
	cin >> T;
	assert(1 <= T && T <= 10);
	while(T--) {
		cin >> n >> c >> d;
		assert(1 <= n && n <= 1e3);
        assert(1 <= c && c <= 1e3);
        assert(1 <= d && d <= 1e3);
		a = min(c,d);
		b = max(c,d);
        n--;
		for(i=0 ; i<=n ; i++) {
			cout << ( b*i + (n-i)*a ) << " " ;
		}
		cout << endl;
	}
	return 0;
}
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int a, b;
		cin >> a>> b;
		int ans = 0;
		a = ceil(sqrt(a));
		b = floor(sqrt(b));
		// for(int i=1 ; ; i++) {
		// 	if(i*i > b)
		// 		break;
		// 	if(i*i <=b && i*i>=a)
		// 		ans++;
		// }
		cout << int(b-a) + 1 << endl;
	}
}
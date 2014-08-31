#include <iostream>
#include <cmath>
using namespace std;


long long pre[100005];

int main() {
	int t;
	cin >> t;

	while(t--) {
		long long int n , i , j, flag=0, x;
		cin>> n;
		for(i=1 ; i<=n ; i++) {
			cin >> x;
			pre[i] = pre[i-1] + x;
		}
		for(i=1; i<=n; i++)
        {
            // check if sum to left is same as sum to right
            if(pre[i-1]==(pre[n]-pre[i]))flag=1;
        }
        if(flag)
        	cout << "YES\n";
        else
        	cout << "NO\n";
	}

	return 0;
}
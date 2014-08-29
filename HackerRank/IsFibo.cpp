#include <iostream>
#include <cmath>

using namespace std;

bool isPerfectSquare(long long int x) {
	long long int ans= sqrt(x);
	return (ans*ans == x);
}

bool isFibonacci(int n)
{
    // n is Fibinacci if one of 5*n*n + 4 or 5*n*n - 4 or both
    // is a perferct square
    return isPerfectSquare(5*n*n + 4) ||
           isPerfectSquare(5*n*n - 4);
}

int main() {
	int T;
	cin >> T;
	while(T--) {
		long long int n;
		cin >> n;
		if(isFibonacci(n)) {
			cout << "IsFibo" ;
		} else {
			cout << "IsNotFibo";
		}
		cout << endl;
	}
}
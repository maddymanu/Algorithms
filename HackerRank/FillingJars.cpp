#include <iostream>
using namespace std;

int main() {
	int N, M, a,b, k = 0;
	cin >> N;
	cin >> M ;

	int sum=0;

	while(M--) {
		cin >> a>> b >> k;
		sum+= (b-a+1)*k;
		
	}


	cout << (int)(sum/N) << endl;
}
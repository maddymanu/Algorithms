#include <iostream>
using namespace std;

class FibonacciDiv2 {
public:
		int find(int N) {
			int a=0;
			int b=1;
			int res = 2000000;
			while(a <= 2000000) {
				res = min(res, abs(a-N));
				int c=a+b;
				a=b;
				b=c;
			}
			return res;
		}
};
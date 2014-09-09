#include <string>
#include <vector>

using namespace std;

class Chopsticks
{
public:
	int getmax(vector <int> length) {
		int c[101] = {};
		int n = length.size();

		for(int i=0 ; i<n ; i++) {
			c[length[i]]++; 
		}

		int res = 0;
		for(int i=0 ; i<=100 ; i++) {
			res += c[i]/2;
		}

		return res;
	}
	
};
#include <iostream>
#include <string>
#include <vector>

using namespace std;

/* Div 2- 250 */

class MagicalStringDiv2 {
public:
	int minimalMoves(string S) {
		int n= S.size(), c=0;
		for(int i=0 ; i<n; i++) {
			char ch;
			if(i<n/2) {
				ch = '>';
			} else {
				ch = '<';
			}
			if (S[i] != ch)
				c++;
		}
		return c;
	}
};

/* Div 2- 500 */
class PackingBallsDiv2
{
public:
	int minPacks(int R, int G, int B) {
		vector<int> x(3);
		x[0] = R;
		x[1] = G;
		x[2] = B;
    	int res = 100;

    	for(int v=0 ; v<=99 ; v++) {
    		int p = v;
    		for(int i = 0 ; i<3 ; i++) {
    			int t = max(0, x[i]-v);
    			p+= (t+2)/3;

    		}
    		res = min(res, p);
    	}
    	return res;
	}
	
};

/* Div 1 - 250 */

class MagicalStringDiv1
{
public:
	int getLongest(string S) {
		int n = S.size();
		int i=0 , j=n-1;
		int res = 0;
		while(i<j) {
			while((i<j) && (S[i] != '>')) {
				i++;
			}
			while((i<j) && (S[j] != '<')) {
				j--;
			}
			if(i<j) {
				res+=2;
			}
			i++;
			j--;
		}
		return res;
	}
	
};





















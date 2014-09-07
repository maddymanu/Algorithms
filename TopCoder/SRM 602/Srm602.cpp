#include <iostream>
#include <vector>
#include <string>

using namespace std;

//Div2 250
class TypoCoderDiv2
{
public:
	int count(vector<int> rating) {
		int c = 0, x=500;
		for(int y: rating) {
			if((y>=1200) != (x>=1200)) {
				c++;
			}
			x = y;
		}
		return c;
	}
	
};

//Div2 500
class PilingRectsDiv2
{
public:
	int getmax(vector<int> X, vector<int> Y, int limit) {
		int mx = -1;
		for(int w=1 ; w<=limit && limit/w <= limit ; w++) {
			int h = (limit +w-1) / w;

			int r = 0;
			for(int i=0 ; i<X.size() ; i++) {
				if((X[i]>=w && Y[i]>=h) || (Y[i]>=w && X[i]>=h)) {
					r++;
				}
			}
			if(r!=0) {
				mx = max(mx, r);
			}
		}
		return mx;
	}
	
};
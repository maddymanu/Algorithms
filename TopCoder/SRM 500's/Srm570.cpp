#include <string>
#include <vector>
#include <iostream>

using namespace std;


//Div2 250
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

//Div2 500
class RobotHerbDiv2
{
public:
	int getdist(int T, vector <int> a) {
		int dx[4] = {0,1,0,-1};
    	int dy[4] = {1,0,-1,0};
    	int x = 0, y = 0, d = 0;

    	for(int i=0 ; i<a.size() ; i++) {
    		x += dx[d] * a[i];
    		y += dy[d] * a[i];
    		d = (d+a[i]) % 4;
    	}

    	int dx2[4] = { x,y ,-x,-y};
    	int dy2[4] = { y,-x,-y,x};

    	int x2 = 0, y2 = 0, d2 = 0;
    	for(int i=0 ; i<T ; i++) {
    		x2 += dx2[d2];
    		y2 += dy2[d2];
    		d2 = (d2+d)%4;
    	}

    	return abs(x2) + abs(y2);

	}
	
};

















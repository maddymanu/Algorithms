#include <vector>
#include <string>
#include <algorithm>
#include <iostream>
#include <sstream> 

using namespace std;

//Div2 250
class FoxAndGame
{
public:
	int countStars(vector <string> r) {
		int ct = 0;
		for(int i=0 ; i<r.length() ; i++) {
			string curr = r[i];
			for(int j=0 ; j<curr.length() ; j++) {
				if(curr[j] == 'o') {
					ct++;
				}
			}
		}

		return ct;
	}
	
};

//Div2 500
class FoxAndMp3Easy
{
public:
	vector <string> playList(int n) {
		vector<string> res(n);
		for(int i=1 ; i<=n ; i++) {
			ostringstream st;
			st << i << ".mp3";
			res[i-1] = st.str();
		}
		sort(res.begin(), res.end());
		res.resize(min(50,n));
		return res;
	}
	
};
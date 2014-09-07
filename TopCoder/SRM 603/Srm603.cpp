#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

//Div2 - 250
class MiddleCode
{
public:
	string encode(string s) {
		string t = "";
		while(s != "") {
			int n = s.length();
			if(n%2==1) {
				t = t+s[n/2];
				s=s.substr(0,n/2) + s.substr();
			}  else if (s[n/2] < s[n/2-1]) { //the right middle character is smaller
            t = t + s[n/2]; //remove the right middle character 
            s = s.substr(0, n/2) + s.substr(n/2 + 1);
        } else {
            t = t + s[n/2-1]; //remove the left middle character
            s = s.substr(0, n/2-1) + s.substr(n/2);
        }
		}
		return t;
	}
	
};

//Div2 500
class SplitIntoPairs
{
public:
	int makepairs(vector<int> A, int X) {
		vector<int> neg, nonneg;
		for (int a: A) {
			if(a<0) {
				neg.push_back(a);
			} else {
				nonneg.push_back(a);
			}
		}

		if(neg.size() %2 == 0) {
			return A.size()/2;
		}

		long maxneg = *max_element(neg.begin(), neg.end());
		long minnonneg = *min_element(nonneg.begin(), nonneg.end());
		if(maxneg * minnonneg >= X) {
			return A.size() / 2;
		} else {
			return A.size() / 2 - 1;
		}
	}
	
};


































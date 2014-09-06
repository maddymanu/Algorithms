#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

//Div 2 - 250

class EllysSubstringSorter
{
public:
	string getMin(string S, int L) {
		string res = S;
		for(int i=0 ; i+L <= S.length() ; i++) {
			string t = S;
			sort(t.begin()+ i, t.end() +i+L);
			res = min(res, t);
		}
		return res;
	}
	
};

//Div 2  - 500

class EllysNumberGuessing
{
public:
	int getNumber(vector<int> guesses, vector<int> answers) {
		int options[] = {guesses[0] + answers[0] , guesses[0] - answers[0]};
		int res = -2;
		for(int x : options) {
			bool valid = (1 <= x && x <= 1000000000);

			for(int i=0 ; i<guesses.size() ; i++) {
				valid = valid && (abs(guesses[i] - x) == answers[i] );
			}
			if(valid) {
				if (res != -2) {
                res = -1;    // found a previous answer, set result to -1
            } else {
                res = x;    // save answer
            }
			}
		}
		return res;
	}
	
};
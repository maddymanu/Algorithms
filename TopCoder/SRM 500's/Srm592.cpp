#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

//Div2 250
class LittleElephantAndBooks
{
public:
	int getNumber(vector<int> pages, int number) {
		sort(pages.begin(), pages.end());
		int s = pages[number];
		for(int i=0 ; i<number-1 ; i++) {
			s+= pages[i];
		}
		return s;
	}
	
};

//Div2 500
class ConvertibleStrings
{
public:
	int leastRemovals(string A, string B) {
		string p = "ABCDEFGHI";
		int res = A.length();
		do {
			int diff = 0;
			for(int i = 0; i<A.length() ; i++) {
				if(B[i] != p[A[i] - 'A']) {
					diff++;
				}
			}
			res = min(res, diff);
		} while(next_permutation(p.begin(), p.end()));

		return res;
	}
};
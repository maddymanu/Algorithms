#include <string>
#include <iostream>
#include <vector>

using namespace std;

//Div2 250
class LittleElephantAndBallsAgain
{
public:
	int getNumber(string S) {
		int res = 0 , n=S.length();
		int equalCt = 1;
		for(int i=1 ; i<n; i++) {
			if(S[i] != S[i-1]) {
				res = max(res, equalCt);
				equalCt = 1;
			} else {
				equalCt++;
			}
		}
		res = max(res , equalCt);
		return (n-res);
	}
	
};
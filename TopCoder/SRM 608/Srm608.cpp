#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

// Div 2 - 250
class OneDimensionalRobotEasy
{
public:
	
	int finalPosition(string commands, int A, int B) {
		int x=0;
		for(char ch:commands) {
			if (ch == 'R') {
				x = min(x+1, B);
			} else {
				x = max(x-1, -A);
			}
		}
		return x;
	}
};

//
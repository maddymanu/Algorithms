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
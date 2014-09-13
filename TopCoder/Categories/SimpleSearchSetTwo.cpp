//Div2 500 ptrs

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class PhonePad
{
public:
	int fingerMovement(string phoneNumber) {
		string number = "123456789*0#";
		int result = 0 , x=1 , y=1;
		for(int i=0 ;  i<phoneNumber.size() ; i++) {
			int index = number.find(phoneNumber[i]);
			int row = index/3;
			int col = index%3;
			result += abs(x-row) + abs(y-col);
			x = row;
			y = col;
		}
		return result;
	}
	
};

class TwoTurtledoves
{
public:
	int presentType(int n) {
		int count = 0;
		int day = 1;
		while(count + day*(day+1)/2 < n) {
			count += day*(day+1)/2;
			day++;
		}
		for(int type = day ; ; type--) {
			count += type;
			if(count >= n)
				return type;
		}
	}
	
};




//DO MORE!!! DIV 2 500 ptrs.






















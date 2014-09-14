//Div2 500 ptrs

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>

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

class grafixCorrupt
{
public:
	int selectWord(vector<string> dictionary, vector<string> candidate) {
		int best = -1 ; 
		int score = 0;
		for(int i=0 ; i<dictionary.size() ; i++) {
			int now = 0;
			for(int j=0 ; j<dictionary[i].size() ; j++) {
				if(dictionary[i][j] == candidate[j]) {
					now++;
				}
				if(now > score) {
					score = now;
					best = i;
				}
			}
		}
		return best;
	}
	
};

class GroceryBagger
{
public:
	int minimumBags(int strength, vector<string> itemType) {
		map<string , int> mp;
		int res = 0;
		for(int i=0 ; i<itemType.size() ; i++) {
			mp[itemType[i]]++;
		}

		for(auto it = mp.begin() ; it!=mp.end() ; it++) {
			res += it->second/strength;
			res += !(it->second%strength == 0);
		}
		return res;
	}
	
};

class TheNewHouseDivTwo
{
public:
	int count(vector<int> x, vector<int> y) {
		int ret = 0;
		for(int i=-101 ; i<=101 ; i++) {
			for(int j=-101 ; j<=101 ; j++) {
				bool n,s,e,w;
				n=s=e=w=false;
				for(int k=0 ; k<x.size() ; k++) {
					if(x[k] > i && y[k] == j)
						e=true;
					if(x[k] < i && y[k] == j)
						w=true;
					if(y[k] < j && y[k]==i)
						n=true;
					if(y[k]>j && y[k]==i)
						s=true;
				}
				if(n&&s&&e&&w)
					ret++;
			}
		}
		return ret;
	}
	
};

//DO MORE!!! DIV 2 500 ptrs.






















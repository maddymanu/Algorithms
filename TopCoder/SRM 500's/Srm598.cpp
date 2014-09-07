#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

//Div2 250
class ErasingCharacters
{
public:
	string simulate(string s) {
		for(int i=0 ; i+1<s.size() ; i++) {
			if(s[i] == s[i+1]) {
				simulate(s.substr(0,i) + s.substr(i+2));
			}
		}
		return s;
	}
	
};

//Div2 500
class BinPackingEasy
{
public:
	int minBins(vector<int> item) {
		int cost = item.size();
		sort(item.begin(), item.end());
		int i=0 , j=item.size()-1;
		while(i<j) {
			while((j>i) && (item[j]+item[i] > 300)) {
				j--;
			}
			if((j>i) && (item[i]+item[j] <=300)) {
				cost--;
				j--;
				i++;
			}else {
				break;
			}
		}
		return cost;
	}
	
};
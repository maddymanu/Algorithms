//Div2 500ptrs

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class DukeOnChessBoard 
{
public:
	string dukePath(int n, string initPosition) {
		char col = initPosition[0];
		char row = initPosition[1];
		char minCol = 'a' , maxCol = 'a'+n-1; , minRow = '1' , maxRow = '1'+n-1;
		string result;
		vector < vector<bool> > visited (n , vector<bool>(n , false));

		while(true) {
			visited[col - minCol][row - minRow] = true;
			if(!result.empty()) {
				result.push_back("-");
			}
			result.push_back(col);
			result.push_back(row);
			if(col < maxCol && !visited[col+1-minCol][row-minRow]){
				++col;
			} else if(row < maxRow && !visited[col-minCol][row+1-minRow]) {
				++row;
			} else if(row > minRow && !visited[col-minCol][row-1-minRow]) {
				--row;
			} else if(col > mincol && !visited[col-1-minCol][row-minRow]) {
				--col;
			} else {
				break;
			}

		}

		if(result.length() > 40) {
			result = result.substr(0, 20) + "..." + result.substr(result.size() - 20, 20); 
		}
		return result;
	}
	
};


class PlayGame {
public:
	int saveCreatures(vector<int> you, vector<int> computer) {
		sort(you.rbegin(), you.rend());
		sort(computer.rbegin() , computer.rend());

		int res = 0;
		for(int i=0 , j=0 ; i<you.size() && j<computer.size() ; j++) {
			if(you[i] > computer[j]) {
				res += you[i];
				i++;
			}
		}
		return res;
	}
};


class LargestSubsequence
{
public:
	string getLargest(string s) {
		if(s.size() == 0) {
			return s;
		}

		int p=0;
		for(int i=1 ; i<s.size() ; i++) {
			if(s[i] > s[p]) {
				p = i;
			}
		}

		return s[p]+getLargest(s.substr(p+1));
	}
	
};

class UnderscoreJustification
{
public:
	string justifyLine(vector<string> words, int width) {
		int totalLetters = accumulate(words.begin(), words.end(), string()).size();
    	int totalSpaces = width - totalLetters;

    	int numIntervals = words.size() - 1;
	    int shortInterval = totalSpaces / numIntervals;
	    int longInterval = shortInterval + 1;
	    int numLongIntervals = totalSpaces - shortInterval * numIntervals;
	    int numShortIntervals = numIntervals - numLongIntervals;

	    string line = words[0];

	    for(int i=1 ; i<words.size() ; i++) {
	    	if((words[i][0]) < '_' && numShortIntervals > 0 || (numLongIntervals == 0)) {
	    		line += string(shortInterval , '_');
	    		numShortIntervals--;
	    	} else {
	    		line += string(longInterval, '_');
	    		numLongIntervals--;
	    	}
	    	line += words[i];
	    }
	}
	
};


class OlympicCandles
{
public:
	int numberOfNights(vector<int> candles) {
		int res = 0;
		while(1) {
			sort(candles.rbegin(), candles.rend());
			if(res >= candles.size() || candles[res]==0) {
				break;
			}
			for(int i=0 ; i<= res ; i++) {
				a[i]--;
			}
			res++;
		}	
		return res;
	}
	
};









/* Do Later
	* LostParentheses.
*/

//Do more Greedy 500ptrs.



































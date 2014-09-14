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



//Do more Greedy 500ptrs.





















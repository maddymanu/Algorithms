#include <iostream>
#include <algorithm>
#include <string>
#include <stdio.h>
#include <ctype.h>
#include <vector>

using namespace std;

class Medici
{
public:
	int winner(vector<int> fame, vector<int> fortune, vector<int> secrets) {
		int bestP = -1 , bestS = -1;
		bool tie = false;
		for(int i=0 ; i<fame.size() ; i++) {
			int score = min(fame[i] , min(fortune[i] , secrets[i]));
			if(score > bestS) {
				bestS = score;
				bestP = i;
				tie = false;
			} else if( score == bestS ){
				tie = true;
			}
		}
		if(tie)
			return -1;
		else
			return bestP;
	}
	
};

class AppleWord
{
public:
	int minRep(string word) {
		int size = word.size();
        int ret = 0;
        if (size <= 4) ret = -1;

		if(word[0] != 'a' && word[0] != 'A') {
			ret++;
		}

		for(int i=1 ; i<size - 3 ; i++) {
			if(word[i] != 'p' && word[i] != 'P') {
				ret++;
			}
		}

		if (word[size-2] != 'l' && word[size-2] != 'L') ret++;
        if (word[size-1] != 'e' && word[size-1] != 'E') ret++;

        return ret;
	}
	
};


class ClassScores
{
public:
	vector<int> findMode(vector<int> scores) {
		vector<int> count(101);
		for(int i=0 ; i<scores.size() ; i++) {
			count[scores[i]]++;
		}

		for(int i=scores.length() ; i>=1 ; i++) {
			int c =0;
			for(int j=0 ; j<=100 ; j++) {
				if(count[j] == i)
					c++;
			}
			if(c>0) {
				int p = 0;
				vector<int> ret(c);
				for(int j=0 ; j<=100 ; j++) {
					if(count[j] == i) {
						ret(c) = j;
						p++;
					}
				}
				return ret;
			}
		}
		return vector<int>;

	}
	
};


class ChatTranscript
{
public:
	int howMany(string[] transcript, string name) {
		int count = 0;
		for (int i = 0; i < transcript.size(); ++i)
		{
			if(transcript[i].find(name+":") == 0)
				count++
		}
		return count;
	}
	
};


//Div2 250
class EllysTSP
{
public:
	int getMax(string places) {
		int countC =0, countV=0;
		for(char ch : places) {
			if (ch == 'V')
			{
				countV++;
			} else {
				countC++;
			}
		}
		return min(countC,countV) + 1+min(countC,countV);
	}
	
};

//Div2 250
class Alliteration
{
public:
	int count(string[] words) {
		int res = 0;
		for(int i=0 ; i<words.size()-1 ; i++) {
			if(tolower(words[i].at(0)) ==  tolower(words[i+1].at(0)) &&
			(i==0 || tolower(words[i].at(0)) !=  tolower(words[i-1].at(0)))) {
				res ++;
			}
		}
		return res;
	}
	
};

//Done TILL FOX PROGRESSION - Do Some more DIV2 250 then move to 500

class Barbecue
{
public:
	int eliminate(int n, vector<int> voter, vector<int> excluded) {
		vector<int> p(n);
		for(int i=0 ; i<excluded.size() ; i++) {
			p[excluded[i]]++;
		}
		vector<int>::iterator it = max_element(p.begin(), p.end());
		if(count(p.begin(), p.end() , *it) == 1) {
			return it-p.begin();
		} 
		vector<int> q;
		int m = *it;
		for(int i=0 ; i<p.size() ; i++) {
			if(p[i] == *it)
				q.push_back(i);
		}
		int t=-1 , ans = -1;
		for(int i=0 ; i<q.size() ; i++) {
			int n = count(voter.begin(), q.end() , q[i]);
			if(n>t) {
				t = n;
				ans = q[i];
			}
		}
		return ans;
	}
	
};

class DocumentSearch
{
public:
	int nonIntersecting(vector<string> doc, string search) {
		string s = "";
		for(string x : doc) {
			s+= x;
		}

		int i=0 , ans = 0;
		while(i <= s.size() - search.size()) {
			if(s.substr(i , i+search.size()) == search) {
				ans++;
				i+= search.size();
			} else {
				i++;
			}
		}
		return ans;
	}
	
};

class RainyRoad
{
public:
	string isReachable(vector <string> road) {
		for(int i=0 ; i<road[0].size() ; i++) {
			if(road[0][i] == 'W' && road[1][i] == 'W') {
				return "NO";
			}
		}
		return "YES";
	}
	
};

class ColorfulBoxesAndBalls
{
public:
	int getMaximum(int numRed, int numBlue, int onlyRed, int onlyBlue, int bothColors) {
		int maxx = min(numRed , numBlue);
		int ans = 1<<31;
		for(int i=0 ; i<= maxx ; i++) {
			ans = max(ans , (numRed-i)*onlyRed + (numBlue-i)*onlyBlue + 2*i*bothColors );
		}
		return ans;
	}
	
};

class NumberNeighbours
{
public:
	int numPairs(vector<int> numbers) {
		int n = numbers.size();
		vector<string> alphanum(n);
		for(int i=0 ; i<n ; i++) {
			char temp[10];
			sprintf(temp , "%d" , numbers[i]);
			for(int j=0 ; temp[j] ; j++) {
				if(temp[j] != '0') {
					alphanum[i] = alphanum[i] + temp[j];
				}
			}
			sort(alphanum[i].begin() , alphanum[i].end());
		}
		int ans = 0;
		for(int i=0 ; i<n ; i++)
			for(int j=i+1 ; j<n ; j++ ) {
				ans += alphanum[i] == alphanum[j];
			}
		return ans;
	}
	
};


class FunnyFence
{
public:
	int getLength(string s) {
		vector<int> l(50 , 1);
		int j=0;
		for(int i=1 ; i<s.size() ; i++) {
			if(s[i-1] != s[i]){
				l[j]++;;
			} else {
				j++;
			}
		}
		sort(l.rbegin() , l.rend());
		return l[0];
	}
	
};

class LinearTravellingSalesman
{
public:
	int findMinimumDistance(vector<int> x, vector<int> y) {
		return *max_element(x.begin(), x.end())-*min_element(x.begin(), x.end()) +
				*max_element(y.begin(), y.end()) - *min_element(y.begin(), y.end());
	}
	
};

class AttendanceShort
{
public:
	vector<string> shortList(vector<string> names, vector<string> attendance) {
		vector<string> result;

		for(int i=0 ; i<names.size() ; i++) {
			int pres = 0, total = 0;

			for(int j=0 ; j<attendance[i].size() ; j++) {
				if(attendance[i][j] == 'P') {
					total++;
					pres++;
				} else if(attendance[i][j]=='A') {
					total++;
				} 
			}
			cout << pres << " " << total << end;
			int ans = int ((pres/total) * 100);
			cout << "The ans is" << ans << endl;
			if( ans < 75) {
				result.push_back(names[i]);
			}
		}
		sort(result.begin(), result.end());
		return result;
	}
	
};



class SandwichBar
{
public:
	int whichOrder(vector <string> available, vector <string> orders) {
		for(int i=0; i<orders.size() ; i++) {
			istringstream iss(orders[i]);
			string s;
			bool ok = true;
			while(iss >> s) {
				if(find(available.begin(), available.end() , s) == available.end()) {
					ok = false;
				}
			}
			if(ok)
				return i;
		}
		return -1;
	}
	
};




























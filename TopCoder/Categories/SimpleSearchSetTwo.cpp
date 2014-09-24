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


class PickTwoCards
{
public:

	unsigned nChoosek( unsigned n, unsigned k )
	{
	    if (k > n) return 0;
	    if (k * 2 > n) k = n-k;
	    if (k == 0) return 1;

	    int result = n;
	    for( int i = 2; i <= k; ++i ) {
	        result *= (n-i+1);
	        result /= i;
	    }
	    return result;
	}

	double equalProbability(string cards) {
		int cnt[26];
		for(int i=0 ; i<cards.size() ; i++) {
			cnt[cards[i] - 'A']++;
		}
		double chooseValie = 0;
		cout << "Size of cards is " << cards.size() << endl;

		for(int i=0 ; i<26 ; i++) {
			if(cnt[i] >= 2) {
				chooseValie += nChoosek(cnt[i] , 2);
			}
		}

		double total = nChoosek(cards.size() , 2);
		return chooseValie/total;


	}
	
};



class PartySeats
{
public:
	vector<string> seating(vector<string> attendees) {
		vector<string> b, g, out;
		for(int i=0 ; i<attendees.size() ; i++) {
			stringstream ss(a[i]);
			string name, gener;
			ss >> name >> gener;
			if(gener == "boy") {
				b.push_back(name);
			} else {
				g.push_back(name);
			}
		}
		if(b.size() <=1 || g.size() <=1 || b.size() != g.size() || g.size()%2) {
			return out;
		}
		sort(b.begin(), b.end());
		sort(g.begin(), g.end());
		out.push_back("HOST");
		for(int i=0 ; i<g.size()/2 ; i++) {
			out.push_back(g[i]);
			out.push_back(b[i]);
		}
		out.push_back("HOSTESS");
		for(int i=g.size()/2 ; i<g.size() ; i++) {
			out.push_back(b[i]);
			out.push_back(g[i]);
		}
		return out;
	}
	
};



//Do again
class IsomorphicWords
{
public:

	vector<string> w;

	bool check(int x, int y) {
		int maps[26] , inv_maps[26];

	}


	int countPairs(vector<string> words) {
		w = words;
		int ret = 0;

		for(int i=0 ; i<words.size() ; i++) {
			for(int j=i+1 ; j<words.size() ; j++) {
				if(check(i,j))
					ret++;
			}
		}
		return ret;
	}
	
};


class CubeStickers
{
public:
	string isPossible(vector<string> sticker) {
		map<string, int> m;
		for(int i=0 ; i<sticker.size() ; i==) {
			m[sticker[i]]++;
		}

		int ones , twos;
		for(auto it = m.begin() ; it != m.end() ; it++) {
			if(it->second > 1) {
				twos++;
			} else {
				ones++;
			}
		}

		if(twos >=3 || twos==2 && ones>=2 || twos==1 && ones>=4 || ones >= 6) {
			return "YES";
		}
		return "NO";
	}
	
};


/* DO Again

  * DNAString
  * Isomorphic words.
  * LuckyString
  * AlientAndGame
  * Surveillance System.
	
*/

























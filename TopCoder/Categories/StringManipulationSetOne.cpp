#include <string>
#include <vector>
#include <iostream>

using namespace std;

class StreetParking {
public:
	int freeParks(string st) {
		int i,count = 0;
		for(i = 0 ; i<st.size() ; i++) {
			int flag = 0;
			if(st[i] == '-') {
				if(i+1 < st.length() && (st[i+1] == 'B' || st[i+1] == 'S')) {
					flag=1;
				}
				if(i-1 >=0 && st[i-1] == 'S') {
					flag = 1;
				}
				if(i+2 < st.length()&&st[i+1] == 'B') {
					flag = 1;
				}
				if(flag == 0) {
					count++;
				}
			}
		}
		return count;
	}
};

class SignatureDecorator
{
public:
	string applyDecoration(String name, vector<string> commands, vector<string> decorations) {
		string ans = name;
		for(int i=0 ; i<commands.size() ; i++) {
			if(commands[i] == "surround") {
				ans = decorations[i]+ans+decorations[i];
			} else if(commands[i] == "append") {
				ans = ans+decorations[i];
			} else {
				ans = decorations[i]+ans;
			}
		}
		return ans;
	}
	
};


class DownloadingFiles {
public:
  double actualTime(vector <string> tasks) {
  	double total = 0, speed = 0;
  	for(int i= 0 i<tasks.size() ; i++) {
  		double a, b;
  		sscanf(tasks[i].c_str() , "%lf %lf" , &a, &b);
  		total +=b*a;
  		speed += a;
  	}
  	return total/speed;
  }
};

class FauxPalindromes
{
public:

	string compress(string word) {
		string r= "" + word[0];
		for(int i=1 ; i<word.size() ; i++) {
			if(word[i] != word[i-1]){
				r += word[i];
			}
		}
		return r;
	}

	bool palindrome(string word) {
		int i=0 , j=word.size()-1;
		while(i<j) {
			if(word[i++] != word[j--])
				return false;
		}
		return true;
	}

	string classifyIt(string word) {
		if (palindrome(word)) {
	        return "PALINDROME";
	    } else if (palindrome(compress(word)) ) {
	        return "FAUX";
	    } else {
	        return "NOT EVEN FAUX";
	    }
	}
	
};
//Done uptil Div2 250. Start With Div2 500s.


class MostCommonLetters
{
public:
	string listMostCommon(vector <string> text) {
		vector<int> count (26 , 0);
		for(int i=0 ; i<text.size() ; i++) {
			for(int j=0 ; j<text[i].size() ; j++) {
				if(isalpha(text[i][j])) {
					count[text[i][j]-'a']++;
				}
			}
		}

		int maxC = -1;
		for (int i = 0; i < 26; ++i)
		{
			maxC = max(maxC , count[i]);
		}

		string res = "";
		for(int i=0 ; i<26 ; i++) {
			if(count[i] == maxC) {
				res += char(i+'a');
			}
		}
		return res;
	}
	
};



















//Div2 500

#include <iostream>
#include <string>
#include <algorithm>
#include <cstring>
#include <vector>

using namespace std;

class Mailbox
{
public:
	int impossible(string collection, vector<string> address) {
		int charCount[256];
		for(char ch : collection) {
			charCount[ch]++;
		}
		int ans = 0;
		bool flag = true;
		for(int i=0 ; i<address.size() ; i++) {
			string curr = address[i];
			flag = true;
			for(char ch : address) {
				if(ch != " ") {
					if(charCount)
				}
			}

			//check flag
		}

	}
	
};

//Div2 500
class PalindromeDecoding
{
public:
	string decode(string code, vector<int> position, vector<int> length) {
		string ans = code;
		for(int i=0 ; i<position.size() ; i++) {
			string res = ans.substr(0, position[i] + length[i]);
			for(int j=length[i] ; j>= j ; j--) {
				res += ans.at(position[i] + j);
			}
			ans = res+ans.substr(position[i] + length[i]);
		}
		return ans;
	}
	
};

class ClientsList
{
public:
	vector<string> dataCleanup(vector<string> names){
		vector < pair<string,string> >name;
		for(int i=0 ; i<names.size()  ; i++) {
			char a[50] , b[50];
			sscanf(names[i].c_str() , "%s %s" , a, b);
			if(a[strlen(a) - 1] == ',') {
				a[strlen(a) - 1] = 0;
				name.push_back(make_pair(a, b));
			} else {
				name.push_back(make_pair(b, a));
			}
		}
		sort(name.begin(), name.end());
		vector<string> res;
		for(int i=0 ; i<names.size() ; i++) {
			res.push_back(name[i].second + " " + name[i].first);
		}
		return res;
	}
	
};

class WordForm
{
public:
	string getSequence(string word) {
		int ans = "";
		for (int i = 0; i < word.size(); ++i)
		{
			
		}

	}
	
};


class Decipher
{
public:
	vector<string> decipher(vector<string> encoded, string frequencyOrder) {

		vector<int> v(26);
		for(int i=0 ; i<encoded.size() ; i++) {
			for(int j=0 ; j<encoded[i].size() ; j++) {
				char c = encoded[i][j];
				v[c-'A']++;
			}
		}

		vector <pair<int , char> > V;
		for(int i=0 ; i<26 ; i++) {
			if(v[i]) {
				V.push_back(make_pair(-v[i] , 'A' + i));
			}
		}

		sort(V.begin(), V.end());
		map <char, char> M;
		for(int i=0 ; i<V.size() ; i++) {
			M[V[i].second] = frequencyOrder[i];
		}

		for(int i=0 ; i<encoded.size() ; i++) {
			for(int j=0 ; j<encoded[i].size() ; j++) {
				char &c = encoded[i][j];
				c = M[c];
			}
		}
		return encoded;
	}
};




























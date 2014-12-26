#include <stdio.h>
#include <iostream>
#include <math.h>
#include <assert.h>
#include <vector>
#include <algorithm>
#include <utility>
#include <map>
#include <stack>
#include <string.h>
#include <cctype>

using namespace std;

//41A - Translation
// int main(int argc, char const *argv[])
// {
// 	string s,t;
// 	cin >> s;
// 	cin >> t;
// 	reverse(t.begin(), t.end());
// 	if(s==t)
// 		cout << "YES" << endl;
// 	else
// 		cout << "NO" << endl;
// 	return 0;
// }

//208A Dubstep

// int main(int argc, char const *argv[])
// {
// 	string s;
//     cin >> s;

//     vector<string> words;
//     int start = 0;
//     while(true) {
//     	int end = s.find("WUB" , start);
//     	if(end == string::npos) {
//     		words.push_back(s.substr(start, end));
//     		break;
//     	}else {
//     		words.push_back(s.substr(start, end-start));
//     	}
//     	start = end+3;
//     }

//     if(!words.empty()) {
//     	cout << words[0];
//     }

//     for(int i=1 ; i<words.size() ; i++) {
//     	cout << " " << words[i];
//     }
//     cout << endl;

// 	return 0;
// }


//59A Word

// int main(int argc, char const *argv[])
// {
// 	 string word; getline(cin, word);
//     int lowerCase = 0;
//     for(int k = 0; k < word.size(); k++){if(islower(word[k])){lowerCase++;}}
//     int (*conversionFunction)(int);
//     if(lowerCase >= 1.0 * word.size() / 2){conversionFunction = tolower;}
//     else{conversionFunction = toupper;}
//     for(int k = 0; k < word.size(); k++){word[k] = conversionFunction(word[k]);}
//     cout << word << endl;
//     return 0;
// }























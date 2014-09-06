#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <string>
#include <map>

using namespace std;

//Div2 250
class AlienAndPassword
{
public:
	int getNumber(string S) {
		set<string> pass;
		for(int i=0 ; i<S.size() ; i++) {
			pass.insert(S.substr(0,i) + S.substr(i+1));
		}
		return pass.size();
	}
	
};

//Div1 250

class AlienAndHamburgers
{
public:
	int getNumber(vector<int> type, vector<int> taste) {
		map <int, vector<int> > typeTastes;
		for(int i=0 ; i<type.size(); i++) {
			typeTastes[type[i]].push_back(taste[i]);
		}

		vector<int> tasteResult;
		for(auto &q : typeTastes) {
			auto &p = q.second;
			sort(p.rbegin() , p.rend());

			int s=0;
			int i=0;
			while( (i<p.size()) && (p[i]>=0)) {
				s+=p[i];
				i++;
			}
			if(i==0)
				s+=p[0];

			tasteResult.push_back(s);

		}

		sort(tasteResult.rbegin() , tasteResult.rend());
		int res=0 ;
		int sum = 0;
		for(int i=0 ; i<tasteResult.size() ; i++) {
			sum+= tasteResult[i];
			res = max(res , (i+1)*sum);
		}
		return res;
	}
	
};



























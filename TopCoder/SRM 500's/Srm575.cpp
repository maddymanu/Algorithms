#include <iostream>
#include <cstdlib>
#include <vector>
#include <set>

using namespace std;

//Div2 250
class TheSwapsDivTwo
{
public:
	int find(vector <int> sequence) {
		set < vector<int> > mySet;

		for(int i=0 ; i<sequence.size() ; i++) {
			for(int j=i+1 ; j<sequence.size() ; j++) {
				swap(sequence[i] , sequence[j]);
				mySet.insert(sequence);
				swap(sequence[i] , sequence[j]);
			}
		}
		return mySet.size();
	}
	
};
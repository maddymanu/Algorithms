#include <iostream>
#include <vector>

using namespace std;

//Div2 250
class LittleElephantAndDouble
{
public:
	string getAnswer(vector<int> A) {
		for(int &x: A) {
			while(x%2 == 0) {
				x = x/2;
			}
			if(x != A[0]) {
				return "NO";
			}
		}
		return "YES";
	}
	
};
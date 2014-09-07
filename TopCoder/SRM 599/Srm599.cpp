#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

//Div2 250
class MiniatureDachshund
{
public:
	int maxMikan(vector<int> mikan, int weight) {
		sort(mikan.begin(), mikan.end());
		int ct = 0;
		int currWeight = weight;
		int i=0;
		for (int x: mikan) {
        // Eat the smallest mikan left, as long as it is possible: 
        if (weight + x <= 5000) {
            weight += x;
            ct++;
        }
    }
		return ct;
	}
	
};
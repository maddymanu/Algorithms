#include <vector>
#include <iostream>
using namespace std;

class SumOfPower {
public:
	int findSum(vector<int> array) {
		int i=0,j=0,k=0;
		int n = array.size();
   		int res = 0;
		for (i = 0; i < n; ++i)
		{
			for (j = 0; j < i; ++i)
			{
				for (k = 0; k <=i; ++i)
				{
					res += array[k];
				}
			}
		}
		return res;
	}

};
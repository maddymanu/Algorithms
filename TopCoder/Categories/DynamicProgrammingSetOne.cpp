//Div2 250 --- ONLY 2 problems

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class ShorterSuperSum
{
public:
	int calculate(int k, int n) {
		if(k==0) {
			return n;
		}
		int sum = 0;
		for(int i=0 ; <=n ; i++) {
			sum += calculate(k-1 , i);
		}
		return sum;
	}
	
};

class SRMCards
{
public:
	int maxTurns(vector<int> cards) {
		int sum = 0;
		sort(cards.begin(), cards.end());
		for(int i=0 ; i<cards.size(); i++) {
			if(i < cards.size() - 1 && cards[i] == cards[i+1] -1) {
				sum++;
				i++;
			} else {
				ans++;
			}
		}
		return ans;
	}
	
};

//Div2 500 Ptrs. Seem Hard.

class NumberofFiboCalls
{
public:
	vector<int> cache[41];
	vector<int> fiboCallsMade(int n) {
		if(cache[n].size())
			return cache[n];
		vector<int> &ret = cache[n];
		ret.resize(2);
		if(n==0)
			ret[0] = 1;
		else if(n==1) 
			ret[1] = 1;
		else {
			vector<int> a = fiboCallsMade(n-1);
			vector<int> b = fiboCallsMade(n-2);
			ret[0] = a[0] + b[0];
			ret[1] = a[1] + b[1];
		}
		return ret;

	}
};


//Div2 1000pts -- First 1000pt problem.

class UnsealTheSafe
{
public:
	long long countPasswords(int N) {
		long long d[50][20];
		int i=0;
		for(i = 0; i<=9 ; i++) {
			d[1][i] = 1;
		}
		for(i=2 ; i<=N ; i++) {
			d[i][0] = d[i-1][7];
			d[i][1] = d[i-1][2] + d[i-1][4];
			d[i][2] = d[i-1][1] + d[i-1][3] + d[i-1][5];
			d[i][3] = d[i-1][2] + d[i-1][6];
			d[i][4] = d[i-1][1] + d[i-1][5] + d[i-1][7];
			d[i][5] = d[i-1][2] + d[i-1][4] + d[i-1][6] + d[i-1][8];
			d[i][6] = d[i-1][3] + d[i-1][5] + d[i-1][9];
			d[i][7] = d[i-1][4] + d[i-1][8] + d[i-1][0];
			d[i][8] = d[i-1][5] + d[i-1][7] + d[i-1][9];
			d[i][9] = d[i-1][6] + d[i-1][8];
		}
		long long ans=0; 
	    for(i=0; i<=9; i++){ 
	      ans+=d[N][i]; 
	    } 
	    return ans;
	}
	
};





































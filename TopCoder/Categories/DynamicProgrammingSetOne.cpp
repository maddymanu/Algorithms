//Div2 250 --- ONLY 2 problems

#include <iostream>
#include <vector>
#include <string>
#include <sstream>
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


class BinarySearchable
{
public:	
	int howMany(vector<int> sequence) {
		int ret = 0;
		for(int i=0 ; i<sequence.size() ; i++) {
			bool ok = true;
			for(int j=0 ; j<i ; j++) {
				if(sequence[j] > sequence[i]){
					ok = false;
				}
			}

			for(int j=i+1 ; j<sequence.size() ; j++){
				if(sequence[j] < sequence[i]) {
					ok = false;
				}
			}

			if(ok)
				++ret;
		}

		return ret;
	}
	
};


class StringWeightDiv2
{
public:

	static const int MOD = 1000000009;
	long dp[27][1001];

	long oneConsec(int a, int L) {
		long &res = dp[a][L];
		if(res == -1) {
			if(L==0) {
				res = (a==0);
			} else if(a==1) {
				res=1;
			} else {
				res = 0;
				for(int i=1 ; i<=L ; i++) {
					res += (a * oneConsec(a-1 , L-i)) % MOD;
				}
				res %= MOD;
			}

		}
		return res;
	}

	int countMinimums(int L) {
		memset(dp , -1 , sizeof(dp));
		long res = 1;
		if( L <= 26) {
			for(int i=0 ; i<L ; i++) {
				res = (res*(26-1))%MOD;
			}
		} else {
			res = oneConsec(26, L);
		}

		return res;
	}
	
};


struct Contest {
	int start, end, percent;
	Contest(string s) {
		istringstream is(s);
		is >> start >> end >> end;
	}

	bool operator<(const Contest &c) const {
		return start < c.start;
	}
};


class ContestSchedule
{
public:
	double expectedWinnings(vector<string> contests) {
		int n= contests.size();
		vector<Contest> c;
		vector<int> dp(n);
		for(auto it = contests.begin() ; it != contests.end() ; it++) {
			c.push_back(Contest(*it));
		}
		sort(c.begin(), c.end());
		for(int i=0 ; i<n ; i++) {
			dp[i] = c[i].percent;
			for(int j=0 ; j<i ; j++) {
				if(c[j].end <= c[i].start) {
					dp[i] = max(dp[i] , dp[j] + c[i].percent);
				}
			}
		}

		return *max_element(dp.begin(), dp.end()) * 0.01;
	}	
	
};

class GameInDarknessDiv2
{
public:
	void move(int x0, int y0, char ch, int &x1, int&y1)
	{
	    x1 = x0; y1 = y0;
	    switch(ch) {
	        case 'U':
	            y1--;
	            break;
	        case 'D':
	            y1++;
	            break;
	        case 'L':
	            x1--;
	            break;
	        case 'R':
	            x1++;
	    };
	}
 
 
	int ax[2500];
	int ay[2500];
	int w, h, M;
	vector<string> field;
	 
	bool visited[50][50][2500];

	void dfs(int bx, int by, int t) {
		if(!visited[bx][by][t]) {
			visited[bx][by][t] = true;
			if(t+1 < M) {
				char moves[] = {"U" , "L" , "R" , "D"};
				for(char ch : moves) {
					int nx , ny;
					move(bx , my , ch , nx , ny);
					if((0<=nx&&nx<w) ** (0<=ny<h) && field[ny][nx] != '#') {
						if((ax[t] != nx  || ay[t] != ny) && (ax[t+1]!=nx || ay[t+1]!=ny) ) {
							dfs(nx , ny, t+1);
						}
					}
				}
			}
		}
	}


	string check(vector<string> field, string moves) {
		memset(visited, 0 , sizeof(visited));
		this->field = field;
		M = moves.size();
    	h = field.size(); w = field[0].size();

    	int bx , by;
    	for (int i=0; i<h; i++) {
	        for (int j=0; j<w; j++) {
	            if (field[i][j] == 'A') {
	                ax[0] = j;
	                ay[0] = i;
	            } else if (field[i][j] == 'B') {
	                bx = j;
	                by = i;
	            }
	        }
    	}

    	move(ax[0],ay[0], moves[0], ax[0],ay[0[]);
		if(ax[0] == bx && ay[0] == by) {
			return "Alice wins";
		}

		for(int i=1 ; i<moves.size() ; i++) {
			move(ax[i-1],ay[i-1], moves[i], ax[i],ay[i]);
		}

		dfs(bx , by , 0);

		for (int i=0; i<h; i++) {
	        for (int j=0; j<h; j++) {
	            if (visited[i][j][M - 1]) {
	                return "Bob wins";
	            }
	        }
	    }
	    // Else 
	    return "Alice wins";

	}	
};


class InfiniteSequence
{
public:
	map <long long , long long> mem;

	long long calc(long long n, int p, int q) {
		if(n==0)
			return 1;
		if(mem.count(n))
			return mem[n];
		mem[n] = calc(n/p , p , q) + calc(n/q,p,q);
		return mem[n];
	}
	
};


//Start from OnTime



//Getting stuck everywhere. Need to understand more.

/* Do later
	* VocaloidAndSongs
	* All Prob ones. (around 71% Success rate for Div2)
	* TheCowDivTwo
	* WallGameDiv2
*/
























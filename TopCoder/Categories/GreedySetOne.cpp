#include <iostream>
#include <vector>
#include <string>

using namespace std;

//Div2 250
class AdditionGame
{
public:
	int getMaximumPoints(int A, int B, int C, int N) {
		int ans = 0;
		for(int i=0 ; i<N ; i++) {
			if(A >= B  && A>=C) {
				sum += A;
				A -= (A>0);
			} else if(B >= C && B >= A) {
				sum += B;
				B -= (B>0);
			} else {
				sum += C;
				C -= (C>0);
			}
		}
		return ans;
	}
	
};

//Div2 250
class ColorfulTilesEasy {
public:
	int theMin(String room) {
		int ans = 0;
		for(int i=0 ; i<room.size()-1 ; i++) {
			if(room[i] == room[i+1]) {
				ans++;
				i++;
			}
		}
		return ans;
	}
};

class Palindromize
{
public:
	string minAdds(string s) {
		int i,j,k, n = s.length();
		for(i=0 ; i<=n ; i++) {
			int flag = 1;
			string s2 = s;
			for(j=0 ; j<i ; i++)
				s2 += s[i-j-1];
			int nr = n+i;
			for(k=0 ; k<=nr/2 ; k++) {
				if(s2[j] != s2[nr-j-1])
					flag = 0;
			}
			if(flag)
				return s2;
		}
	}
	
};

class DifferentStrings
{
public:
	int minimize(string A, string B) {
		int result=999999999;
		for(int shift=0 ; shift <= (B.size()-A.size()) ; shift++) {
			int diff = 0;
			for(int i=0 ; i<A.size() ; i++) {
				if(A[i] != B[shift+i]) {
					diff++;
				}
			}
			result = min(result,diff);
		}
		return result;
	}
	
};

class MinCostPalindrome
{
public:
	int getMinimum(string s, int oCost, int xCost) {
		int n = s.size();
		int i=0 , j=n-1;
		int res = 0;
		while(i<j) {
			if(s[i] == '?' && s[j]=='?') {
				res += 2*min(oCost , xCost);
			} else if(s[i] == '?') {
				if(s[j] == 'o') {
					res += oCost;
				} else {
					res += xCost;
				}
			} else if(s[j] == '?') {
				if (s[i] == 'o') {
                    //Change s[j] to 'o'
                    res += oCost;
                } else {
                    //Change s[j] to 'x'
                    res += xCost;
                }
			} else {
				if(s[i] != s[j])
					return -1;
			}
			i++;
			j--;
		}
		return res;
	}
	
};


class ToastXRaspberry
{
public:
	int apply(int upper_limit, int layer_count){
		return (layer_count+upper_limit-1)/upper_limit;
	}
	
};

















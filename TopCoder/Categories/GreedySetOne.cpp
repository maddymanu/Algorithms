#include <iostream>
#include <vector>
#include <algorithm>
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


class LinearPolyominoCovering
{
public:
	string findCovering(string region) {
		replace(region.begin(), region.end() , "XXXX" , "AAAA");
		replace(region.begin(), region.end() , "XX" , "BB");
		if(region.find("X") != -1) {
			return "impossible";
		}

		return region;
	}
	
};

//Div2 250
class CreateGroups
{
public:
	int minChanges(vector<int> groups , int minSize, int maxSize) {
		int n = groups.size();
		int sum = 0;
		for(int curr : groups) {
			sum += curr;
		}
		if(sum < minSize*n || sum > maxSize*n)
			return -1;
		int need = 0,toomuch = 0;
		for(int i=0 ; i<n ; i++){
			if(groups[i] < minSize)
				need += minSize - groups[i];
			if(groups[i] > maxSize)
				toomuch += maxSize - groups[i];
		}
		return max(toomuch , need);
	}
	
};


class ImportantTasks
{
public:
	int maximalCost(vector<int> complexity, vector<int> computers) {
		int res = 0;
		int i = complexity.size()-1 , j=computers.size()-1;
		sort(complexity.begin(), complexity.end());
		sort(computers.begin(), computers.end());

		while(i>=0 && j>=0) {
			if(complexity[i] <= computers[j]) {
				res++;
				//i--;
				j--;
			}
			i--;
		}
		return res;
	}
	
};


class BootsExchange
{
public:
	int leastAmount(vector<int> left, vector<int> right) {
		int n = left.size();
		int leftCount[1000];
		int rightCount[1000];
		for(int i=0 ; i<n ; i++) {
			leftCount[left[i]-1]++;
			rightCount[right[i] -1]++;
		}

		int same = 0;
		for(int i=0 ; i<1000 ; i++) {
			same += min(leftCount[i] , rightCount[i]);
		}
		return n-same;
	}
	
};

//Start With Div2 500points.
//DONE WITH 200 ptrs.
































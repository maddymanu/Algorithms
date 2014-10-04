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

using namespace std;

//231A -- Team
// int main(int argc, char const *argv[])
// {
// 	int n, p,v,t, number(0);
// 	cin >> n;
// 	while(n--) {
// 		cin >> p>> v >> t ;
// 		if(p+v+t >=2) {
// 			number++;
// 		}
// 	}
// 	cout << number << endl;
// 	return 0;
// }

//58A Chat room
// int main(int argc, char const *argv[])
// {
// 	string hello= "hello";
// 	string s;
// 	bool N=1;
// 	int i, j;
// 	i=j=0;
// 	cin >> s;
// 	if(s.size() < 5) {
// 		cout << "NO";
// 		return 0;
// 	}
// 	for(i=j=0 ; i<hello.size() && j<s.size() ; ) {
// 		if(s[j++] == hello[i])
// 			i++;
// 	}
// 	if(i != hello.size()) {
// 		cout << "NO";
// 	}else {
// 		cout <<"YES";
// 	}

// 	return 0;
// }


//349A Cinema Line
int main(int argc, char const *argv[])
{
	int n;
	bool flag = true;
	int a=0 , b=0 , c=0;
	cin >> n;
	for(int i=0 ; i<n ; i++) {
		int curr;
		cin >> curr;
		if(curr == 25) {
			a++;
		} else if(curr == 50) {
			if(a<=0) {
				flag = false;
			} else {
				a--;
				b++;
			}
		} else if(curr == 100) {
			if(a>=1 && b>=1) {
				a--;
				b--;
				c++;
			}else if(a>=3) {
				a-=3;
				c++;
			}else {
				flag = false;
			}
		}
	}
	if(flag == true) {
		cout << "YES";
	}else {
		cout << "NO";
	}
	return 0;
}
















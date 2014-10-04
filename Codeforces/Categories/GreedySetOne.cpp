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
int main(int argc, char const *argv[])
{
	int n, p,v,t, number(0);
	cin >> n;
	while(n--) {
		cin >> p>> v >> t ;
		if(p+v+t >=2) {
			number++;
		}
	}
	cout << number << endl;
	return 0;
}
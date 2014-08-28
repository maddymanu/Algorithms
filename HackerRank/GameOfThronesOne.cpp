#include <iostream>
#include <stdio.h>
#include <assert.h> 
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	string s ; 
	cin >> s;
	int A[26];
	for(int i =0 ; i<26 ; i++)
        A[i] = 0;

    for (int i=0 ; i<s.length() ; i++) {
    	A[s[i] - 'a']++;
    }

    int count=0;
    for (int i=0 ; i< 26 ; i++) {
    	count+= (A[i]%2);
    }

    if(count <=1) {
    	cout << "YES" << endl;

    } else
        cout << "NO" << endl;

	return 0;
}
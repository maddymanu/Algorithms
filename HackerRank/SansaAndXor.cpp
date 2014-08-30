#include <iostream>
#include <stdio.h>
#include <assert.h> 
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;


vector<int> L; 

long long int ans = 0;

void xorAllSubstrings(char c) {
	// /cout << "ANS=Char= " << ans << " " << (c-'0') ;
	ans = ans ^ (c-'0');
}

void findAllSubstrings(const char *s){
    int x=0;
    while(*(s+x)){
        for(int y=0; y<=x; y++) {
        	//cout<<*(s+y);
        	xorAllSubstrings(*(s+y));
        }
        //cout<<'\n';
        x++;
    }
    if(*(s+1))
        findAllSubstrings(s+1);
    else
        return;
}

int main() {

	string str = "";
	// cin >> str;
	// const char *pt = str.c_str();
	// findAllSubstrings(pt);
	// cout << "ans is= " << ans << endl;
	int T;
	cin >> T;
	int N;
	while(T--) {
		ans = 0;
		str = "";
		cin >> N;
		//int arr[N];
		for(int i=0 ; i<N ; i++) {
			char c ;
			cin >> c;
			str = str+c;
		}
		//cout << str;
		const char *pt = str.c_str();
	    findAllSubstrings(pt);
	    cout << ans << endl;
	}

}
























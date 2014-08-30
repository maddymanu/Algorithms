#include <iostream>
#include <assert.h> 
#include <algorithm>
#include <string>
using namespace std;

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
	int T;
	cin >> T;
	assert(T>=1 && T<=5);
	long long int N;
	while(T--) {
		ans = 0;
		str = "";
		cin >> N;
		assert(N>=2 && N<=100000);
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
























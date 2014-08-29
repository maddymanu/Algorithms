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

void findAllSubstrings(const char *s){
    int x=0;
    while(*(s+x)){
        for(int y=0; y<=x; y++)
            cout<<*(s+y);
        cout<<'\n';
        x++;
    }
    if(*(s+1))
        findAllSubstrings(s+1);
    else
        return;
}

int main() {

	string str;
	cin >> str;
	const char *pt = str.c_str();
	findAllSubstrings(pt);

}
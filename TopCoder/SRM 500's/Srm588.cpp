#include <iostream>
#include <vector>
#include <string>

using namespace std;

class KeyDungeonDiv2
{
public:
	int countDoors(vector <int> doorR, vector <int> doorG, vector <int> keys) {
		int r = keys[0], g = keys[1], w = keys[2];
   		int c = 0; 
   		for(int i=0 ; i<doorR.size() ; i++) {
   			if(max(doorR[i] - r , 0) + max(doorG[i]-g,0) <= w) {
   				c++;
   			}
   		}
   		return c;
   		
	}
	
};
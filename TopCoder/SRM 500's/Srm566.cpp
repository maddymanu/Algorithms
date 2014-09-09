#include <vector>
#include <string>
#include <iostream>

using namespace std;

//Div2 250 pts.
class PenguinTiles
{
public:
	int minMoves(vector <string> tiles) {
		int i,j;
		int w = tiles[0].size();
		int h = tiles.size();
		for (int x = 0; x < w; x++) {
	        for (int y = 0; y < h; y++) {
	            if (tiles[y][x] == '.') {
	                i = y; j = x;
	            }
	        }
    	}
    	int res = 0;
    	if(i != h-1) {
    		res++;
    	}
    	if(j != w-1) {
    		res++;
    	}

    	return res;
	}
	
};

//Div2 500
class PenguinPals
{
public:
	int findMaximumMatching(string colors) {
		bool found = true;
		int matches = 0;
		while(found && (colors.size() >= 2)) {
			found = false;
			if(colors[0] == colors[colors.size() - 1]) {
				found = true;
				colors = colors.substr(1, colors.size()-2);
				matches++;
			}
			int i=0;
			while(i+1 < colors.size()) {
				if(colors[i] == colors[i+1]) {
					found = true;
					colors = colors.substr(0,i) + colors.substr(i+2);
					matches++;
				} else {
					i++;
				}
			}
		}

		if(colors.size() > 1) {
			matches += (colors.size() - 2) / 2;
		}

		return matches;
	}
	
};



























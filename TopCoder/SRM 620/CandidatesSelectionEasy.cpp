#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class CandidatesSelectionEasy{
public:
	vector<int> sort(vector<string> score, int x) {
		int n = score.size();
		vector<int> ids(n);
		for(int i=0; i<n ; i++) {
			ids[i] = i;
		}

		std::sort(ids.begin(), ids.end(), [&](int a, int b) {
            return make_pair(score[a][x],a) < make_pair(score[b][x],b);
    	});
		return ids;
	}
};
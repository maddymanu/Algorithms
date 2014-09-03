#include <iostream>
#include <string>

using namespace std;

class LongWordsDiv2 {
public:
	bool subSequence(string a, string b) {
		int i=0, j=0;
		while((i<b.size()) && (j<a.size())) {
			if(a[j] == b[i])
				j++;
			i++;
		}
		return (j==a.size());

	}

	string find(string word) {
		for (char X = 'A'; X <= 'Z'; ++X)
		{
			for (char Y = 'A'; Y <= 'Z'; ++Y)
			{
				string xyxy = string(1, X) + string(1,Y) + string(1, X) + string(1,Y);
				if(subSequence(xyxy, word)) {
					return "Dislikes";
				}
			}
		}

		for (int i = word.size() - 1; i > 0; i--) {
        	if (word[i] == word[i-1]) {
            	return "Dislikes";
        	}
   		 }

   		 return "Likes";

	}
};
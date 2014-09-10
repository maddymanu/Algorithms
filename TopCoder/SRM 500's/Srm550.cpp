#include <vector>
#include <string>

using namespace std;

//Div2 250
class EasyConversionMachine
{
public:
	string isItPossible(string originalWord, string finalWord, int k) {
		int count = 0;
		for(int i=0 ; i<originalWord.length() ; i++) {
			count += (originalWord[i] != finalWord[i]);
		}

		if((count <= k) && ((k -  count)%2==0)) {
			return "POSSIBLE";
		}

		return "IMPOSSIBLE";
	}
	
};
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

//Div2 250
class GymTraining
{
public:
	int trainingTime(int needToTrain, int minPulse, int maxPulse, int trainChange, int restChange) {
		int time = 0;
		int curr = minPulse;
		if(minPulse+trainChange > maxPulse) {
			return -1;
		}

		while(needToTrain > 0 ) {
			needToTrain--;
			if(curr + trainChange <= maxPulse) {
				curr = curr+trainChange;
				need--;
			} else {
				curr = min(minPulse, curr-rest);
			}
		}

		return time;

	}
	
};

//Div2 250
class CountGame
{
public:
	int howMany(int maxAdd, int goal, int next) {
		for(int i=goal ; i>=next ; i-=(maxAdd+1)) {
			if(i-next+1 <= maxAdd) {
				return i-next+1;
			}
		}
		return -1;
	}
};



class RussianSpeedLimits
{
public:

	bool getDefault(bool inCity) {
		return inCity ? 60 : 90;
	}

	int getCurrentLimit(vector<string> signs) {
		bool inCity = true;
		int speed = getDefault(inCity);
		for(string sign : signs) {
			if(sign == "default") {
				speed = getDefault(inCity);
			} else if(sign == "city") {
				inCity = !inCity;
				speed = getDefault(inCity);
			} else {
				speed = (int)sign;
			}
		}
		return speed;
	}
	
};




















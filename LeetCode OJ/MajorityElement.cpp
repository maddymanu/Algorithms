class Solution {
public:
    int majorityElement(vector<int> &num) {
        int c = 0;
        int maj_index=0;
        for(int i=1 ; i<num.size() ; i++) {
        	if(num[maj_index] == num[i]) {
        		count++;
        	}else {
        		count--;
        	}
        	if(count==0) {
        		maj_index = i;
        		count = 1;
        	}
        }

        int max = num[maj_index];
        int count = 0;
        // for(int i=0 ; i<num.size() ; i++) {
        // 	if(num[i] == max) {
        // 		count++;
        // 	}
        // }

        // if(count >= num.size()/2) {
        return max;
        // }

    }
};
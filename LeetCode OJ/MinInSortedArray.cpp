class Solution {
public:
    int findMin(vector<int> &num) {
        
        if(num.size() == 0) {
            return NULL;
        }
        
        if(num.size() == 1) {
            return num[0];
        }
        
         if(num.size() == 2) {
            return num[0] > num[1] ? num[1] : num[0];
        }
        
        
        int low= 0;
        int high = num.size()-1;
        int minValue = INT_MAX;
        
        while(low <= high) {
            int mid = (low+high)/2;
            
            if(num[low] <= num[mid]) {
                minValue = min(num[low], minValue);
                low=mid+1;
            }else {
                minValue = min(num[mid], minValue);
                high = mid-1;
            }
        }
        
        return minValue;
        
    }
};
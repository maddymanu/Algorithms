class Solution {
public:
    int searchInsert(int A[], int n, int target) {
        //bin search
        int l=0 , h=n-1;
        int mid = 0;
        while(l<=h) {
            mid = (l+h)/2;
            if(A[mid] == target) {
                return mid;
            }
            
            if(A[mid] < target) {
                l=mid+1;
            } else if(A[mid] > target) {
                h=mid-1;
            }
        }
        
        return l;
    }
};
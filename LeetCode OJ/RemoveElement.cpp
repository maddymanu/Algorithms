class Solution {
public:
    int removeElement(int arr[], int n, int elem) {
        int i=0 , j=0;
        while(i < n) {
            if(arr[i] != elem) {
                arr[j] = arr[i];
                j++;
            }
            i++;
        }
        
        return j;
    }
};
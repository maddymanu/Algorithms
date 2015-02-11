class Solution {
public:
    bool canJump(int A[], int n) {
          int jumps[n+1];  // jumps[n-1] will hold the result
          int i =1, j = 0;
        
          jumps[0] = 0;
          for (i = 1; i < n; ) { 
        
            // if i is out of range of arr[j], then increment j
            if (A[j] + j < i && j < i) {
        
              j++;
        
            // else if i is within range of arr[j], 
            //   jumps for ith element would be jumps[j]+1
            } else if (A[j] + j >= i && j < i) {
        
              jumps[i] = jumps[j] + 1;
              i++;
        
            } else {
              printf("solution does not exist");
              return false;
            }
          }
        
        //   printf("jumps: ");
        //   for (i = 0; i < n; i++) {
        //     printf("%d, ", jumps[i]);
        //   }
          return true;
    }
};
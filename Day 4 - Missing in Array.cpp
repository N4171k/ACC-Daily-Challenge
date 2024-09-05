class Solution {
  public:

   
    int missingNumber(int n, vector<int>& arr) {

        // Your code goes here
        int totalSum = n * (n + 1) / 2;
    
    
    int arrSum = 0;
    for (int i = 0; i < n-1; i++) {
        arrSum += arr[i];
    }
    
    
    return totalSum - arrSum;
    }
};

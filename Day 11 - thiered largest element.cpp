class Solution {
  public:
    int thirdLargest(vector<int> &arr) {
        // Your code here
       int n=arr.size();
        sort(arr.begin(),arr.end());
        for(int i=0;i<n;i++)
        {
            if(n<=2)
            return -1;
            else 
            return arr[n-3];
            
        }
    }
};

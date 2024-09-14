class Solution
{
    public:
    int peakElement(int arr[], int n)
    {
       // Your code here
       if (n == 1) return 0;
       int low = 0;
       int high = n-1;
       while(low <= high) {
           int mid = (low + high) / 2;
            //cout << low<<" " <<mid <<" "<< high << endl;
            if((mid == 0 || arr[mid - 1] <= arr[mid]) && 
            (mid == n-1 || arr[mid + 1] <= arr[mid])) {
                return mid;
            }
            
            if(arr[mid-1] < arr[mid]) low = mid + 1;
            
            else high = mid - 1;
       }
       return -1;
    }
};

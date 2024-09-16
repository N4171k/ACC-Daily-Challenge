class Solution{
    public:
    int prod=1;
    int i=0;
    int product(int arr[], int n)
    {
        
    while(n!=0) {
        prod=prod*arr[i];
        i++;
        n--;
    }
    return prod;
    }
};

class Solution{
  public:
    int missingNumber(vector<int>& arr, int n) {
        
        int sum=0;
        for(int i=0;i<n-1;i++){
            sum+=arr[i];
        }
        
        // sum of n number formula
        
        int ans= n*(n+1)/2;
        return ans-sum;
    }

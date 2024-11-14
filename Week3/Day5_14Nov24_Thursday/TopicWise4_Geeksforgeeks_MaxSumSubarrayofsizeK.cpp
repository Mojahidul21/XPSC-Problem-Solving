class Solution {
    public:
        long long maximumSumSubarray(vector<int>& arr, int k) {
            // code here
            long long sum=0,mx=0;
            for(int i=0;i<=arr.size()-k;i++){
                if(!i)for(int j=0;j<k;j++)sum+=arr[j];
                else sum+=arr[i+k-1]-arr[i-1];
                mx=max(mx,sum);
            }
            return mx;
        }
};

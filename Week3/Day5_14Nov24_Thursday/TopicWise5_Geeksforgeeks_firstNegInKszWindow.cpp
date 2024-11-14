class Solution {
  public:
    vector<int> FirstNegativeInteger(vector<int>& arr, int k) {
        // write code here
        queue<pair<int,int>>q;
        for(int i=0;i<k;i++)if(arr[i]<0)q.push({arr[i],i});
        vector<int>v;
        v.push_back(q.empty()?0:q.front().first);
        for(int i=1;i<=arr.size()-k;i++){
            if(!q.empty()&&q.front().second==i-1)q.pop();
            if(arr[i+k-1]<0)q.push({arr[i+k-1],i+k-1});
            v.push_back(q.empty()?0:q.front().first);
        }
        return v;
    }
};

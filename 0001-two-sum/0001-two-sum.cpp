class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int t) {
       int n=nums.size();
        unordered_map<int,int>m;
        for(int i=0;i<n;i++){
            int j=t-nums[i];
            if(m.find(j)!=m.end()) return {i,m[j]};
            m[nums[i]]=i;
        }
       return{};
    }
};
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int t) {
        map<int,int> m;
        int n= nums.size();
        for(int i=0;i<n;i++){
            if(m.find(t-nums[i])!=m.end()) return {i,m[t-nums[i]]};
            m[nums[i]]=i;
        }
        return{};
    }
};
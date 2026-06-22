class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
            unordered_map<int,int> h;
            int n= nums.size();
            for(int i=0; i<n ; i++){
                int key=target-nums[i];
                if(h.find(key)!=h.end()){
                    return {h[key],i};
                }
                h[nums[i]]=i;

            }
            return {};
    }
};
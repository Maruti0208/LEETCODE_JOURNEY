class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        vector<int> v(nums.begin(),nums.end());
        reverse(nums.begin(),nums.end());
        v.insert(v.end(),nums.begin(),nums.end());
        return v;
    }
};
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> c;
        for(auto x:nums){
            if(c.count(x) ) return true;
            c.insert(x);
        }
        return false;
    }
};
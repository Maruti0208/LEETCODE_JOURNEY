class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> v;
        if(nums.size()==0) return {};
        if(nums.size()==1) return {to_string(nums[0])};
        for(int i=0;i<nums.size();i++){
            int t=i;
            while(i<nums.size()-1 &&nums[i]+1==nums[i+1]){
                i++;
            }
            if(t==i){
                string a=to_string(nums[t]);
                v.push_back(a);
            }
            else{
                string a=to_string(nums[t])+"->"+to_string(nums[i]);
                v.push_back(a);
            }
        }
        
        return v;
    }
};
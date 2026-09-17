class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<pair<int,int>> a;
        unordered_map<int,int >m;
        int n=nums.size();
        for(int i=0;i<n;i++){
            m[nums[i]]++;
        }
        for(auto v:m){
            a.push_back({v.first,v.second});

        }
        vector<int> ans;
        sort(a.begin(), a.end(), [](auto x, auto y) {
            return x.second > y.second;
        });
          for(int i = 0; i < k; i++)
            ans.push_back(a[i].first);

         return ans;

    }
};
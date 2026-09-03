class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        vector<int> a=nums1;
        sort(a.begin(),a.end());
        int n= a.size();
        int c=0,b=0;
        for(int i=0;i<n;i++){
            if(a[i]%2==0)c++;
            else b++;
        }
        if(b==0) return true;
        if(a[0]%2==1) return true;
        return false;
    }
};
class Solution {
public:
    vector<int> minOperations(string t) {
        int q=0,w=0;
        int n=t.length();
        vector<int>a(n,0),b(n,0),ans(n);
        for(int i=0;i<n;i++){
            if(i==0) a[i]=0;
            else
            a[i]=a[i-1]+q;
            
            if(t[i]=='1') q++;
            

        }
    for(int i=n-1;i>=0;i--){
    if(i==n-1)
        b[i]=0;
    else
        b[i]=b[i+1]+w;

    if(t[i]=='1')
        w++;
}        
        for(int i=0;i<n;i++){
            if(t[i]=='1') ans[i]=a[i]+b[i];
            ans[i]=a[i]+b[i];
        }
        return ans;
    }
};
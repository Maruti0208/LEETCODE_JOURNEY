class Solution {
public:
    int ladderLength(string b, string e, vector<string>& w) {
        queue<pair<string, int>> q;
        q.push({b,1});
        unordered_set<string> s(w.begin(),w.end());
    s.erase(b);
        while(!q.empty()){
            string wr=q.front().first;
            int ans=q.front().second;
            q.pop();
            if(e==wr) return ans;
            for(int i=0;i<wr.size();i++){
                char o=wr[i];
                for(char ch='a';ch<='z';ch++){
                    wr[i]=ch;
                    if(s.find(wr)!= s.end()){
                        s.erase(wr);
                        q.push({wr,ans+1});
                       
                    }
                }
                wr[i]=o;
            }

        }
        return 0;
    }
};
class Solution {
public:
    int maxRepeating(string s, string w) {
        int c=0;
        string t=w;
        while(s.find(t)!=string::npos)
        {
            c++;
            t+=w;
        }
        return c;
    }
};
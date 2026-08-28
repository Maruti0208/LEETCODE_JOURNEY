class Solution {
public:
    int finalValueAfterOperations(vector<string>& o) {
        string a="--X",b="X--",c="++X",d="X++";
        int x=0;
        for(int i=0;i<o.size();i++){
            if(o[i]==a || o[i]==b) x--;
            else x++;
        }
    return x;
    }
};
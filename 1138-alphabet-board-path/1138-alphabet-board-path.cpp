class Solution {
public:
    string alphabetBoardPath(string t) {
        int n=t.size();
        int c=0,v=0;
        string s="";
        for(int i=0;i<n;i++){
                int k=(t[i]-'a')/5;
                int p=(t[i]-'a')%5;
                if (k == 5) {
                while (v > p) {
                    s += 'L';
                    v--;
                }

                while (c < k) {
                    s += 'D';
                    c++;
                }
            }
            else{
                if(c<k){
                    int y=0;
                    while(y<k-c){
                    s+='D';
                    y++;}
                }
                else 
                    if(c>k) {
                        int y=0;
                        while(y<c-k){
                            s+='U';
                            y++;}}
                if(v>p) {
                    int y=0;
                    while(y<v-p){
                        s+='L';
                        y++;
                    }
                }
                else if(v<p){
                    int y=0;
                    while(y<p-v){
                        s+='R';
                        y++;
                    }
                }}
                s+='!';
                c=k;
                v=p;
        }
        return s;

    }
};
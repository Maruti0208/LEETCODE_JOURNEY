class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& r) {
        int  ma= 2*n;
        sort(r.begin(),r.end());
        
        for(int i=0;i<r.size();i++){
           int t= r[i][0];
           int a=0;
           int b=0;
           int c=0;
           while(i<r.size() && r[i][0]==t){
            int h=r[i][1];
            if(h>=2 && h<=5) a++;
            
              if(h>=6 && h<=9) c++;
              if(h>=4 && h<=7) b++;
            i++;
           }
           if(a>0 && b>0 && c>0) ma-=2;
           else if(a>0 || b>0 || c>0) ma-=1;
           i--;
        }
        return ma;
    }
};
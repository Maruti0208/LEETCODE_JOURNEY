class Solution {
public:
    bool isThree(int n) {
     int c=0; 
     if (n <= 3)
            return false;
        for (int i = 2; i <= n/2; i++) {
            if (n % i == 0)
               c++;
            if(c>1) return false;
        }
        return c==1;
    }
};
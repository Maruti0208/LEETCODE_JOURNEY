class Solution {
public:
    bool isPalindrome(int x) {
        string s= to_string(x);
        string r=string(s.rbegin(),s.rend());
        return s==r;
    }
};
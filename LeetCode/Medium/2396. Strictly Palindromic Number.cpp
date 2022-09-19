// This solution is also accepted
// class Solution {
// public:
//     bool isStrictlyPalindromic(int n) {
//         return false;
//     }
// };

class Solution {
    bool isPalindrome(string n) {
        int i=0, j=n.size()-1;
        while(i<j) if(n[i++]!=n[j--]) return false;
        return true;
    }
public:
    bool isStrictlyPalindromic(int n) {
        int base = 2;
        while(base <= n-2) {
            string num;
            int temp = n;
            while(temp > 0) {
                num = to_string(temp%base) + num;
                temp/=base;
            }
            if(!isPalindrome(num)) return false;
            base++;
        }
        return true;
    }
};
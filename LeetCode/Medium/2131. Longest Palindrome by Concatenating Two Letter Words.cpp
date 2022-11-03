class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        // create two maps, 1 for iteration and another to pick values randomly
        // If we try to iterate and to pick elements randomly from same map in range for loop, the iterate will behave strangely and will not iterate correctly.
        unordered_map<string,int> mp1,mp2;
        int len = 0;
        
        for(auto &str:words) {
            // count the occurences of each string
            mp1[str]++;
        }
        
        // we will take the the string with both caracters same sand odd count only once, because if we taken such strings more than once, we will not be able to create palindrome
        // If we taken aa aa aa then we can make palindrome, but
        // If we taken aa aa aa bb bb bb, we can't make palindrome, so
        // we have to take odd count only once.
        bool oddTaken = false;
        mp2 = mp1;
        
        for(auto &p:mp1) {
            //strings having both characters same
            if(p.first[0]==p.first[1]) {
                
                // If the count is even, we can consider all the occurences
                if(p.second%2==0) {
                    len += p.second*2;
                } else {
                    // If the count is odd, the we will take all odd count only once, and after that we will take only even count of strings of others
                    if(oddTaken) {
                        len += (p.second-1)*2;
                    } else {
                        len += p.second*2;
                        oddTaken = true;
                    }
                }
            } else {
                // If string don't have both caracters same
                string rev = p.first;
                reverse(rev.begin(),rev.end());
                
                // we will take only the count which is minimum among the string and its reverse
                // here multiplied by 4 becase
                // x strings from str count, x strings from reverse str count, and each having 2 length
                // total length = (x + x)*2
                // total length = x*4
                len += min(mp2[p.first], mp2[rev])*4;
                mp2[rev] = 0;
            }
        }
        
        return len;
    }
};
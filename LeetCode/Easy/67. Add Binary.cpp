class Solution {
public:
    string addBinary(string a, string b) {
        string res;
        int i = a.size()-1, j = b.size() -1;
        int carry = 0;
        while(i>=0 || j>=0 || carry) {
            int sum = carry;
            if(i>=0) sum += a[i--]-'0';
            if(j>=0) sum += b[j--]-'0';
            res = to_string(sum%2)+res;
            carry = sum/2;
        }
        if(carry) res = '1'+res;
        return res;
    }
};
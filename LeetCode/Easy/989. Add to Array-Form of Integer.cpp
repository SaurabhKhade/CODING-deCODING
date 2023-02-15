class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int carry = 0, i = num.size()-1;
        while(k || carry) {
            if(i>=0) {
                num[i] += carry + k%10;
                k/=10;
                carry = num[i]/10;
                num[i] %= 10;
                i--;
            } else {
                num.insert(num.begin(),carry+k%10);
                carry = num[0]/10;
                num[0] %= 10;
                k /= 10;
            }
        }
        return num;
    }
};
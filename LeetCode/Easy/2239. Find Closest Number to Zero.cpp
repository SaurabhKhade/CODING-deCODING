class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int cur_dis=INT_MAX, cur_el=INT_MIN;
        for(auto &i:nums) {
            if(abs(i)<cur_dis || (abs(i)==cur_dis && i>cur_el)) {
                cur_dis = abs(i);
                cur_el = i;
            }
        }
        return cur_el;
    }
};
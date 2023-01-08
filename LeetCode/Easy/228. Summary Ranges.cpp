class Solution {
public:
  vector<string> summaryRanges(vector<int>& nums) {
    if(nums.size()==0) return {};
    int l_ = nums[0], r_ = nums[0];
    vector<string> v;
    for(int i=1; i<nums.size(); i++) {
      if(nums[i] == r_+1) {
        r_++;
        continue;
      }
      if(l_ == r_) {
        v.push_back(to_string(l_));
      } else {
        v.push_back(to_string(l_)+"->"+to_string(r_));
      }
      l_ = r_ = nums[i];
    }   
    if(l_ == r_) {
      v.push_back(to_string(l_));
    } else {
      v.push_back(to_string(l_)+"->"+to_string(r_));
    }
    return v;
  }
};
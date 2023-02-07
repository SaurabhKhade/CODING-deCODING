0/5
class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int i=0, j=0, cnt=0, n=fruits.size(),max_len=0;
        vector<int> status(n);

        while(j<n) {
            if(status[fruits[j]]==0) {
                cnt++;
            }
            status[fruits[j]]++;
            if(cnt==3) {
                max_len = max(max_len, j-i);
                while(cnt==3) {
                    status[fruits[i]]--;
                    if(status[fruits[i]]==0) cnt--;
                    i++;
                }
            }
            j++;
        }
        max_len = max(max_len, j-i);
        return max_len;
    }
};
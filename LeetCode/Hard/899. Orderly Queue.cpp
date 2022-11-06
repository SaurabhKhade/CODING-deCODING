class Solution {
public:
    string orderlyQueue(string s, int k) {
        if(k==1) {
            string temp=s;
            s += s;
            for(int i=1;i<temp.size();i++){
                temp=min(temp,s.substr(i,temp.size()));
            }
            s = temp;
        } else {
            sort(s.begin(),s.end());
        }
        return s;
    }
};
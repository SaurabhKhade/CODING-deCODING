class Solution {
    vector<string> convert(vector<int> & data) {
        vector<string> v;
        for(auto &el: data) {
            string str;
            while(el>0) {
                if(el%2==0) str = '0'+str;
                else str = '1'+str;
                el /= 2;
            }
            while(str.size()!=8) str = '0' + str;
            v.push_back(str);
        }
        return v;
    }
public:
    bool validUtf8(vector<int>& data) {
        vector<string> v = convert(data);
        for(auto i=0; i<v.size(); i++) {
            int ones = 0;
            for(auto &el: v[i]) {
                if(el=='1') ones++;
                else break;
            }
            if(ones == 1) return false;
            if(ones > 4) return false;
            else if(ones>1) {
                for(auto j=1; j<ones; j++) {
                    if(v[i+j].substr(0,2) != "10") return false;
                }
                i += ones - 1;
            }
        }
        return true;
    }
};
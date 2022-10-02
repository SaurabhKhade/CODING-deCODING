class Solution {
    string all_lower(string s) {
        for(auto i=0; i<s.size(); i++) {
            if(s[i]<='Z') {
                s[i] += 32;
            }
        }
        return s;
    }
    string capitalize(string s) {
        if(s[0]>='a') {
            s[0] -= 32;
        }
        for(auto i=1; i<s.size(); i++) {
            if(s[i]<='Z') {
                s[i] += 32;
            }
        }
        return s;
    }
public:
    string capitalizeTitle(string title) {
        int ind = 0, i;
        string ans;
        for(i=0; i<title.size(); i++) {
            if(title[i]==' ') {
                if(i-ind>2) {
                    ans += capitalize(title.substr(ind, i-ind)) + ' ';
                } else {
                    ans += all_lower(title.substr(ind, i-ind)) + ' ';
                }
                ind = i+1;
            }
        }
        if(i-ind>2) {
            ans += capitalize(title.substr(ind, i-ind));
        } else {
            ans += all_lower(title.substr(ind, i-ind));
        }
        return ans;
    }
};
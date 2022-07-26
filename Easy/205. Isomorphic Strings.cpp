class Solution {
public:
    bool isIsomorphic(string s, string t) {
        vector<int> s_code(s.size()), t_code(s.size());
        
        int s_index = 0;
        int t_index = 0;
        
        for(int i=0; i<s.size(); i++) {
            try {
                char s_char = s[i];
                if(s_char=='\0')
                    throw 0;
                for(int j=i; j<s.size(); j++) {
                    if(s_char == s[j]) {
                        s[j] = 0;
                        s_code[j] = s_index;
                    }
                }
                s_index++;
            } catch(...) {}
            
            try {
                char t_char = t[i];
                if(t_char=='\0')
                    throw 0;
                for(int j=i; j<t.size(); j++) {
                    if(t_char == t[j]) {
                        t[j] = 0;                  
                        t_code[j] = t_index;
                    }
                }
                t_index++;
            } catch(...) {}
        }
        
        for(int i=0; i<s.size(); i++) {
            cout<<t_code[i]<<" "<<s_code[i]<<endl;
        }
        
        for(int i=0; i<s.size(); i++) {
            if(s_code[i] != t_code[i]) return false;
        }
        
        
        return true;
    }
};
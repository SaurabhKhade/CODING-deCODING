class Solution {
    double UPPER_LIMIT=pow(2,31)-1, LOWER_LIMIT=pow(2,31);
public:
    int myAtoi(string str) {
        int index = 0;
        double result = 0;
        int multiplier = 1;
        while(index<str.size() && str[index]==' ') index++;
        
        if(str[index] == '+') index++;
        else if(str[index] == '-') {
            multiplier = -1;
            index++;
        }
        
        while(index<str.size()) {
            int number = str[index]-'0';
            if(!(number>=0 && number<=9)) break;
            result = result*10 + number;
            index++;
        }
        
        if(multiplier==1) {
            if(result>UPPER_LIMIT) return UPPER_LIMIT;
            else return result;
        }
        
        if(result>LOWER_LIMIT) return -1*LOWER_LIMIT;
        else return -1*result;
    }
};
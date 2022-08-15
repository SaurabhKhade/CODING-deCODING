class Solution {
public:
    pair<int,string> itor(int n) {
        if(n>=1000) return {1000, "M"};
        else if(n>=900) return {900, "CM"};
        else if(n>=500) return {500, "D"};
        else if(n>=400) return {400, "CD"};
        else if(n>=100) return {100, "C"};
        else if(n>=90) return {90, "XC"};
        else if(n>=50) return {50, "L"};
        else if(n>=40) return {40, "XL"};
        else if(n>=10) return {10, "X"};
        else if(n>=9) return {9, "IX"};
        else if(n>=5) return {5, "V"};
        else if(n>=4) return {4, "IV"};
        else return {1, "I"};
    }

	string intToRoman(int num) {
		string ans = "";
        while(num>0) {
            pair<int,string> pr = itor(num);
            ans += pr.second;
            num -= pr.first;
        }
        
		return ans;
	}
};
class Solution {
public:
    string largestEven(string s) {
       for(int ch=s.length()-1;ch>=0;ch--)
       {
        if(s[ch]=='2')return s.substr(0,ch+1);
       }
       return "";
    }
};
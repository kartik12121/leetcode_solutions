class Solution {
public:
    int romanToInt(string s) {
        map<int,int>mp;
       mp['V']=5;
       mp['I']=1;
       mp['X']=10;
       mp['L']=50;
       mp['C']=100;
       mp['D']=500;
       mp['M']=1000;
       int result=0;
       for(int i=0;i<s.length();i++)
       {
        if(mp[s[i]]<mp[s[i+1]])
        {
            result-=mp[s[i]];
        }
        else
        {
            result+=mp[s[i]];
        }
       }
return result;
    }
};
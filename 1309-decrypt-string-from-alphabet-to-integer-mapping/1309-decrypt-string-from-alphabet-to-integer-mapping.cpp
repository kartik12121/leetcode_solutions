class Solution {
public:
    string freqAlphabets(string s) {
        string result="";
        for(int i=s.length()-1;i>=0;i--)
        {
            if(s[i]=='#')
            {
                int val=(s[i-2]-'0')*10+(s[i-1]-'0');
                result=char('a'+val-1)+result;
                i-=2;
            }
            else
            {
                int val=s[i]-'0';
                result=char('a'+val-1)+result;
            }
        }
        return result;
    }
};
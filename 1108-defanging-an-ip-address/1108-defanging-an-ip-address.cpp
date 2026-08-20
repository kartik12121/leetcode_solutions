class Solution {
public:
    string defangIPaddr(string address) {
        string result="";
        for(char ch:address)
        {
            if(ch=='.')
            {
                result+='[';
                result+=ch;
                result+=']';
            }
            else
            {
                result+=ch;
            }
        }
        return result;
    }
};
class Solution {
public:
    string interpret(string command) {
        string result="";
        for(int i=0;i<command.length();i++)
        {
            if(command[i]=='G'|| command[i]=='a' || command[i]=='l')
            {
                result+=command[i];
            }
            else if(command[i]==')' && command[i-1]=='(')
            {
                result+='o';
            }
        }
        return result;
    }
};
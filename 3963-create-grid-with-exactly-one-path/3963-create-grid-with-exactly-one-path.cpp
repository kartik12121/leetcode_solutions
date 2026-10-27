class Solution {
public:
    vector<string> createGrid(int m, int n) {
        string s(n,'.');
        string s1(n,'#');
        s1[n-1]='.';
        vector<string>answer;
        answer.push_back(s);
        for(int i=1;i<m;i++)answer.push_back(s1);
        return answer;    }
};
class Solution {
public:
    vector<string> findWords(vector<string>& words) {
      vector<string>ans;
      string a="qwertyuiop";
      string b="asdfghjkl";
      string c="zxcvbnm";
      for(auto j:words)
      {
        int i=0;
        bool same=true;
        for(int k=0;k<j.size();k++)
        {
            if(a.contains(tolower(j[k])))
            {
                if(i!=0 && i!=1)
                {
                    same=false;
                    break;
                }
                i=1;
            }
            else if(b.contains(tolower(j[k])))
            {
                if(i!=0 && i!=2)
                {
                    same=false;
                    break;
                }
                i=2;
            }
            else
            {
                if(i!=0 && i!=3)
                {
                    same=false;
                    break;
                }
                i=3;
            }
        }
        if(same==true)
        {
            ans.push_back(j);
        }
      }return ans;
    }
};
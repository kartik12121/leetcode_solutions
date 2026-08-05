class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        string s="123456789";
        vector<int>ans;
        for(int window=2;window<10;window++)
        {
            for(int start=0;start<=s.length()-window;start++)
            {
                int digit=stoi(s.substr(start,window));
                if(digit>=low&& digit<=high)
                {
                    ans.push_back(digit);
                }
            }
        }
        return ans;
    }
};
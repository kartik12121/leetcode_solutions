class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int>freq;
        int result=-1;
        for(int i:arr)
        {
            freq[i]++;
        }
        for(auto a:freq)
        {
            int b=a.first;
            int c=a.second;
            if(b==c)result=max(result,b);
        }
        return result;
    }
};
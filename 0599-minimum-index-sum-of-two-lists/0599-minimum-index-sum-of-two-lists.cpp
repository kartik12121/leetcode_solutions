class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        int minm=INT_MAX;
        map<string,int>mp;
        vector<string>str;
        for(int i=0;i<list1.size();i++)
        {
            mp[list1[i]]=i;
        }
        for(int i=0;i<list2.size();i++)
        {
            
            if(!mp.count(list2[i]))
            {
            }
            else
            {
                int sum = i + mp[list2[i]];
                if (sum < minm) {
                    minm = sum;
                    str.clear();
                    str.push_back(list2[i]);
                } 
                else if (sum == minm) {
                    str.push_back(list2[i]);
            }}
        }
       
        return str;
    }
};
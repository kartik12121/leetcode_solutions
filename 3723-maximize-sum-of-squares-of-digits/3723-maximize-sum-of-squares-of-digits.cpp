class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        string  a="";
        if(sum>num*9)return "";
        while(num>0)
        {
            int s=min(9,sum);
            a+='0'+s;
            sum-=s;
            num--;
        }
        if(sum>0)return "";
        return a;
    }
};
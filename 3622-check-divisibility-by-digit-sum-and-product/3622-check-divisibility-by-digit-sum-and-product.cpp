class Solution {
public:
    bool checkDivisibility(int n) {
        int pro=1;
        int sum=0;
        int temp=n;
        while(temp>0)
        {
            sum+=temp%10;
            pro*=temp%10;
            temp=temp/10;
        }
        pro+=sum;
        return n%pro==0;
    }
};
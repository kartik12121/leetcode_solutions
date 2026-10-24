class Solution {
   
public:
    int todays(string date)
    {
         int arr[]={0,31,59,90,120,151,181,212,243,273,304,334};
        int month=stoi(date.substr(0,2))-1;
        return arr[month]+stoi(date.substr(3,2));
    }
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        string start=max(arriveAlice,arriveBob);
        string end=min(leaveAlice,leaveBob);
        if(start>end)return 0;
        return todays(end)-todays(start)+1;

    }
};
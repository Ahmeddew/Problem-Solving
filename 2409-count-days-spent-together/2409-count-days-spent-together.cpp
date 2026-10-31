class Solution {
private:
    int getDayOfYear(string date) {
        int daysInMonths[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int month = stoi(string{date[0], date[1]});
        int day = stoi(string{date[3], date[4]});
        
        int totalDays = day;
        for (int i = 0; i < month; ++i) {
            totalDays += daysInMonths[i];
        }
        return totalDays;
    }

public:
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        int aliceStart = getDayOfYear(arriveAlice);
        int aliceEnd = getDayOfYear(leaveAlice);
        int bobStart = getDayOfYear(arriveBob);
        int bobEnd = getDayOfYear(leaveBob);
        
        int latestStart = max(aliceStart, bobStart);
        int earliestEnd = min(aliceEnd, bobEnd);
        
        if (latestStart <= earliestEnd) {
            return earliestEnd - latestStart + 1;
        }
        
        return 0;
    }
};
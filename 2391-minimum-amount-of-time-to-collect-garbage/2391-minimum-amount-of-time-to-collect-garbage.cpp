class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int totalTime = 0;
        int lastM = 0, lastP = 0, lastG = 0;

        for (int i = 0; i < garbage.size(); ++i) {
            totalTime += garbage[i].size(); // 1 minute per unit  
        
            for (char ch : garbage[i]) {
                if (ch == 'M') lastM = i;
                else if (ch == 'P') lastP = i;
                else if (ch == 'G') lastG = i;
            }
        }
         
         vector<int> prefTravel(garbage.size(), 0);
        for (int i = 1; i < garbage.size(); ++i) {
            prefTravel[i] = prefTravel[i - 1] + travel[i - 1];
        }
        totalTime += prefTravel[lastM] + prefTravel[lastP] + prefTravel[lastG];

        return totalTime;
    }
};
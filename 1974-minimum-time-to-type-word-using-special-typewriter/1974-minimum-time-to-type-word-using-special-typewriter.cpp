class Solution {
public:
    int minTimeToType(string word) {
        int cnt=0 ;
        char t='a';
        for(int i =0 ;i <word.size();i++) {
            char mn= min(t,word[i]);
            char mx= max(t,word[i]);
            cnt+=min( mx-mn,( mn-mx)+26);
            t=word[i];
        }
        return word.size()+cnt;
    }
};
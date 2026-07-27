class Solution {
public:
    vector<string> reorderLogFiles(vector<string>& logs) {
         stable_sort(logs.begin(), logs.end(), [](const string& a, const string& b) {
    int posa = a.find(' ');
    int posb = b.find(' ');

    string ida = a.substr(0, posa);
    string idb = b.substr(0, posb);

    string contentA = a.substr(posa + 1);
    string contentB = b.substr(posb + 1);

    bool digitA = isdigit(contentA[0]);
    bool digitB = isdigit(contentB[0]);

    if (!digitA && !digitB) {
        if (contentA == contentB)
            return ida < idb;
        return contentA < contentB;
    }

    if (!digitA && digitB) return true;
    if (digitA && !digitB) return false;

    return false;
});
return logs;
    }
};
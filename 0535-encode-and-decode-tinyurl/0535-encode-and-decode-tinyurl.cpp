class Solution {
public:
 
    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        string ans=longUrl;
        ans+="/ii";
        
         return ans; 
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        string ans2="";
        for(int i=0 ;i<shortUrl.size()-3;i++){
            ans2+=shortUrl[i];
        }
        return ans2;
    }
};

 
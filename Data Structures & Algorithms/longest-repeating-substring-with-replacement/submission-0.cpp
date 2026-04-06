class Solution {
public:
    int characterReplacement(string s, int k) {
        int start=0;
        int mostf=1;
        int n=s.size();
        int result=1;
        unordered_map<char,int> hash;
        for(int i=0;i<n;++i) {
            hash[s[i]]++;
            mostf = max(mostf, hash[s[i]]);

            while((i-start+1) - mostf > k) {
                hash[s[start]]--;
                start++;
            }
            result = max(result, i-start+1);
        }

        return result;
    }
};

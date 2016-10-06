class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int arr[26];
        memset(arr,0,sizeof(int)*26);
        for (char ch:magazine) {
            arr[ch - 'a']++;
        }
        for (char ch:ransomNote) {
            if(--arr[ch-'a'] < 0) {
                return false;
            }
        }
        return true;
    }
};

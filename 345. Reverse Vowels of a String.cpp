class Solution {
public:
    string reverseVowels(string s) {
        int start=0,end=s.length()-1;
        char vowels[] = "aeiouAEIOU";
        while(start<end)
        {
            while(start<end&&!strchr(vowels,s[start]))
                start++;
            while(start<end&&!strchr(vowels,s[end]))
                end--;
            swap(s[start],s[end]);
            start++;
            end--;
        }
        return s;
    }
};

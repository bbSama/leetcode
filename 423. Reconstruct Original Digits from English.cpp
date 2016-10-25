class Solution {
public:
    string originalDigits(string s) {
        int dict[26] = {};
        int digit[9] = {};
        for(char ch:s)
            dict[ch-'a']++;
        digit[0] = dict['z'-'a'];
        digit[2] = dict['w'-'a'];
        digit[4] = dict['u'-'a'];
        digit[5] = dict['f'-'a']-digit[4];
        digit[6] = dict['x'-'a'];
        digit[7] = dict['s'-'a']-digit[6];
        digit[8] = dict['g'-'a'];
        digit[9] = dict['i'-'a']-digit[5]-digit[6]-digit[8];
        digit[3] = dict['h'-'a']-digit[8];
        digit[1] = dict['o'-'a']-digit[0]-digit[2]-digit[4];
        string res = "";
        for(int i=0;i<10;i++)
            for(int j=0;j<digit[i];j++)
                res+=('0'+i);
        return res;
    }
};

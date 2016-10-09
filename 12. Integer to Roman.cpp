class Solution {
public:
        /*int dict[256]={0};
        dict['I']=1;dict['X']=10;dict['C']=100;dict['M']=1000;
        dict['V']=5;dict['L']=50;dict['D']=500;*/
    string intToRoman(int num) {
        const string s[4][10]= 
            { 
                {"","I","II","III","IV","V","VI","VII","VIII","IX"},
                {"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"},
                {"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"},
                {"","M","MM","MMM"},
            };
            
        return s[3][num/1000%10] + s[2][num/100%10] + s[1][num/10%10] + s[0][num%10];
    }
};

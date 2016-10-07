class Solution {
public:
    int numOf1(int n)
    {
        int res=0;
        while(n)
        {
            n = n&(n-1);
            res++;
        }
        return res;
    }
    vector<string> readBinaryWatch(int num) {
        vector<string> vec;
        for(int i=0;i<12;i++)
            for(int j=0;j<60;j++)
                if(numOf1(i)+numOf1(j)==num)
                {
                    char tmp[6];
                    sprintf(tmp,"%d:%02d",i,j);
                    vec.push_back(tmp);
                }
        return vec;
    }
};
/*class Solution {
private:
    string hour[5][5] = {{"0"}, 
				   {"1", "2", "4", "8"},
				   {"3", "5", "6", "9", "10"},
				   {"7", "11"}};
	string minute[6][25] = {{"00"}, //1
			             {"01", "02", "04", "08", "16", "32"}, //6
			             {"03", "05", "06", "09", "10", "12", "17", "18", "20", "24", "33", "34", "36", "40", "48"}, //15
			             {"07", "11", "13", "14", "19", "21", "22", "25", "26", "28", "35", "37", "38", "41", "42", "44", "49", "50", "52", "56"}, //20
			             {"15", "23", "27", "29", "30", "39", "43", "45", "46", "51", "53", "54", "57", "58"}, //14
			             {"31", "47", "55", "59"}}; //4
public:
    vector<string> readBinaryWatch(int num) 
    {
        vector<string> vec;
        for (int i = 0; i <= 3 && i <= num; i++) 
        {
            if (num - i <= 5) 
            {
                for (string str1 : hour[i]) 
                {
                    for (string str2 : minute[num - i]) 
                    {
                        if(str1!=""&&str2!="")
                            vec.push_back(str1 + ":" + str2);
                    }
                }
            }
		    }
        return vec;
    }
};*/

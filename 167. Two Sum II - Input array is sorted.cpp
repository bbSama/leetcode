class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        /*for(int i=0; i<numbers.size()-1; i++) 
        {
            int start=i+1, end=numbers.size()-1, gap=target-numbers[i];
            while(start <= end) 
            {
                int m = (start+end)/2;
                if(numbers[m] == gap) return {i+1,m+1};
                else if(numbers[m] > gap) end=m-1;
                else start=m+1;
            }
        }
        return {};*/
        int lo=0, hi=0;
        for(;hi<numbers.size()-1;hi++)
            if(numbers[hi]>target)
                break;
        while (numbers[lo]+numbers[hi]!=target){
            if (numbers[lo]+numbers[hi]<target){
                lo++;
            } else {
                hi--;
            }
        }
        return {lo+1,hi+1};
    }
};

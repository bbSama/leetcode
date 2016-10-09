class Solution {
public:
    int maxProduct(vector<string>& words) {
    	int n = words.size();
    	int *compose = new int[n];
    	memset(compose, 0, sizeof(int)*n);
    	for (int i = 0; i<n; i++)
    	{
    		for (char ch : words[i])
    			compose[i] |= 1<<(ch - 'a');
    	}
    	int res = 0;
    	for (int i = 0; i<n - 1; i++)
    	{
    		for (int j = i+1; j<n; j++)
    		{
    			if ((compose[i] & compose[j]) == 0 && res<words[i].length()*words[j].length())
    				res = words[i].length()*words[j].length();
    		}
    	}
    	return res;
    }
};

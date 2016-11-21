class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        if(board.size()!=9)
            return false;
        for(auto v:board)
        {
            int nums[9] = {};
            if(v.size()!=9)
                return false;
            for(char ch:v)
                if(ch!='.')
                {
                    if(nums[ch-'1']==1)
                        return false;
                    nums[ch-'1']=1;
                }
        }
        for(int i=0;i<9;i++)
        {
            int nums[9] = {};
            for(int j=0;j<9;j++)
            {
                if(board[j][i]!='.')
                {
                    if(nums[board[j][i]-'1']==1)
                        return false;
                    nums[board[j][i]-'1']=1;
                }
            }
        }
        for(int i=0;i<9;i+=3)
            for(int j=0;j<9;j+=3)
            {
                int nums[9] = {};
                for(int k=i;k<i+3;k++)
                    for(int l=j;l<j+3;l++)
                       if(board[k][l]!='.')
                        {
                            if(nums[board[k][l]-'1']==1)
                                return false;
                            nums[board[k][l]-'1']=1;
                        } 
            }
        return true;
    }
};

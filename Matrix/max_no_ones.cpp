class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int maxones=INT_MIN;
        int maxrows=0;
        

        for(int i=0;i<mat.size();i++){
            int numberones=0;
            for(int j=0;j<mat[0].size();j++){
                    numberones+=(mat[i][j]==1);
                    if(numberones>maxones){
                        maxones=numberones;
                        maxrows=i;
                    }
            }
        }
        return {maxrows,maxones};
    }
};

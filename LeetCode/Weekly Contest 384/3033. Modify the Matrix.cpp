class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& m) {
        int row = m.size(), col = m[0].size();
        for(int i=0; i<col; i++){
            int maxAns = -1;
            for(int j=0; j<row; j++){
                if(m[j][i]>maxAns) maxAns = m[j][i];
            }
            
            for(int j=0; j<row; j++){
                if(m[j][i] == -1){
                    m[j][i] = maxAns;
                }
            }
        }
        return m;
    }
};

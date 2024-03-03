class Solution {
public:
    int countSubmatrices(vector<vector<int>>& numberParty, int magicNumber) {
        int rowsOfChaos = numberParty.size(), columnsOfConfusion = numberParty[0].size();
        int g = 0; 
        for (int row = 0; row < rowsOfChaos; row++) {
            for (int col = 1; col < columnsOfConfusion; col++) {
                numberParty[row][col] += numberParty[row][col - 1]; 
            }
        }

        for (int crazyColumnEnd = 0; crazyColumnEnd < columnsOfConfusion; crazyColumnEnd++) {
            int Sum = 0; 
            for (int rowOfMadness = 0; rowOfMadness < rowsOfChaos; rowOfMadness++) {
                Sum += numberParty[rowOfMadness][crazyColumnEnd]; 
                if (Sum <= magicNumber) g++;
            }
        }

        return g; 
    }
};

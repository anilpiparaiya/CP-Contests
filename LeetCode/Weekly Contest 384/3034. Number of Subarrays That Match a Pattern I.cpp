class Solution {
public:
    int countMatchingSubarrays(vector<int>& a, vector<int>& p) {
        int n=a.size(), m=p.size();
        int count = 0;
        
        for(int i=0; i<=n-m-1; ++i){
            bool t = true;
            for(int j=0; j<m; ++j){
                if((p[j]==1 and a[i+j+1]<=a[i+j]) or (p[j] == 0 and a[i+j+1] != a[i+j]) or (p[j] == -1 and a[i+j+1] >= a[i+j])){
                    t=false;
                    break;
                }
            }
            
            if(t) count++;
        }
        
        return count;
    }
};

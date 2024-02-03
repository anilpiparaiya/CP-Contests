
class Solution {
public:
    bool check2(pair<int, int> tl, pair<int, int> br) {
        return tl.first <= br.first && tl.second >= br.second;
    }
    bool check1(pair<int, int> point, pair<int, int> tl, pair<int, int> br) {
        int x = point.first;
        int y = point.second;

        int rect_x1 = tl.first;
        int rect_y1 = tl.second;
        int rect_x2 = br.first;
        int rect_y2 = br.second;

        if (!check2(tl, br)) {
            return false;
        }

        if (rect_x1 <= x && x <= rect_x2 && rect_y1 >= y && y >= rect_y2) {
            return true;
        } else {
            return false;
        }
    }

    int numberOfPairs(vector<vector<int>>& points) {
        vector<vector<int>> v2 = points;
        vector<pair<int,int>> v;
        for(auto it:points){
            v.push_back({it[0],it[1]});
        }
        int n = v.size();
        int result = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==j) {
                    continue;
                }
                if(check2(v[i],v[j])){
                    int f = 1;
                    for(int k=0;k<n;k++){
                        if(k==i || k==j){
                            continue;
                        }
                        if(check1(v[k],v[i],v[j])==1){
                            f = 0;
                            break;
                        }
                    }
                    if(f){
                        result++;
                        cout << i << " " << j << endl;
                    }
                }
            }
        }
        return result;
    }
};
class Solution {
public:
    string lastNonEmptyString(string s) {
        map<char, int>mp1, mp2;
        for(auto c:s) mp1[c]++;
        int maxAns = 0;
        for(auto [a, b]:mp1){
            if(b>maxAns) maxAns = b;
        }
        
        cout<<maxAns<<"\n";
        string res = "";
        int n = s.size();
        for(auto a: mp1){
            if(a.second==maxAns) res+=a.first;
        }
        
        int count = res.size();
        string ans = "";
        for(auto x:res) mp2[x]++;
        for(int i=n-1; i>=0; i--){
            if(res.find(s[i]) != std::string::npos and count>0 and mp2[s[i]]>0){
                ans+=s[i];
                count--;
                mp2[s[i]]--;
            }
        }
        
        reverse(ans.begin(), ans.end());
        return ans;
        
    }
};

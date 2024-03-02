class Solution {
public:
    
    void dfs(int v,int p,vector<pair<int,int>> graph[],int xx,vector<int> &dp,int d){
        if(d!=0 && d%xx==0){
            dp[v]=1;
        }
        for(auto x:graph[v]){
            if(x.first==p) continue;
            dfs(x.first,v,graph,xx,dp,d+x.second);
            dp[v]+=dp[x.first];
        }
        
        
    }
    
    
    vector<int> countPairsOfConnectableServers(vector<vector<int>>& edges, int signalSpeed) {
        int n = edges.size()+1;
        vector<pair<int,int>> g[n+1];
        for(auto i:edges){
            int x=i[0];
            int y=i[1];
            int wt=i[2];
            g[x].push_back({y,wt});
            g[y].push_back({x,wt});
        }
        vector<int> dp(n+1,0);
        vector<int> ans(n,0);
        for(int i=0;i<n;i++){
            dfs(i,-1,g,signalSpeed,dp,0);
            int sum=0;
            int count=0;
           
            for(auto child:g[i]){
              
                sum+=dp[child.first];
            }
            
            for(auto child:g[i]){
                count+=(sum-dp[child.first])*dp[child.first];
            }
            ans[i]=count/2;
            for(int j=0;j<n;j++){
                dp[j]=0;
            }
        }
        return ans;

        
        
    }
};

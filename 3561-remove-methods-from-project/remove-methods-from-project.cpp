class Solution {
public:
    vector<int> remainingMethods(int n, int k, vector<vector<int>>& invocations) {
        vector<vector<int>> ui(n);
        vector<int> InDegree(n,0);
        vector<bool> suspicious(n,false);

        for(auto& edge:invocations){
            int u=edge[0];
            int v=edge[1];
            ui[u].push_back(v);
            InDegree[v]++;

        }
        //BFS
        queue<int> que;
        que.push(k);
        suspicious[k]=true;

        while(!que.empty()){
            int curr=que.front();
            que.pop();
            for(int &ng :ui[curr]){
                InDegree[ng]--;
                if(!suspicious[ng]){
                    que.push(ng);
                    suspicious[ng]=true;
                }
            }

        }
        vector<int> result;
        bool cannotRemove=false;
        for(int i=0;i<n;i++){
            if(suspicious[i] && InDegree[i]>0){
                cannotRemove=true;
                break;
            }
            if(!suspicious[i]){
                result.push_back(i);
            }
        }
        if(cannotRemove){
            vector<int> vec(n);
            for(int i=0;i<n;i++){
                vec[i]=i;
            }
            return vec;
        }
        return result;

        
    }
};
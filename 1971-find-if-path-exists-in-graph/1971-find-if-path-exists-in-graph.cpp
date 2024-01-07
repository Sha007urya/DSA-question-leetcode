class Solution {
public:
    void dfs(int node,unordered_map<int,vector<int>>& matrix,int n,unordered_set<int>& visited){
    if(visited.find(node)!=visited.end()){
        return;
    }
        visited.insert(node);
        for(auto it:matrix[node]){
            dfs(it,matrix,n,visited);
        }

    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        unordered_map<int,vector<int>> matrix;
        for(int i=0;i<edges.size();i++){
         int a=edges[i][0];
         int b=edges[i][1];
         matrix[a].push_back(b);
         matrix[b].push_back(a);
        }
        unordered_set<int> visited;
  dfs(source,matrix,n,visited);
     if(visited.find(destination)!=visited.end()){
         return true;
     }
        else{
            return false;
        }
        
        
    }
};
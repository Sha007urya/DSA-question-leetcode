class Solution {
public:
    bool closeStrings(string word1, string word2) {
        int n=word1.size();
        int m=word2.size();
        if(n!=m){
            return false;
        }
        map<char,int> mp1;
        map<char,int> mp2;
        for(int i=0;i<n;i++){
            mp1[word1[i]]++;
        }
          for(int i=0;i<m;i++){
            mp2[word2[i]]++;
        }
      vector<int> num1;
        vector<int> num2;
        string check1="";
        string check2="";
        for(auto it:mp1){
            num1.push_back(it.second);
            check1.push_back(it.first);
            
        }
          for(auto it:mp2){
            num2.push_back(it.second);
            check2.push_back(it.first);
        }
        sort(num1.begin(),num1.end());
        sort(num2.begin(),num2.end());
        sort(check1.begin(),check1.end());
        sort(check2.begin(),check2.end());
        
        for(int i=0;i<num1.size();i++){
            if(num1[i]!=num2[i]){
                return false;
            }
        }
        if(check1==check2){
            return true;
        }
        else{
            return false;
        }
        
    }
};
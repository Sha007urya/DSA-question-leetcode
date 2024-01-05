class Solution {
public:
string solve(int &i,string &s){
string ans="";
while(i<s.length() && s[i]!=']'){
    if(!isdigit(s[i])){
        ans.push_back(s[i++]);
    }
    else{
        int num=0;
        while(i<s.length() && isdigit(s[i]) ){
            num=num*10+(s[i++]-'0');
        }
        i++;
        string repeat=solve(i,s);
        i++;
        while(num--){
            ans+=repeat;
        }
    }
}
return ans;
}
    string decodeString(string s) {
        int i=0;
        return solve(i,s);
    }
};
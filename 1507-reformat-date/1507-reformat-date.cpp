class Solution {
public:
    string reformatDate(string date) {
        vector<string> vs={"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
        unordered_map<string,int> um;
        for(int i=0;i<vs.size();i++){
            um[vs[i]]=i+1;
        }
        if(date.length()==13){
            string d="";
              d.push_back(date[0]);
            d.push_back(date[1]);
            string m="";
            m=date.substr(5,3);
            string month=to_string(um[m]);
            string year="";
             year=date.substr(9,12);
            string ans="";
            ans=ans+year;
            ans.push_back('-');
         if(month.size()==1){
                ans.push_back('0');
         }
            ans=ans+month;
            ans.push_back('-');
            ans=ans+d;
            return ans;

        }
        else{
            string d="";
              d.push_back('0');
            d.push_back(date[0]);
          
            string m="";
            m=date.substr(4,3);
            string month=to_string(um[m]);
            string year="";
             year=date.substr(8,11);
            string ans="";
            ans=ans+year;
            ans.push_back('-');
                   if(month.size()==1){
                ans.push_back('0');
         }
            ans=ans+month;
            ans.push_back('-');
            ans=ans+d;
            return ans;

        }
        return "";

    }
};
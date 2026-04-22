class Solution {
public:
    vector<string> twoEditWords(vector<string>& queries, vector<string>& dictionary) {
        vector<string> res;
            for(string s:queries){
                for(string q: dictionary){
                    int diff=0;
                    for(int i=0; i<q.size(); i++){
                        if(q[i]!=s[i]) diff++;
                        // if(diff>2) 
                    }
                    if(diff<=2){
                        res.push_back(s);
                        break;
                    } 
                    // break;
                }
            }
            return res;
    }
};
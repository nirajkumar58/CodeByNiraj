class Solution {
public:
    vector<string> reorderLogFiles(vector<string>& logs) {
        int n=logs.size();
        vector<string> vps;

        for(int i=0; i<n; i++){
            int idx=0;
            while(logs[i][idx]!=' ') idx++;
            idx++;

            if(logs[i][idx]>='a' && logs[i][idx]<='z'){
                vps.push_back(logs[i]);
            }
        }

        sort(vps.begin(), vps.end(), [](string a, string b){
            int idx1=0, idx2=0;
            while(a[idx1]!=' ') idx1++;
            idx1++;
            
            while(b[idx2]!=' ') idx2++;
            idx2++;
            
            string temp1=a.substr(idx1);
            string temp2=b.substr(idx2);
            
            string idn1=a.substr(0,idx1);
            string idn2=b.substr(0,idx2);
            
            if(temp1==temp2){
                return idn1<idn2;
            }
            
            return temp1<temp2;
        });

        vector<string> ans;

        for(int i=0; i<vps.size(); i++){
            ans.push_back(vps[i]);
        }

        for(int i=0; i<n; i++){
            int idx=0;
            while(logs[i][idx]!=' ') idx++;
            idx++;

            if(logs[i][idx]>='0' && logs[i][idx]<='9'){
                ans.push_back(logs[i]);
            }
        }

        return ans;
    }
};
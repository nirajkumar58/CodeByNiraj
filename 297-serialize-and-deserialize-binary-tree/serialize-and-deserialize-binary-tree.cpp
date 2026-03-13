/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:
    void solve(TreeNode* root,string &str){
        
        if(!root){
            str+="N,";
            return;
        }
        str+=to_string(root->val)+",";
        solve(root->left,str);
        solve(root->right,str);
    }
    string serialize(TreeNode* root) {
        string str="";
        solve(root,str);
        return str;
    }


    TreeNode* buildtree(string & data,int &i){
        if(data[i]=='N'){
            i+=2;
            return NULL ;
        }
        string num="";
        while(data[i]!=','){
            num+=data[i++]; 
        }
        i++;
        TreeNode* node=new TreeNode(stoi(num));
        node->left=buildtree(data,i);
        node->right=buildtree(data,i);
        return node;
        
    }
    TreeNode* deserialize(string data) {
        int i=0;
        return buildtree(data,i);
    }
};
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*> q;
        vector<vector<int>> ans;
        if(!root) return ans;
        q.push(root);
        
        while(!q.empty()){
            int QSize = q.size();
            
            vector<int> level;
            while(QSize-- > 0){
                TreeNode* cur = q.front(); q.pop();
                level.push_back(cur->val);
                
                if(cur->left) q.push(cur->left);
                if(cur->right) q.push(cur->right);
            }
            ans.push_back(level);
        }
        return ans;
    }
};
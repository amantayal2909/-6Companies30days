class Solution
{
    vector<int> v;
    public:
    //Function to serialize a tree and return a list containing nodes of tree.
    
    vector<int> serialize(Node *root) 
    {
        //Your code here
      //I have used level order traversal.
       vector<int> v;
       if(root==NULL)
       {
           v.push_back(-1);
           return v;
       }
       queue <Node*> q;
       q.push(root);
       v.push_back(q.front()->data);
       while(!q.empty())
       {
           if(q.front()->left)
           {
               v.push_back(q.front()->left->data);
               q.push(q.front()->left);
           }
           else v.push_back(-1);
           if(q.front()->right)
           {
               v.push_back(q.front()->right->data);
               q.push(q.front()->right);
           }
           else v.push_back(-1);
           q.pop();
       }
       return v;
    }
    
    //Function to deserialize a list and construct the tree.
    Node * deSerialize(vector<int> &A)
    {
       //Your code here
       if(A.size()<=0)
       return NULL;
       if(A[0]==-1)
       return NULL;
       Node* root=new Node(A[0]);
       queue<Node *> q;
       q.push(root);
       int i=1;
       while(!q.empty())
       {
           Node *temp=q.front();
           q.pop();
           if(A[i]==-1)
           {
               temp->left=NULL;
               i++;
           }
           else {
               Node *templeft = new Node(A[i]);
               temp->left=templeft;
               q.push(templeft);
               i++;
           }
           if(A[i]==-1)
           {
               temp->right=NULL;
               i++;
           }
            else {
               Node *tempright = new Node(A[i]);
               temp->right=tempright;
               q.push(tempright);
               i++;
           }
       }
       return root;    
    }
};

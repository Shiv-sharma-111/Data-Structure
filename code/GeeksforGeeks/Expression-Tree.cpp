int Eval_State(int a, string Op, int b)
{
  if(Op=="+") return a+b;
  if(Op=="-") return a-b;
  if(Op=="*") return a*b;
  if(Op=="/") return a/b;
  return 0;
}

bool Check_Op(string Op)
{
  if(Op=="+" || Op=="-" || Op=="*" || Op=="/") return true;
  return false;
}

int evalTree(node* root)
{
  if(!root) return 0;
  if(Check_Op(root->data)) return Eval_State(evalTree(root->left), root->data, evalTree(root->right));
  return stoi(root->data);
}

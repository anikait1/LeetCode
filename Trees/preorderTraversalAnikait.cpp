#include <vector>
#include <stack>

struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;

  TreeNode(int val)
    : val(val), left(nullptr), right(nullptr)
  {

  }
};

std::vector<int> preorderTraversal(TreeNode *root) {
  std::vector<int> result;
  std::stack<TreeNode*> stack;
  TreeNode *curr = root;

  while (curr != nullptr || !stack.empty()) {
    while (curr) {
      result.push_back(curr->val);
      stack.push(curr);
      curr = curr->left;
    }
    
    curr = stack.top();
    stack.pop();
    
    curr = curr->right;
  }

  return result;
}

int main() {
  return 0;
}
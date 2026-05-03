# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def goodNodes(self, root: TreeNode) -> int:
        def dfs(cur,mx):
            if not cur:
                return 0
            count = 0
            if cur.val >= mx:
                count = 1
                mx = cur.val
            count += dfs(cur.left,mx)
            count += dfs(cur.right,mx)
            return count

        return dfs(root,root.val)
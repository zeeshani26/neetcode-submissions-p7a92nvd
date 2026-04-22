# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def invertTree(self, root: Optional[TreeNode]) -> Optional[TreeNode]:
        ans = []
        def reverse(curr):
            if curr == None:
                return
            
            temp = curr.left
            curr.left = curr.right
            curr.right = temp
            ans.append(curr.val)
            reverse(curr.left)
            reverse(curr.right)

        
        reverse(root)

        return root
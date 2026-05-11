# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def isValidBST(self, root: Optional[TreeNode]) -> bool:
        

        def validTree(node, leftBound, rightBound):
            if not node:
                return True

            if not (node.val < rightBound and node.val > leftBound):
                return False

            return (validTree(node.left, leftBound, node.val) and
            # Every value on left should be less than its parents
            validTree(node.right, node.val, rightBound) )

            

        return validTree(root, float("-inf"), float("inf"))
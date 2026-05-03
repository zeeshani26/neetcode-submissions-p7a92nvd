# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def levelOrder(self, root: Optional[TreeNode]) -> List[List[int]]:
        if not root:
            return []
        cur = root
        q = deque()
        q.append(cur)
        ans = []
        while q:
            l = []
            qlen = len(q)
            for i in range(qlen):
                node = q.popleft()
                l.append(node.val)
                # This is what is taking my traversal to next level
                if node.left:
                    q.append(node.left)
                if node.right:
                    q.append(node.right)
            if l:
                ans.append(l)

        return ans
                

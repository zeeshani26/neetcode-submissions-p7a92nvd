"""
# Definition for a Node.
class Node:
    def __init__(self, val: Optional[int] = None, children: Optional[List['Node']] = None):
        self.val = val
        self.children = children
"""

class Solution:
    def postorder(self, root: 'Node') -> List[int]:
        res = []

        def postorder(curr):
            if curr == None:
                return

            for c in curr.children:
                postorder(c)
            res.append(curr.val)

        postorder(root)
        return res
        
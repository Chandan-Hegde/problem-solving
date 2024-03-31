#Binary tree right side view

#Given the root of a binary tree, imagine yourself standing on the right side of it, return the values of the nodes you can see ordered from top to bottom.



# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def rightSideView(self, root):
        """
        :type root: TreeNode
        :rtype: List[int]
        """

        # BFS approach 

        results = []
        q = collections.deque()

        #first I'll append the root into the queue
        if root:
            q.append(root)
        
        #Till my queue is empty
        while q:
            level_size = len(q)

            #for all the elements in that level
            for _ in range(level_size):
                node = q.popleft()
                val = node.val

                #Now I need to add the children of that element into the queue as they will be part of next level
                if node.left:
                    q.append(node.left)
                if node.right:
                    q.append(node.right)
            
            #Now after working on all elements in that level of the tree - last val is the right most one.
            results.append(val)

        return results

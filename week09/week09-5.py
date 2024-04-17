class Solution:
    def smallestFromLeaf(self, root: Optional[TreeNode]) -> str:
        table="abcdefghijklmnopqrstuvwxyz"
        def helper(root,nowStr):
          #  if root==None: return nowStr
            nextStr=table[root.val]+nowStr
            if root.left==None and root.right==None:return nextStr
            if root.left==None:return helper(root.right,nextStr)
            if root.right==None:return helper(root.left,nextStr)

            left=helper(root.left,nextStr)
            right=helper(root.right,nextStr)
            if left=="":return right
            if right=="":return left
            return min(left,right)
        #print("table[0] is",table[0])
        #print("table[25] is",table[25])
        return helper(root, '')
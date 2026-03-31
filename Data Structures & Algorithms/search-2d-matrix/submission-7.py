class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        rows, cols = len(matrix), len(matrix[0])
        # 1. Binary Search to find the correct ROW
        top, bot = 0, rows - 1
        while top <= bot:
            row = (top + bot) // 2
            if target > matrix[row][-1]:
                top = row + 1
            elif target < matrix[row][0]:
                bot = row - 1
            else:
                break
        
        # If the search pointers cross, the target is out of range
        # if not (top <= bot):
        #     return False
            
        # 2. Binary Search within the identified ROW
        # Notice we use matrix[row][mid] now
        l, r = 0, cols - 1
        while l <= r:
            mid = (l + r) // 2
            if matrix[row][mid] == target: # Use 'row' from the first loop
                return True
            elif matrix[row][mid] > target:
                r = mid - 1
            else:
                l = mid + 1

        return False
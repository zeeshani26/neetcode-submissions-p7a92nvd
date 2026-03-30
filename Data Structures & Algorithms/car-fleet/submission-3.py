class Solution:
    def carFleet(self, target: int, position: List[int], speed: List[int]) -> int:
        
        pair = [(p,s) for p, s in zip(position,speed)]
        # This sorts by position (p) because it's the first element in the tuple
        pair.sort(reverse=True)
        stack = []
        for p,s in pair:
            d = target - p
            t = d/s
            if len(stack) == 0 or stack[-1] < t:
                stack.append(t)
            
        
        return len(stack)
        
        
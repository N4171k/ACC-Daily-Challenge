#User function Template for python3

class Solution:
    def segregateElements(self, arr):
        temp = [0] * len(arr)
        index = 0
    
        for i in range(len(arr)):
            if arr[i] >= 0:
                temp[index] = arr[i]
                index += 1
        
        for i in range(len(arr)):
            if arr[i] < 0:
                temp[index] = arr[i]
                index += 1
    
        arr[:] = temp[:]

            
            
        

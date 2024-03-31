#Kth largest element in an array

class Solution(object):
    def findKthLargest(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: int
        """
        self.minHeap = nums
        self.k = k

        heapq.heapify(self.minHeap)

        while len(self.minHeap) >= k:
            kth_largest = heapq.heappop(self.minHeap)
        
        return kth_largest

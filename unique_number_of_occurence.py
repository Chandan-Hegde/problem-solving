class Solution(object):
    def uniqueOccurrences(self, arr):
        """
        :type arr: List[int]
        :rtype: bool
        """
        hashMap = defaultdict(int)

        for i in arr:
            hashMap[i] += 1

        seen_values = set()
        for value in hashMap.values():
            if value in seen_values:
                return False
            seen_values.add(value)
        return True

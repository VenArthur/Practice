# SUCCESS!!!
# nums is a list and target is an int
def twoSum(nums, target):
    """
        :type self: is self
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
    """
    # self.nums = nums
    # self.target = target

    result = []  # result to return
    search = []   # sliced list of nums to look through

    currentIndex = 0

    for i in nums:
         numberToFind = target - i
         nextIndex = currentIndex + 1

         search = nums[nextIndex:]

         try:
             search.index(numberToFind)
         except:
             currentIndex += 1
             continue
         else:
             index = search.index(numberToFind)
             index += nextIndex

             result.append(currentIndex)
             result.append(index)
             break


    return result


givenNums = [1, 2, 3, 4]
target = 5

print(twoSum(givenNums, target))


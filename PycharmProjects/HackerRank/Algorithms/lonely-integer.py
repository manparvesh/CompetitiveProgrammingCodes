__author__ = 'Man Parvesh'

def lonelyInteger(nums):
    ans = 0
    for num in nums:
        ans ^= num
    return ans

n = int(raw_input())
nums = map(int, raw_input().strip().split(" "))

print lonelyInteger(nums)
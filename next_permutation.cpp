def next_permutation(nums):
    n = len(nums)
    i = n - 2

    # Find the first index 'i' such that nums[i] < nums[i + 1]
    while i >= 0 and nums[i] >= nums[i + 1]:
        i -= 1

    # If such an index exists, find index 'j' to swap with
    if i >= 0:
        j = n - 1
        while j >= 0 and nums[j] <= nums[i]:
            j -= 1
        # Swap nums[i] and nums[j]
        nums[i], nums[j] = nums[j], nums[i]

    # Reverse the subarray from i + 1 to end
    nums[i + 1:] = reversed(nums[i + 1:])

def print_array(arr):
    print(" ".join(map(str, arr)))

def main():
    nums = [1, 2, 3]

    print("Original array:", end=" ")
    print_array(nums)

    next_permutation(nums)

    print("Next permutation:", end=" ")
    print_array(nums)

if __name__ == "__main__":
    main()

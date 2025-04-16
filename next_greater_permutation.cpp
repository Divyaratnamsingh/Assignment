def next_permutation(nums):
    n = len(nums)
    k = -1

    # Find the largest index k such that nums[k] < nums[k + 1]
    for i in range(n - 2, -1, -1):
        if nums[i] < nums[i + 1]:
            k = i
            break

    # If no such index is found, the current permutation is the largest
    if k == -1:
        nums.reverse()
        return

    # Find the largest index l such that nums[k] < nums[l]
    for i in range(n - 1, k, -1):
        if nums[i] > nums[k]:
            l = i
            break

    # Swap nums[k] and nums[l]
    nums[k], nums[l] = nums[l], nums[k]

    # Reverse the sequence from nums[k + 1] to the end
    nums[k + 1:] = reversed(nums[k + 1:])

def main():
    n = int(input("Enter the number of elements: "))
    nums = list(map(int, input("Enter the elements: ").split()))

    next_permutation(nums)

    print("The next permutation is:", *nums)

if __name__ == "__main__":
    main()

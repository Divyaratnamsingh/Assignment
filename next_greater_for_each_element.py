def next_greater_element(nums):
    n = len(nums)
    result = [-1] * n
    stack = []

    for i in range(n):
        while stack and nums[stack[-1]] < nums[i]:
            index = stack.pop()
            result[index] = nums[i]
        stack.append(i)

    return result

def main():
    nums = [4, 5, 2, 10, 8]
    result = next_greater_element(nums)
    print("Next greater element for each element:", result)

if __name__ == "__main__":
    main()

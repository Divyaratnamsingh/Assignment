def generate_subsets(nums, current, result, index):
    result.append(current[:])  # Add the current subset to the result
    for i in range(index, len(nums)):
        # Skip duplicates to ensure unique subsets
        if i > index and nums[i] == nums[i - 1]:
            continue
        current.append(nums[i])
        generate_subsets(nums, current, result, i + 1)
        current.pop()

def subsets_with_dup(nums):
    result = []
    nums.sort()  # Sort the array to handle duplicates
    generate_subsets(nums, [], result, 0)
    return result

def print_subsets(subsets):
    for subset in subsets:
        print("[", " ".join(map(str, subset)), "]")

def main():
    nums = [1, 2, 2]
    print("All subsets:")
    result = subsets_with_dup(nums)
    print_subsets(result)

if __name__ == "__main__":
    main()

def generate_permutations(nums, current, used, result):
    if len(current) == len(nums):
        result.append(current[:])
        return

    for i in range(len(nums)):
        if used[i] or (i > 0 and nums[i] == nums[i - 1] and not used[i - 1]):
            continue

        used[i] = True
        current.append(nums[i])
        generate_permutations(nums, current, used, result)
        used[i] = False
        current.pop()

def permute_unique(nums):
    result = []
    nums.sort()
    used = [False] * len(nums)
    generate_permutations(nums, [], used, result)
    return result

def print_permutations(permutations):
    for perm in permutations:
        print("[", " ".join(map(str, perm)), "]")

def main():
    nums = [1, 1, 2]
    print("All unique permutations:")
    result = permute_unique(nums)
    print_permutations(result)

if __name__ == "__main__":
    main()

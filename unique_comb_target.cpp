def find_combinations(candidates, target, current, result, index):
    if target == 0:
        result.append(list(current))
        return

    for i in range(index, len(candidates)):
        if candidates[i] <= target:
            current.append(candidates[i])
            find_combinations(candidates, target - candidates[i], current, result, i)
            current.pop()

def combination_sum(candidates, target):
    result = []
    current = []
    find_combinations(candidates, target, current, result, 0)
    return result

def print_combinations(combinations):
    for combo in combinations:
        print("[", " ".join(map(str, combo)), "]")

if __name__ == "__main__":
    candidates = [2, 3, 6, 7]
    target = 7

    result = combination_sum(candidates, target)

    print(f"Unique combinations that sum to {target}:")
    print_combinations(result)

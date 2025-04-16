def prefix_sum(arr):
    n = len(arr)
    prefix = [0] * n
    prefix[0] = arr[0]
    for i in range(1, n):
        prefix[i] = prefix[i - 1] + arr[i]
    return prefix

def range_sum(prefix, L, R):
    if L == 0:
        return prefix[R]
    else:
        return prefix[R] - prefix[L - 1]

def main():
    arr = [2, 4, 7, 3, 8, 1]
    L = 1
    R = 4
    prefix = prefix_sum(arr)
    sum_in_range = range_sum(prefix, L, R)

    print(f"Sum of elements from index {L} to {R} is: {sum_in_range}")

if __name__ == "__main__":
    main()

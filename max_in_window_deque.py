from collections import deque

def max_sliding_window(nums, k):
    result = []
    dq = deque()

    for i in range(len(nums)):
        # Remove indices out of the current window
        if dq and dq[0] <= i - k:
            dq.popleft()

        # Remove smaller values as they are not useful
        while dq and nums[dq[-1]] < nums[i]:
            dq.pop()

        dq.append(i)

        # Start recording results once the first window is complete
        if i >= k - 1:
            result.append(nums[dq[0]])

    return result

def main():
    nums = [1, 3, -1, -3, 5, 3, 6, 7]
    k = 3
    result = max_sliding_window(nums, k)
    print(f"Maximums in each sliding window of size {k}: {' '.join(map(str, result))}")

if __name__ == "__main__":
    main()

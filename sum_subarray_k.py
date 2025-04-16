def max_sum_subarray(arr, K):
    n = len(arr)

    if n < K:
        print("Error: K cannot be greater than the size of the array.")
        return -1

    # Calculate the sum of the first K elements
    window_sum = sum(arr[:K])
    max_sum = window_sum

    # Slide the window and update the sum
    for i in range(K, n):
        window_sum = window_sum - arr[i - K] + arr[i]
        max_sum = max(max_sum, window_sum)

    return max_sum

def main():
    n = int(input("Enter the size of the array: "))
    K = int(input("Enter the value of K: "))

    arr = list(map(int, input(f"Enter {n} elements:\n").split()))

    result = max_sum_subarray(arr, K)

    if result != -1:
        print(f"The maximum sum of any subarray of size {K} is: {result}")

if __name__ == "__main__":
    main()

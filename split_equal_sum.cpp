def can_be_split_equally(arr):
    total_sum = sum(arr)
    left_sum = 0

    for i in range(len(arr) - 1):
        left_sum += arr[i]
        right_sum = total_sum - left_sum
        if left_sum == right_sum:
            return True

    return False

def main():
    n = int(input("Enter the size of the array: "))
    arr = list(map(int, input(f"Enter {n} elements:\n").split()))

    if can_be_split_equally(arr):
        print("Yes, the array can be split into two parts with equal sum.")
    else:
        print("No, the array cannot be split into two parts with equal sum.")

if __name__ == "__main__":
    main()

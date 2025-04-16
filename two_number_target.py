def find_two_sum(arr, target):
    left = 0
    right = len(arr) - 1

    while left < right:
        current_sum = arr[left] + arr[right]

        if current_sum == target:
            print(f"Pair found: ({arr[left]}, {arr[right]})")
            return True
        elif current_sum < target:
            left += 1
        else:
            right -= 1

    return False

def main():
    n = int(input("Enter the size of the array: "))
    target = int(input("Enter the target sum: "))

    arr = list(map(int, input(f"Enter {n} sorted elements:\n").split()))

    if not find_two_sum(arr, target):
        print("No pair found that adds up to the target.")

if __name__ == "__main__":
    main()

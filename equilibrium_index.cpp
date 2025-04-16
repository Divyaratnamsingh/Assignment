def find_equilibrium_index(arr):
    total_sum = sum(arr)
    left_sum = 0

    for i in range(len(arr)):
        right_sum = total_sum - left_sum - arr[i]
        if left_sum == right_sum:
            return i
        left_sum += arr[i]

    return -1

def main():
    n = int(input("Enter the size of the array: "))
    arr = list(map(int, input(f"Enter {n} elements:\n").split()))
    index = find_equilibrium_index(arr)

    if index != -1:
        print(f"Equilibrium index found at position: {index}")
    else:
        print("No equilibrium index found.")

if __name__ == "__main__":
    main()

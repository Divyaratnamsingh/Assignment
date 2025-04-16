def find_majority_element(arr):
    candidate = -1
    count = 0

    for num in arr:
        if count == 0:
            candidate = num
        count += 1 if num == candidate else -1

    count_candidate = sum(1 for num in arr if num == candidate)

    if count_candidate > len(arr) // 2:
        return candidate
    else:
        return -1

def main():
    n = int(input("Enter the size of the array: "))
    arr = list(map(int, input(f"Enter {n} elements:\n").split()))

    result = find_majority_element(arr)

    if result == -1:
        print("No majority element found.")
    else:
        print(f"The majority element is: {result}")

if __name__ == "__main__":
    main()

def count_ones_in_binary(num):
    count = 0
    while num > 0:
        num = num & (num - 1)
        count += 1
    return count

def count_total_ones(n):
    total_count = 0
    for i in range(n + 1):
        total_count += count_ones_in_binary(i)
    return total_count

def main():
    n = int(input("Enter a number n: "))
    result = count_total_ones(n)
    print(f"The total number of 1s in binary representation from 0 to {n} is: {result}")

if __name__ == "__main__":
    main()


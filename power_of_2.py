def is_power_of_two(num):
    # A number is a power of two if it's greater than 0 and has exactly one bit set
    return num > 0 and (num & (num - 1)) == 0

def main():
    num = int(input("Enter a number: "))
    if is_power_of_two(num):
        print(f"{num} is a power of two.")
    else:
        print(f"{num} is not a power of two.")

if __name__ == "__main__":
    main()

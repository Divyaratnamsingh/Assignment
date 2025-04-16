def is_palindrome(num):
    # Edge case: negative numbers are not palindromes
    if num < 0:
        return False

    # Single digit numbers are always palindromes
    if 0 <= num < 10:
        return True

    original = num
    reversed_half = 0

    # Reverse the second half of the number
    while num > reversed_half:
        reversed_half = reversed_half * 10 + num % 10
        num //= 10

    # Check for both even and odd length numbers
    return num == reversed_half or num == reversed_half // 10

def main():
    num = int(input("Enter a number: "))
    if is_palindrome(num):
        print(f"{num} is a palindrome.")
    else:
        print(f"{num} is not a palindrome.")

if __name__ == "__main__":
    main()

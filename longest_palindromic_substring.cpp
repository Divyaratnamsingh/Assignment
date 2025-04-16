def expand_around_center(s, left, right):
    while left >= 0 and right < len(s) and s[left] == s[right]:
        left -= 1
        right += 1
    return right - left - 1

def longest_palindrome(s):
    if not s:
        return ""

    start = 0
    max_length = 1

    for i in range(len(s)):
        len1 = expand_around_center(s, i, i)
        len2 = expand_around_center(s, i, i + 1)
        length = max(len1, len2)

        if length > max_length:
            max_length = length
            start = i - (length - 1) // 2

    return s[start:start + max_length]

def main():
    s = input("Enter a string: ")
    result = longest_palindrome(s)
    print("The longest palindromic substring is:", result)

if __name__ == "__main__":
    main()

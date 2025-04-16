def longest_unique_substring(s):
    char_set = set()
    left = 0
    max_length = 0

    for right in range(len(s)):
        while s[right] in char_set:
            char_set.remove(s[left])
            left += 1
        char_set.add(s[right])
        max_length = max(max_length, right - left + 1)

    return max_length

def main():
    s = input("Enter a string: ")
    result = longest_unique_substring(s)
    print("The length of the longest substring without repeating characters is:", result)

if __name__ == "__main__":
    main()

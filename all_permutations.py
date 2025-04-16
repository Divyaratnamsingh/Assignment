def generate_permutations(s, start, result):
    if start == len(s):
        result.append("".join(s))
        return

    for i in range(start, len(s)):
        s[start], s[i] = s[i], s[start]
        generate_permutations(s, start + 1, result)
        s[start], s[i] = s[i], s[start]

def main():
    s = input("Enter a string: ")
    char_list = list(s)
    result = []
    generate_permutations(char_list, 0, result)

    print("All permutations are:")
    for perm in result:
        print(perm)

if __name__ == "__main__":
    main()

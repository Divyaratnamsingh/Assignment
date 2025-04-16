def longest_common_prefix(strs):
    if not strs:
        return ""
    
    prefix = strs[0]
    
    for i in range(1, len(strs)):
        while not strs[i].startswith(prefix):
            prefix = prefix[:-1]
            if not prefix:
                return ""
    
    return prefix

def main():
    n = int(input("Enter the number of strings: "))
    strs = []

    print(f"Enter {n} strings:")
    for _ in range(n):
        strs.append(input())

    result = longest_common_prefix(strs)
    
    if not result:
        print("There is no common prefix.")
    else:
        print("The longest common prefix is:", result)

if __name__ == "__main__":
    main()

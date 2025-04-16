def find_max_frequency_element(nums):
    freq_map = {}

    for num in nums:
        freq_map[num] = freq_map.get(num, 0) + 1

    max_freq = 0
    max_element = -1
    for key, value in freq_map.items():
        if value > max_freq:
            max_freq = value
            max_element = key

    return max_element

def main():
    nums = [1, 3, 2, 3, 3, 1, 4]
    result = find_max_frequency_element(nums)
    print(f"Element with maximum frequency: {result}")

if __name__ == "__main__":
    main()

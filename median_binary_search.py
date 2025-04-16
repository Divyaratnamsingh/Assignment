import sys

def find_median_sorted_arrays(nums1, nums2):
    # Ensure nums1 is the smaller array
    if len(nums1) > len(nums2):
        nums1, nums2 = nums2, nums1

    n, m = len(nums1), len(nums2)
    low, high = 0, n

    while low <= high:
        partition1 = (low + high) // 2
        partition2 = (n + m + 1) // 2 - partition1

        max_left1 = -sys.maxsize if partition1 == 0 else nums1[partition1 - 1]
        min_right1 = sys.maxsize if partition1 == n else nums1[partition1]

        max_left2 = -sys.maxsize if partition2 == 0 else nums2[partition2 - 1]
        min_right2 = sys.maxsize if partition2 == m else nums2[partition2]

        if max_left1 <= min_right2 and max_left2 <= min_right1:
            if (n + m) % 2 == 1:
                return max(max_left1, max_left2)
            else:
                return (max(max_left1, max_left2) + min(min_right1, min_right2)) / 2
        elif max_left1 > min_right2:
            high = partition1 - 1
        else:
            low = partition1 + 1

    return 0.0

def main():
    nums1 = [1, 3]
    nums2 = [2]

    median = find_median_sorted_arrays(nums1, nums2)
    print(f"The median is: {median}")

if __name__ == "__main__":
    main()

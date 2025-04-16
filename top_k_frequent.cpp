from collections import Counter
import heapq

def top_k_frequent(nums, k):
    # Count the frequency of each element in the array
    freq_map = Counter(nums)

    # Use a heap to find the top K frequent elements
    max_heap = [(-freq, num) for num, freq in freq_map.items()]
    heapq.heapify(max_heap)

    # Extract the top K frequent elements
    result = []
    for _ in range(k):
        result.append(heapq.heappop(max_heap)[1])

    return result

def main():
    nums = [1, 1, 1, 2, 2, 3]
    k = 2

    result = top_k_frequent(nums, k)

    print(f"Top {k} frequent elements:", result)

if __name__ == "__main__":
    main()

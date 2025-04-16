from collections import Counter
import heapq

def top_k_frequent(nums, k):
    freq_map = Counter(nums)
    max_heap = []

    for num, freq in freq_map.items():
        heapq.heappush(max_heap, (-freq, num))  # Use negative frequency for max-heap

    result = []
    for _ in range(k):
        result.append(heapq.heappop(max_heap)[1])

    return result

def print_vector(vec):
    print(" ".join(map(str, vec)))

def main():
    nums = [1, 1, 1, 2, 2, 3]
    k = 2

    result = top_k_frequent(nums, k)

    print(f"Top {k} frequent elements: ", end="")
    print_vector(result)

if __name__ == "__main__":
    main()

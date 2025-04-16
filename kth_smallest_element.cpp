import heapq

class Element:
    def __init__(self, value, row, col):
        self.value = value
        self.row = row
        self.col = col
    
    def __lt__(self, other):
        return self.value < other.value

def kth_smallest(matrix, k):
    n = len(matrix)
    
    min_heap = []
    
    # Push the first element of each row into the min-heap
    for i in range(n):
        heapq.heappush(min_heap, Element(matrix[i][0], i, 0))
    
    current = None
    # Extract the minimum element k times
    for _ in range(k):
        current = heapq.heappop(min_heap)
        
        # If there is another element in the same row, push it into the heap
        if current.col + 1 < n:
            heapq.heappush(min_heap, Element(matrix[current.row][current.col + 1], current.row, current.col + 1))
    
    return current.value

def main():
    matrix = [
        [1, 5, 9],
        [10, 11, 13],
        [12, 13, 15]
    ]
    
    k = 8
    result = kth_smallest(matrix, k)
    
    print(f"The {k}-th smallest element is: {result}")

if __name__ == "__main__":
    main()

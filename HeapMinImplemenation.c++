#include <vector>
// using namespace std;

class minHeap {
public:
    vector<int> heap;
    int size;
    int capacity;

    // Constructor for the class.
    minHeap(int cap) {
        heap.resize(cap);
        size = 0;
        capacity = cap;
    }

    void heapify(int i) {
        int smallest = i;
        int li = 2 * i + 1, ri = 2 * i + 2; // Corrected index calculation for left and right child
        if (li < size && heap[li] < heap[smallest]) // Corrected condition for left child
            smallest = li;
        if (ri < size && heap[ri] < heap[smallest]) // Corrected condition for right child
            smallest = ri;
        if (i != smallest) {
            swap(heap[i], heap[smallest]);
            heapify(smallest);
        }
    }

    // Implement the function to remove minimum element.
    int extractMinElement() {
        if (size == 0) return -1;
        int ans = heap[0];
        swap(heap[0], heap[size - 1]);
        size--;
        heapify(0);
        return ans;
    }

    // Implement the function to delete an element.
    void deleteElement(int element) {
        if (element >= size) {
            return;
        }
        swap(heap[element], heap[size - 1]);
        size--;
        heapify(element);
    }

    // Implement the function to insert 'val' in the heap.
    void insert(int val) {
        if (size == capacity) return; // Missing semicolon
        heap[size] = val;
        size++;
        int ind = size - 1;
        while (ind > 0) { // Corrected condition for index update
            int parent = (ind - 1) / 2;
            if (heap[parent] > heap[ind]) {
                swap(heap[parent], heap[ind]);
                ind = parent;
            } else
                break;
        }
    }
};


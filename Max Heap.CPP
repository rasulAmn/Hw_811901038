// Rasul Amani
// 811901038
#include <iostream> 
using namespace std; 



struct MaxHeap {

  int* arr;
  int size;
  int capacity;
};


MaxHeap* createMaxHeap(int capacity) {

  MaxHeap* maxHeap = new MaxHeap();
  maxHeap->size = 0;
  maxHeap->capacity = capacity;
  maxHeap->arr = new int[capacity];
  return maxHeap;
}


void swap(int* a, int* b) {

  int temp = *a;
  *a = *b;
  *b = temp;
}


void insert(MaxHeap* maxHeap, int x) {

  if (maxHeap->size == maxHeap->capacity) {
    throw runtime_error("Heap is full");
  }

  maxHeap->size++;

  int i = maxHeap->size - 1;
  maxHeap->arr[i] = x;
  while (i != 0 && maxHeap->arr[i] > maxHeap->arr[(i - 1) / 2]) {
    swap(&maxHeap->arr[i], &maxHeap->arr[(i - 1) / 2]);
    i = (i - 1) / 2;
  }
}


void heapify(MaxHeap* maxHeap, int i) {

  int left = 2 * i + 1;
  int right = 2 * i + 2;
  int largest = i;
  if (left < maxHeap->size && maxHeap->arr[left] > maxHeap->arr[largest]) {
    largest = left;
  }

  if (right < maxHeap->size && maxHeap->arr[right] > maxHeap->arr[largest]) {
    largest = right;
  }

  if (largest != i) {
    swap(&maxHeap->arr[i], &maxHeap->arr[largest]);
    heapify(maxHeap, largest);
  }
}


int extractMax(MaxHeap* maxHeap) {

  if (maxHeap->size == 0) {
    throw runtime_error("Heap is empty");
  }

  int max = maxHeap->arr[0];
  maxHeap->arr[0] = maxHeap->arr[maxHeap->size - 1];
  maxHeap->size--;
  heapify(maxHeap, 0);
  return max;
}


int getMax(MaxHeap* maxHeap) {

  if (maxHeap->size == 0) {
    throw runtime_error("Heap is empty");
  }
  return maxHeap->arr[0];
}

int main() {




    return 0;
}

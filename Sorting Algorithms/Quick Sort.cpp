/* I learnt it from this simple 13-minute explaination here:
    https://youtu.be/7h1s2SojIRw
*/

// arr : given array
// l : starting index of the array i.e 0
// r : ending index of the array i.e size-1

void swap (int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int partition(int arr[], int l, int r) {
    int pivot = arr[l];
    int i = l, j = r;
    int temp = 0;
    while (i < j) {
        do {
            i++;
        } while (arr[i] <= pivot);
        do {
            j--;
        } while (arr[j] > pivot);
        
        if (i < j) {
            swap(arr[i], arr[j]);
        }
    }
    swap (arr[l], arr[j]);
    
    return j;
}

int* quicksort(int arr[], int l, int r) {
    /* int* being the return type means, the element we are returning is an integer pointer, or simply a pointer. */
  
    /* Reference (for returning arrays from functions):
        https://www.tutorialspoint.com/cplusplus/cpp_return_arrays_from_functions.htm */
  
    /* Reference (for pointers in C++):
        https://youtu.be/rtgwvkaYt1A */
  
    if (l < r) {
        int j = partition (arr, l, r);
        quicksort(arr, l, j);
        quicksort(arr, j+1, r);
    }
    return arr;
}

int main() {
  // { Input unsorted array.
  int arr[7], l = 0; r = (7-1);
  arr[] = {7, 10, 4, 3, 20, 15}
  // }
    
  // { Run the algorithm
  int *p;
  p = quicksort(arr, l, r);
  // }
  
  // { Print the output
  int i = 0;
  while (i < r)
      cout << arr << "    ";
  // }
  
  return 0;
}

#include <iostream>
#include <limits>

/*
  working with arrays is awkward

  if you dont initialize the first elements of a fixed size array,
  you'll get garbage values all over the array...

  total size of array is x * size of array element type in bytes
  if integer array => an int is 4 bytes,
  if int arr[4], sizeof arr = 16

  when passing the array to a function, the argument is now a pointer,
  the sizeof operator will return the size of the pointer, not of the array

*/

void print_array(int arr[], int size) {
  /*

    std::cout << sizeof(arr) << "\n";

    warning: sizeof on array function parameter will return size
    of 'int *' instead of 'int []',
    so we can pass the size as func parameter
  */
  for (int i = 0; i < size; i++) {
    std::cout << arr[i] << "\t";
  }
  std::cout << std::endl;
}

int main() {
  int guesses[12] = {70, 13, 25, 82, 1, 9, 34};
  guesses[3] = 300;

  int size = sizeof(guesses) / sizeof(int);

  int num_elements = 7;  // array size
  for (int i = 0; i < num_elements; i++) {
    std::cout << guesses[i] << "\t";
  }
  std::cout << std::endl;

  int new_array[] = {23, 56, 743, 2, 78};
  int new_arr_size = sizeof(new_array) / sizeof(int);
  print_array(new_array, new_arr_size);

  const int SIZE = 10;
  int another_arr[SIZE];
  int count = 0;
  for (int i = 0; i < SIZE; i++) {
    if (std::cin >> another_arr[i]) {
      count++;
    } else {
      break;
    }
  }
  print_array(another_arr, count);

  // clear the cin and ignore all the rest of tcharacters.
  std::cin.clear();
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

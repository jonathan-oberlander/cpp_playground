#include <iostream>
#include <string>

// overload a function with a template
// eg: we can't re-assign an array to an array

template <typename T>
void swap(T &a, T &b)
{
  T temp = a;
  a = b;
  b = temp;
}

template <typename T>
void swap(T a[], T b[], int size) // ...arrays decay to pointer
{
  for (int i = 0; i < size; i++)
  {
    T temp = a[i];
    a[i] = b[i];
    b[i] = temp;
  }
}

int main()
{
  const int SIZE = 6;
  int nines[SIZE] = {9, 9, 9, 9, 9, 9};
  int ones[SIZE] = {1, 1, 1, 1, 1, 1};

  for (int i = 0; i < SIZE; i++)
  {
    std::cout << nines[i] << " " << ones[i] << "\t";
  }
  std::cout << "\n\n";

  swap(nines, ones, SIZE);

  for (int i = 0; i < SIZE; i++)
  {
    std::cout << nines[i] << " " << ones[i] << "\t";
  }
  std::cout << "\n\n";

  return 0;
}

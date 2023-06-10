/*10. Write a C++ program to add all the numbers of an array of size ten .*/
#include <iostream>
using namespace std;

int main()
 {
  int arr[10] = {1, 2, 3, 4, 50, 6, 7, 8, 9, 10};
  int sum = 0;
  
  for (int i = 0; i < 10; i++) 
  {
    sum += arr[i];
  }
  
  cout << "The sum of the array is: " << sum << endl;
  
  return 0;
}
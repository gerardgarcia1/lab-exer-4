#include <iostream>
using namespace std;

int main()
{
   int number[5];
   cout << "Enter number : " <<endl;

   for(int x = 0; x < 5; x++)
      cin >> number[x];
      
   cout << "The numbers that have been entered : " <<endl;
   for(int x = 0; x < 5; x++)
      cout << *number + x << endl;
   return 0;
   
}

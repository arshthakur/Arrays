#include <iostream>
using namespace std;
class search
{
   int i;
   int size;
   int arr[50];
   int element;
   int index;

public:
   void getvalue();
   void linear();
};
void search::getvalue(void)
{
   cout << "enter the size: " << endl;
   cin >> size;
   cout << "enter the size of an element: " << endl;
   for (i = 0; i < size; i++)
   {
      cin >> arr[i];
   }
}
void search::linear(void)
{
   cout << "enter the element: " << endl;
   cin >> element;
   for (i = 0; i < size; i++)
   {
      if (arr[i] == element)
      {
         index = i;
         break;
      }
   }
   cout << "the elemnt is found at " << index << endl;
}
int main()
{
   search obj;
   obj.getvalue();
   obj.linear();
   return 0;
}
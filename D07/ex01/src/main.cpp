#include <iostream>
#include <string>

template <typename T>
 void inter(T *array, unsigned int len, void (*f)(const T &))
{
   for (unsigned int i = 0; i < len; i+=1)
   {
      f(array[i]);
   }
}

template <typename T>
 void printElement(const T &elem)
{
   std::cout << elem << std::endl;
}

int main()
{
   std::string data[] = {
      "test1",
      "test2",
      "test3",
      "test4",
      "test5",
      "test6",
      "test7"
   };

   inter(data, 7, printElement);
}

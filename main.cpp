#include <iostream>
#include "example.hpp"
#include <set>

int main()
{
  exmp::example student1(1, "Vladimir", {"Russian", "English"});
  student1.insert("Dutch");
  std::set <std::string> lang_1 = student1.get_languages();
  std::cout << "Test #1" << std::endl;
  for (const auto& language: lang_1)
  {
    std::cout << language << std::endl;
  }

  student1.clear();
  student1.insert("German");
  std::cout << std::endl << "Test #2" << std::endl;
  std::cout << student1;

  exmp::example student2;
  student2.set_number(2);
  student2.set_name("Vladislav");
  student2.set_languages({"Russian", "Spanish"});
  std::cout << std::endl << std::endl << "Test #3" << std::endl;
  std::cout << student2;

  std::cout << std::endl << std::endl << "Test #4";
  exmp::example student3;
  std::cin >> student3;
  std::cout << std::endl << student3 << std::endl << std::endl;

  exmp::example student4(2, "Vladislav", {"Russian", "Spanish"});
  
  std::cout << "True/False tests" << std::endl;
  std::cout << (student4 == student2) << std::endl;
  std::cout << (student4 != student2) << std::endl;
  std::cout << (student3 > student1) << std::endl;
  std::cout << (student2 <= student3) << std::endl;
  std::cout << (student1 < student2) << std::endl;
  std::cout << (student4 >= student2) << std::endl;
  
  std::cout << std::endl << "Tests passed successfully." << std::endl;
  return 0;
}

#include "example.hpp"

exmp::example::example()
{
  _number = 0;
  _name = "";
  _languages = {};
}

exmp::example::example(const int number, const std::string& name, const std::set <std::string> languages)
{
  _number = number;
  _name = name;
  _languages = languages;
}

int exmp::example::get_number() const
{
  return _number;
}

std::string exmp::example::get_name() const
{
  return _name;
}

std::set <std::string> exmp::example::get_languages() const
{
  return _languages;
}

void exmp::example::set_number(const int number)
{
  _number = number;
}

void exmp::example::set_name(const std::string& name)
{
  _name = name;
}

void exmp::example::set_languages(const std::set <std::string> languages)
{
  _languages = languages;
}

void exmp::example::clear()
{
  _languages.clear();
  std::cout << "Languages cleared." << std::endl;
}

void exmp::example::insert(const std::string elem)
{
  _languages.insert(elem);
  std::cout << "Language added." << std::endl;
}

bool exmp::operator== (const exmp::example &left, const exmp::example &right) // если абсолютно идентичны
{
  if (left.get_number() == right.get_number() && left.get_name() == right.get_name() && left.get_languages() == right.get_languages())
    return true;
  else return false;
}

bool exmp::operator!= (const exmp::example &left, const exmp::example &right) // если есть хоть какая-то разница
{
  if (left.get_number() != right.get_number() || left.get_name() != right.get_name() || left.get_languages() != right.get_languages())
    return true;
  else return false;
}

bool exmp::operator> (const exmp::example &left, const exmp::example &right) // если хоть что-то больше
{
  if (left.get_number() > right.get_number() || left.get_name() > right.get_name() || left.get_languages() > right.get_languages())
    return true;
  else return false;
}

bool exmp::operator<= (const exmp::example &left, const exmp::example &right) // если хоть что-то меньше или равно всё
{
  if (left.get_number() < right.get_number() || left.get_name() < right.get_name() || left.get_languages() < right.get_languages())
    return true;
  else if (left.get_number() == right.get_number() && left.get_name() == right.get_name() && left.get_languages() == right.get_languages())
    return true;
  else return false;
}

bool exmp::operator< (const exmp::example &left, const exmp::example &right) // если хоть что-то меньше
{
  if (left.get_number() < right.get_number() || left.get_name() < right.get_name() || left.get_languages() < right.get_languages())
    return true;
  else return false;
}

bool exmp::operator>= (const exmp::example &left, const exmp::example &right) // если хоть что-то больше или равно всё
{
  if (left.get_number() > right.get_number() || left.get_name() > right.get_name() || left.get_languages() > right.get_languages())
    return true;
  else if (left.get_number() == right.get_number() && left.get_name() == right.get_name() && left.get_languages() == right.get_languages())
    return true;
  else return false;
}

std::istream& exmp::operator>> (std::istream &in, exmp::example &right)
{
  std::cout << "\n";
  std::cout << "Set number: ";
  in >> right._number;
  std::cout << "Set name: ";
  in >> right._name;

  int nmb_lng;
  std::string lng;
  std::set <std::string> tmp;
  std::cout << "Number of languages: ";
  in >> nmb_lng;
  for (int i = 0; i < nmb_lng; i++)
  {
    in >> lng;
    tmp.insert(lng);
  }
  right._languages = tmp;
  return in;
}

std::ostream& exmp::operator<< (std::ostream &out, const exmp::example &right)
{
  out << "number: " << right.get_number() << std::endl;
  out << "name: " << right.get_name() << std::endl;
  std::set <std::string> st1 = right.get_languages();
  out << "languages: ";
  for (const auto& e: st1)
  {
    std::cout << e << " ";
  }
  return out;
}
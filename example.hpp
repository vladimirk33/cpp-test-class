#ifndef EXAMPLE_HPP
#define EXAMPLE_HPP

#include <set>
#include <string>
#include <iostream>

namespace exmp
{

class example
{
private:
  int _number;
  std::string _name;
  std::set <std::string> _languages;

public:
  example();
  example(const int number, const std::string& name, const std::set <std::string> languages);

  int get_number() const;
  std::string get_name() const;
  std::set <std::string> get_languages() const;

  void set_number(const int number);
  void set_name(const std::string& name);
  void set_languages(const std::set <std::string> set);

  void clear();
  void insert(const std::string elem);

  friend bool operator== (const example &left, const example &right);
  friend bool operator!= (const example &left, const example &right);
  friend bool operator> (const example &left, const example &right);
  friend bool operator<= (const example &left, const example &right);
  friend bool operator< (const example &left, const example &right);
  friend bool operator>= (const example &left, const example &right);

  friend std::istream& operator>> (std::istream &in, example &right);
  friend std::ostream& operator<< (std::ostream &out, const example &right);
};

}

#endif // EXAMPLE_HPP
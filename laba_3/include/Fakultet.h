#include <iostream>
#include <string>

class Fakultet {
 private:
  std::string nameFakultet;

 public:
  Fakultet();
  std::string getNameFakultet() const;
  void setNameFakultet(std::string nameOfFakultet);
  virtual void info();
};

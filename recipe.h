#ifndef RECIPE_H_INCLUDED
#define RECIPE_H_INCLUDED

#include <vector>
#include <string>

//ADT for all the parts that make a Recipes
class Recipe
{
private:
	std::string name;
	std::string type;
	int mins;
	int hours;
	int steps;
  std::vector<string> instructions;


public:
  void getNameType();
  void getTime();
  void getInstructions();

  void setNameType();
  void setTime();
  void setInstructions();
};

#endif

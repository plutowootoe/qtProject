#ifndef RECIPE_H
#define RECIPE_H
#include <string>
#include <vector>

using namespace std;

class Recipe
{
public:
    Recipe(const std::string,const std::vector<std::string>,const std::vector<std::string>,const std::vector<std::string>,const std::string);
    ~Recipe();
    std::string name;
    std::vector<std::string> ingredients;
    std::vector<std::string> tags;
    std::vector<std::string> instructions;
    std::string description;
    std::vector<std::string> addIngredients(const std::vector<std::string>);
    std::vector<std::string>removeIngredient(const std::vector<std::string>);
    bool hasTag(const std::string &);
    bool hasIngredient(const std::string &);
    std::string getName();
    std::vector<std::string> getIngredients();
    std::vector<std::string>getTags();
    std::string getDescription();
    std::vector<std::string>getInstructions();
};

#endif // RECIPE_H

#include "recipe.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

    Recipe::Recipe(std::string name,std::vector<std::string> ingredients,std::vector<std::string> tags,std::vector<std::string> instructions,std::string description)
    {
        this->name = name;
        this->ingredients = ingredients;
        this->tags = tags;
        this->instructions = instructions;
        this->description = description;
    }

    Recipe::~Recipe()
    {
      std::cout<<"penis";
        }

// adds an ingredient to the ingredient list
std::vector<std::string> Recipe::addIngredients(const std::vector<std::string> input){
   for(int i = 0;i<input.size();i++){
       if(input.at(i) == ingredients.at(i))
       {
           i++;
       }
       else {
           ingredients.push_back(input.at(i));
       }
   }
   return this->ingredients;
}


// removes ingredient from list
std::vector<std::string> Recipe::removeIngredient(const std::vector<std::string> input){
    for(int i = 0;i<ingredients.size();i++){
        for(int j = 0;j<input.size();j++){

        if(input.at(j)==ingredients.at(i)){
            ingredients.erase(ingredients.begin()+i);
        }
        else{
            i++;
        }

    }
    }
    return ingredients;
   }

bool Recipe::hasTag(const std::string &tag)
{
    // Returns true if there is a tag with this name in the recipe
    for(int i = 0; i < tags.size(); ++i)
    {
        if(tags.at(i) == tag)
        {
            return true;
        }
    }
    return false;
}
bool Recipe::hasIngredient(const std::string &ingredient)
{
    // Returns true if there is an ingredient with this name in the recipe
    for(int i = 0; i < ingredients.size(); ++i)
    {
        if(ingredients.at(i) == ingredient)
        {
            return true;
        }
    }
    return false;
}

std::string Recipe::getName(){
    return this->name;
}
std::vector<std::string> Recipe::getIngredients(){
    return this->ingredients;
}
std::vector<std::string>Recipe::getTags(){
    return this->tags;
}
std::string Recipe::getDescription(){
    return this->description;
}
std::vector<std::string>Recipe::getInstructions(){
    return this->instructions;
}

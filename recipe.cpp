#include "recipe.h"
#include <vector>

using namespace std;

class recipe{
    public:
    virtual recipe::recipe(string &name, vector<string> &ingredients, vector<string> &tags, vector<string> &instructions, vector<string> &description)
    {
        this->name = name;
        this->ingredients = ingredients;
        this->tags = tags;
        this->instructions = instructions;
        this->description = description;
    }

    recipe::~recipe(){
            cout<<"Recipe Deleted"<<endl;
        }

recipe(name,ingredients,tags,instructions,description);



// adds an ingredient to the ingredient list
vector addIngredients(vector<string> input){
   for(int i = 0;i<input.size();i++){
       if(input.at(i) == ingredients.at(i))
       {
           i++;
       }
       else {
           ingredients.pushback(input.at(i));
       }
   }
   return this->ingredients;
}


// removes ingredient from list
void removeIngredient(vector<string> input){
    for(int i = 0;i<input.size();i++){
        if(input==ingredients.at(i)){
            ingredients.erase(ingredients.begin()+i);
        }
        else{
            i++;
        }
    }
   }
bool Recipe::hasTag(const std::string &tag) const
{
    // Returns true if there is a tag with this name in the recipe
    for(size_t i = 0; i < tags.size(); ++i)
    {
        if(tags.name == tag)
        {
            return true;
        }
    }
    return false;
}
bool Recipe::hasIngredient(string &ingredient) const
{
    // Returns true if there is an ingredient with this name in the recipe
    for(size_t i = 0; i < ingredients.size(); ++i)
    {
        if(ingredients.at(i).name == ingredient)
        {
            return true;
        }
    }
    return false;
}

vector<string> getIngredients(){
    return this->ingredients;
}
vector<string> getTags(){
    return this->tags;
}
string getDescription(){
    return this->descriptions;
}
vector<string> getInstructions(){
    return this->instructions;
}




};

#include "recipes.h"
#include "recipe.h"
#include <vector>
#include <iostream>



using namespace std;


class recipes
{

    vector<string> filterRecipesByTags(vector<Recipe> &recipes, vector<string> &tag)
    {
            vector<string> filtered;

            for(int i = 0;i<recipes.size();i++)
            {
                for(int j = 0; j<tag.size();j++){

                if(recipes.at(i).hasTag(tag.at(j)))
                {
                    filtered.push_back(recipes.at(i).getName());
                }
            }
    }
             return filtered;
    }

    vector<string> filterRecipesByIng(vector<Recipe> &recipes, vector<string> &ingredient)
    {

            vector<string> filtered;
            for(int i = 0;i<recipes.size();i++)
            {
                for(int j = 0;j<ingredient.size(); j++){
                if(recipes.at(i).hasIngredient(ingredient.at(j)))
                {
                    filtered.push_back(recipes.at(i).getName());
                }
            }
            }
            return filtered;
    }
};

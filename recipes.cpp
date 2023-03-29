#include "recipes.h"
#include "recipe.h"
#include <vector>
#include <iostream>



using namespace std;


recipeS::recipeS()
{

    vector<string> filterRecipesByTags(vector<string> &recipes, vector<string> &tag)
    {
            vector<string> filtered;
            for(int i = 0;i,recipes.size();i++)
            {
                if(recipes.at(i).hasTag(tag))
                {
                    filtered.push_back(recipes(i).getName());
                }
                return filtered;
            }

    }






}

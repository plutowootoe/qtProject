#include "recipe.h
#include <vector>

using namespace std;



class recipe{
    public:
    virtual recipe(){
        string name;
        vector<string> ingredients;
        string description = "";
        int rating = 0;
        cout<<"Recipe Added:"<<name<<ingredients<<description<<rating<<endl;
        virtual ~recipe(){
            cout<<"Recipe Deleted"<<endl;
        }
}


recipe(ingredients,description);


void getIngredients(){
    return ingredients;

}

// adds an ingredients to the
void AddIngredients(vector<string> input){
   for(int i = 0;i<input.size();i++){
       ingredients.pushback(input);
   }
}


// needs to be fixed
void RemoveIngredient(string input){
    for(int i = 0;i<getIngredients();i++){
        if(input==ingredients{
            ingredients.erase(ingredients.begin()+i)
        }
    }
   }
void EditRecipe(){
    return 0;
}







};

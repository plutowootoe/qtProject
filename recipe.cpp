#include "recipe.h
#include <vector>

using namespace std;

string name;
vector<string> ingredients;
string description = "";
int calories = 0;
int rating = 0;

class recipe{
    public:
    virtual recipe(){
        string name;
        vector<string> ingredients;
        string description = "";
        int calories = 0;
        int rating = 0;
        cout<<"Recipe Added:"<<name<<ingredients<<description<<rating<<endl;
}
        ~recipe(){
            cout<<"Recipe Deleted"<<endl;
        }



recipe(ingredients,calories,description,rating);


void getIngredients(){
    return this->ingredients;

}

// adds an ingredient to the ingredient list
void addIngredients(vector<string> input){
   for(int i = 0;i<input.size();i++){
       ingredients.pushback(input.at(i));
   }
}


// needs to be fixed // removes ingredient from list
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
void getCalories(){
    return this->calories;
}

void getDescription(){
    return this->description;
}

void getRating(){
    return this->rating;
}




};

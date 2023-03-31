//pre processor directives
#include <string>
#include <vector>
#include <iostream>
#include "recipe.h"
#include "recipes.h"
//namespace
using namespace std;

class food{

//template
 public:
//    template<typename T>
  //  T printrecipe(std::string name,std::vector<std::string> ingredients,std::vector<std::string> tags,std::vector<std::string> instructions, std::string description){
    //   return std::cout<<"Recipe: "<<name<<"List of Ingredients: "<<ingredients<<"Tags: "<<tags<<"Instructions: "<<instructions<<"Description: "<<description<<endl;
   // }
//private
private:

virtual void print(){
    printf("Example Recipe:\nFry:\nSausage, Rashers, Egg, Beans, Pudding, Toast");
}
};
//inheritance
class Lunch: public food
{
// protected
protected:
    //friend function
   friend void print(){
       printf("Example Recipe:\nSandWich:\n Ham, Cheese, Tomato, Mayonaisse");
    }
};
//multiple inheritence
class Dinner: public food
{
public:
   void print(){
        printf("Example Recipe:\nSpaghetti Bolognese:\nTomato Sauce, Meatballs, Spaghetti, Parmesan");
    }
};

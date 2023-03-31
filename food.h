#ifndef FOOD_H
#define FOOD_H
#include <iostream>

using namespace std;

class food
{
public:
    void print();
};
class Lunch: public food{
   void  print();
};
class Dinner: public food{
    void print();
};

#endif // FOOD_H

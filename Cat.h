#ifndef cat_h;
#define cat.h
using namespace std;
#include <iostream>;
#include "Animal.h";

class cat : public  Animal{ 
private : 
int color;
int PawSize;
public: 
Cat(int, int , int , int );
~Cat();
void print (){ 
Animal :: print();
cout<<" Cat print/n";}
virtual void GetOwner(){
     cout<<"/owner :cat";
     }
#endif;
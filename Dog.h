#ifndef dog_h;
#define dog_h;
using namespace std;
#include<iostream>;
#include "Animal.h";
class dog : public Animal{
private : 
int breed ; 
public : 
Dog( int , int , int );
~Dog();
Void print() {
Animal:: print ();
cout<<" Dog print /n";
}
virtual void getOwner() {
     cout<<"/owner: Dog"}

#endif;
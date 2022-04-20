#include<iostream>;
#include "Cat.h";
#include "Animal.h";
using namespace std;
Cat :: Cat (int nme, int ae, int pWsZ, int clr):Animal(nme, ae){
cout<<" Cat Created/n";
PawSize = pWsZ;
Color = clr;
}

Cat :: ~Cat(){
cout<<" Car Destroyed/n";
}
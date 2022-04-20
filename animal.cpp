#include<iostream>;
using namespace std;
#include "animal.h";

Animal :: Animal( int nme , int ae ){
cout <<"Animal Created/n";
age = ae ;
name = nme ;
}
Animal :: ~Animal() { 
cout <<" Animal Destroyed/n";
} ; 
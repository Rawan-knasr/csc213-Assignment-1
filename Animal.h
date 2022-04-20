#ifndef animal_h;
#define animal_h;
using namespace std;
#include <iostream>;
class Animal {
private :
        int name ;
        int age ;
public:
        Animal(int , int );
        ~Animal();
   }
virtual void print(){
cout <<"Animal print/n";
}
virtual void getOwner()=0;
} 
#endif;
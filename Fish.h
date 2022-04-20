#ifndef fish_h ;
#define fish_h;
#include<iostream>;
using namespace std;
class Fish :: public Animal {
private :
    int SwimSpeed ;  
    int glcap;
public :
 fish( int , int , int , int ) ;
~fish(); 
virtual void getOwner(){
cout<<" Owner/:Fish/n/n " ; 
}
#endif
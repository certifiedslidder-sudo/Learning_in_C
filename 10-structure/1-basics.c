#include<stdio.h>
int main(){
    struct pokemon{     // user defined data- type(pokemon) is created
        int hp;         //attributes
        int speed;
        int attack;
        char tier;     // this cant be done in array
    } pikachu, charlizard, newton;       //  VARIABLE DECLARED,these three are objects of class pokemon
    //by writing this you can avoid writing line 11,19,25

//  note  -->   ;(semicolon) marks the completed creation of data type


    //struct pokemon pikachu;
    pikachu.attack= 60; // we use dot operator (.) to access attributes.    
    pikachu.hp = 50;
    pikachu.speed = 100;
    pikachu.tier = 'A';

    printf("%d", pikachu.attack);

    //struct pokemon charlizard;
    charlizard.attack= 130;
    charlizard.hp= 80;
    charlizard.speed= 80;
    charlizard.tier= 'S';

    //struct pokemon mewtwo;
    mewtwo.attack = 170;
    mewtwo.hp = 150;
    mewtwo.speed = 200;
    mewtwo.tier  = 'G';

    return 0;
}
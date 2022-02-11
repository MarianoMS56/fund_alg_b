#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
//////imagina que es un robot que puede caminar en cierta temperaturas/////
////temperatura con condiciones////
//frio: 16
//caliente: 29
int frio = 16;
int caliente = 29;
int sofa = 7000;
/// lo de frio y caliente son variables globales y lo de abajo son las locales///
///{} es lo que ejecutara loq ue esta dentro///

int main(int argc, char** argv){
    int inputTemp = atoi(argv[1]);
    int inputMoney = atoi(argv[2]);
    char inputName = argv [3][0];
    int temp_condition = ( inputTemp == frio);
    int temp_condition2 = ( inputTemp == caliente);
    int temp_condition3 = ( inputTemp >= caliente);
    int canRobotMove = ( inputTemp >= caliente);
    int hasUserMoney = ( inputMoney == sofa );
    int isUserMale = ( inputName != 'F')

    if(canRobotMove){
        //Robot.move(x_coord, y_coord);
    } else {
        //Robot.stop(x_coord, y_coord);
    }

    if(hasUserMoney) {
        //alow to bus//
    }
    else{
        //reject product//
    }

    if (inputTemp  <= 29){
        //
    }
    return 0;
}
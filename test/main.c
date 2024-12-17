/**!
 * @file main.c
 * @author DBIBIH Oussama
*/
#include <stdio.h>
#include "DigitKey.h"



int main(int argc, char *argv[]){

    //Variable
    unsigned char version[size];

    printf("Hello !\n");
    get_version(version);
    printf("Version %s\n", version);


    return 0;
}
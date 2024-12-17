/**!
 * @file DigitKey.c
 * @author DBIBIH Oussama
*/


#include <string.h>
#include "inc/DigitKey.h"

void get_version(unsigned char *version) {
    char *stderr;
    if (strlen("V1.0.0") >= size) {
    fprintf(stderr, "Erreur : taille insuffisante.\n");
    return;
}
    strcpy((char *)version, "V1.0.0");
}


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


int main(){
    char montagne [9];
    char grotte [7];
    char choixChemin [12] ;


printf("choisit ton chemin entre la montagne et la grotte ? \n");

scanf("%s",choixChemin);

if(strcmp( choixChemin, "grotte" ) == 0)  {
        printf( "tu es dans la grotte  \n" );

}

if ( strcmp( choixChemin, "montagne" ) == 0) {
        printf( "tu es sur la montagne  \n" );
}


return 0;
}

#include "math/math.h"
#include <assert.h>
#include <stdio.h>

int main( void )
{
    int menu_index, x, y;

    printf( "OPCOES\n\n1 - SOMA\n2 - DIMINUICAO\n3 - MULTIPLICACAO\n4 - DIVISAO\n\nSelect: " );
    scanf( "%d", &menu_index );

    if ( menu_index > 4 || menu_index < 0 )
    {
        printf( "Opcao invalida!!\n" );
        return 1;
    }

    printf( "Valor 1: " );
    scanf( "%d", &x );

    printf( "Valor 2: " );
    scanf( "%d", &y );

    switch ( menu_index )
    {
        case 1:
        {
            printf( "Soma de %d + %d = %d\n", x, y, soma( x, y ) );
        }
        break;

        case 2:
        {
            printf( "Diminuicao de %d - %d = %d\n", x, y, diminui( x, y ) );
        }
        break;

        case 3:
        {
            printf( "Multiplicacao de %d * %d = %d\n", x, y, multiplica( x, y ) );
        }
        break;

        case 4:
        {
            printf( "Divisao de %d / %d = %d\n", x, y, divide( x, y ) );
        }
        break;
    }

    return 0;
}
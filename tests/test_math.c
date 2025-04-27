#include "../src/math/math.h"
#include <assert.h>
#include <stdio.h>

int main( void )
{
    assert( soma( 1, 2 ) == 3 );
    assert( soma( 5, 5 ) == 10 );
    assert( soma( -1, 2 ) == 1 );
    assert( soma( 2, 2 ) == 4 );
    assert( soma( 0, 0 ) == 0 );

    assert( diminui( 1, 1 ) == 0 );
    assert( diminui( 0, 1 ) == -1 );
    assert( diminui( 3, 2 ) == 1 );
    assert( diminui( 20, 10 ) == 10 );
    assert( diminui( 330, 330 ) == 0 );

    assert( multiplica( 3, 4 ) == 12 );
    assert( multiplica( 12, 12 ) == 144 );
    assert( multiplica( -12, 10 ) == -120 );
    assert( multiplica( 0, 0 ) == 0 );
    assert( multiplica( 1, 1 ) == 1 );

    assert( divide( 2, 2 ) == 1 );
    assert( divide( 3, 2 ) == 1 );
    assert( divide( 6, 3 ) == 2 );
    assert( divide( 10, 2 ) == 5 );
    assert( divide( 1, 1 ) == 1 );

    printf( "Todos os testes passaram!\n" );
    return 0;
}
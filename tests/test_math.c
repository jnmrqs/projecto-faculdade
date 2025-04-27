#include "../src/math/math.h"
#include <assert.h>
#include <stdio.h>

int main(void)
{
    assert(soma(1, 2) == 3);
    assert(soma(-1, 1) == 0);
    assert(diminui(1, 1) == 0);
    assert(multiplica(3, 4) == 12);
    assert(divide(2, 2) == 1);

    printf("Todos os testes passaram!\n");
    return 0;
}
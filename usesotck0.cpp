#include <iostream>
#include "stock00.h"
#include <stdlib.h>
int main()
{
    Stock test;
    test.acquire("Zeekr", 12000, 25);
    test.show();
    test.buy(3000, 24.5);
    test.show();
    test.update(30);
    test.show();
    test.sell(12000 + 3000, 31);
    test.show();
    
}
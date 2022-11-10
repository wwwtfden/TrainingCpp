#include "vectortest.h"

VectorTest::VectorTest()
{
    std::cout << std::endl;
    for (auto& x: vec){
        std::cout << x << '\t';
    }
}

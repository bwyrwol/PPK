#include <iostream>
#include <algorithm>
// LAMBDA

void funkcja() 
{
    static int ile = 0;
    ile++;
    std::cout << "wywolana: " << ile << " razy." << std::endl;
}




int main()
{
    int ile_razy = 0;

    auto potega = [&ile_razy](const int& p)->int 
        {
            ile_razy++;
            return p * p;
        };

    std::cout << potega(5) << std::endl;
    int zmienna = potega(10);
    zmienna = potega(10);
    zmienna = potega(10);
    std::cout << zmienna << std::endl;
    std::cout << "ile razy wywolana:" << ile_razy << std::endl;

    std::cout << "--------------" << std::endl;
    funkcja();
    funkcja();
    funkcja();
    funkcja();
    funkcja();
    funkcja();
    funkcja();
    funkcja();
    funkcja();

}
#include <iostream>

int main()
{
    int val = 10;
    while(val >= 0)
    {
        std::cout << "val is " << val << std::endl;
        val--;
    }
    /* 
     * while(val--)
     * 
    */

    return std::cin.get();
}
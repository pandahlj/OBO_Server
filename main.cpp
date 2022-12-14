#include <iostream>

void test()
{
    std::cout << "It's a test func." << std::endl;
}

int main()
{
    std::cout << "It is a test for git." << std::endl;
    std::cout << "Dose man should love a woman?" << std::endl;

    threadTest();

    while(true)
    {
        std::cout << "main thread." << std::endl;
        sleep(1);
    }
    
    return 0;
}

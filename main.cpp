#include <iostream>
#include <thread>
#include <unistd>

void threadTest(const std::string& str)
{
    std::thread thread1([str]{
        while(true)
        {
            std::cout << str << std::endl;
            sleep(1);
        }
    )};
}

int main()
{
    std::cout << "It is a test for git." << std::endl;
    std::cout << "Dose man should love a woman?" << std::endl;

    
    
    return 0;
}

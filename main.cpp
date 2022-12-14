#include <iostream>
#include <thread>
#include <unistd>

bool g_outFlag = true;
void setOutFlag(bool param){g_outFlag = param;}
bool getOutFlag(){return g_outFlag;}

void threadTest(const std::string& str)
{
    std::thread thread1([str]{
        while(true)
        {
            std::cout << str << std::endl;
            sleep(1);
        }
    });
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

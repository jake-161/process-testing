#include <chrono>
#include <iostream>
#include <thread>

int main(int argc, char** argv)
{

    auto start_time = std::chrono::steady_clock::now();

    while(true) {
        auto delta = std::chrono::steady_clock::now() - start_time;
        std::cout
            << "Running since " 
            << std::chrono::duration_cast<std::chrono::seconds>(delta).count() 
            << " seconds .." << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
    return 0;
}

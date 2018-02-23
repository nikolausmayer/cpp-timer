
/// System/STL
#include <chrono>
#include <cstdlib>
#include <thread>
/// Local files
#include "Timer.h"



int main()
{
  {
    Timer::Timer timer(true, "Timer test");

    for ( unsigned int i = 0; i < 20; ++i ) {
      std::this_thread::sleep_for(std::chrono::milliseconds(20));
      timer.Mark("Mark");
    }
  }

  return EXIT_SUCCESS;
}


#include <iostream>
#include <thread>
#include "TestThreads.h"
void hello1() {
    std::cout << "Hello Function";
}

void TestThreads::hello() {
    std::cout << "Hello Function";
}
void TestThreads::test_testThreads() {
    std::cout << "Thread id of main: " << std::this_thread::get_id() << std::endl;
    std::thread thr(hello1);
    std::cout << "Thread id : " << thr.get_id() << std::endl;
    thr.join();
    std::cout << "Thread id : " << thr.get_id() << std::endl;
}        

#include "deep.h"
#include <iostream>
Deep::Deep(int d) {
    std::cout << "Constructor called for Deep" << std::endl;
    data = new int;
    *data = d;
}
Deep::Deep(const Deep &source) {
    std::cout << "Deep Copy - Constructor called for Deep" << std::endl;
    data = new int;
    *data = *source.data;
}
Deep::~Deep() {
    delete data;
    std::cout << "Descructor called for Deep" << std::endl;
}
int Deep::get_data() {
    return *data;
}

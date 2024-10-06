#include "President.h"

President::President(std::string name, int age) {
    this->name = name;
    this->age = age;
}

std::string President::getName() {
    return name;
}

int President::getAge() {
    return age;
}

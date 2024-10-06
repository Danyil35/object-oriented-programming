#ifndef PRESIDENT_H
#define PRESIDENT_H
#include <string>

class President {
public:
    President(std::string name, int age);

    std::string getName();
    int getAge();

private:
    std::string name;
    int age;
};

#endif

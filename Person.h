//
// Created by Keith Lancaster on 11/4/21.
//

#ifndef CODE_PERSON_H
#define CODE_PERSON_H


#include <string>

class Person {
public:
    const std::string &getName() const;
    std::string getInfo();

protected:
    std::string name{};
    int age {0};
public:
    Person(std::string name, int age);
    float getSalary();



};


#endif //CODE_PERSON_H

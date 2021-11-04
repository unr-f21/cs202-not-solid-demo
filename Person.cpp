//
// Created by Keith Lancaster on 11/4/21.
//

#include "Person.h"
#include "SalaryManager.h"
#include <utility>

Person::Person(std::string name, int age) : name(std::move(name)), age(age) {}

float Person::getSalary() {
    return SalaryManager::getSalary(name);
}

const std::string &Person::getName() const {
    return name;
}

std::string Person::getInfo() {
    return "Name:" + name + " Age" + std::to_string(age);
}

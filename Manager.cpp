//
// Created by Keith Lancaster on 11/4/21.
//

#include "Manager.h"

#include <utility>

int Manager::getNumberOfEmployees() {
    return 0;
}

int Manager::getEmployeeID() {
    return 0;
}

bool Manager::getStatus() {
    return false;
}

Manager::Manager(std::string name, int age) : Person(std::move(name), age) {

}

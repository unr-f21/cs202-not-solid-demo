//
// Created by Keith Lancaster on 11/4/21.
//

#include "DockWorker.h"

#include <utility>



int DockWorker::getNumberOfEmployees() {
    return 0;
}

int DockWorker::getEmployeeID() {
    return 0;
}

bool DockWorker::getStatus() {
    return false;
}

DockWorker::DockWorker(std::string name, int age) : Person(std::move(name), age) {

}

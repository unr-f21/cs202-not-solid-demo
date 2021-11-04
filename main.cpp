#include <iostream>
#include <vector>
#include "Manager.h"
#include "DockWorker.h"


int main() {
    Manager manager("Tim", 20);
    std::cout << manager.getInfo() << std::endl;

    DockWorker dw("Herb", 25);
    std::cout << dw.getInfo().name << std::endl;


    std::vector<std::string> people;
    people.push_back(manager.getInfo());
    //people.push_back(dw.getInfo());

    return 0;
}

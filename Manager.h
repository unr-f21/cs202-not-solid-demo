//
// Created by Keith Lancaster on 11/4/21.
//

#ifndef CODE_MANAGER_H
#define CODE_MANAGER_H


#include "IEmployee.h"
#include "Person.h"

class Manager : public Person, public IEmployee {
public:
    Manager(std::string name, int age);

    int getNumberOfEmployees() override;

    int getEmployeeID() override;

    bool getStatus() override;

    std::string getInfo(){
        return "Title: Manager - " + Person::getName();
    }

};


#endif //CODE_MANAGER_H

//
// Created by Keith Lancaster on 11/4/21.
//

#ifndef CODE_DOCKWORKER_H
#define CODE_DOCKWORKER_H


#include "IEmployee.h"
#include "Person.h"

struct WorkerInfo {
    std::string name;
    int age;
};

class DockWorker : public Person, public IEmployee{
public:
    DockWorker(std::string name, int age);

    int getNumberOfEmployees() override;

    int getEmployeeID() override;

    bool getStatus() override;

    struct WorkerInfo getInfo(){
        WorkerInfo wi;
        wi.name = name;
        wi.age = age;
        return wi;
    }



};


#endif //CODE_DOCKWORKER_H

//
// Created by Keith Lancaster on 11/4/21.
//

#ifndef CODE_IEMPLOYEE_H
#define CODE_IEMPLOYEE_H


class IEmployee {
public:
    virtual int getNumberOfEmployees() = 0;
    virtual int getEmployeeID() = 0;
    virtual bool getStatus() = 0;
};


#endif //CODE_IEMPLOYEE_H

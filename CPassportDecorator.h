//
// Created by karen on 07.04.18.
//

#ifndef HOMETASK4_CPASSPORTDECORATOR_H
#define HOMETASK4_CPASSPORTDECORATOR_H

#include <bits/shared_ptr.h>
#include "IUniCard.h"
#include "CUniCard.h"
#include "vector"

using std::string;
using std::shared_ptr;
using std::cout;
using std::endl;

class CPassportDecorator : public IUniCard
{
public:
    CPassportDecorator(CUniCard* _unicard, string _bornDate, string _bornPlace, string _passportAvailableToDate) :
            unicard(_unicard),
            bornDate(_bornDate),
            bornPlace(_bornPlace),
            passportAvailableToDate(_passportAvailableToDate)
    {}
    virtual ~CPassportDecorator() = default;
    virtual void info()
    {
        cout<<"Information about person:"<<endl;
        unicard->info();
        cout<<"Was born in "<<getBornDate()<<" in "<<getBornPlace()<<endl;
        cout<<"Passport is available to "<<getPassportAvailableToDate()<<endl;
    }
    string getBornDate() const
    { return bornDate; }
    string getBornPlace() const
    { return bornPlace; }
    string getPassportAvailableToDate() const
    { return passportAvailableToDate; }

private:
    shared_ptr<CUniCard> unicard;
    string bornDate;
    string bornPlace;
    string passportAvailableToDate;
};
#endif //HOMETASK4_CPASSPORTDECORATOR_H

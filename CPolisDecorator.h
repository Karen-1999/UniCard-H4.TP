//
// Created by karen on 07.04.18.
//

#ifndef HOMETASK4_CPOLISDECORATOR_H
#define HOMETASK4_CPOLISDECORATOR_H

#include <bits/shared_ptr.h>
#include "IUniCardReader.h"
#include "CUniCard.h"
#include "vector"

using std::shared_ptr;
using std::string;
using std::cout;
using std::endl;
using std::vector;

class CPolisDecorator : public IUniCard
{
public:

    CPolisDecorator(shared_ptr<CUniCard> _unicard, string _bornDate, string _lastVisit) :
            unicard(_unicard),
            bornDate(_bornDate),
            lastVisit(_lastVisit)
    {};
    virtual ~CPolisDecorator()= default;

    virtual void info()
    {
        cout<<"Information about person "<<endl;
        unicard->info();
        cout<<"Age : "<<getAge()<<endl;
        cout<<"last visit : "<<getLastVisit()<<endl;
        cout<<"List of ilnesses : "<<endl;
        printIlnesses();
    }

    string getAge() const
    { return bornDate; }

    string getLastVisit() const
    { return lastVisit; }

    vector<string> getIlnesses() const
    { return ilnesses; }

    void printIlnesses() const
    {
        for(int i=0; i<ilnesses.size(); ++i)
            cout<<ilnesses[i]<<endl;
    }

    bool checkInBase{
            //проверить прикреплен ли человек к поликлинике
    };

    bool checkForBenefits{
            //проверить наличие льготных прав в базе.
    };
private:
    shared_ptr<CUniCard> unicard;
    string bornDate;
    string lastVisit;
    vector<string> ilnesses;
};
#endif //HOMETASK4_CPOLISDECORATOR_H

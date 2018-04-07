//
// Created by karen on 07.04.18.
//

#ifndef HOMETASK4_CSBERBANKDECORATOR_H
#define HOMETASK4_CSBERBANKDECORATOR_H

#include "IUniCardReader.h"
#include "IUniCard.h"
#include "iostream"
#include "CUniCard.h"
#include "string"
#include "memory"

using std::shared_ptr;
using std::cout;
using std::endl;
using std::string;

class CSberbankDecorator : public IUniCard
{
public:
    CSberbankDecorator(CUniCard* _unicard, int _money, bool _available) :
            unicard(_unicard),
            money(_money),
            available(_available)
    {};
    virtual ~CSberbankDecorator() = default;
    int getMoney() const
    { return money; }

    bool checkAvailable() const
    { return available; }

    void setMoney(int value)
    { money = value;}

    virtual void info()
    {
        unicard->info();
    }
    void sendMoney(int value)
    {
        cout<<"checking for availablity"<<endl;
        if(checkAvailable())
            cout<<"Your card is available"<<endl;
        else
        {
            cout<<"Your card isn't available. Operation failed"<<endl;
            return;
        }
        cout<<"checking for money:"<<endl;
        if(getMoney() >= value)
        {
            cout<<"operation done"<<endl;
            setMoney(getMoney()-value);
        }
        else
            cout<<"operation failed"<<endl;
    }

    void getMoneyFromOther(int value)
    {
        cout<<"checking for availablity"<<endl;
        if(checkAvailable())
            cout<<"Your card is available"<<endl;
        else
        {
            cout<<"Your card isn't available. Operation failed"<<endl;
            return;
        }
        cout<<"operation done"<<endl;
            setMoney(getMoney()+value);
    }

private:
    shared_ptr<CUniCard> unicard;
    int money;
    bool available;
};
#endif //HOMETASK4_CSBERBANKDECORATOR_H

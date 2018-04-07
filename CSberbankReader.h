//
// Created by karen on 07.04.18.
//

#ifndef HOMETASK4_CSBERBANKREADER_H
#define HOMETASK4_CSBERBANKREADER_H

#include "IUniCard.h"
#include "CSberbankDecorator.h"

class CSberbankReader : public IUniCardReader
{
public:
    CSberbankReader(CSberbankDecorator* _unicard) :
            unicard(_unicard)
    {};
    virtual ~CSberbankReader() = default;

    virtual void reader()
    {
        unicard->info();
    }

    void sendMoney(int _value)
    {
        unicard->sendMoney(_value);
    }

    void getMoney(int _value)
    {
        unicard->getMoneyFromOther(_value);
    }

private:
    CSberbankDecorator* unicard;
};
#endif //HOMETASK4_CSBERBANKREADER_H

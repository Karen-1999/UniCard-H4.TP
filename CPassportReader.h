//
// Created by karen on 07.04.18.
//

#ifndef HOMETASK4_CPASSPORTREADER_H
#define HOMETASK4_CPASSPORTREADER_H

#include "IUniCardReader.h"
#include "CPassportDecorator.h"

class CPassportReader : public IUniCardReader
{
public:
    CPassportReader(CPassportDecorator* _unicard) : unicard(_unicard)
    {};
    virtual ~CPassportReader() = default;
    virtual void reader()
    {
        unicard->info();
    }
private:
    CPassportDecorator* unicard;
};
#endif //HOMETASK4_CPASSPORTREADER_H

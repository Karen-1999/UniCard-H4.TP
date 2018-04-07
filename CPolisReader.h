//
// Created by karen on 07.04.18.
//

#ifndef HOMETASK4_CPOLISREADER_H
#define HOMETASK4_CPOLISREADER_H

#include "IUniCardReader.h"
#include "CUniCard.h"
#include "CPolisDecorator.h"

class CPolisReader : public IUniCardReader
{
public:
    CPolisReader(CPolisDecorator* _unicard) : unicard(_unicard)
    {};
    virtual ~CPolisReader() = default;
    virtual void reader()
    {
        unicard->info();
    }
private:
    CPolisDecorator* unicard;
};

#endif //HOMETASK4_CPOLISREADER_H

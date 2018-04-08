//
// Created by karen on 07.04.18.
//

#ifndef HOMETASK4_CPOLISREADER_H
#define HOMETASK4_CPOLISREADER_H

#include "IUniCardReader.h"
#include "CUniCard.h"
#include "CPolisDecorator.h"

/**
 * \brief Интерфейс Device, считающего страховой полис
 */
class CPolisReader : public IUniCardReader
{
public:
    CPolisReader(CPolisDecorator* _unicard) : unicard(_unicard)
    {};
    virtual ~CPolisReader() = default;
    /**
    * \brief Вывод информации про данную карту
    */
    virtual void reader()
    {
        unicard->info();
    }
private:
    CPolisDecorator* unicard;
};

#endif //HOMETASK4_CPOLISREADER_H

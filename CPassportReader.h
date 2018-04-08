//
// Created by karen on 07.04.18.
//

#ifndef HOMETASK4_CPASSPORTREADER_H
#define HOMETASK4_CPASSPORTREADER_H

#include "IUniCardReader.h"
#include "CPassportDecorator.h"
/**
 * \brief Интерфейс Device, считающего паспорт
 */
class CPassportReader : public IUniCardReader
{
public:
    CPassportReader(CPassportDecorator* _unicard) : unicard(_unicard)
    {};
    virtual ~CPassportReader() = default;

    /**
     * \brief Общая информация о карте
    */
    virtual void reader()
    {
        unicard->info();
    }
private:
    CPassportDecorator* unicard;
};
#endif //HOMETASK4_CPASSPORTREADER_H

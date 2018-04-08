//
// Created by karen on 07.04.18.
//

#ifndef HOMETASK4_CSBERBANKREADER_H
#define HOMETASK4_CSBERBANKREADER_H

#include "IUniCard.h"
#include "CSberbankDecorator.h"

/**
 * \brief Интерфейс Device, считающего карточку Сбербанка
 */
class CSberbankReader : public IUniCardReader
{
public:
    CSberbankReader(CSberbankDecorator* _unicard) :
            unicard(_unicard)
    {};
    virtual ~CSberbankReader() = default;
    /**
    * \brief Общая информация о карте
    */
    virtual void reader()
    {
        unicard->info();
    }
    /**
    * \brief Перевод денежных средств другому клиенту
    * \return Вывод информации о переводе
    */
    void sendMoney(int _value)
    {
        unicard->sendMoney(_value);
    }
    /**
    * \brief Перевод денежных средств от другого клиенту данному
    * \return Вывод информации о получении
    */
    void getMoney(int _value)
    {
        unicard->getMoneyFromOther(_value);
    }

private:
    CSberbankDecorator* unicard;
};
#endif //HOMETASK4_CSBERBANKREADER_H

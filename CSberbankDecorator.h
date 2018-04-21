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


/**
* \brief Декоратор сбербанковской карты
*/

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


    /**
    * \brief Платежная информация по карте
    * \return Вывод информации о владельце карты
    */
    virtual void info()
    {
        unicard->info();
    }

    /**
    * \brief Перевод денежных средств другому клиенту
    * \return Вывод информации о переводе
    */
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

    /**
    * \brief Получение денежных средств от другого клиента
    * \return Вывод информации о получении
    */
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

    /**
    * \brief Проверка задолженностей и ипотек
    * \return Вывод информации о долгах и ипотеках
    */
    void checkHipotecs() {
            //проверить и вывести список ипотек
    };


    /**
    * \brief Проверка депозитных счетов
    * \return Вывод информации о вкладах
    */
    void checkDeposit() {
        //проверить наличие депозитов и вложений
    }

private:
    CUniCard* unicard;
    int money;
    bool available;
};
#endif //HOMETASK4_CSBERBANKDECORATOR_H

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

/**
* \brief Декоратор пасспорта
*/

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

    /**
    * \brief Паспортные данные гражданина(ФИО, Дата и место рождения, не истек ли срок паспорта):
    * \return Вывод информации о переводе
    */
    virtual void info()
    {
        cout<<"Information about person:"<<endl;
        unicard->info();
        cout<<"Was born in "<<getBornDate()<<" in "<<getBornPlace()<<endl;
        cout<<"Passport is available to "<<getPassportAvailableToDate()<<endl;
    }

    /**
    * \brief Дата рождения
    * \return Вывод даты рождения
    */
    string getBornDate() const
    { return bornDate; }

    /**
    * \brief Место рождения
    * \return Вывод места рождения
    */
    string getBornPlace() const
    { return bornPlace; }

    /**
    * \brief Проверка истечения срока пасспорта
    * \return Результаты проверки
    */
    string getPassportAvailableToDate() const
    { return passportAvailableToDate; }

    /**
    * \brief Проверить на фальшивость
    * \return Вывод информации
    */
    bool checkInBase{
          //проверка в базе наличия гражданина
    };

    /**
    * \brief Проверить срок визы
    * \return Вывод информации
    */
    bool checkForVisa{
            //проверка срока действия Шенген визы,к примеру.
    };
private:
    CUniCard* unicard;
    string bornDate;
    string bornPlace;
    string passportAvailableToDate;
};
#endif //HOMETASK4_CPASSPORTDECORATOR_H

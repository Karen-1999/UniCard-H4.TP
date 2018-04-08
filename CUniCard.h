//
// Created by karen on 07.04.18.
//

#ifndef HOMETASK4_CUNICARD_H
#define HOMETASK4_CUNICARD_H

#include "iostream"
#include <string>
#include "IUniCard.h"


/**
* \brief Интерфейс UniCard
*/

class CUniCard : public IUniCard {
public:
    CUniCard(std::string _clientID, std::string _clientName) :
            clientID(_clientID), clientName(_clientName) {}
    std::string getClientID() const {
        return clientID;
    }
    std::string getClientName() const {
        return clientName;
    }

    /**
    * \brief Информация о владельце карты
    * \return Вывод информации о владельце
    */
    virtual void info()
    {
        std::cout<<"Your clientID is "<<clientID<<"client Name is "<<clientName<<std::endl;
    }
private:
    std::string clientID;
    std::string clientName;
};
#endif //HOMETASK4_CUNICARD_H

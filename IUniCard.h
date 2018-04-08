//
// Created by karen on 07.04.18.
//

#ifndef HOMETASK4_IUNICARD_H
#define HOMETASK4_IUNICARD_H

/**
 * \brief интерфейс UniCard
 */

class IUniCard {
public:
    virtual ~IUniCard() = default;
    virtual void info() = 0;
};
#endif //HOMETASK4_IUNICARD_H

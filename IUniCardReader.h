//
// Created by karen on 07.04.18.
//

#ifndef HOMETASK4_IUNICARDREADER_H
#define HOMETASK4_IUNICARDREADER_H

class IUniCardReader {
public:
    virtual ~IUniCardReader()= default;
    virtual void reader() = 0;
};
#endif //HOMETASK4_IUNICARDREADER_H

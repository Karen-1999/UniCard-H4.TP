//
// Created by karen on 07.04.18.
//

#ifndef HOMETASK4_TEST_H
#define HOMETASK4_TEST_H

#include "CSberbankDecorator.h"
#include "CSberbankReader.h"
#include "CUniCard.h"
#include "CPassportDecorator.h"
#include "CPassportReader.h"
#include "CPolisDecorator.h"
#include "CPolisReader.h"
#include "gtest/gtest.h"


TEST(CPassportTest, checkingPassport){
    string clientID = "1013";
    string clientName = "Suvorov A.A.";
    string curtime = "20180406";
    CUniCard* unicard = new CUniCard(clientID, clientName);
    CPassportDecorator Passport(unicard, "18.10.1992", "Borodino", "20191012");
    CPassportReader reading(&Passport);
    reading.reader();
    ASSERT_TRUE(Passport.getPassportAvailableToDate() > curtime);
}

TEST(CSberbankCardTest, sendMoneyTest){
    string clientID = "10111213";
    string clientName = "Ivanov A.A.";

    CUniCard* unicard = new CUniCard(clientID, clientName);
    CSberbankDecorator Sbercard(unicard, 25432, true);

    CSberbankReader reading(&Sbercard);
    reading.sendMoney(5000);
    EXPECT_EQ(Sbercard.getMoney(), 20432);
}

TEST(CPolisDecorator, infoPatient){
    string clientID = "10235213";
    string clientName = "Petrov P.P.";

    CUniCard* unicard = new CUniCard(clientID, clientName);

    EXPECT_EQ(unicard->getClientName(),"Petrov P.P.");
    EXPECT_EQ(unicard->getClientID(),"10235213");
}

#endif //HOMETASK4_TEST_H

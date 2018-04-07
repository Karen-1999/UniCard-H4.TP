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


TEST(CSberbankCardTest, sendMoneyTest){
string clientID = "10111213";
string clientName = "Ivanov A.A.";

CUniCard* unicard = new CUniCard(clientID, clientName);
CSberbankDecorator Sbercard(unicard,25432,true);

CSberbankReader reading(&Sbercard);
reading.sendMoney(5000);
EXPECT_EQ(Sbercard.getMoney(), 20432);
}

#endif //HOMETASK4_TEST_H

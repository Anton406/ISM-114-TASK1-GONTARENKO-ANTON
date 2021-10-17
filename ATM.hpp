/**
 *класс ATM описывает банкомат, в котором содержатся следующие поля:
 *набор денег в банкомате
 *идентификационный номер
 *минимальная сумма снятия
 *максимальная сумма снятия
 *функции:
 *перевод денежной суммы в строку
 *загрузка денег
 *снятие денен
 *
 */
#ifndef ATM_hpp
#define ATM_hpp

#include <stdio.h>
#include <iostream>
#include "Money.hpp"
class ATM{
std::string id;
Money cursum;
float minsum, maxsum;
std::string toString();
void loadMoney(Money m);
void getMoney(Money m);
};
#endif 

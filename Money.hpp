/**
 *
 *класс Money представляет собой денежный набор купюр
 *в классе есть методы дозагрузки денег, снятия денег и получения общей суммы денег
 */

#ifndef Money_hpp
#define Money_hpp

#include <stdio.h>
class Money{
public:
    int one, two, five, ten, fifty, hundred, fivehundred,thousand,fivethousand;//количество купюр по 1, 2, 5, 10,50,100,500,1000 и 5000 рублей
    int kop,fivekop,tenkop,fiftykop;//количество копеек номиналами 1,5,10 и 50 копеек
    Money();//конструктор по умолчанию
    Money(int v1,int v2,int v3,int v4,int v5,int v6,int v7,int v8,int v9,int v10,int v11,int v12,int v13);//констуктор с параметрами - загружаем по порядку сначала все купюры в порядке возрастания номиналов, затем копейки в возрастании номиналов
    void add(Money a);//добавить деньги
    void sub(Money a);//вычесть деньги
    float getSum();//получить всю сумму сложением всех монет и купюр в банкомате
    
};
#endif 

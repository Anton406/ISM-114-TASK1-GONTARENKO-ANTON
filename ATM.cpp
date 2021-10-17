
#include "ATM.hpp"
#include <sstream>
#include <iostream>
std::string ATM::toString(){
std::ostringstream ss;
ss << cursum.getSum();
std::string s(ss.str());
        return s;
    }
    void ATM::loadMoney(Money m){
        cursum.add(m);
    }
    void ATM::getMoney(Money m){
        if(m.getSum()>=minsum&&m.getSum()<=maxsum){
            cursum.sub(m);
        }
    }

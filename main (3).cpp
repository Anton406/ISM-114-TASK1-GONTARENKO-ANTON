//
//  main.cpp
//  labcpp
//
//  Created by Админ on 07.10.2021.
//
#include <sstream>
#include <iostream>
using namespace std;
class Money{
public:
    int one, two, five, ten, fifty, hundred, fivehundred,thousand,fivethousand;
    int kop,fivekop,tenkop,fiftykop;
    Money(){
        one=0;
        two=0;
        five=0;
        ten=0;
        fifty=0;
        hundred=0;
        fivehundred=0;
        thousand=0;
        fivethousand=0;
        kop=0;
        fivekop=0;
        tenkop=0;
        fiftykop=0;
    }
    Money(int v1,int v2,int v3,int v4,int v5,int v6,int v7,int v8,int v9,int v10,int v11,int v12,int v13){
        one=v1;
        two=v2;
        five=v3;
        ten=v4;
        fifty=v5;
        hundred=v6;
        fivehundred=v7;
        thousand=v8;
        fivethousand=v9;
        kop=v10;
        fivekop=v11;
        tenkop=v12;
        fiftykop=v13;
    }
    void add(Money a){
        one+=a.one;
        two+=a.two;
        five+=a.five;
        ten+=a.ten;
        fifty+=a.fifty;
        hundred+=a.hundred;
        fivehundred+=a.fivehundred;
        thousand+=a.thousand;
        fivethousand+=a.fivethousand;
        kop+=a.kop;
        fivekop+=a.fivekop;
        tenkop+=a.tenkop;
        fiftykop+=a.fiftykop;
    }
    void sub(Money a){
        one-=a.one;
        two-=a.two;
        five-=a.five;
        ten-=a.ten;
        fifty-=a.fifty;
        hundred-=a.hundred;
        fivehundred-=a.fivehundred;
        thousand-=a.thousand;
        fivethousand-=a.fivethousand;
        kop-=a.kop;
        fivekop-=a.fivekop;
        tenkop-=a.tenkop;
        fiftykop-=a.fiftykop;
    }
    float getSum(){
        float s=0.0;
        s+=one*1;
        s+=two*2;
        s+=five*5;
        s+=ten*10;
        s+=fifty*50;
        s+=hundred*100;
        s+=fivehundred*500;
        s+=thousand*1000;
        s+=fivethousand*5000;
        s+=kop*0.01;
        s+=fivekop*0.05;
        s+=tenkop*0.1;
        s+=fiftykop*0.5;
        
        return s;
    }
    
};
class Bankomat{
string id;
Money cursum;
float minsum, maxsum;
    string toString(){
std::ostringstream ss;
ss << cursum.getSum();
std::string s(ss.str());
        return s;
    }
    void loadMoney(Money m){
        cursum.add(m);
    }
    void getMoney(Money m){
        if(m.getSum()>=minsum&&m.getSum()<=maxsum){
            cursum.sub(m);
        }
    }
};
int main() {
   
    return 0;
}

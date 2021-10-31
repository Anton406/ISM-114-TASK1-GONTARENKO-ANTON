
#include "Money.hpp"
Money::Money(){
    nominals[1]=0;
    nominals[2]=0;
    nominals[5]=0;
    nominals[10]=0;
    nominals[50]=0;
    nominals[100]=0;
    nominals[500]=0;
    nominals[1000]=0;
    nominals[5000]=0;
    nominals[0.01]=0;
    nominals[0.05]=0;
    nominals[0.1]=0;
    nominals[0.5]=0;
}
Money::Money(int v1,int v2,int v3,int v4,int v5,int v6,int v7,int v8,int v9,int v10,int v11,int v12,int v13){
    nominals[1]=v1;
    nominals[2]=v2;
    nominals[5]=v3;
    nominals[10]=v4;
    nominals[50]=v5;
    nominals[100]=v6;
    nominals[500]=v7;
    nominals[1000]=v8;
    nominals[5000]=v9;
    nominals[0.01]=v10;
    nominals[0.05]=v11;
    nominals[0.1]=v12;
    nominals[0.5]=v13;
}
void Money::add(Money a){
    for (auto it = a.nominals.begin(); it != a.nominals.end(); ++it  )
    {
        nominals[it->first]+=a.nominals[it->first];
    }
}
void Money::sub(Money a){
    for (auto it = a.nominals.begin(); it != a.nominals.end(); ++it  )
    {
        nominals[it->first]-=a.nominals[it->first];
    }
}
float Money::getSum(){
    float s=0.0;
    for (auto it = nominals.begin(); it != nominals.end(); ++it  )
    {
        s+=it->first*it->second;
    }
    return s;
}

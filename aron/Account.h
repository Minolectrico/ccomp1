#include <string>
class Account{
public:
    Account(std::string accountName,int initialBalance)
        : name{accountName}{
            if(initialBalance>0){
                balance=intialbalance;
            }
        }
    void deposit(int deposiAmount){
        if(deposiAmount>0){
            balance=balance+depositAmount;
        }
    }
    void retiro(int retiroAmount){
        if(retiroAmount==initial)
    }
    int getBalance()cost{
        return balance;
    }
    void setName(std::string accountName){
        name=accountName;
    }
    std::string getName const{
        return name;
    }
private:
    std::string name;
    int balance{0};

};
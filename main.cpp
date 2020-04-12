#include <iostream>
#include <cmath>
#include <string>
using namespace std;
class bank{
 public:
     int allservices(){
      char option;
      char name;
      int nigussie=10000;
      int genet=0;
      int abiyu=0;
      char sender;
      char reciever;
      char loop='y';
       int money;
       char ask;
       int deposite;
     while(loop=='y'){
      cout<<"what service you want to use?see your balance(a),transfer money(b),to deposit(c):";
      cin>>option;
     if (option=='a'){
      cout<<"Nigussie(n), Genet(g),Abiyu(a)"<<endl;
      cout<<"which one is your bank account?"<<endl;
      cin>>name;
      if(name=='n')
        cout<<"Nigussie's account balance is = "<<nigussie<<"$"<<endl;
      else if(name=='g')
        cout<<"Genet's account balance is = "<<genet<<"$"<<endl;
      else if(name=='a')
        cout<<"Abiyu's account balance is = "<<abiyu<<"$"<<endl;
     }
     if(option=='b'){
      cout<<"Nigussie(n), Genet(g),Abiyu(a)"<<endl;
      cout<<"which one is your bank account?"<<endl;
      cin>>sender;
      cout<<"Nigussie(n), Genet(g),Abiyu(a)"<<endl;
      cout<<"for whom you want to transfer?"<<endl;
      cin>>reciever;
      cout<<"how much money you want to transfer:";
      cin>>money;
       if(reciever=='n' && sender=='a'){
        if(abiyu<money){
            cout<<"sorry you don't have that much money in your account"<<endl;
        }else if(abiyu>=money){
            nigussie = nigussie + money;
            abiyu = abiyu - money;
            cout<<"you have transfered successfully"<<endl;
        }
       }else if(reciever=='n' && sender=='g'){
             if(genet<money){
                cout<<"sorry you don't have that much money in your account"<<endl;
             }else if(genet>=money){
                 nigussie = nigussie + money;
                 genet = genet - money;
                 cout<<"you have transfered successfully"<<endl;
        }
       }else if(reciever=='n' && sender=='n'){
         cout<<"sorry you chose the the wrong account"<<endl;
       }
     if(reciever=='a' && sender=='n'){
        if(nigussie<money){
            cout<<"sorry you don't have that much money in your account"<<endl;
        }else if(nigussie>=money){
            nigussie = nigussie - money;
            abiyu = abiyu + money;
            cout<<"you have transfered successfully"<<endl;
        }
     }
     if(reciever=='a' && sender=='g'){
        if(genet<money){
            cout<<"sorry you don't have that much money in your account"<<endl;
        }else if(genet>=money){
            abiyu = abiyu + money;
            genet = genet - money;
            cout<<"you have transfered successfully"<<endl;
        }
     }
     if(reciever=='a' && sender=='a'){
        if(abiyu<money){
            cout<<"sorry you don't have that much money in your account"<<endl;
        }
     }
     if(reciever=='g' && sender=='a'){
        if(abiyu<money){
            cout<<"sorry you don't have that much money in your account"<<endl;
        }else if(abiyu>=money){
            genet = genet + money;
            abiyu = abiyu - money;
            cout<<"you have transfered successfully"<<endl;
        }
     }
        if(reciever=='g' && sender=='n'){
        if(abiyu<money){
            cout<<"sorry you don't have that much money in your account"<<endl;
        }else if(abiyu>=money){
            genet = genet + money;
            nigussie = nigussie - money;
            cout<<"you have transfered successfully"<<endl;
        }
    }
    if(reciever=='g' && sender=='g'){
        cout<<"sorry you chose the wrong account or you chose your account"<<endl;
    }
     }
     if(option=='c'){
      cout<<"Nigussie(n), Genet(g),Abiyu(a)"<<endl;
      cout<<"which one is your bank account?"<<endl;
      cin>>name;
        cout<<"how much you want to deposit:";
        cin>>money;
        if(name=='n'){
            nigussie = nigussie+money;
            cout<<"Now there is "<<nigussie<<"$ "<<"in your account"<<endl;
        }
        if(name=='g'){
            genet =  genet+money;
            cout<<"Now there is "<<genet<<"$ "<<"in your account"<<endl;
        }
        if(name=='a'){
            abiyu = abiyu+money;
            cout<<"Now there is "<<abiyu<<"$ "<<"in your account"<<endl;
        }
     }
     cout<<"do you want to continue?y/n:";
     cin>>loop;
     }
     }

};
int main()
{
char answer;
cout<<"***************Welcome to World bank of Ethiopia*******************"<<endl;
bank bo;
bo.allservices();
}

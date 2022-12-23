
#include<iostream>
#include<string>
using namespace std;
int main(){
    int age, bounty;
    string character;
    cout << "Enter your age: ";
    cin >> age;
    if(age <= 25){
        int height;
        cout << "Enter your height: ";
        cin >> height;
        if(height < 100){
            character = "Chopper";
        }else{
            if(height < 180){
                character = "Usopp";
            }else{
                cout << "Enter your bounty: ";
                cin >> bounty;
                if(bounty > 11e8){
                    character = "Zoro";
                }else{
                    character = "Sanji";
                }
            }
        }

    }else{
        if(age <= 60){
            cout << "Enter your bounty: ";
            cin >> bounty;
            if(bounty > 5e8){
                character = "Jinbe";
            }else{
                character = "Franky";
            }
        }else{
            character = "Brook";
        }

    }
    cout << "Your character = " << character;

    return 0;


}
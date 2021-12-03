#include <iostream>
#include <string>
using namespace std;

int main(){
    string his_name ,his_id ,first_his_id ,last_his_id ,his_movie ,his_day , trash;
    cout << "Fahsai: Sawadee ka...Can you tell me your name?" << endl;
    cout << "?????: ";
    getline(cin,his_name);
    cout << "Fahsai: Wow!!! " << his_name << " is a really cool name." << endl;
    cout << "Fahsai: I think you are an Engineering student. What is your student ID?" << endl;
    cout << his_name <<": ";
    getline(cin,his_id);
    first_his_id = his_id[0];
    last_his_id = his_id[1];
    his_id = first_his_id+last_his_id;
    cout << "Fahsai: I think you may be GEAR " << stoi(his_id) - 12 << ". I have a free movie ticket for you." << endl;
    cout << "Fahsai: Let's go to the cinema together!!!" << endl;
    cout << "Fahsai: What movie do you want to watch?" << endl;
    cout << his_name <<": ";
    getline(cin,his_movie);
    cout << "Fahsai: So....which day are you free to go with me?" << endl;
    cout << his_name <<": ";
    getline(cin,his_day);
    cout << "Fahsai: " << his_day << "....that is OK!!! I'm looking forward to watching " << his_movie << " with you." << endl;
    cout << his_name <<": ";
    getline(cin,trash);
    cout << "Fahsai: 555+ see you " << his_day << ". Bye Bye \\(^ ^)/" << endl;
    return 0;
}
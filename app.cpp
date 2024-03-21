#include <iostream>

using namespace std;

void verticalPiramid(int y){
    std::cout << "Result:" << std::endl;
    std::cout << "---------------------" << std::endl;
    string star = "";
    for(int i = 0; i < y; i++){
        star += "*";
        std::cout << star << std::endl;
    }
    for(int i = 1; i < y; i++){
        string starD = "";
        for(int j = 0; j < y - i; j++){
            starD += "*";
        }
        std::cout << starD << std::endl;
    }
    std::cout << "---------------------" << std::endl;
}

int main(){
    int hiegth;
    std::cout << "Insert The Hiegth Of The Piramid:";
    std::cin >> hiegth;
    verticalPiramid(hiegth);
    return 0;
}
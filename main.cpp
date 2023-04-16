#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    int height;
    int width;
    std::cout<<"Введите ширину (от 1 до 60) и высоту рамки (через пробел):";
    std::cin>>width>>height;
    int y;
    int x;
    if (height>0 && width>0 && width<61) {
        for (y = 1; y <= height; y++) {
            for (x = 1; x <= width; x++) {
                if (x == 1) {
                    std::cout << "|";
                } else if (x == width) {
                    std::cout << "|";
                } else if (y == 1) {
                    std::cout << "-";
                } else if (y == height) {
                    std::cout << "-";
                } else {
                    std::cout << " ";
                }
            }
            std::cout << "\n";
        }
    } else {
        std::cout<<"Введены неправильные параметры";
    }


}

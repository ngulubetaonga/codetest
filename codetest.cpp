#include <iostream>
#include <string>
int main() {
    int start, end;
    std:: cout << "enter the starting number:";
    std:: cin >> start;
    std:: cout << "enter the end number:";
    std:: cin >> end;

    for (int i = start; i <= end; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            std::cout << "rayroy" << std::endl;
        }
        else if (i % 3 == 0) {
            std::cout << "ray" std:: endl;
        }
        else if (i % 5 == 0) {
            std::cout << "roy" std: : endl;
        }
        else {
            std::cout << i << std: : endl;
     }
    } return 0
        }

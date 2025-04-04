#include <iostream>
#include <cstdlib>
#include <string>

void openFile(const std::string& file);
int homeDisplay(int& choice);
void clearTerminal();

std::string phishBaitVersion = "v1.0.0";

int main() {
    clearTerminal();
    while(true) {
        int choice;
        clearTerminal();
        homeDisplay(choice);
        switch(choice) {
            case 0:
                clearTerminal();
                return 0;
            case 1:
                openFile("../tacklebox/index.html");
                break;
        }
    }
    return 0;
}

void openFile(const std::string& file) {
    std::string command;

    #ifdef __APPLE__
        command = "open " + file;
    #elif defined(_WIN32)
        command = "start " + file;
    #else
        command = "xdg-open " + file;
    #endif

    system(command.c_str());
}

int homeDisplay(int& choice) {
    std::cout << " ___ _    _    _    ___       _ _\n";
    std::cout << "| _ \\ |_ (_)__| |_ | _ ) __ _(_) |_\n";
    std::cout << "|  _/ ' \\| (_-< ' \\| _ \\/ _` | |  _|\n";
    std::cout << "|_| |_||_|_/__/_||_|___/\\__,_|_|\\__|  " <<  phishBaitVersion << "\n\n\n";
    std::cout << "[0] Quit\n";
    std::cout << "[1] Open Demo\n";
    std::cout << "\nSelect an option: ";
    std::cin >> choice;

    return choice;
}

void clearTerminal() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}
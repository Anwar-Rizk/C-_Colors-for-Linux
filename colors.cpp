#include <iostream>
#include <unistd.h>
using namespace std;

/* 

\033[0;31m
       ^^
         foreground background
black        30         40
red          31         41
green        32         42
yellow       33         43
blue         34         44
magenta      35         45
cyan         36         46
white        37         47

\033[0;31m
     ^
reset             0  (everything back to normal)
bold/bright       1  (often a brighter shade of the same colour)
underline         4
inverse           7  (swap foreground and background colours)

Example: cout << "\033[1;31m bold red text \033[0m" << "\n";
Example: cout << "\033[1;31m bold red text \033[0m" << "\n";

*/

void colorize(string text, int fg = 37, bool bold = 0, bool underline = 0, int bg = 40){
    cout <<  "\033[" << (bold ? "1;" : "0;") << (underline ? "4;" : "") << fg << ";" << bg << "m" << text << "\033[0m" << "\n";
}

const string red("\033[0;31m"), red_b("\033[1;31m"), red_u("\033[4;31m"), red_bu("\033[1;4;31m");
const string green("\033[0;32m"), green_b("\033[1;32m"), green_u("\033[4;32m"), green_bu("\033[1;4;32m");
const string yellow("\033[0;33m"), yellow_b("\033[1;33m"), yellow_u("\033[4;33m"), yellow_bu("\033[1;4;33m");
const string blue("\033[0;34m"), blue_b("\033[1;34m"), blue_u("\033[4;34m"), blue_bu("\033[1;4;34m");
const string magenta("\033[0;35m"), magenta_b("\033[1;35m"), magenta_u("\033[4;35m"), magenta_bu("\033[1;4;35m");
const string cyan("\033[0;36m"), cyan_b("\033[1;36m"), cyan_u("\033[4;36m"), cyan_bu("\033[1;4;36m");
const string white("\033[0;37m"), white_b("\033[1;37m"), white_u("\033[4;37m"), white_bu("\033[1;4;37m");
const string reset("\033[0m");

class Color {
public:
    void printRed(string text) {
        cout << red << text << reset;
    }
    void printRedB(string text) {
        cout << red_b << text << reset;
    }
    void printRedU(string text) {
        cout << red_u << text << reset;
    }
    void printRedBU(string text) {
        cout << red_bu << text << reset;
    }
    void printGreen(string text) {
        cout << green << text << reset;
    }
    void printGreenB(string text) {
        cout << green_b << text << reset;
    }
    void printGreenU(string text) {
        cout << green_u << text << reset;
    }
    void printGreenBU(string text) {
        cout << green_bu << text << reset;
    }
    void printYellow(string text) {
        cout << yellow << text << reset;
    }
    void printYellowB(string text) {
        cout << yellow_b << text << reset;
    }
    void printYellowU(string text) {
        cout << yellow_u << text << reset;
    }
    void printYellowBU(string text) {
        cout << yellow_bu << text << reset;
    }
    void printBlue(string text) {
        cout << blue << text << reset;
    }
    void printBlueB(string text) {
        cout << blue_b << text << reset;
    }
    void printBlueU(string text) {
        cout << blue_u << text << reset;
    }
    void printBlueBU(string text) {
        cout << blue_bu << text << reset;
    }
    void printMagenta(string text) {
        cout << magenta << text << reset;
    }
    void printMagentaB(string text) {
        cout << magenta_b << text << reset;
    }
    void printMagentaU(string text) {
        cout << magenta_u << text << reset;
    }
    void printMagentaBU(string text) {
        cout << magenta_bu << text << reset;
    }
    void printCyan(string text) {
        cout << cyan << text << reset;
    }
    void printCyanB(string text) {
        cout << cyan_b << text << reset;
    }
    void printCyanU(string text) {
        cout << cyan_u << text << reset;
    }
    void printCyanBU(string text) {
        cout << cyan_bu << text << reset;
    }
    void printWhite(string text) {
        cout << white << text << reset;
    }
    void printWhiteB(string text) {
        cout << white_b << text << reset;
    }
    void printWhiteU(string text) {
        cout << white_u << text << reset;
    }
    void printWhiteBU(string text) {
        cout << white_bu << text << reset;
    }
};

int main() {

    //sleep(0.8); // sleep function in linux -> accepts seconds(double or int) as argument
    //system("clear"); // clear screen in linux
//-----------------------------------------------------------------------------------------------
    //                      Method 1
    // using Color class:
    // use (.) to access all the functions in the class
    // hint: B = bold, U = underline, BU = bold and underline
    Color color;
    color.printCyan("\nThis is cyan text.\n");
    color.printCyanB("This is bold cyan text.\n");
    color.printCyanU("This is underlined cyan text.\n");
    color.printCyanBU("This is bold and underlined cyan text.\n");
    color.printMagenta("This is magenta text.\n");
    color.printWhite("This is white text.\n");
    color.printWhiteB("This is bold white text.\n");
    cout << "\nThis is normal text.\n";
//-----------------------------------------------------------------------------------------------
    //                      Method 2
    cout << "\n" << blue_b << "Anwar" << reset << "\n";
//-----------------------------------------------------------------------------------------------
    //                      Method 3
    //          [1;4;30;45]->[1 ] [   4    ] [   30   ]      [       45       ]   
    cout << "\n" << "\033[1;4;30;45m bold underlined black text with magenta background \033[0m" << "\n";
//-----------------------------------------------------------------------------------------------
    //                      Method 4
    colorize("\nThis is colorize function\n", 36, true, false);

    return 0;
}
/*
CH-230-A
a13_p1.cpp
Shishir Sunar
ssunar@jacobs-university.de
*/
#include <fstream>
#include <iostream>
#include <cstring>

int main()
{
    char *c = new char[245];
    std::cout << "Enter the filename: ";
    std::cin >> c;
    std::ifstream  src(c, std::ios::binary); //open
    if (!src.good()){ //if bad opening
        std::cerr << "Error opening file" << std::endl;
        exit(1);
    }
    char *ch = new char[250];
    int dotflag = 0;
    for(int i = 0, k = 0; i<245; i++){ //creating new filename
        if (c[i]!='.'){
            ch[k] = c[i];
        }
        else{
            ch[k] = '_';
            ch[++k] = 'c';
            ch[++k] = 'o';
            ch[++k] = 'p';
            ch[++k] = 'y';
            ch[++k] = '.';
            dotflag = 1;
        }
        k++;
    }
    if (!dotflag){ //if the filename doesnot contain dot
        strcat(ch, "_copy");
    }
    std::ofstream  dst(ch, std::ios::binary);
    if (!dst.good()){ //check if the file is good
        std::cerr << "Error copying file" << std::endl;
        exit(1);
    }
    dst << src.rdbuf();
    std::cout << "Successfully copied" << std::endl;
    return 0;
}
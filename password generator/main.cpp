#include <iostream>
#include <stdlib.h>
#include <cmath>
#include <stdio.h>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    int item_list[62]= {'1,a','A','b','B','2','c','C','3','d','D','e','4','E','f','F','g','G','5','h','H','i','6','I','j','7','J','k','K','8','l','L','m','M','n','N','9','o','O','p','P','q','0','Q','r','R','s','S','t','T','u','U','v','V','w','W','x','X','y','Y','z','Z'};
    string password = "";
    for(int i = 0; i<=15; i++) {
        int random_no = rand() % 62;
        password += item_list[random_no];
    }
    cout<<"Password : "<<password<<endl;
    return 0;
}

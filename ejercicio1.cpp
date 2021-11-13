#include <iostream>

using namespace::std;


void divison(int num, int div)
{
    do {
        if ((num % div) == 0) {

            cout << div << endl;
            num = num/div;
        } else {
            div=div+1;
        }
    } while (num>1);
}

int main(){
    divison(100,2);
    return 0;
}
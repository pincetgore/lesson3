#include <iostream>

using namespace std;
extern int a,b,c,d;
extern float fRes;

int main()
{
//    //Задание 1
//    fRes = a*(b+(static_cast < float >(c)/d));
//    cout << "Result is: " << fRes << endl;

//    //Задание 2
//    int x,z;
//    cout << "Enter a number:";
//    cin >> z;
//    x = (z>21) ? ((z-21)*2) : (21-z);
//    cout << x << endl;

    //Задание 3
    int iArr [3][3][3] =
    {
        {1,2,3},{4,5,6},{7,8,9},
        {10,11,12},{13,14,15},{16,17,18},
        {19,20,21},{22,23,24},{25,26,27},
    }, *ptr=nullptr;
        ptr = &iArr[1][0][1];
    cout << "Center of cube is: " << *(ptr);

    return 0;
}

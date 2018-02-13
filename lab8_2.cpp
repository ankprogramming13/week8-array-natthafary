#include <iostream>

using namespace std;

int main () {

        char name[] = {"Nattha"};
        int nameLength = 6;
        cout << name;
        char nom[7];

        // TODO: เขียนโปรแกรมเพื่อสลับชื่อ
        // hint : สร้าง array มารับค่าตัวอักษรแบบย้อนกลับ สามารถใช้ loop เข้ามาช่วยได้
        nom[0] = name[6];
        nom[1] = name[5];
        nom[2] = name[4];
        nom[3] = name[3];
        nom[4] = name[2];
        nom[5] = name[1];
        nom[6] = '\0';
        cont << nom << end;

        nom[0] = name[0] + 1;
        nom[1] = name[1] + 1;
        nom[2] = name[2] + 1;
        nom[3] = name[3] + 1;
        nom[4] = name[4] + 1;
        nom[5] = name[5] + 1;
        cont << nom << end;

        return 0;
}

//clear @bash == รีหน้า
//แปลภาษากด alt+shift
#include <stdio.h>
#define for 1000 //กำหนดให้ตัวแปรforเป็นค่าคงที่1000
//ตัวแปรชนิดintที่ไม่ได้กำหนดค่าเริ่มต้น @Global == 0 แต่ถ้าอยู่ในฟังก์ชั่นอื่นๆจะได้เป็นค่าสุ่ม
int main()
{
    int a = 10;
    unsigned int b = 3000000000; //unsigned int == long long
    // None char == '\0'
    printf("%u",b);
}
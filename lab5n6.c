#include <stdio.h>
int main()
{
    // int x = 100;
    // int a = 0144; //ฐาน8 0นำหน้า
    // int b = 0x64; //ฐาน16 0xนำหน้า
    // // printf("x = %d\n",x);
    // // printf("reference x = %lu\n", &x); //บอกaddressใช้ & นำหน้าตัวแปรที่ต้องการ
    // // printf("reference x = %p\n", &x); //%p == print addressในรูปฐาน16

    // int number[] = {4, 5, 6, 7, 8};
    // char input[100];
    // printf("reference number = %p\n", number); //address array คือ indexที่0 หรือ เรียกแค่ชื่อ
    // printf("reference &number[0] = %p\n", &number[0]); //0028FF10
    // printf("index 2 = %d\n", number[2]);
    // printf("reference &number[2] = %p\n", number + 2); //0025FF18 ห่างจาก0 8 เพราะเป็น int (ดูเพิ่มในexcel)

    // int *ptr = &x; //ประกาศตัวแปรpointer โดยใส่*นำหน้า
    // int *arrPtr;
    // arrPtr = number; //กำหนดค่าpointerใม่ต้องใส่*นำหน้า //การกำหนดค่าถ้าไม่ใช่arrayให้ใส่&นำหน้าตัวแปรด้วย
    // // &x = 500; อันนี้ทำไม่ได้ เปลี่ยนที่ชี้ได้แต่เปลี่ยนaddressไม่ได้
    // printf("ptr = %p , value = %d \n", ptr, *ptr); //print pointer มี*เป็นตำแหน่ง ไม่มี*เป็นค่าที่ตำแหน่งนั้น
    // // number[2] = 500;
    // *(arrPtr+2) = 500;
    // printf("arrPtr + 3000 = %p , value = %d \n", arrPtr + 3000, *(arrPtr+3000)); //ถ้าเกินพื้นที่จะเอาค่ามั่วๆออกมาแทน เพราะภาษาสนใจว่าหาindex0เจอมั้ยมากกว่า\0
    
    // int number[] = {4, 5, 6, 7, 8};
    // for(int *ptr = number; ptr <= &number[4]; ptr++){
    //     printf("[%p] = %d\n", ptr, *ptr);
    // }
    // char input[100];
    // int count = 0;
    // char c;
    // while ((c = getchar()) != '\n'){
    //     input[count] = c;
    //     ++count;
    // }
    // printf("char arr = %s\n",input);
    // for (char *cPtr = input; *cPtr != '\0' ; cPtr++){
    //     printf("%c\n", *cPtr);
    // }

    int a;
    char c;
    char s[100];
    scanf("%d-%c-%s", &a, &c, s);
    printf("%d %c %s", a, c, s);
}
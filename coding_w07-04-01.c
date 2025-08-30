#include <stdio.h>  // เป็นไลบรารีมาตรฐานที่จำเป็นสำหรับการรับและแสดงผลข้อมูล

int main() { 
    int memberLevel; // ประกาศตัวแปร memberLevel สำหรับรับค่าระดับสมาชิก
    // แสดงข้อความให้ผู้ใช้ป้อนระดับสมาชิก
    printf("Enter membership level (1-4): ");
    scanf("%d", &memberLevel); // รับค่าจากผู้ใช้และเก็บไว้ในตัวแปร memberLevel

    // ตรวจสอบระดับสมาชิกด้วย if-else if
    if (memberLevel == 1) {  // ถ้าค่าที่ป้อนคือ 1 (ระดับ Silver) ให้แสดงสิทธิประโยชน์
        printf("Silver Member: 5%% discount\n");
    } else if (memberLevel == 2) {  // ถ้าค่าที่ป้อนคือ 2 (ระดับ Gold) ให้แสดงสิทธิประโยชน์
        printf("Gold Member: 10%% discount + Reward points\n");
    } else if (memberLevel == 3) {  // ถ้าค่าที่ป้อนคือ 3 (ระดับ Platinum) ให้แสดงสิทธิประโยชน์
        printf("Platinum Member: 15%% discount + Reward points + Birthday gift\n");
    } else if (memberLevel == 4) {  // ถ้าค่าที่ป้อนคือ 4 (ระดับ Diamond) ให้แสดงสิทธิประโยชน์
        printf("Diamond Member: Everything + VIP events\n");
    } else {
        // ถ้าค่าที่ป้อนไม่ใช่ 1-4 ให้แสดงข้อความแจ้งเตือนว่าไม่ถูกต้อง
        printf("Invalid membership level\n");
    }

    return 0; // คืนค่า 0 เพื่อบอกว่าโปรแกรมทำงานเสร็จสิ้น
}
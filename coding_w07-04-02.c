#include <stdio.h> // เป็นไลบรารีมาตรฐานที่จำเป็นสำหรับการรับและแสดงผลข้อมูล

int main() {
    int memberLevel; // ประกาศตัวแปร memberLevel สำหรับรับค่าระดับสมาชิก

    // แสดงข้อความให้ผู้ใช้ป้อนระดับสมาชิก
    printf("Enter membership level (1-4): ");
    scanf("%d", &memberLevel); // รับค่าจากผู้ใช้และเก็บไว้ในตัวแปร memberLevel

    // เริ่มต้นการตรวจสอบเงื่อนไขด้วย switch-case
    switch (memberLevel) {
        case 1: // ถ้าค่าที่ป้อนตรงกับ 1
            printf("Silver Member: 5%% discount\n");
            break; // สั่งให้จบการทำงานของ switch-case นี้
        case 2: // ถ้าค่าที่ป้อนตรงกับ 2
            printf("Gold Member: 10%% discount + Reward points\n");
            break; // สั่งให้จบการทำงานของ switch-case นี้
        case 3: // ถ้าค่าที่ป้อนตรงกับ 3
            printf("Platinum Member: 15%% discount + Reward points + Birthday gift\n");
            break; // สั่งให้จบการทำงานของ switch-case นี้
        case 4: // ถ้าค่าที่ป้อนตรงกับ 4
            printf("Diamond Member: Everything + VIP events\n");
            break; // สั่งให้จบการทำงานของ switch-case นี้
        default: // ถ้าค่าที่ป้อนไม่ตรงกับ case ไหนเลย
            // กรณีที่ผู้ใช้ป้อนค่าที่ไม่ใช่ 1-4
            printf("Invalid membership level\n");
            break; // สั่งให้จบการทำงานของ switch-case นี้
    }

    return 0; // คืนค่า 0 เพื่อบอกว่าโปรแกรมทำงานเสร็จสิ้น
}
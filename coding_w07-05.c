#include <stdio.h> // เป็นไลบรารีมาตรฐานที่จำเป็นสำหรับการรับและแสดงผลข้อมูล

int main() {  
    // กำหนดตัวแปรสำหรับเก็บข้อมูลลูกค้า
    int age; // ตัวแปรเก็บอายุ
    int vip_level; // ตัวแปรเก็บระดับ VIP
    float purchase_amount; // ตัวแปรเก็บยอดซื้อ
    float discount_rate = 0.0; // ตัวแปรเก็บอัตราส่วนลด (เริ่มต้นที่ 0.0)
    
    // รับข้อมูลจากผู้ใช้
    printf("Enter age: "); // แจ้งให้ผู้ใช้ป้อนอายุ
    scanf("%d", &age); // รับค่าอายุจากผู้ใช้และเก็บไว้ในตัวแปร age
    printf("Enter VIP level (1-5): "); // แจ้งให้ผู้ใช้ป้อนระดับ VIP
    scanf("%d", &vip_level); // รับค่าระดับ VIP จากผู้ใช้และเก็บไว้ในตัวแปร vip_level
    printf("Enter purchase amount: "); // แจ้งให้ผู้ใช้ป้อนยอดซื้อ
    scanf("%f", &purchase_amount); // รับค่ายอดซื้อจากผู้ใช้และเก็บไว้ในตัวแปร purchase_amount

    // ใช้โครงสร้าง if-else if-else เพื่อตรวจสอบเงื่อนไขส่วนลด
    printf("\n--- Customer Info ---\n"); // แสดงหัวข้อข้อมูลลูกค้า
    printf("Age: %d | VIP Level: %d | Amount: %.2f THB\n", age, vip_level, purchase_amount); // แสดงข้อมูลที่ได้รับจากผู้ใช้

    // เงื่อนไขที่ 1: อายุ > 60 หรือ VIP ระดับ 3-4
    if (age > 60 || (vip_level == 3 || vip_level == 4)) {
        discount_rate = 0.20; // ส่วนลด 20%
    }
    // เงื่อนไขที่ 2: อายุ 30-40 และ ยอดซื้อ >= 2000
    else if ((age >= 30 && age <= 40) && purchase_amount >= 2000) {
        discount_rate = 0.15; // ส่วนลด 15%
    }
    // เงื่อนไขที่ 3: อายุ 18-25 และ ยอดซื้อ >= 1000
    else if ((age >= 18 && age <= 25) && purchase_amount >= 1000) {
        discount_rate = 0.10; // ส่วนลด 10%
    }
    // เงื่อนไขที่ 4: VIP ระดับ 5 หรือ ยอดซื้อ >= 50000
    else if (vip_level == 5 || purchase_amount >= 50000) {
        discount_rate = 0.25; // ส่วนลด 25%
    }
    
    // แสดงผลลัพธ์ส่วนลดที่ได้รับ
    if (discount_rate > 0) { 
        printf("Discount received: %.0f%%\n", discount_rate * 100); // แสดงเปอร์เซ็นต์ส่วนลด
    } else {
        printf("No discount applied\n"); // แสดงว่าไม่มีส่วนลด
    }
    
    printf("\nThank you for shopping with us!\n"); // ข้อความขอบคุณลูกค้า

    return 0; // คืนค่า 0 เพื่อบอกว่าโปรแกรมทำงานเสร็จสิ้น
}

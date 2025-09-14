# sort-algorithm-c

โปรเจคนี้เก็บชุดของอัลกอริทึมการเรียงลำดับ (*sorting algorithms*) ที่เขียนด้วยภาษา **C** พร้อมตัวอย่างการใช้งานและ Makefile เพื่อช่วย compile ให้สะดวก

---

## เนื้อหาในโปรเจค

| ไฟล์ / โฟลเดอร์ | คำอธิบาย |
|------------------|-----------|
| `main.c` | โปรแกรมหลัก (driver) ที่รันอัลกอริทึมเรียงลำดับต่าง ๆ |
| `sort/` | โฟลเดอร์เก็บไฟล์อัลกอริทึม เช่น Bubble Sort, Insertion Sort, Selection Sort ฯลฯ |
| `sort/sort.h` | header file รวมฟังก์ชันของอัลกอริทึม |
| `Makefile` | ใช้สำหรับ build และ clean โปรแกรม |

---

## วิธีใช้งาน

1. โคลน (clone) repository มายังเครื่องของคุณ
   ```bash
   git clone https://github.com/ChevFy/sort-algorithm-c.git
   cd sort-algorithm-c
   ```

2. คอมไพล์โปรเจค
   ```bash
   make
   ```

   คำสั่งนี้จะสร้างไฟล์ executable (ชื่อ `main`)

3. รันโปรแกรม
   ```bash
   ./main
   ```

4. ลบไฟล์ที่คอมไพล์แล้ว (clean)
   ```bash
   make clean
   ```

---

## อัลกอริทึมที่มีในโปรเจค (14 sep 2025)
- Bubble Sort  
- Selection Sort  
- Insertion Sort
- Shell Sort
- Heap Sort
- Merge Sort  
- Quick Sort  
---

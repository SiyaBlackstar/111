#include <stdio.h>
#include "intlist.h"

int main(void) {
    IntList scores;
    int score;

    list_init(&scores);
    printf("ป้อนคะแนนนักศึกษา (ป้อน -1 เพื่อจบ):
");

    while (1) {
        printf("คะแนน: ");
        if (scanf("%d", &score) != 1 || score == -1) break;
        if (!list_append(&scores, score)) {
            printf("รายการเต็มแล้ว!
");
            break;
        }
    }

    int count = list_size(&scores);
    if (count > 0) {
        int sum = list_sum(&scores);
        double avg = (double)sum / count;
        printf("
--- ผลลัพธ์ ---
");
        printf("จำนวนนักศึกษา : %d คน
", count);
        printf("ผลรวมคะแนน    : %d
", sum);
        printf("คะแนนเฉลี่ย   : %.2f
", avg);
    } else {
        printf("ไม่มีข้อมูลคะแนน
");
    }

    return 0;
}

//
//  main.cpp
//  Home Work 21
//
//  Created by 何宗愷 on 2019/5/30.
//  Copyright © 2019 何宗愷. All rights reserved.
//

#include <stdio.h>

#include <stdlib.h>

struct servitor

{
    char num[8],name[12];
    int hourly_pay,hours,payment;
};

void calc(struct servitor *);

int main(void)

{
    struct servitor emp;
    printf("請輸入編號,姓名,時薪,工作時數: ");
    scanf(" %s %s %d %d", emp.num, emp.name, &emp.hourly_pay, &emp.hours);
    
    calc(&emp);
    printf("月收入: %d\n", emp.payment);
    
    
    return 0;
    
}
void calc(struct servitor *p)

{
    p->payment=p->hourly_pay*p->hours;
}

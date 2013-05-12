
/* Copyright(C) 2013, GaInOS-TK by Fan Wang. All rights reserved.
 * Generated by GaInOS-TK Studio. 
 * This is a template for "app.c", you can add your application code here.
 */
#include "Os.h"
#include <stdio.h>


TASK(vTask0)
{
    /* Add your task special code here, but Don't delete this Task declaration.*/
    printf("vTask0 is running.\r\n");
    (void)TerminateTask();
}

TASK(vTask1)
{
    /* Add your task special code here, but Don't delete this Task declaration.*/
    printf("vTask1 is running.\r\n");
    (void)TerminateTask();
}

TASK(vTask2)
{
    /* Add your task special code here, but Don't delete this Task declaration.*/
    printf("vTask2 is running.\r\n");
    (void)TerminateTask();
}

ALARM(vAlarm0)
{
    /* Alarm Type: Task, you still can add your special code here.*/
    (void)ActivateTask(ID_vTask0);
}
ALARM(vAlarm1)
{
    /* Alarm Type: Event, you still can add your special code here.*/
    (void)SetEvent(ID_vTask1,vTask1Event0);
}
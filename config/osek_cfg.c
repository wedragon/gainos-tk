/* Copyright(C) 2013, GaInOS-TK by Fan Wang. All rights reserved.
 * Generated by GaInOS-TK Studio at 2013-07-07:10-06-25.
 * Don't Modify it by hand.
 * Email: parai@foxmail.com
 * URL: https://github.com/parai/gainos-tk  && http://hi.baidu.com/parai
 */


#include "osek_os.h"
#include "osek_cfg.h"
#include "knl_task.h"
#include "knl_alarm.h"
#include "knl_event.h"
#include <stdio.h>
GenTaskStack(Task1);
GenTaskStack(Task2);
GenTaskStack(Task3);
GenTaskStack(TaskError);
EXPORT const T_GTSK	knl_gtsk_table[cfgOSEK_TASK_NUM]=
{
	GenTaskInfo(Task1,Task1Mode|PREEMTABLE,INVALID_EVENT,Task1Pri),
	GenTaskInfo(Task2,Task2Mode|PREEMTABLE,INVALID_EVENT,Task2Pri),
	GenTaskInfo(Task3,Task3Mode|PREEMTABLE,INVALID_EVENT,Task3Pri),
	GenTaskInfo(TaskError,TaskErrorMode|PREEMTABLE,INVALID_EVENT,TaskErrorPri),
};

EXPORT const AlarmBaseType knl_almbase_table[cfgOSEK_COUNTER_NUM]=
{
	GenAlarmBaseInfo(32767,1,1), /* SystemTimer */
	GenAlarmBaseInfo(32767,2,2), /* TestsuiteTimer */
};

EXPORT const T_GALM knl_galm_table[cfgOSEK_ALARM_NUM]=
{
	GenAlarmInfo(Alarm1,SystemTimer,Alarm1),
	GenAlarmInfo(Alarm2,SystemTimer,Alarm2),
	GenAlarmInfo(Alarm3,SystemTimer,Alarm3),
	GenAlarmInfo(Alarm4,SystemTimer,Alarm4),
	GenAlarmInfo(Alarm6,TestsuiteTimer,Alarm6),
	GenAlarmInfo(Alarm7,TestsuiteTimer,Alarm7),
	GenAlarmInfo(AlarmError,SystemTimer,AlarmError),
};

EXPORT const PRI knl_gres_table[cfgOSEK_RESOURCE_NUM]=
{
	/* ceilpri */ RES_SCHEDULERPri,  /* RES_SCHEDULER */
};


ALARM(Alarm1)
{
    /* Alarm Type: Task, you still can add your special code here.*/
    (void)ActivateTask(Task1);
}
ALARM(Alarm2)
{
    /* Alarm Type: Task, you still can add your special code here.*/
    (void)ActivateTask(Task2);
}
ALARM(Alarm3)
{
    /* Alarm Type: Task, you still can add your special code here.*/
    (void)ActivateTask(Task3);
}
ALARM(Alarm4)
{
    /* Alarm Type: Task, you still can add your special code here.*/
    (void)ActivateTask(Task3);
}
ALARM(Alarm6)
{
    /* Alarm Type: Task, you still can add your special code here.*/
    (void)ActivateTask(Task1);
}
ALARM(Alarm7)
{
    /* Alarm Type: Task, you still can add your special code here.*/
    (void)ActivateTask(Task2);
}
ALARM(AlarmError)
{
    /* Alarm Type: Task, you still can add your special code here.*/
    (void)ActivateTask(TaskError);
}
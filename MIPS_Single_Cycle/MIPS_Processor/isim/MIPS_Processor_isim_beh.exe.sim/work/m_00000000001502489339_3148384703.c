/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "D:/CSULB_Classes/CECS_440/Labs_Projects/MIPS_Single_Cycle_Processor/MIPS_Processor/ALU_Control.v";
static unsigned int ng1[] = {130U, 0U};
static unsigned int ng2[] = {2U, 0U};
static unsigned int ng3[] = {138U, 0U};
static unsigned int ng4[] = {6U, 0U};
static unsigned int ng5[] = {146U, 0U};
static unsigned int ng6[] = {0U, 0U};
static unsigned int ng7[] = {150U, 0U};
static unsigned int ng8[] = {1U, 0U};
static unsigned int ng9[] = {170U, 0U};
static unsigned int ng10[] = {7U, 0U};
static unsigned int ng11[] = {158U, 0U};
static unsigned int ng12[] = {12U, 0U};
static unsigned int ng13[] = {252U, 252U};
static unsigned int ng14[] = {255U, 254U};
static unsigned int ng15[] = {15U, 15U};



static void Always_38_0(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 2528U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 2848);
    *((int *)t2) = 1;
    t3 = (t0 + 2560);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(39, ng0);

LAB5:    xsi_set_current_line(41, ng0);
    t5 = (t0 + 1208U);
    t6 = *((char **)t5);
    t5 = (t0 + 1048U);
    t7 = *((char **)t5);
    xsi_vlogtype_concat(t4, 8, 8, 2U, t7, 6, t6, 2);

LAB6:    t5 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_xcompare(t4, 8, t5, 8);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_xcompare(t4, 8, t2, 8);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_xcompare(t4, 8, t2, 8);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_xcompare(t4, 8, t2, 8);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng9)));
    t8 = xsi_vlog_unsigned_case_xcompare(t4, 8, t2, 8);
    if (t8 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng11)));
    t8 = xsi_vlog_unsigned_case_xcompare(t4, 8, t2, 8);
    if (t8 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng13)));
    t8 = xsi_vlog_unsigned_case_xcompare(t4, 8, t2, 8);
    if (t8 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng14)));
    t8 = xsi_vlog_unsigned_case_xcompare(t4, 8, t2, 8);
    if (t8 == 1)
        goto LAB21;

LAB22:
LAB24:
LAB23:    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);

LAB25:    goto LAB2;

LAB7:    xsi_set_current_line(42, ng0);
    t9 = ((char*)((ng2)));
    t10 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t10, t9, 0, 0, 4, 0LL);
    goto LAB25;

LAB9:    xsi_set_current_line(43, ng0);
    t3 = ((char*)((ng4)));
    t5 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 4, 0LL);
    goto LAB25;

LAB11:    xsi_set_current_line(44, ng0);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 4, 0LL);
    goto LAB25;

LAB13:    xsi_set_current_line(45, ng0);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 4, 0LL);
    goto LAB25;

LAB15:    xsi_set_current_line(46, ng0);
    t3 = ((char*)((ng10)));
    t5 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 4, 0LL);
    goto LAB25;

LAB17:    xsi_set_current_line(47, ng0);
    t3 = ((char*)((ng12)));
    t5 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 4, 0LL);
    goto LAB25;

LAB19:    xsi_set_current_line(50, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 4, 0LL);
    goto LAB25;

LAB21:    xsi_set_current_line(51, ng0);
    t3 = ((char*)((ng4)));
    t5 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 4, 0LL);
    goto LAB25;

}


extern void work_m_00000000001502489339_3148384703_init()
{
	static char *pe[] = {(void *)Always_38_0};
	xsi_register_didat("work_m_00000000001502489339_3148384703", "isim/MIPS_Processor_isim_beh.exe.sim/work/m_00000000001502489339_3148384703.didat");
	xsi_register_executes(pe);
}

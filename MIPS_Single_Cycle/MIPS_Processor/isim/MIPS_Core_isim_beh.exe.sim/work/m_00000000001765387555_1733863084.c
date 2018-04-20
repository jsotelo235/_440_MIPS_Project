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
static const char *ng0 = "D:/CSULB_Classes/CECS_440/Labs_Projects/MIPS_Single_Cycle_Processor/MIPS_Processor/SignExtend_16to32.v";
static int ng1[] = {16, 0};



static void Always_35_0(char *t0)
{
    char t4[8];
    char t5[8];
    char t6[8];
    char t16[8];
    char t20[8];
    char *t1;
    char *t2;
    char *t3;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t17;
    char *t18;
    char *t19;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;

LAB0:    t1 = (t0 + 2368U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 2688);
    *((int *)t2) = 1;
    t3 = (t0 + 2400);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(36, ng0);

LAB5:    xsi_set_current_line(37, ng0);
    t7 = (t0 + 1048U);
    t8 = *((char **)t7);
    memset(t6, 0, 8);
    t7 = (t6 + 4);
    t9 = (t8 + 4);
    t10 = *((unsigned int *)t8);
    t11 = (t10 >> 0);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t9);
    t13 = (t12 >> 0);
    *((unsigned int *)t7) = t13;
    t14 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t14 & 65535U);
    t15 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t15 & 65535U);
    xsi_vlogtype_concat(t5, 16, 16, 1U, t6, 16);
    t17 = ((char*)((ng1)));
    t18 = (t0 + 1048U);
    t19 = *((char **)t18);
    memset(t20, 0, 8);
    t18 = (t20 + 4);
    t21 = (t19 + 4);
    t22 = *((unsigned int *)t19);
    t23 = (t22 >> 15);
    t24 = (t23 & 1);
    *((unsigned int *)t20) = t24;
    t25 = *((unsigned int *)t21);
    t26 = (t25 >> 15);
    t27 = (t26 & 1);
    *((unsigned int *)t18) = t27;
    xsi_vlog_mul_concat(t16, 16, 1, t17, 1U, t20, 1);
    xsi_vlogtype_concat(t4, 32, 32, 2U, t16, 16, t5, 16);
    t28 = (t0 + 1448);
    xsi_vlogvar_wait_assign_value(t28, t4, 0, 0, 32, 0LL);
    goto LAB2;

}


extern void work_m_00000000001765387555_1733863084_init()
{
	static char *pe[] = {(void *)Always_35_0};
	xsi_register_didat("work_m_00000000001765387555_1733863084", "isim/MIPS_Core_isim_beh.exe.sim/work/m_00000000001765387555_1733863084.didat");
	xsi_register_executes(pe);
}

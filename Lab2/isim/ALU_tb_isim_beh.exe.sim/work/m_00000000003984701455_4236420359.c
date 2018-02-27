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
static const char *ng0 = "C:/Users/pache/OneDrive/CSULB/Spring 2018/CECS 440/Labs/_440_MIPS_Project/Lab2/ALU_tb.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {327491671U, 0U};
static unsigned int ng3[] = {305419896U, 0U};
static unsigned int ng4[] = {0U, 0U};
static const char *ng5 = "A=%h, B=%h, ALU_Ctl=%b, Zero_Flag=%h, ALU_result=%h ";
static unsigned int ng6[] = {1U, 0U};
static unsigned int ng7[] = {2U, 0U};
static unsigned int ng8[] = {6U, 0U};
static unsigned int ng9[] = {7U, 0U};
static unsigned int ng10[] = {12U, 0U};
static unsigned int ng11[] = {15U, 0U};



static void Initial_48_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    t1 = (t0 + 2848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(48, ng0);

LAB4:    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(55, ng0);
    t2 = (t0 + 2656);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(74, ng0);
    t2 = (t0 + 2656);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 1608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1768);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t0 + 1928);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t0 + 1048U);
    t12 = *((char **)t11);
    t11 = (t0 + 1208U);
    t13 = *((char **)t11);
    xsi_vlogfile_write(1, 0, 0, ng5, 6, t0, (char)118, t4, 32, (char)118, t7, 32, (char)118, t10, 4, (char)118, t12, 1, (char)118, t13, 32);
    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(81, ng0);
    t2 = (t0 + 2656);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(82, ng0);
    t2 = (t0 + 1608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1768);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t0 + 1928);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t0 + 1048U);
    t12 = *((char **)t11);
    t11 = (t0 + 1208U);
    t13 = *((char **)t11);
    xsi_vlogfile_write(1, 0, 0, ng5, 6, t0, (char)118, t4, 32, (char)118, t7, 32, (char)118, t10, 4, (char)118, t12, 1, (char)118, t13, 32);
    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(86, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(87, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(88, ng0);
    t2 = (t0 + 2656);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB8;
    goto LAB1;

LAB8:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 1608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1768);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t0 + 1928);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t0 + 1048U);
    t12 = *((char **)t11);
    t11 = (t0 + 1208U);
    t13 = *((char **)t11);
    xsi_vlogfile_write(1, 0, 0, ng5, 6, t0, (char)118, t4, 32, (char)118, t7, 32, (char)118, t10, 4, (char)118, t12, 1, (char)118, t13, 32);
    xsi_set_current_line(92, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(94, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(95, ng0);
    t2 = (t0 + 2656);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB9;
    goto LAB1;

LAB9:    xsi_set_current_line(96, ng0);
    t2 = (t0 + 1608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1768);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t0 + 1928);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t0 + 1048U);
    t12 = *((char **)t11);
    t11 = (t0 + 1208U);
    t13 = *((char **)t11);
    xsi_vlogfile_write(1, 0, 0, ng5, 6, t0, (char)118, t4, 32, (char)118, t7, 32, (char)118, t10, 4, (char)118, t12, 1, (char)118, t13, 32);
    xsi_set_current_line(99, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(100, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(101, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(102, ng0);
    t2 = (t0 + 2656);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB10;
    goto LAB1;

LAB10:    xsi_set_current_line(103, ng0);
    t2 = (t0 + 1608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1768);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t0 + 1928);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t0 + 1048U);
    t12 = *((char **)t11);
    t11 = (t0 + 1208U);
    t13 = *((char **)t11);
    xsi_vlogfile_write(1, 0, 0, ng5, 6, t0, (char)118, t4, 32, (char)118, t7, 32, (char)118, t10, 4, (char)118, t12, 1, (char)118, t13, 32);
    xsi_set_current_line(106, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(107, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(108, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(109, ng0);
    t2 = (t0 + 2656);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB11:    xsi_set_current_line(110, ng0);
    t2 = (t0 + 1608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1768);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t0 + 1928);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t0 + 1048U);
    t12 = *((char **)t11);
    t11 = (t0 + 1208U);
    t13 = *((char **)t11);
    xsi_vlogfile_write(1, 0, 0, ng5, 6, t0, (char)118, t4, 32, (char)118, t7, 32, (char)118, t10, 4, (char)118, t12, 1, (char)118, t13, 32);
    xsi_set_current_line(113, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(114, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(115, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(116, ng0);
    t2 = (t0 + 2656);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB12;
    goto LAB1;

LAB12:    xsi_set_current_line(117, ng0);
    t3 = (t0 + 1608);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 1768);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t0 + 1928);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t0 + 1048U);
    t13 = *((char **)t12);
    t12 = (t0 + 1208U);
    t14 = *((char **)t12);
    xsi_vlogfile_write(1, 0, 0, ng5, 6, t0, (char)118, t5, 32, (char)118, t8, 32, (char)118, t11, 4, (char)118, t13, 1, (char)118, t14, 32);
    xsi_set_current_line(119, ng0);
    xsi_vlog_finish(1);
    goto LAB1;

}


extern void work_m_00000000003984701455_4236420359_init()
{
	static char *pe[] = {(void *)Initial_48_0};
	xsi_register_didat("work_m_00000000003984701455_4236420359", "isim/ALU_tb_isim_beh.exe.sim/work/m_00000000003984701455_4236420359.didat");
	xsi_register_executes(pe);
}

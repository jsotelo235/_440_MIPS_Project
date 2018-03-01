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
static const char *ng0 = "D:/CSULB_Classes/CECS_440/Labs_Projects/ALU/ALU_JS/ALU_Top_tf.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {129U, 0U};
static unsigned int ng3[] = {130U, 0U};
static const char *ng4 = "FuncCode=%b, ALU_op=%b, ALU_Ctl=%b";
static unsigned int ng5[] = {138U, 0U};
static unsigned int ng6[] = {146U, 0U};
static unsigned int ng7[] = {150U, 0U};
static unsigned int ng8[] = {170U, 0U};
static unsigned int ng9[] = {158U, 0U};
static unsigned int ng10[] = {252U, 252U};
static unsigned int ng11[] = {255U, 254U};



static void Initial_58_0(char *t0)
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

LAB0:    t1 = (t0 + 3168U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(58, ng0);

LAB4:    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 6);
    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(66, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    t4 = (t0 + 2088);
    xsi_vlogvar_assign_value(t4, t2, 2, 0, 6);
    xsi_set_current_line(73, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2248);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t0 + 1368U);
    t9 = *((char **)t8);
    xsi_vlogfile_write(1, 0, 0, ng4, 4, t0, (char)118, t4, 6, (char)118, t7, 2, (char)118, t9, 4);
    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    t4 = (t0 + 2088);
    xsi_vlogvar_assign_value(t4, t2, 2, 0, 6);
    xsi_set_current_line(80, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(82, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2248);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t0 + 1368U);
    t9 = *((char **)t8);
    xsi_vlogfile_write(1, 0, 0, ng4, 4, t0, (char)118, t4, 6, (char)118, t7, 2, (char)118, t9, 4);
    xsi_set_current_line(87, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    t4 = (t0 + 2088);
    xsi_vlogvar_assign_value(t4, t2, 2, 0, 6);
    xsi_set_current_line(88, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB8;
    goto LAB1;

LAB8:    xsi_set_current_line(90, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2248);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t0 + 1368U);
    t9 = *((char **)t8);
    xsi_vlogfile_write(1, 0, 0, ng4, 4, t0, (char)118, t4, 6, (char)118, t7, 2, (char)118, t9, 4);
    xsi_set_current_line(95, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    t4 = (t0 + 2088);
    xsi_vlogvar_assign_value(t4, t2, 2, 0, 6);
    xsi_set_current_line(96, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB9;
    goto LAB1;

LAB9:    xsi_set_current_line(98, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2248);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t0 + 1368U);
    t9 = *((char **)t8);
    xsi_vlogfile_write(1, 0, 0, ng4, 4, t0, (char)118, t4, 6, (char)118, t7, 2, (char)118, t9, 4);
    xsi_set_current_line(102, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    t4 = (t0 + 2088);
    xsi_vlogvar_assign_value(t4, t2, 2, 0, 6);
    xsi_set_current_line(103, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB10;
    goto LAB1;

LAB10:    xsi_set_current_line(105, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2248);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t0 + 1368U);
    t9 = *((char **)t8);
    xsi_vlogfile_write(1, 0, 0, ng4, 4, t0, (char)118, t4, 6, (char)118, t7, 2, (char)118, t9, 4);
    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    t4 = (t0 + 2088);
    xsi_vlogvar_assign_value(t4, t2, 2, 0, 6);
    xsi_set_current_line(110, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB11:    xsi_set_current_line(112, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2248);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t0 + 1368U);
    t9 = *((char **)t8);
    xsi_vlogfile_write(1, 0, 0, ng4, 4, t0, (char)118, t4, 6, (char)118, t7, 2, (char)118, t9, 4);
    xsi_set_current_line(117, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    t4 = (t0 + 2088);
    xsi_vlogvar_assign_value(t4, t2, 2, 0, 6);
    xsi_set_current_line(118, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB12;
    goto LAB1;

LAB12:    xsi_set_current_line(120, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2248);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t0 + 1368U);
    t9 = *((char **)t8);
    xsi_vlogfile_write(1, 0, 0, ng4, 4, t0, (char)118, t4, 6, (char)118, t7, 2, (char)118, t9, 4);
    xsi_set_current_line(125, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    t4 = (t0 + 2088);
    xsi_vlogvar_assign_value(t4, t2, 2, 0, 6);
    xsi_set_current_line(126, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB13;
    goto LAB1;

LAB13:    xsi_set_current_line(128, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2248);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t0 + 1368U);
    t9 = *((char **)t8);
    xsi_vlogfile_write(1, 0, 0, ng4, 4, t0, (char)118, t4, 6, (char)118, t7, 2, (char)118, t9, 4);
    xsi_set_current_line(131, ng0);
    xsi_vlog_stop(1);
    goto LAB1;

}


extern void work_m_00000000002752356685_4186403659_init()
{
	static char *pe[] = {(void *)Initial_58_0};
	xsi_register_didat("work_m_00000000002752356685_4186403659", "isim/ALU_Top_tf_isim_beh.exe.sim/work/m_00000000002752356685_4186403659.didat");
	xsi_register_executes(pe);
}

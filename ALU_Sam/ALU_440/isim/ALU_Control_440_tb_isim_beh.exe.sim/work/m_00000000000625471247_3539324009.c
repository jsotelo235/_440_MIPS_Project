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
static const char *ng0 = "C:/Users/Sam/Desktop/440/ALU/_440_MIPS_Project/ALU_Sam/ALU_440/ALU_Control_440_tb.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {130U, 0U};
static unsigned int ng3[] = {138U, 0U};
static unsigned int ng4[] = {146U, 0U};
static unsigned int ng5[] = {150U, 0U};
static unsigned int ng6[] = {170U, 0U};
static unsigned int ng7[] = {159U, 0U};
static unsigned int ng8[] = {252U, 252U};
static unsigned int ng9[] = {255U, 254U};



static void Initial_19_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;

LAB0:    t1 = (t0 + 2528U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(19, ng0);

LAB4:    xsi_set_current_line(21, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 6);
    xsi_set_current_line(22, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(23, ng0);
    t2 = (t0 + 2336);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(25, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t2, 2, 0, 6);
    xsi_set_current_line(26, ng0);
    t2 = (t0 + 2336);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(27, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t2, 2, 0, 6);
    xsi_set_current_line(28, ng0);
    t2 = (t0 + 2336);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(29, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t2, 2, 0, 6);
    xsi_set_current_line(30, ng0);
    t2 = (t0 + 2336);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB8;
    goto LAB1;

LAB8:    xsi_set_current_line(31, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t2, 2, 0, 6);
    xsi_set_current_line(32, ng0);
    t2 = (t0 + 2336);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB9;
    goto LAB1;

LAB9:    xsi_set_current_line(33, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t2, 2, 0, 6);
    xsi_set_current_line(34, ng0);
    t2 = (t0 + 2336);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB10;
    goto LAB1;

LAB10:    xsi_set_current_line(35, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t2, 2, 0, 6);
    xsi_set_current_line(36, ng0);
    t2 = (t0 + 2336);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB11:    xsi_set_current_line(37, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t2, 2, 0, 6);
    xsi_set_current_line(38, ng0);
    t2 = (t0 + 2336);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB12;
    goto LAB1;

LAB12:    xsi_set_current_line(39, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t2, 2, 0, 6);
    xsi_set_current_line(40, ng0);
    t2 = (t0 + 2336);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB13;
    goto LAB1;

LAB13:    xsi_set_current_line(41, ng0);
    xsi_vlog_stop(1);
    goto LAB1;

}


extern void work_m_00000000000625471247_3539324009_init()
{
	static char *pe[] = {(void *)Initial_19_0};
	xsi_register_didat("work_m_00000000000625471247_3539324009", "isim/ALU_Control_440_tb_isim_beh.exe.sim/work/m_00000000000625471247_3539324009.didat");
	xsi_register_executes(pe);
}

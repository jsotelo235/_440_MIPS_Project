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
static const char *ng0 = "D:/CSULB_Classes/CECS_440/Labs_Projects/MIPS_Single_Cycle_Processor/MIPS_Processor/MIPS_Processor_Tester.v";
static int ng1[] = {9, 0};
static int ng2[] = {1, 0};
static const char *ng3 = "ns";
static int ng4[] = {8, 0};
static const char *ng5 = "At time %t";
static unsigned int ng6[] = {0U, 0U};
static unsigned int ng7[] = {32U, 0U};
static const char *ng8 = "add $%0d, $%0d, $%0d";
static unsigned int ng9[] = {34U, 0U};
static const char *ng10 = "sub $%0d, $%0d, $%0d";
static unsigned int ng11[] = {36U, 0U};
static const char *ng12 = "and $%0d, $%0d, $%0d";
static unsigned int ng13[] = {37U, 0U};
static const char *ng14 = "or $%0d, $%0d, $%0d";
static unsigned int ng15[] = {42U, 0U};
static const char *ng16 = "slt $%0d, $%0d, $%0d";
static const char *ng17 = "Error: invalid R-Type Instruction";
static unsigned int ng18[] = {35U, 0U};
static const char *ng19 = "lw $%0d, 0x%h($%0d)";
static unsigned int ng20[] = {43U, 0U};
static const char *ng21 = "sw $%0d, 0x%h($%0d)";
static unsigned int ng22[] = {4U, 0U};
static const char *ng23 = "beq $%0d, 4%0d, 0x%h";
static unsigned int ng24[] = {2U, 0U};
static const char *ng25 = "j 0x%h";
static const char *ng26 = "Error: Invalid Instruction";
static const char *ng27 = "";
static const char *ng28 = "SIMULATION BEGINS!";
static int ng29[] = {0, 0};
static const char *ng30 = "../DMEM.dat";
static const char *ng31 = "../IMEM.dat";
static const char *ng32 = "../REGFILE.dat";
static const char *ng33 = "SIMULATION BEGINS!!!!!";
static const char *ng34 = "DUMPING REGISTERS";
static int ng35[] = {32, 0};
static const char *ng36 = "$%0d = 0x%h";
static const char *ng37 = "\nDUMPING DATA MEMORY";
static int ng38[] = {28, 0};
static const char *ng39 = "DMEM[0x%h] = 0x%h";
static const char *ng40 = "SIMULATION ENDS!";



static void Cont_51_0(char *t0)
{
    char t3[8];
    char t4[8];
    char t15[8];
    char t27[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    char *t66;
    char *t67;
    char *t68;
    char *t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;
    unsigned int t76;
    unsigned int t77;
    char *t78;

LAB0:    t1 = (t0 + 4688U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 8824);
    t5 = *((char **)t2);
    t6 = ((((char*)(t5))) + 40U);
    t7 = *((char **)t6);
    memset(t4, 0, 8);
    t6 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (t9 >> 16);
    *((unsigned int *)t4) = t10;
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 16);
    *((unsigned int *)t6) = t12;
    t13 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t13 & 31U);
    t14 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t14 & 31U);
    t16 = (t0 + 8848);
    t17 = *((char **)t16);
    t18 = ((((char*)(t17))) + 40U);
    t19 = *((char **)t18);
    memset(t15, 0, 8);
    t18 = (t15 + 4);
    t20 = (t19 + 4);
    t21 = *((unsigned int *)t19);
    t22 = (t21 >> 21);
    *((unsigned int *)t15) = t22;
    t23 = *((unsigned int *)t20);
    t24 = (t23 >> 21);
    *((unsigned int *)t18) = t24;
    t25 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t25 & 31U);
    t26 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t26 & 31U);
    t28 = (t0 + 8872);
    t29 = *((char **)t28);
    t30 = ((((char*)(t29))) + 40U);
    t31 = *((char **)t30);
    memset(t27, 0, 8);
    t30 = (t27 + 4);
    t32 = (t31 + 4);
    t33 = *((unsigned int *)t31);
    t34 = (t33 >> 11);
    *((unsigned int *)t27) = t34;
    t35 = *((unsigned int *)t32);
    t36 = (t35 >> 11);
    *((unsigned int *)t30) = t36;
    t37 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t37 & 31U);
    t38 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t38 & 31U);
    xsi_vlogtype_concat(t3, 15, 15, 3U, t27, 5, t15, 5, t4, 5);
    t39 = (t0 + 6504);
    t40 = (t39 + 56U);
    t41 = *((char **)t40);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    memset(t43, 0, 8);
    t44 = 31U;
    t45 = t44;
    t46 = (t3 + 4);
    t47 = *((unsigned int *)t3);
    t44 = (t44 & t47);
    t48 = *((unsigned int *)t46);
    t45 = (t45 & t48);
    t49 = (t43 + 4);
    t50 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t50 | t44);
    t51 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t51 | t45);
    xsi_driver_vfirst_trans(t39, 0, 4);
    t52 = (t0 + 6440);
    t53 = (t52 + 56U);
    t54 = *((char **)t53);
    t55 = (t54 + 56U);
    t56 = *((char **)t55);
    memset(t56, 0, 8);
    t57 = 992U;
    t58 = t57;
    t59 = (t3 + 4);
    t60 = *((unsigned int *)t3);
    t57 = (t57 & t60);
    t61 = *((unsigned int *)t59);
    t58 = (t58 & t61);
    t57 = (t57 >> 5);
    t58 = (t58 >> 5);
    t62 = (t56 + 4);
    t63 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t63 | t57);
    t64 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t64 | t58);
    xsi_driver_vfirst_trans(t52, 0, 4);
    t65 = (t0 + 6376);
    t66 = (t65 + 56U);
    t67 = *((char **)t66);
    t68 = (t67 + 56U);
    t69 = *((char **)t68);
    memset(t69, 0, 8);
    t70 = 31744U;
    t71 = t70;
    t72 = (t3 + 4);
    t73 = *((unsigned int *)t3);
    t70 = (t70 & t73);
    t74 = *((unsigned int *)t72);
    t71 = (t71 & t74);
    t70 = (t70 >> 10);
    t71 = (t71 >> 10);
    t75 = (t69 + 4);
    t76 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t76 | t70);
    t77 = *((unsigned int *)t75);
    *((unsigned int *)t75) = (t77 | t71);
    xsi_driver_vfirst_trans(t65, 0, 4);
    t78 = (t0 + 6248);
    *((int *)t78) = 1;

LAB1:    return;
}

static void Cont_51_1(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;

LAB0:    t1 = (t0 + 4936U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 8896);
    t4 = *((char **)t2);
    t5 = ((((char*)(t4))) + 40U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
    t5 = (t3 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 0);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 0);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t12 & 65535U);
    t13 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t13 & 65535U);
    t14 = (t0 + 6568);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 65535U;
    t20 = t19;
    t21 = (t3 + 4);
    t22 = *((unsigned int *)t3);
    t19 = (t19 & t22);
    t23 = *((unsigned int *)t21);
    t20 = (t20 & t23);
    t24 = (t18 + 4);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 | t19);
    t26 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t26 | t20);
    xsi_driver_vfirst_trans(t14, 0, 15);
    t27 = (t0 + 6264);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Cont_51_2(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;

LAB0:    t1 = (t0 + 5184U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 8920);
    t4 = *((char **)t2);
    t5 = ((((char*)(t4))) + 40U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
    t5 = (t3 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 0);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 0);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t12 & 67108863U);
    t13 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t13 & 67108863U);
    t14 = (t0 + 6632);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 67108863U;
    t20 = t19;
    t21 = (t3 + 4);
    t22 = *((unsigned int *)t3);
    t19 = (t19 & t22);
    t23 = *((unsigned int *)t21);
    t20 = (t20 & t23);
    t24 = (t18 + 4);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 | t19);
    t26 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t26 | t20);
    xsi_driver_vfirst_trans(t14, 0, 25);
    t27 = (t0 + 6280);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Always_54_3(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 5432U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 5240);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(54, ng0);
    t4 = (t0 + 3608);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t7) == 0)
        goto LAB5;

LAB7:    t13 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t13) = 1;

LAB8:    t14 = (t3 + 4);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t3) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB10;

LAB9:    t22 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 3608);
    xsi_vlogvar_assign_value(t24, t3, 0, 0, 1);
    goto LAB2;

LAB5:    *((unsigned int *)t3) = 1;
    goto LAB8;

LAB10:    t18 = *((unsigned int *)t3);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t3) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB9;

}

static void Always_56_4(char *t0)
{
    char t4[8];
    char t8[16];
    char t17[8];
    char t35[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    int t16;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    int t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;

LAB0:    t1 = (t0 + 5680U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 6296);
    *((int *)t2) = 1;
    t3 = (t0 + 5712);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(56, ng0);

LAB5:    xsi_set_current_line(57, ng0);
    t5 = ((char*)((ng1)));
    memset(t4, 0, 8);
    xsi_vlog_signed_unary_minus(t4, 32, t5, 32);
    t6 = ((char*)((ng2)));
    t7 = ((char*)((ng4)));
    xsi_vlog_setTimeFormat(*((unsigned int *)t4), *((unsigned int *)t6), ng3, 0, *((unsigned int *)t7));
    xsi_set_current_line(58, ng0);
    t2 = xsi_vlog_time(t8, 1000.0000000000000, 1000.0000000000000);
    xsi_vlogfile_write(1, 0, 0, ng5, 2, t0, (char)118, t8, 64);
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 5488);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 8944);
    t3 = *((char **)t2);
    t5 = ((((char*)(t3))) + 40U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t4 + 4);
    t7 = (t6 + 4);
    t9 = *((unsigned int *)t6);
    t10 = (t9 >> 26);
    *((unsigned int *)t4) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 26);
    *((unsigned int *)t5) = t12;
    t13 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t13 & 63U);
    t14 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t14 & 63U);

LAB7:    t15 = ((char*)((ng6)));
    t16 = xsi_vlog_unsigned_case_compare(t4, 6, t15, 6);
    if (t16 == 1)
        goto LAB8;

LAB9:    t2 = ((char*)((ng18)));
    t16 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t16 == 1)
        goto LAB10;

LAB11:    t2 = ((char*)((ng20)));
    t16 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t16 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng22)));
    t16 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t16 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng24)));
    t16 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t16 == 1)
        goto LAB16;

LAB17:
LAB19:
LAB18:    xsi_set_current_line(76, ng0);

LAB36:    xsi_set_current_line(76, ng0);
    xsi_vlogfile_write(1, 0, 0, ng26, 1, t0);
    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB20:    xsi_set_current_line(79, ng0);
    xsi_vlogfile_write(1, 0, 0, ng27, 1, t0);
    goto LAB2;

LAB8:    xsi_set_current_line(63, ng0);
    t18 = (t0 + 8968);
    t19 = *((char **)t18);
    t20 = ((((char*)(t19))) + 40U);
    t21 = *((char **)t20);
    memset(t17, 0, 8);
    t20 = (t17 + 4);
    t22 = (t21 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (t23 >> 0);
    *((unsigned int *)t17) = t24;
    t25 = *((unsigned int *)t22);
    t26 = (t25 >> 0);
    *((unsigned int *)t20) = t26;
    t27 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t27 & 63U);
    t28 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t28 & 63U);

LAB21:    t29 = ((char*)((ng7)));
    t30 = xsi_vlog_unsigned_case_compare(t17, 6, t29, 6);
    if (t30 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng9)));
    t16 = xsi_vlog_unsigned_case_compare(t17, 6, t2, 6);
    if (t16 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng11)));
    t16 = xsi_vlog_unsigned_case_compare(t17, 6, t2, 6);
    if (t16 == 1)
        goto LAB26;

LAB27:    t2 = ((char*)((ng13)));
    t16 = xsi_vlog_unsigned_case_compare(t17, 6, t2, 6);
    if (t16 == 1)
        goto LAB28;

LAB29:    t2 = ((char*)((ng15)));
    t16 = xsi_vlog_unsigned_case_compare(t17, 6, t2, 6);
    if (t16 == 1)
        goto LAB30;

LAB31:
LAB33:
LAB32:    xsi_set_current_line(69, ng0);

LAB35:    xsi_set_current_line(69, ng0);
    xsi_vlogfile_write(1, 0, 0, ng17, 1, t0);
    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB34:    goto LAB20;

LAB10:    xsi_set_current_line(72, ng0);
    t3 = (t0 + 2888U);
    t5 = *((char **)t3);
    t3 = (t0 + 3048U);
    t6 = *((char **)t3);
    t3 = (t0 + 2728U);
    t7 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng19, 4, t0, (char)118, t5, 5, (char)118, t6, 16, (char)118, t7, 5);
    goto LAB20;

LAB12:    xsi_set_current_line(73, ng0);
    t3 = (t0 + 2888U);
    t5 = *((char **)t3);
    t3 = (t0 + 3048U);
    t6 = *((char **)t3);
    t3 = (t0 + 2728U);
    t7 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng21, 4, t0, (char)118, t5, 5, (char)118, t6, 16, (char)118, t7, 5);
    goto LAB20;

LAB14:    xsi_set_current_line(74, ng0);
    t3 = (t0 + 2728U);
    t5 = *((char **)t3);
    t3 = (t0 + 2888U);
    t6 = *((char **)t3);
    t3 = (t0 + 3048U);
    t7 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng23, 4, t0, (char)118, t5, 5, (char)118, t6, 5, (char)118, t7, 16);
    goto LAB20;

LAB16:    xsi_set_current_line(75, ng0);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 3208U);
    t6 = *((char **)t5);
    xsi_vlogtype_concat(t35, 28, 28, 2U, t6, 26, t3, 2);
    xsi_vlogfile_write(1, 0, 0, ng25, 2, t0, (char)118, t35, 28);
    goto LAB20;

LAB22:    xsi_set_current_line(64, ng0);
    t31 = (t0 + 2568U);
    t32 = *((char **)t31);
    t31 = (t0 + 2728U);
    t33 = *((char **)t31);
    t31 = (t0 + 2888U);
    t34 = *((char **)t31);
    xsi_vlogfile_write(1, 0, 0, ng8, 4, t0, (char)118, t32, 5, (char)118, t33, 5, (char)118, t34, 5);
    goto LAB34;

LAB24:    xsi_set_current_line(65, ng0);
    t3 = (t0 + 2568U);
    t5 = *((char **)t3);
    t3 = (t0 + 2728U);
    t6 = *((char **)t3);
    t3 = (t0 + 2888U);
    t7 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng10, 4, t0, (char)118, t5, 5, (char)118, t6, 5, (char)118, t7, 5);
    goto LAB34;

LAB26:    xsi_set_current_line(66, ng0);
    t3 = (t0 + 2568U);
    t5 = *((char **)t3);
    t3 = (t0 + 2728U);
    t6 = *((char **)t3);
    t3 = (t0 + 2888U);
    t7 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng12, 4, t0, (char)118, t5, 5, (char)118, t6, 5, (char)118, t7, 5);
    goto LAB34;

LAB28:    xsi_set_current_line(67, ng0);
    t3 = (t0 + 2568U);
    t5 = *((char **)t3);
    t3 = (t0 + 2728U);
    t6 = *((char **)t3);
    t3 = (t0 + 2888U);
    t7 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng14, 4, t0, (char)118, t5, 5, (char)118, t6, 5, (char)118, t7, 5);
    goto LAB34;

LAB30:    xsi_set_current_line(68, ng0);
    t3 = (t0 + 2568U);
    t5 = *((char **)t3);
    t3 = (t0 + 2728U);
    t6 = *((char **)t3);
    t3 = (t0 + 2888U);
    t7 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng16, 4, t0, (char)118, t5, 5, (char)118, t6, 5, (char)118, t7, 5);
    goto LAB34;

}

static void Initial_82_5(char *t0)
{
    char t5[8];
    char t25[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;

LAB0:    t1 = (t0 + 5928U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(82, ng0);

LAB4:    xsi_set_current_line(83, ng0);
    xsi_vlogfile_write(1, 0, 0, ng28, 1, t0);
    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng29)));
    t3 = (t0 + 9008);
    t4 = *((char **)t3);
    xsi_vlogvar_assign_value(((char*)(t4)), t2, 0, 0, 32);
    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng29)));
    t3 = (t0 + 3768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(86, ng0);
    t2 = (t0 + 9040);
    t3 = *((char **)t2);
    xsi_vlogfile_readmemh(ng30, 0, ((char*)(t3)), 0, 0, 0, 0);
    xsi_set_current_line(87, ng0);
    t2 = (t0 + 9072);
    t3 = *((char **)t2);
    xsi_vlogfile_readmemh(ng31, 0, ((char*)(t3)), 0, 0, 0, 0);
    xsi_set_current_line(88, ng0);
    t2 = (t0 + 9112);
    t3 = *((char **)t2);
    xsi_vlogfile_readmemh(ng32, 0, ((char*)(t3)), 0, 0, 0, 0);
    xsi_set_current_line(90, ng0);
    xsi_vlogfile_write(1, 0, 0, ng33, 1, t0);
    xsi_set_current_line(91, ng0);
    t2 = ((char*)((ng29)));
    t3 = (t0 + 3608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(92, ng0);

LAB5:    t2 = (t0 + 3768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t5, 0, 8);
    t6 = (t4 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 & 4294967295U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t6) == 0)
        goto LAB6;

LAB8:    t12 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t5 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t5);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(93, ng0);
    xsi_vlogfile_write(1, 0, 0, ng34, 1, t0);
    xsi_set_current_line(94, ng0);
    xsi_set_current_line(94, ng0);
    t2 = ((char*)((ng29)));
    t3 = (t0 + 3768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB13:    t2 = (t0 + 3768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = ((char*)((ng35)));
    memset(t5, 0, 8);
    xsi_vlog_signed_less(t5, 32, t4, 32, t6, 32);
    t12 = (t5 + 4);
    t7 = *((unsigned int *)t12);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB14;

LAB15:    xsi_set_current_line(96, ng0);
    xsi_vlogfile_write(1, 0, 0, ng37, 1, t0);
    xsi_set_current_line(97, ng0);
    xsi_set_current_line(97, ng0);
    t2 = ((char*)((ng29)));
    t3 = (t0 + 3768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB16:    t2 = (t0 + 3768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = ((char*)((ng38)));
    memset(t5, 0, 8);
    xsi_vlog_signed_less(t5, 32, t4, 32, t6, 32);
    t12 = (t5 + 4);
    t7 = *((unsigned int *)t12);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB17;

LAB18:    xsi_set_current_line(99, ng0);
    xsi_vlogfile_write(1, 0, 0, ng40, 1, t0);
    xsi_set_current_line(100, ng0);
    xsi_vlog_finish(1);

LAB1:    return;
LAB6:    *((unsigned int *)t5) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(92, ng0);
    t19 = (t0 + 5736);
    xsi_process_wait(t19, 1000LL);
    *((char **)t1) = &&LAB12;
    goto LAB1;

LAB12:    xsi_set_current_line(92, ng0);
    t20 = (t0 + 3768);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t0 + 3768);
    xsi_vlogvar_assign_value(t23, t22, 0, 0, 32);
    goto LAB5;

LAB14:    xsi_set_current_line(95, ng0);
    t13 = (t0 + 3768);
    t19 = (t13 + 56U);
    t20 = *((char **)t19);
    t21 = (t0 + 9152);
    t22 = *((char **)t21);
    t23 = ((((char*)(t22))) + 56U);
    t24 = *((char **)t23);
    t26 = (t0 + 9192);
    t27 = *((char **)t26);
    t28 = ((((char*)(t27))) + 72U);
    t29 = *((char **)t28);
    t30 = (t0 + 9232);
    t31 = *((char **)t30);
    t32 = ((((char*)(t31))) + 64U);
    t33 = *((char **)t32);
    t34 = (t0 + 3768);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    xsi_vlog_generic_get_array_select_value(t25, 32, t24, t29, t33, 2, 1, t36, 32, 1);
    xsi_vlogfile_write(1, 0, 0, ng36, 3, t0, (char)119, t20, 32, (char)118, t25, 32);
    xsi_set_current_line(94, ng0);
    t2 = (t0 + 3768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = ((char*)((ng2)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t4, 32, t6, 32);
    t12 = (t0 + 3768);
    xsi_vlogvar_assign_value(t12, t5, 0, 0, 32);
    goto LAB13;

LAB17:    xsi_set_current_line(98, ng0);
    t13 = (t0 + 3768);
    t19 = (t13 + 56U);
    t20 = *((char **)t19);
    t21 = (t0 + 9264);
    t22 = *((char **)t21);
    t23 = ((((char*)(t22))) + 56U);
    t24 = *((char **)t23);
    t26 = (t0 + 9296);
    t27 = *((char **)t26);
    t28 = ((((char*)(t27))) + 72U);
    t29 = *((char **)t28);
    t30 = (t0 + 9328);
    t31 = *((char **)t30);
    t32 = ((((char*)(t31))) + 64U);
    t33 = *((char **)t32);
    t34 = (t0 + 3768);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    xsi_vlog_generic_get_array_select_value(t25, 8, t24, t29, t33, 2, 1, t36, 32, 1);
    xsi_vlogfile_write(1, 0, 0, ng39, 3, t0, (char)119, t20, 32, (char)118, t25, 8);
    xsi_set_current_line(97, ng0);
    t2 = (t0 + 3768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = ((char*)((ng2)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t4, 32, t6, 32);
    t12 = (t0 + 3768);
    xsi_vlogvar_assign_value(t12, t5, 0, 0, 32);
    goto LAB16;

}


extern void work_m_00000000000601137327_3430186652_init()
{
	static char *pe[] = {(void *)Cont_51_0,(void *)Cont_51_1,(void *)Cont_51_2,(void *)Always_54_3,(void *)Always_56_4,(void *)Initial_82_5};
	xsi_register_didat("work_m_00000000000601137327_3430186652", "isim/MIPS_Processor_Tester_isim_beh.exe.sim/work/m_00000000000601137327_3430186652.didat");
	xsi_register_executes(pe);
}

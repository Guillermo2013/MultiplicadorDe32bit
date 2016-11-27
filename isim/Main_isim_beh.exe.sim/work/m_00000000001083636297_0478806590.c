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

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Dell/Documents/Multiplicador32bIts/Multiplicador32bits/MP.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {3U, 0U};
static int ng5[] = {0, 0, 0, 0};
static unsigned int ng6[] = {32U, 0U};
static int ng7[] = {0, 0};



static void Always_21_0(char *t0)
{
    char t9[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t10;

LAB0:    t1 = (t0 + 2364U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(21, ng0);
    t2 = (t0 + 2992);
    *((int *)t2) = 1;
    t3 = (t0 + 2392);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(22, ng0);

LAB5:    xsi_set_current_line(23, ng0);
    t4 = (t0 + 784U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t4, 2);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB11;

LAB12:
LAB13:    goto LAB2;

LAB7:    xsi_set_current_line(24, ng0);
    t7 = (t0 + 600U);
    t8 = *((char **)t7);
    t7 = (t0 + 1564);
    xsi_vlogvar_assign_value(t7, t8, 0, 0, 64);
    goto LAB13;

LAB9:    xsi_set_current_line(25, ng0);
    t3 = (t0 + 1564);
    t4 = (t3 + 36U);
    t7 = *((char **)t4);
    t8 = ((char*)((ng3)));
    xsi_vlog_unsigned_lshift(t9, 64, t7, 64, t8, 32);
    t10 = (t0 + 1564);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 64);
    goto LAB13;

LAB11:    xsi_set_current_line(26, ng0);
    t3 = (t0 + 1564);
    t4 = (t3 + 36U);
    t7 = *((char **)t4);
    t8 = (t0 + 1564);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 64);
    goto LAB13;

}

static void Always_30_1(char *t0)
{
    char t9[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;

LAB0:    t1 = (t0 + 2508U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 3000);
    *((int *)t2) = 1;
    t3 = (t0 + 2536);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(31, ng0);

LAB5:    xsi_set_current_line(32, ng0);
    t4 = (t0 + 876U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t4, 2);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB11;

LAB12:
LAB13:    goto LAB2;

LAB7:    xsi_set_current_line(33, ng0);

LAB14:    xsi_set_current_line(33, ng0);
    t7 = (t0 + 692U);
    t8 = *((char **)t7);
    t7 = (t0 + 1656);
    xsi_vlogvar_assign_value(t7, t8, 0, 0, 32);
    xsi_set_current_line(33, ng0);
    t2 = (t0 + 1656);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t9, 0, 8);
    t7 = (t9 + 4);
    t8 = (t4 + 4);
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 0);
    t12 = (t11 & 1);
    *((unsigned int *)t9) = t12;
    t13 = *((unsigned int *)t8);
    t14 = (t13 >> 0);
    t15 = (t14 & 1);
    *((unsigned int *)t7) = t15;
    t16 = (t0 + 1288);
    xsi_vlogvar_assign_value(t16, t9, 0, 0, 1);
    goto LAB13;

LAB9:    xsi_set_current_line(34, ng0);

LAB15:    xsi_set_current_line(34, ng0);
    t3 = (t0 + 1656);
    t4 = (t3 + 36U);
    t7 = *((char **)t4);
    t8 = ((char*)((ng3)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_rshift(t9, 32, t7, 32, t8, 32);
    t16 = (t0 + 1656);
    xsi_vlogvar_assign_value(t16, t9, 0, 0, 32);
    xsi_set_current_line(34, ng0);
    t2 = (t0 + 1656);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t9, 0, 8);
    t7 = (t9 + 4);
    t8 = (t4 + 4);
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 0);
    t12 = (t11 & 1);
    *((unsigned int *)t9) = t12;
    t13 = *((unsigned int *)t8);
    t14 = (t13 >> 0);
    t15 = (t14 & 1);
    *((unsigned int *)t7) = t15;
    t16 = (t0 + 1288);
    xsi_vlogvar_assign_value(t16, t9, 0, 0, 1);
    goto LAB13;

LAB11:    xsi_set_current_line(35, ng0);

LAB16:    xsi_set_current_line(35, ng0);
    t3 = (t0 + 1656);
    t4 = (t3 + 36U);
    t7 = *((char **)t4);
    t8 = (t0 + 1656);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 32);
    xsi_set_current_line(35, ng0);
    t2 = (t0 + 1656);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t9, 0, 8);
    t7 = (t9 + 4);
    t8 = (t4 + 4);
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 0);
    t12 = (t11 & 1);
    *((unsigned int *)t9) = t12;
    t13 = *((unsigned int *)t8);
    t14 = (t13 >> 0);
    t15 = (t14 & 1);
    *((unsigned int *)t7) = t15;
    t16 = (t0 + 1288);
    xsi_vlogvar_assign_value(t16, t9, 0, 0, 1);
    goto LAB13;

}

static void Always_39_2(char *t0)
{
    char t11[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;

LAB0:    t1 = (t0 + 2652U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 3008);
    *((int *)t2) = 1;
    t3 = (t0 + 2680);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(40, ng0);

LAB5:    xsi_set_current_line(41, ng0);
    t4 = (t0 + 968U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t4, 2);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB11;

LAB12:
LAB13:    goto LAB2;

LAB7:    xsi_set_current_line(42, ng0);

LAB14:    xsi_set_current_line(42, ng0);
    t7 = ((char*)((ng5)));
    t8 = (t0 + 1748);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 64);
    xsi_set_current_line(42, ng0);
    t2 = (t0 + 1748);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t7 = (t0 + 1472);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 64);
    goto LAB13;

LAB9:    xsi_set_current_line(43, ng0);

LAB15:    xsi_set_current_line(43, ng0);
    t3 = (t0 + 1748);
    t4 = (t3 + 36U);
    t7 = *((char **)t4);
    t8 = (t0 + 1564);
    t9 = (t8 + 36U);
    t10 = *((char **)t9);
    xsi_vlog_unsigned_add(t11, 64, t7, 64, t10, 64);
    t12 = (t0 + 1748);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 64);
    xsi_set_current_line(43, ng0);
    t2 = (t0 + 1748);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t7 = (t0 + 1472);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 64);
    goto LAB13;

LAB11:    xsi_set_current_line(44, ng0);

LAB16:    xsi_set_current_line(44, ng0);
    t3 = (t0 + 1748);
    t4 = (t3 + 36U);
    t7 = *((char **)t4);
    t8 = (t0 + 1748);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 64);
    xsi_set_current_line(44, ng0);
    t2 = (t0 + 1748);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t7 = (t0 + 1472);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 64);
    goto LAB13;

}

static void Always_48_3(char *t0)
{
    char t9[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;

LAB0:    t1 = (t0 + 2796U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 3016);
    *((int *)t2) = 1;
    t3 = (t0 + 2824);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(49, ng0);

LAB5:    xsi_set_current_line(50, ng0);
    t4 = (t0 + 1060U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t4, 2);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB11;

LAB12:
LAB13:    goto LAB2;

LAB7:    xsi_set_current_line(51, ng0);

LAB14:    xsi_set_current_line(51, ng0);
    t7 = ((char*)((ng6)));
    t8 = (t0 + 1840);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 32);
    xsi_set_current_line(51, ng0);
    t2 = (t0 + 1840);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng1)));
    memset(t9, 0, 8);
    t8 = (t4 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t8);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t8);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB18;

LAB15:    if (t20 != 0)
        goto LAB17;

LAB16:    *((unsigned int *)t9) = 1;

LAB18:    t24 = (t9 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t9);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB19;

LAB20:    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 1380);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB21:    goto LAB13;

LAB9:    xsi_set_current_line(52, ng0);

LAB22:    xsi_set_current_line(52, ng0);
    t3 = (t0 + 1840);
    t4 = (t3 + 36U);
    t7 = *((char **)t4);
    t8 = ((char*)((ng2)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_minus(t9, 32, t7, 32, t8, 32);
    t10 = (t0 + 1840);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 32);
    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1840);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng1)));
    memset(t9, 0, 8);
    t8 = (t4 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t8);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t8);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB26;

LAB23:    if (t20 != 0)
        goto LAB25;

LAB24:    *((unsigned int *)t9) = 1;

LAB26:    t24 = (t9 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t9);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB27;

LAB28:    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 1380);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB29:    goto LAB13;

LAB11:    xsi_set_current_line(53, ng0);

LAB30:    xsi_set_current_line(53, ng0);
    t3 = (t0 + 1840);
    t4 = (t3 + 36U);
    t7 = *((char **)t4);
    t8 = (t0 + 1840);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 32);
    xsi_set_current_line(53, ng0);
    t2 = (t0 + 1840);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng1)));
    memset(t9, 0, 8);
    t8 = (t4 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t8);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t8);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB34;

LAB31:    if (t20 != 0)
        goto LAB33;

LAB32:    *((unsigned int *)t9) = 1;

LAB34:    t24 = (t9 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t9);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB35;

LAB36:    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 1380);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB37:    goto LAB13;

LAB17:    t23 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB18;

LAB19:    xsi_set_current_line(51, ng0);
    t30 = ((char*)((ng3)));
    t31 = (t0 + 1380);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 1);
    goto LAB21;

LAB25:    t23 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB26;

LAB27:    xsi_set_current_line(52, ng0);
    t30 = ((char*)((ng3)));
    t31 = (t0 + 1380);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 1);
    goto LAB29;

LAB33:    t23 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB34;

LAB35:    xsi_set_current_line(53, ng0);
    t30 = ((char*)((ng3)));
    t31 = (t0 + 1380);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 1);
    goto LAB37;

}


extern void work_m_00000000001083636297_0478806590_init()
{
	static char *pe[] = {(void *)Always_21_0,(void *)Always_30_1,(void *)Always_39_2,(void *)Always_48_3};
	xsi_register_didat("work_m_00000000001083636297_0478806590", "isim/Main_isim_beh.exe.sim/work/m_00000000001083636297_0478806590.didat");
	xsi_register_executes(pe);
}

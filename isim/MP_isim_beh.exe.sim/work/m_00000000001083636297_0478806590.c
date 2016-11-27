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
static int ng5[] = {0, 0};
static unsigned int ng6[] = {32U, 0U};



static void Always_21_0(char *t0)
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

LAB0:    t1 = (t0 + 2364U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(21, ng0);
    t2 = (t0 + 3136);
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
    xsi_vlogvar_assign_value(t7, t8, 0, 0, 32);
    goto LAB13;

LAB9:    xsi_set_current_line(25, ng0);
    t3 = (t0 + 1564);
    t4 = (t3 + 36U);
    t7 = *((char **)t4);
    t8 = ((char*)((ng3)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_rshift(t9, 32, t7, 32, t8, 32);
    t10 = (t0 + 1564);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 32);
    goto LAB13;

LAB11:    xsi_set_current_line(26, ng0);
    t3 = (t0 + 1564);
    t4 = (t3 + 36U);
    t7 = *((char **)t4);
    t8 = (t0 + 1564);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 32);
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
    char *t10;

LAB0:    t1 = (t0 + 2508U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 3144);
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
    t7 = (t0 + 692U);
    t8 = *((char **)t7);
    t7 = (t0 + 1656);
    xsi_vlogvar_assign_value(t7, t8, 0, 0, 32);
    goto LAB13;

LAB9:    xsi_set_current_line(34, ng0);
    t3 = (t0 + 1656);
    t4 = (t3 + 36U);
    t7 = *((char **)t4);
    t8 = ((char*)((ng3)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_lshift(t9, 32, t7, 32, t8, 32);
    t10 = (t0 + 1656);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 32);
    goto LAB13;

LAB11:    xsi_set_current_line(35, ng0);
    t3 = (t0 + 1656);
    t4 = (t3 + 36U);
    t7 = *((char **)t4);
    t8 = (t0 + 1656);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 32);
    goto LAB13;

}

static void Always_39_2(char *t0)
{
    char t11[8];
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
    t2 = (t0 + 3152);
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
    t7 = ((char*)((ng5)));
    t8 = (t0 + 1748);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 32);
    goto LAB13;

LAB9:    xsi_set_current_line(43, ng0);
    t3 = (t0 + 1748);
    t4 = (t3 + 36U);
    t7 = *((char **)t4);
    t8 = (t0 + 1564);
    t9 = (t8 + 36U);
    t10 = *((char **)t9);
    memset(t11, 0, 8);
    xsi_vlog_unsigned_add(t11, 32, t7, 32, t10, 32);
    t12 = (t0 + 1748);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 32);
    goto LAB13;

LAB11:    xsi_set_current_line(44, ng0);
    t3 = (t0 + 1748);
    t4 = (t3 + 36U);
    t7 = *((char **)t4);
    t8 = (t0 + 1748);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 32);
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

LAB0:    t1 = (t0 + 2796U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 3160);
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
    t7 = ((char*)((ng6)));
    t8 = (t0 + 1840);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 32);
    goto LAB13;

LAB9:    xsi_set_current_line(52, ng0);
    t3 = (t0 + 1840);
    t4 = (t3 + 36U);
    t7 = *((char **)t4);
    t8 = ((char*)((ng2)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_minus(t9, 32, t7, 32, t8, 32);
    t10 = (t0 + 1840);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 32);
    goto LAB13;

LAB11:    xsi_set_current_line(53, ng0);
    t3 = (t0 + 1840);
    t4 = (t3 + 36U);
    t7 = *((char **)t4);
    t8 = (t0 + 1840);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 32);
    goto LAB13;

}

static void Initial_57_4(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(58, ng0);

LAB2:    xsi_set_current_line(59, ng0);
    t1 = ((char*)((ng5)));
    t2 = (t0 + 1288);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(60, ng0);
    t1 = ((char*)((ng5)));
    t2 = (t0 + 1380);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}


extern void work_m_00000000001083636297_0478806590_init()
{
	static char *pe[] = {(void *)Always_21_0,(void *)Always_30_1,(void *)Always_39_2,(void *)Always_48_3,(void *)Initial_57_4};
	xsi_register_didat("work_m_00000000001083636297_0478806590", "isim/MP_isim_beh.exe.sim/work/m_00000000001083636297_0478806590.didat");
	xsi_register_executes(pe);
}

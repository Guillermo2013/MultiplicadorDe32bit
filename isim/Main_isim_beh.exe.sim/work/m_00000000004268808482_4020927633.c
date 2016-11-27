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
static const char *ng0 = "C:/Users/Dell/Documents/Multiplicador32bIts/Multiplicador32bits/FSM.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {1, 0};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {2U, 0U};
static unsigned int ng5[] = {3U, 0U};
static unsigned int ng6[] = {4U, 0U};
static unsigned int ng7[] = {5U, 0U};



static void Always_15_0(char *t0)
{
    char t11[8];
    char t30[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;
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
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t53;

LAB0:    t1 = (t0 + 2088U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(15, ng0);
    t2 = (t0 + 2428);
    *((int *)t2) = 1;
    t3 = (t0 + 2116);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(16, ng0);

LAB5:    xsi_set_current_line(17, ng0);
    t4 = (t0 + 1472);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t7, 3);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng6)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB17;

LAB18:
LAB19:    goto LAB2;

LAB7:    xsi_set_current_line(19, ng0);

LAB20:    xsi_set_current_line(21, ng0);
    t9 = ((char*)((ng1)));
    t10 = (t0 + 1104);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 2);
    xsi_set_current_line(22, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1196);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(23, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(24, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1380);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(26, ng0);
    t2 = (t0 + 784U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t11, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t12 = *((unsigned int *)t3);
    t13 = *((unsigned int *)t2);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t5);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t4);
    t20 = *((unsigned int *)t5);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB24;

LAB21:    if (t21 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t11) = 1;

LAB24:    t9 = (t11 + 4);
    t24 = *((unsigned int *)t9);
    t25 = (~(t24));
    t26 = *((unsigned int *)t11);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB25;

LAB26:    xsi_set_current_line(29, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1564);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB27:    goto LAB19;

LAB9:    xsi_set_current_line(32, ng0);

LAB28:    xsi_set_current_line(34, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 1104);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 2);
    xsi_set_current_line(35, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1196);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(36, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(37, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1380);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(38, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1564);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB19;

LAB11:    xsi_set_current_line(41, ng0);

LAB29:    xsi_set_current_line(43, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 1104);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 2);
    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1196);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1380);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1564);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB19;

LAB13:    xsi_set_current_line(50, ng0);

LAB30:    xsi_set_current_line(52, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 1104);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 2);
    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1196);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1380);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 1564);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB19;

LAB15:    xsi_set_current_line(59, ng0);

LAB31:    xsi_set_current_line(61, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 1104);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 2);
    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1196);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1380);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(66, ng0);
    t2 = (t0 + 876U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t11, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t12 = *((unsigned int *)t3);
    t13 = *((unsigned int *)t2);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t5);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t4);
    t20 = *((unsigned int *)t5);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB35;

LAB32:    if (t21 != 0)
        goto LAB34;

LAB33:    *((unsigned int *)t11) = 1;

LAB35:    t9 = (t11 + 4);
    t24 = *((unsigned int *)t9);
    t25 = (~(t24));
    t26 = *((unsigned int *)t11);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB36;

LAB37:    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 1564);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB38:    goto LAB19;

LAB17:    xsi_set_current_line(78, ng0);

LAB47:    xsi_set_current_line(79, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 1104);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 2);
    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1196);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1380);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 1564);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB19;

LAB23:    t7 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB24;

LAB25:    xsi_set_current_line(27, ng0);
    t10 = ((char*)((ng3)));
    t29 = (t0 + 1564);
    xsi_vlogvar_assign_value(t29, t10, 0, 0, 3);
    goto LAB27;

LAB34:    t7 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB35;

LAB36:    xsi_set_current_line(67, ng0);

LAB39:    xsi_set_current_line(69, ng0);
    t10 = (t0 + 784U);
    t29 = *((char **)t10);
    t10 = ((char*)((ng2)));
    memset(t30, 0, 8);
    t31 = (t29 + 4);
    t32 = (t10 + 4);
    t33 = *((unsigned int *)t29);
    t34 = *((unsigned int *)t10);
    t35 = (t33 ^ t34);
    t36 = *((unsigned int *)t31);
    t37 = *((unsigned int *)t32);
    t38 = (t36 ^ t37);
    t39 = (t35 | t38);
    t40 = *((unsigned int *)t31);
    t41 = *((unsigned int *)t32);
    t42 = (t40 | t41);
    t43 = (~(t42));
    t44 = (t39 & t43);
    if (t44 != 0)
        goto LAB43;

LAB40:    if (t42 != 0)
        goto LAB42;

LAB41:    *((unsigned int *)t30) = 1;

LAB43:    t46 = (t30 + 4);
    t47 = *((unsigned int *)t46);
    t48 = (~(t47));
    t49 = *((unsigned int *)t30);
    t50 = (t49 & t48);
    t51 = (t50 != 0);
    if (t51 > 0)
        goto LAB44;

LAB45:    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1564);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB46:    goto LAB38;

LAB42:    t45 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t45) = 1;
    goto LAB43;

LAB44:    xsi_set_current_line(70, ng0);
    t52 = ((char*)((ng3)));
    t53 = (t0 + 1564);
    xsi_vlogvar_assign_value(t53, t52, 0, 0, 3);
    goto LAB46;

}

static void Always_88_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;

LAB0:    t1 = (t0 + 2232U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 2436);
    *((int *)t2) = 1;
    t3 = (t0 + 2260);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(89, ng0);

LAB5:    xsi_set_current_line(90, ng0);
    t4 = (t0 + 692U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(93, ng0);
    t2 = (t0 + 1564);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 1472);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 3);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(91, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 1472);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 3);
    goto LAB8;

}


extern void work_m_00000000004268808482_4020927633_init()
{
	static char *pe[] = {(void *)Always_15_0,(void *)Always_88_1};
	xsi_register_didat("work_m_00000000004268808482_4020927633", "isim/Main_isim_beh.exe.sim/work/m_00000000004268808482_4020927633.didat");
	xsi_register_executes(pe);
}

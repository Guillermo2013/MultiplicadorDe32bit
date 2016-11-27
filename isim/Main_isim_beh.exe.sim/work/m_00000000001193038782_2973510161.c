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
static const char *ng0 = "C:/Users/Dell/Documents/Multiplicador32bIts/Multiplicador32bits/Main.v";
static int ng1[] = {0, 0, 0, 0};



static void Initial_22_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(23, ng0);

LAB2:    xsi_set_current_line(24, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1748);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 64);

LAB1:    return;
}


extern void work_m_00000000001193038782_2973510161_init()
{
	static char *pe[] = {(void *)Initial_22_0};
	xsi_register_didat("work_m_00000000001193038782_2973510161", "isim/Main_isim_beh.exe.sim/work/m_00000000001193038782_2973510161.didat");
	xsi_register_executes(pe);
}

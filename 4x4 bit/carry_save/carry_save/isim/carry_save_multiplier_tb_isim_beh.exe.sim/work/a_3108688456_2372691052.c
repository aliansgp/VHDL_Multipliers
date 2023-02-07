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
static const char *ng0 = "C:/Users/Ali/Desktop/CA/az7_report (4)/az7_report/codes/carry_save_multiplier_tb.vhd";



static void work_a_3108688456_2372691052_p_0(char *t0)
{
    char *t1;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int64 t8;
    char *t9;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;

LAB0:    xsi_set_current_line(68, ng0);

LAB3:    t1 = (t0 + 5296);
    t3 = (t0 + 3144);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 4U);
    xsi_driver_first_trans_delta(t3, 0U, 4U, 0LL);
    t8 = (20 * 1000LL);
    t9 = (t0 + 5300);
    t11 = (t0 + 3144);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t9, 4U);
    xsi_driver_subsequent_trans_delta(t11, 0U, 4U, t8);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3108688456_2372691052_p_1(char *t0)
{
    char *t1;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int64 t8;
    char *t9;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;

LAB0:    xsi_set_current_line(69, ng0);

LAB3:    t1 = (t0 + 5304);
    t3 = (t0 + 3208);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 4U);
    xsi_driver_first_trans_delta(t3, 0U, 4U, 0LL);
    t8 = (20 * 1000LL);
    t9 = (t0 + 5308);
    t11 = (t0 + 3208);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t9, 4U);
    xsi_driver_subsequent_trans_delta(t11, 0U, 4U, t8);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_3108688456_2372691052_init()
{
	static char *pe[] = {(void *)work_a_3108688456_2372691052_p_0,(void *)work_a_3108688456_2372691052_p_1};
	xsi_register_didat("work_a_3108688456_2372691052", "isim/carry_save_multiplier_tb_isim_beh.exe.sim/work/a_3108688456_2372691052.didat");
	xsi_register_executes(pe);
}

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
static const char *ng0 = "C:/Users/Ali/Desktop/CA-Project-1/multipliers/16 bit/booth/booth/booth.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );
char *ieee_p_3620187407_sub_767668596_3965413181(char *, char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_767740470_3965413181(char *, char *, char *, char *, char *, char *);


static void work_a_2827984952_1516540902_p_0(char *t0)
{
    char t25[16];
    char t26[16];
    char t27[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned char t13;
    unsigned char t14;
    int t15;
    int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned char t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;

LAB0:    xsi_set_current_line(27, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 992U);
    t4 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    xsi_set_current_line(45, ng0);
    t1 = (t0 + 2488U);
    t2 = *((char **)t1);
    t15 = *((int *)t2);
    t3 = (t15 == 16);
    if (t3 != 0)
        goto LAB21;

LAB23:
LAB22:    t1 = (t0 + 3912);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(28, ng0);
    t1 = (t0 + 2608U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    *((unsigned char *)t1) = (unsigned char)2;
    xsi_set_current_line(29, ng0);
    t1 = (t0 + 3992);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(30, ng0);
    t1 = xsi_get_transient_memory(33U);
    memset(t1, 0, 33U);
    t2 = t1;
    memset(t2, (unsigned char)2, 33U);
    t5 = (t0 + 2368U);
    t6 = *((char **)t5);
    t5 = (t6 + 0);
    memcpy(t5, t1, 33U);
    xsi_set_current_line(31, ng0);
    t1 = xsi_get_transient_memory(32U);
    memset(t1, 0, 32U);
    t2 = t1;
    memset(t2, (unsigned char)8, 32U);
    t5 = (t0 + 4056);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 32U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(32, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 2128U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    memcpy(t1, t2, 16U);
    xsi_set_current_line(33, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 2368U);
    t5 = *((char **)t1);
    t10 = (32 - 16);
    t11 = (t10 * 1U);
    t12 = (0 + t11);
    t1 = (t5 + t12);
    memcpy(t1, t2, 16U);
    goto LAB3;

LAB5:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 2488U);
    t6 = *((char **)t2);
    t15 = *((int *)t6);
    t16 = (t15 + 1);
    t2 = (t0 + 2488U);
    t7 = *((char **)t2);
    t2 = (t7 + 0);
    *((int *)t2) = t16;
    xsi_set_current_line(36, ng0);
    t1 = (t0 + 2368U);
    t2 = *((char **)t1);
    t15 = (1 - 32);
    t10 = (t15 * -1);
    t11 = (1U * t10);
    t12 = (0 + t11);
    t1 = (t2 + t12);
    t4 = *((unsigned char *)t1);
    t13 = (t4 == (unsigned char)3);
    if (t13 == 1)
        goto LAB13;

LAB14:    t3 = (unsigned char)0;

LAB15:    if (t3 != 0)
        goto LAB10;

LAB12:    t1 = (t0 + 2368U);
    t2 = *((char **)t1);
    t15 = (1 - 32);
    t10 = (t15 * -1);
    t11 = (1U * t10);
    t12 = (0 + t11);
    t1 = (t2 + t12);
    t4 = *((unsigned char *)t1);
    t13 = (t4 == (unsigned char)2);
    if (t13 == 1)
        goto LAB18;

LAB19:    t3 = (unsigned char)0;

LAB20:    if (t3 != 0)
        goto LAB16;

LAB17:
LAB11:    xsi_set_current_line(43, ng0);
    t1 = (t0 + 2368U);
    t2 = *((char **)t1);
    t10 = (32 - 32);
    t11 = (t10 * 1U);
    t12 = (0 + t11);
    t1 = (t2 + t12);
    t5 = xsi_get_transient_memory(32U);
    memcpy(t5, t1, 32U);
    t6 = (t0 + 2368U);
    t7 = *((char **)t6);
    t17 = (32 - 31);
    t18 = (t17 * 1U);
    t19 = (0 + t18);
    t6 = (t7 + t19);
    memcpy(t6, t5, 32U);
    goto LAB3;

LAB7:    t2 = (t0 + 2608U);
    t5 = *((char **)t2);
    t13 = *((unsigned char *)t5);
    t14 = (t13 == (unsigned char)2);
    t3 = t14;
    goto LAB9;

LAB10:    xsi_set_current_line(37, ng0);
    t7 = (t0 + 2368U);
    t8 = *((char **)t7);
    t21 = (32 - 32);
    t22 = (t21 * 1U);
    t23 = (0 + t22);
    t7 = (t8 + t23);
    t9 = (t0 + 2248U);
    t24 = *((char **)t9);
    t9 = (t24 + 0);
    memcpy(t9, t7, 16U);
    xsi_set_current_line(38, ng0);
    t1 = (t0 + 2248U);
    t2 = *((char **)t1);
    t10 = (15 - 15);
    t11 = (t10 * 1U);
    t12 = (0 + t11);
    t1 = (t2 + t12);
    t5 = (t26 + 0U);
    t6 = (t5 + 0U);
    *((int *)t6) = 15;
    t6 = (t5 + 4U);
    *((int *)t6) = 0;
    t6 = (t5 + 8U);
    *((int *)t6) = -1;
    t15 = (0 - 15);
    t17 = (t15 * -1);
    t17 = (t17 + 1);
    t6 = (t5 + 12U);
    *((unsigned int *)t6) = t17;
    t6 = (t0 + 2128U);
    t7 = *((char **)t6);
    t17 = (15 - 15);
    t18 = (t17 * 1U);
    t19 = (0 + t18);
    t6 = (t7 + t19);
    t8 = (t27 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 15;
    t9 = (t8 + 4U);
    *((int *)t9) = 0;
    t9 = (t8 + 8U);
    *((int *)t9) = -1;
    t16 = (0 - 15);
    t21 = (t16 * -1);
    t21 = (t21 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t21;
    t9 = ieee_p_3620187407_sub_767740470_3965413181(IEEE_P_3620187407, t25, t1, t26, t6, t27);
    t24 = (t0 + 2368U);
    t28 = *((char **)t24);
    t21 = (32 - 32);
    t22 = (t21 * 1U);
    t23 = (0 + t22);
    t24 = (t28 + t23);
    t29 = (t25 + 12U);
    t30 = *((unsigned int *)t29);
    t31 = (1U * t30);
    memcpy(t24, t9, t31);
    goto LAB11;

LAB13:    t5 = (t0 + 2368U);
    t6 = *((char **)t5);
    t16 = (0 - 32);
    t17 = (t16 * -1);
    t18 = (1U * t17);
    t19 = (0 + t18);
    t5 = (t6 + t19);
    t14 = *((unsigned char *)t5);
    t20 = (t14 == (unsigned char)2);
    t3 = t20;
    goto LAB15;

LAB16:    xsi_set_current_line(40, ng0);
    t7 = (t0 + 2368U);
    t8 = *((char **)t7);
    t21 = (32 - 32);
    t22 = (t21 * 1U);
    t23 = (0 + t22);
    t7 = (t8 + t23);
    t9 = (t0 + 2248U);
    t24 = *((char **)t9);
    t9 = (t24 + 0);
    memcpy(t9, t7, 16U);
    xsi_set_current_line(41, ng0);
    t1 = (t0 + 2248U);
    t2 = *((char **)t1);
    t10 = (15 - 15);
    t11 = (t10 * 1U);
    t12 = (0 + t11);
    t1 = (t2 + t12);
    t5 = (t26 + 0U);
    t6 = (t5 + 0U);
    *((int *)t6) = 15;
    t6 = (t5 + 4U);
    *((int *)t6) = 0;
    t6 = (t5 + 8U);
    *((int *)t6) = -1;
    t15 = (0 - 15);
    t17 = (t15 * -1);
    t17 = (t17 + 1);
    t6 = (t5 + 12U);
    *((unsigned int *)t6) = t17;
    t6 = (t0 + 2128U);
    t7 = *((char **)t6);
    t17 = (15 - 15);
    t18 = (t17 * 1U);
    t19 = (0 + t18);
    t6 = (t7 + t19);
    t8 = (t27 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 15;
    t9 = (t8 + 4U);
    *((int *)t9) = 0;
    t9 = (t8 + 8U);
    *((int *)t9) = -1;
    t16 = (0 - 15);
    t21 = (t16 * -1);
    t21 = (t21 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t21;
    t9 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t25, t1, t26, t6, t27);
    t24 = (t0 + 2368U);
    t28 = *((char **)t24);
    t21 = (32 - 32);
    t22 = (t21 * 1U);
    t23 = (0 + t22);
    t24 = (t28 + t23);
    t29 = (t25 + 12U);
    t30 = *((unsigned int *)t29);
    t31 = (1U * t30);
    memcpy(t24, t9, t31);
    goto LAB11;

LAB18:    t5 = (t0 + 2368U);
    t6 = *((char **)t5);
    t16 = (0 - 32);
    t17 = (t16 * -1);
    t18 = (1U * t17);
    t19 = (0 + t18);
    t5 = (t6 + t19);
    t14 = *((unsigned char *)t5);
    t20 = (t14 == (unsigned char)3);
    t3 = t20;
    goto LAB20;

LAB21:    xsi_set_current_line(46, ng0);
    t1 = (t0 + 2368U);
    t5 = *((char **)t1);
    t10 = (32 - 32);
    t11 = (t10 * 1U);
    t12 = (0 + t11);
    t1 = (t5 + t12);
    t6 = (t0 + 4056);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t24 = *((char **)t9);
    memcpy(t24, t1, 32U);
    xsi_driver_first_trans_delta(t6, 0U, 32U, 0LL);
    xsi_set_current_line(47, ng0);
    t1 = (t0 + 2608U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((unsigned char *)t1) = (unsigned char)3;
    xsi_set_current_line(48, ng0);
    t1 = (t0 + 3992);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(49, ng0);
    t1 = (t0 + 2488U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((int *)t1) = 0;
    goto LAB22;

}


extern void work_a_2827984952_1516540902_init()
{
	static char *pe[] = {(void *)work_a_2827984952_1516540902_p_0};
	xsi_register_didat("work_a_2827984952_1516540902", "isim/Booth16_TB_isim_beh.exe.sim/work/a_2827984952_1516540902.didat");
	xsi_register_executes(pe);
}

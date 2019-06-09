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

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/ise/shared/multiprocessor/sign_extend_8to16.vhd";



static void work_a_0921265456_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    int t11;
    int t12;
    int t13;
    unsigned char t14;
    int t15;
    int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    char *t22;

LAB0:    xsi_set_current_line(37, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = (3 - 3);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 2904);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 4U);
    xsi_driver_first_trans_delta(t6, 12U, 4U, 0LL);
    xsi_set_current_line(38, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t3 = (3 - 3);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 2904);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 4U);
    xsi_driver_first_trans_delta(t6, 8U, 4U, 0LL);
    xsi_set_current_line(42, ng0);
    t1 = (t0 + 4608);
    *((int *)t1) = 15;
    t2 = (t0 + 4612);
    *((int *)t2) = 8;
    t11 = 15;
    t12 = 8;

LAB2:    if (t11 >= t12)
        goto LAB3;

LAB5:    t1 = (t0 + 2824);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(43, ng0);
    t6 = (t0 + 1032U);
    t7 = *((char **)t6);
    t13 = (3 - 3);
    t3 = (t13 * -1);
    t4 = (1U * t3);
    t5 = (0 + t4);
    t6 = (t7 + t5);
    t14 = *((unsigned char *)t6);
    t8 = (t0 + 4608);
    t15 = *((int *)t8);
    t16 = (t15 - 15);
    t17 = (t16 * -1);
    t18 = (1 * t17);
    t19 = (0U + t18);
    t9 = (t0 + 2904);
    t10 = (t9 + 56U);
    t20 = *((char **)t10);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    *((unsigned char *)t22) = t14;
    xsi_driver_first_trans_delta(t9, t19, 1, 0LL);

LAB4:    t1 = (t0 + 4608);
    t11 = *((int *)t1);
    t2 = (t0 + 4612);
    t12 = *((int *)t2);
    if (t11 == t12)
        goto LAB5;

LAB6:    t13 = (t11 + -1);
    t11 = t13;
    t6 = (t0 + 4608);
    *((int *)t6) = t11;
    goto LAB2;

}


extern void work_a_0921265456_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0921265456_3212880686_p_0};
	xsi_register_didat("work_a_0921265456_3212880686", "isim/main_isim_beh.exe.sim/work/a_0921265456_3212880686.didat");
	xsi_register_executes(pe);
}

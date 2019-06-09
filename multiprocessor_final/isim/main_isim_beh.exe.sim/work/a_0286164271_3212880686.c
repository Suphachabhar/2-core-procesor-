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
static const char *ng0 = "/home/ise/shared/multiprocessor/main.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;

unsigned char ieee_p_2592010699_sub_13554554585326073636_503743352(char *, char *, unsigned int , unsigned int );
char *ieee_p_3620187407_sub_1496620905533649268_3965413181(char *, char *, char *, char *, char *, char *);


static void work_a_0286164271_3212880686_p_0(char *t0)
{
    char t9[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned char t8;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;

LAB0:    xsi_set_current_line(136, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 1152U);
    t3 = ieee_p_2592010699_sub_13554554585326073636_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    xsi_set_current_line(150, ng0);
    t1 = (t0 + 6408U);
    t2 = *((char **)t1);
    t1 = (t0 + 12440U);
    t5 = (t0 + 6528U);
    t6 = *((char **)t5);
    t5 = (t0 + 12456U);
    t7 = ieee_p_3620187407_sub_1496620905533649268_3965413181(IEEE_P_3620187407, t9, t2, t1, t6, t5);
    t10 = (t0 + 6288U);
    t11 = *((char **)t10);
    t10 = (t11 + 0);
    t12 = (t9 + 12U);
    t13 = *((unsigned int *)t12);
    t14 = (1U * t13);
    memcpy(t10, t7, t14);
    xsi_set_current_line(151, ng0);
    t1 = (t0 + 6288U);
    t2 = *((char **)t1);
    t1 = (t0 + 7904);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    memcpy(t10, t2, 16U);
    xsi_driver_first_trans_fast(t1);
    t1 = (t0 + 7824);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(138, ng0);
    t1 = (t0 + 15868);
    t6 = (t0 + 6408U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    memcpy(t6, t1, 16U);
    xsi_set_current_line(139, ng0);
    t1 = (t0 + 15884);
    t5 = (t0 + 6528U);
    t6 = *((char **)t5);
    t5 = (t6 + 0);
    memcpy(t5, t1, 16U);
    goto LAB3;

LAB5:    xsi_set_current_line(142, ng0);
    t2 = (t0 + 5832U);
    t5 = *((char **)t2);
    t4 = *((unsigned char *)t5);
    t8 = (t4 == (unsigned char)2);
    if (t8 != 0)
        goto LAB7;

LAB9:
LAB8:    xsi_set_current_line(145, ng0);
    t1 = (t0 + 5992U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB10;

LAB12:
LAB11:    goto LAB3;

LAB7:    xsi_set_current_line(143, ng0);
    t2 = (t0 + 4872U);
    t6 = *((char **)t2);
    t2 = (t0 + 6408U);
    t7 = *((char **)t2);
    t2 = (t7 + 0);
    memcpy(t2, t6, 16U);
    goto LAB8;

LAB10:    xsi_set_current_line(146, ng0);
    t1 = (t0 + 5032U);
    t5 = *((char **)t1);
    t1 = (t0 + 6528U);
    t6 = *((char **)t1);
    t1 = (t6 + 0);
    memcpy(t1, t5, 16U);
    goto LAB11;

}


extern void work_a_0286164271_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0286164271_3212880686_p_0};
	xsi_register_didat("work_a_0286164271_3212880686", "isim/main_isim_beh.exe.sim/work/a_0286164271_3212880686.didat");
	xsi_register_executes(pe);
}

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
static const char *ng0 = "/home/ise/shared/multiprocessor/data_memory.vhd";
extern char *IEEE_P_3620187407;
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_13554554585326073636_503743352(char *, char *, unsigned int , unsigned int );
int ieee_p_3620187407_sub_5109402382352621412_3965413181(char *, char *, char *);


static void work_a_1632567566_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;
    char *t16;
    char *t17;
    int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;
    int t25;
    int t26;
    char *t27;
    int t28;
    int t29;
    unsigned int t30;
    unsigned int t31;
    int t32;
    unsigned char t33;

LAB0:    xsi_set_current_line(79, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t1 = (t0 + 9944U);
    t3 = ieee_p_3620187407_sub_5109402382352621412_3965413181(IEEE_P_3620187407, t2, t1);
    t4 = (t0 + 4648U);
    t5 = *((char **)t4);
    t4 = (t5 + 0);
    *((int *)t4) = t3;
    xsi_set_current_line(80, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t1 = (t0 + 9976U);
    t3 = ieee_p_3620187407_sub_5109402382352621412_3965413181(IEEE_P_3620187407, t2, t1);
    t4 = (t0 + 4768U);
    t5 = *((char **)t4);
    t4 = (t5 + 0);
    *((int *)t4) = t3;
    xsi_set_current_line(82, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t6 = *((unsigned char *)t2);
    t7 = (t6 == (unsigned char)3);
    if (t7 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 1152U);
    t6 = ieee_p_2592010699_sub_13554554585326073636_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t6 != 0)
        goto LAB10;

LAB11:
LAB3:    xsi_set_current_line(114, ng0);
    t1 = (t0 + 4528U);
    t2 = *((char **)t1);
    t1 = (t0 + 6512);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t16 = (t5 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t2, 3136U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(115, ng0);
    t1 = (t0 + 4072U);
    t2 = *((char **)t1);
    t1 = (t0 + 6576);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t16 = (t5 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t2, 16U);
    xsi_driver_first_trans_fast_port(t1);
    t1 = (t0 + 6304);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(83, ng0);
    t1 = (t0 + 3112U);
    t4 = *((char **)t1);
    t1 = (t0 + 4528U);
    t5 = *((char **)t1);
    t3 = (192 - 0);
    t8 = (t3 * 1);
    t9 = (16U * t8);
    t10 = (0 + t9);
    t1 = (t5 + t10);
    memcpy(t1, t4, 16U);
    xsi_set_current_line(84, ng0);
    t1 = (t0 + 3272U);
    t2 = *((char **)t1);
    t1 = (t0 + 4528U);
    t4 = *((char **)t1);
    t3 = (193 - 0);
    t8 = (t3 * 1);
    t9 = (16U * t8);
    t10 = (0 + t9);
    t1 = (t4 + t10);
    memcpy(t1, t2, 16U);
    xsi_set_current_line(85, ng0);
    t1 = (t0 + 3432U);
    t2 = *((char **)t1);
    t1 = (t0 + 4528U);
    t4 = *((char **)t1);
    t3 = (194 - 0);
    t8 = (t3 * 1);
    t9 = (16U * t8);
    t10 = (0 + t9);
    t1 = (t4 + t10);
    memcpy(t1, t2, 16U);
    xsi_set_current_line(86, ng0);
    t1 = (t0 + 19672);
    t4 = (t0 + 4528U);
    t5 = *((char **)t4);
    t3 = (195 - 0);
    t8 = (t3 * 1);
    t9 = (16U * t8);
    t10 = (0 + t9);
    t4 = (t5 + t10);
    memcpy(t4, t1, 16U);
    xsi_set_current_line(90, ng0);
    t1 = (t0 + 19688);
    *((int *)t1) = 0;
    t2 = (t0 + 19692);
    *((int *)t2) = 63;
    t3 = 0;
    t11 = 63;

LAB5:    if (t3 <= t11)
        goto LAB6;

LAB8:    goto LAB3;

LAB6:    xsi_set_current_line(91, ng0);
    t4 = (t0 + 19688);
    t12 = *((int *)t4);
    t13 = (64 - t12);
    t14 = (t13 - 1);
    t15 = (16 * t14);
    t5 = (t0 + 4888U);
    t16 = *((char **)t5);
    t5 = (t16 + 0);
    *((int *)t5) = t15;
    xsi_set_current_line(92, ng0);
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t1 = (t0 + 4888U);
    t4 = *((char **)t1);
    t12 = *((int *)t4);
    t13 = (t12 + 15);
    t8 = (1023 - t13);
    t1 = (t0 + 4888U);
    t5 = *((char **)t1);
    t14 = *((int *)t5);
    xsi_vhdl_check_range_of_slice(1023, 0, -1, t13, t14, -1);
    t9 = (t8 * 1U);
    t10 = (0 + t9);
    t1 = (t2 + t10);
    t16 = (t0 + 4528U);
    t17 = *((char **)t16);
    t16 = (t0 + 19688);
    t15 = *((int *)t16);
    t18 = (t15 - 0);
    t19 = (t18 * 1);
    xsi_vhdl_check_range_of_index(0, 195, 1, *((int *)t16));
    t20 = (16U * t19);
    t21 = (0 + t20);
    t22 = (t17 + t21);
    t23 = (t0 + 4888U);
    t24 = *((char **)t23);
    t25 = *((int *)t24);
    t26 = (t25 + 15);
    t23 = (t0 + 4888U);
    t27 = *((char **)t23);
    t28 = *((int *)t27);
    t29 = (t28 - t26);
    t30 = (t29 * -1);
    t30 = (t30 + 1);
    t31 = (1U * t30);
    memcpy(t22, t1, t31);
    xsi_set_current_line(93, ng0);
    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t1 = (t0 + 4888U);
    t4 = *((char **)t1);
    t12 = *((int *)t4);
    t13 = (t12 + 15);
    t8 = (1023 - t13);
    t1 = (t0 + 4888U);
    t5 = *((char **)t1);
    t14 = *((int *)t5);
    xsi_vhdl_check_range_of_slice(1023, 0, -1, t13, t14, -1);
    t9 = (t8 * 1U);
    t10 = (0 + t9);
    t1 = (t2 + t10);
    t16 = (t0 + 4528U);
    t17 = *((char **)t16);
    t16 = (t0 + 19688);
    t15 = *((int *)t16);
    t18 = (t15 + 64);
    t25 = (t18 - 0);
    t19 = (t25 * 1);
    xsi_vhdl_check_range_of_index(0, 195, 1, t18);
    t20 = (16U * t19);
    t21 = (0 + t20);
    t22 = (t17 + t21);
    t23 = (t0 + 4888U);
    t24 = *((char **)t23);
    t26 = *((int *)t24);
    t28 = (t26 + 15);
    t23 = (t0 + 4888U);
    t27 = *((char **)t23);
    t29 = *((int *)t27);
    t32 = (t29 - t28);
    t30 = (t32 * -1);
    t30 = (t30 + 1);
    t31 = (1U * t30);
    memcpy(t22, t1, t31);
    xsi_set_current_line(94, ng0);
    t1 = (t0 + 2952U);
    t2 = *((char **)t1);
    t1 = (t0 + 4888U);
    t4 = *((char **)t1);
    t12 = *((int *)t4);
    t13 = (t12 + 15);
    t8 = (1023 - t13);
    t1 = (t0 + 4888U);
    t5 = *((char **)t1);
    t14 = *((int *)t5);
    xsi_vhdl_check_range_of_slice(1023, 0, -1, t13, t14, -1);
    t9 = (t8 * 1U);
    t10 = (0 + t9);
    t1 = (t2 + t10);
    t16 = (t0 + 4528U);
    t17 = *((char **)t16);
    t16 = (t0 + 19688);
    t15 = *((int *)t16);
    t18 = (t15 + 128);
    t25 = (t18 - 0);
    t19 = (t25 * 1);
    xsi_vhdl_check_range_of_index(0, 195, 1, t18);
    t20 = (16U * t19);
    t21 = (0 + t20);
    t22 = (t17 + t21);
    t23 = (t0 + 4888U);
    t24 = *((char **)t23);
    t26 = *((int *)t24);
    t28 = (t26 + 15);
    t23 = (t0 + 4888U);
    t27 = *((char **)t23);
    t29 = *((int *)t27);
    t32 = (t29 - t28);
    t30 = (t32 * -1);
    t30 = (t30 + 1);
    t31 = (1U * t30);
    memcpy(t22, t1, t31);

LAB7:    t1 = (t0 + 19688);
    t3 = *((int *)t1);
    t2 = (t0 + 19692);
    t11 = *((int *)t2);
    if (t3 == t11)
        goto LAB8;

LAB9:    t12 = (t3 + 1);
    t3 = t12;
    t4 = (t0 + 19688);
    *((int *)t4) = t3;
    goto LAB5;

LAB10:    xsi_set_current_line(99, ng0);
    t2 = (t0 + 1512U);
    t4 = *((char **)t2);
    t7 = *((unsigned char *)t4);
    t33 = (t7 == (unsigned char)3);
    if (t33 != 0)
        goto LAB12;

LAB14:
LAB13:    xsi_set_current_line(102, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t6 = *((unsigned char *)t2);
    t7 = (t6 == (unsigned char)3);
    if (t7 != 0)
        goto LAB15;

LAB17:
LAB16:    xsi_set_current_line(105, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t6 = *((unsigned char *)t2);
    t7 = (t6 == (unsigned char)3);
    if (t7 != 0)
        goto LAB18;

LAB20:
LAB19:    xsi_set_current_line(108, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t6 = *((unsigned char *)t2);
    t7 = (t6 == (unsigned char)3);
    if (t7 != 0)
        goto LAB21;

LAB23:
LAB22:    goto LAB3;

LAB12:    xsi_set_current_line(100, ng0);
    t2 = (t0 + 1672U);
    t5 = *((char **)t2);
    t2 = (t0 + 4528U);
    t16 = *((char **)t2);
    t2 = (t0 + 4648U);
    t17 = *((char **)t2);
    t3 = *((int *)t17);
    t11 = (t3 - 0);
    t8 = (t11 * 1);
    xsi_vhdl_check_range_of_index(0, 195, 1, t3);
    t9 = (16U * t8);
    t10 = (0 + t9);
    t2 = (t16 + t10);
    memcpy(t2, t5, 16U);
    goto LAB13;

LAB15:    xsi_set_current_line(103, ng0);
    t1 = (t0 + 2312U);
    t4 = *((char **)t1);
    t1 = (t0 + 4528U);
    t5 = *((char **)t1);
    t1 = (t0 + 4768U);
    t16 = *((char **)t1);
    t3 = *((int *)t16);
    t11 = (t3 - 0);
    t8 = (t11 * 1);
    xsi_vhdl_check_range_of_index(0, 195, 1, t3);
    t9 = (16U * t8);
    t10 = (0 + t9);
    t1 = (t5 + t10);
    memcpy(t1, t4, 16U);
    goto LAB16;

LAB18:    xsi_set_current_line(106, ng0);
    t1 = (t0 + 4528U);
    t4 = *((char **)t1);
    t1 = (t0 + 4648U);
    t5 = *((char **)t1);
    t3 = *((int *)t5);
    t11 = (t3 - 0);
    t8 = (t11 * 1);
    xsi_vhdl_check_range_of_index(0, 195, 1, t3);
    t9 = (16U * t8);
    t10 = (0 + t9);
    t1 = (t4 + t10);
    t16 = (t0 + 6384);
    t17 = (t16 + 56U);
    t22 = *((char **)t17);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memcpy(t24, t1, 16U);
    xsi_driver_first_trans_fast_port(t16);
    goto LAB19;

LAB21:    xsi_set_current_line(109, ng0);
    t1 = (t0 + 4528U);
    t4 = *((char **)t1);
    t1 = (t0 + 4768U);
    t5 = *((char **)t1);
    t3 = *((int *)t5);
    t11 = (t3 - 0);
    t8 = (t11 * 1);
    xsi_vhdl_check_range_of_index(0, 195, 1, t3);
    t9 = (16U * t8);
    t10 = (0 + t9);
    t1 = (t4 + t10);
    t16 = (t0 + 6448);
    t17 = (t16 + 56U);
    t22 = *((char **)t17);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memcpy(t24, t1, 16U);
    xsi_driver_first_trans_fast_port(t16);
    goto LAB22;

}


extern void work_a_1632567566_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1632567566_3212880686_p_0};
	xsi_register_didat("work_a_1632567566_3212880686", "isim/main_isim_beh.exe.sim/work/a_1632567566_3212880686.didat");
	xsi_register_executes(pe);
}

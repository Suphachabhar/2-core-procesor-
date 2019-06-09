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

#include "xsi.h"

struct XSI_INFO xsi_info;

char *IEEE_P_2592010699;
char *STD_STANDARD;
char *IEEE_P_3499444699;
char *IEEE_P_3620187407;


int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    ieee_p_2592010699_init();
    ieee_p_3499444699_init();
    ieee_p_3620187407_init();
    work_a_0785062622_3212880686_init();
    work_a_0390473243_3212880686_init();
    work_a_1632567566_3212880686_init();
    work_a_0313361259_1878664202_init();
    work_a_3430011751_3212880686_init();
    work_a_3624755887_1878664202_init();
    work_a_3521561301_1181938964_init();
    work_a_0921265456_3212880686_init();
    work_a_3853510154_1878664202_init();
    work_a_2615964831_3212880686_init();
    work_a_1042590187_1181938964_init();
    work_a_2616167253_1181938964_init();
    work_a_3507958607_1878664202_init();
    work_a_1640669797_3212880686_init();
    work_a_0286164271_3212880686_init();


    xsi_register_tops("work_a_0286164271_3212880686");

    IEEE_P_2592010699 = xsi_get_engine_memory("ieee_p_2592010699");
    xsi_register_ieee_std_logic_1164(IEEE_P_2592010699);
    STD_STANDARD = xsi_get_engine_memory("std_standard");
    IEEE_P_3499444699 = xsi_get_engine_memory("ieee_p_3499444699");
    IEEE_P_3620187407 = xsi_get_engine_memory("ieee_p_3620187407");

    return xsi_run_simulation(argc, argv);

}

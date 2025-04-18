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



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    unisims_ver_m_00000000001946988858_2297623829_init();
    unisims_ver_m_00000000002399568039_2282143210_init();
    unisims_ver_m_00000000000740258969_3897995058_init();
    unisims_ver_m_00000000000740258969_1625843133_init();
    unisims_ver_m_00000000003131622635_0225263307_init();
    unisims_ver_m_00000000002922998384_2097399955_init();
    unisims_ver_m_00000000003266096158_2593380106_init();
    work_m_00000000003527022564_0927746548_init();
    work_m_00000000002476238956_4073940499_init();
    work_m_00000000001725008001_1422964611_init();
    unisims_ver_m_00000000002369045462_1879852856_init();
    work_m_00000000000474694380_1752316801_init();
    unisims_ver_m_00000000002304772977_3342287592_init();
    work_m_00000000002566019999_0199394715_init();
    work_m_00000000000242408637_3690142039_init();
    work_m_00000000004132594926_1862374433_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000004132594926_1862374433");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}

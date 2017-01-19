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

/* This file is designed for use with ISim build 0x9ca8bed6 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/m1/adansar/Bureau/TPS_AOE/TP9_b/Nex1/interval.vhd";
extern char *IEEE_P_2592010699;



static void work_a_0060028321_3212880686_p_0(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned char t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned char t9;
    char *t10;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;

LAB0:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t2 = (t0 + 1032U);
    t4 = *((char **)t2);
    t2 = ((IEEE_P_2592010699) + 4000);
    t5 = xsi_vhdl_greaterEqual(t2, t3, 32U, t4, 32U);
    if (t5 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB8:    t17 = (t0 + 6320);
    t19 = (t0 + 4032);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    memcpy(t23, t17, 32U);
    xsi_driver_first_trans_fast_port(t19);

LAB2:    t24 = (t0 + 3920);
    *((int *)t24) = 1;

LAB1:    return;
LAB3:    t10 = (t0 + 6288);
    t12 = (t0 + 4032);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t10, 32U);
    xsi_driver_first_trans_fast_port(t12);
    goto LAB2;

LAB5:    t6 = (t0 + 1352U);
    t7 = *((char **)t6);
    t6 = (t0 + 1192U);
    t8 = *((char **)t6);
    t6 = ((IEEE_P_2592010699) + 4000);
    t9 = xsi_vhdl_lessthanEqual(t6, t7, 32U, t8, 32U);
    t1 = t9;
    goto LAB7;

LAB9:    goto LAB2;

}

static void work_a_0060028321_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned int t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:    xsi_set_current_line(48, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 1032U);
    t3 = *((char **)t1);
    t4 = 1;
    if (32U == 32U)
        goto LAB5;

LAB6:    t4 = 0;

LAB7:    if (t4 != 0)
        goto LAB3;

LAB4:
LAB11:    t14 = (t0 + 6384);
    t16 = (t0 + 4096);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t14, 32U);
    xsi_driver_first_trans_fast_port(t16);

LAB2:    t21 = (t0 + 3936);
    *((int *)t21) = 1;

LAB1:    return;
LAB3:    t7 = (t0 + 6352);
    t9 = (t0 + 4096);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t7, 32U);
    xsi_driver_first_trans_fast_port(t9);
    goto LAB2;

LAB5:    t5 = 0;

LAB8:    if (t5 < 32U)
        goto LAB9;
    else
        goto LAB7;

LAB9:    t1 = (t2 + t5);
    t6 = (t3 + t5);
    if (*((unsigned char *)t1) != *((unsigned char *)t6))
        goto LAB6;

LAB10:    t5 = (t5 + 1);
    goto LAB8;

LAB12:    goto LAB2;

}

static void work_a_0060028321_3212880686_p_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned int t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:    xsi_set_current_line(49, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 1192U);
    t3 = *((char **)t1);
    t4 = 1;
    if (32U == 32U)
        goto LAB5;

LAB6:    t4 = 0;

LAB7:    if (t4 != 0)
        goto LAB3;

LAB4:
LAB11:    t14 = (t0 + 6448);
    t16 = (t0 + 4160);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t14, 32U);
    xsi_driver_first_trans_fast_port(t16);

LAB2:    t21 = (t0 + 3952);
    *((int *)t21) = 1;

LAB1:    return;
LAB3:    t7 = (t0 + 6416);
    t9 = (t0 + 4160);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t7, 32U);
    xsi_driver_first_trans_fast_port(t9);
    goto LAB2;

LAB5:    t5 = 0;

LAB8:    if (t5 < 32U)
        goto LAB9;
    else
        goto LAB7;

LAB9:    t1 = (t2 + t5);
    t6 = (t3 + t5);
    if (*((unsigned char *)t1) != *((unsigned char *)t6))
        goto LAB6;

LAB10:    t5 = (t5 + 1);
    goto LAB8;

LAB12:    goto LAB2;

}


extern void work_a_0060028321_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0060028321_3212880686_p_0,(void *)work_a_0060028321_3212880686_p_1,(void *)work_a_0060028321_3212880686_p_2};
	xsi_register_didat("work_a_0060028321_3212880686", "isim/testbench_isim_beh.exe.sim/work/a_0060028321_3212880686.didat");
	xsi_register_executes(pe);
}

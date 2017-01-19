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
static const char *ng0 = "/home/m1/adansar/Bureau/TPS_AOE/TP9_b/Nex1/square2.vhd";
extern char *IEEE_P_3620187407;

char *ieee_p_3620187407_sub_1496620905533649268_3965413181(char *, char *, char *, char *, char *, char *);


static void work_a_3620750693_3212880686_p_0(char *t0)
{
    char t7[16];
    char *t1;
    char *t3;
    char *t4;
    char *t5;
    unsigned char t6;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;

LAB0:    xsi_set_current_line(66, ng0);
    t1 = (t0 + 5830);
    t3 = (t0 + 5576U);
    t4 = (t0 + 1352U);
    t5 = *((char **)t4);
    t4 = (t0 + 5624U);
    t6 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t1, t3, t5, t4);
    if (t6 != 0)
        goto LAB3;

LAB4:
LAB5:    t18 = xsi_get_transient_memory(32U);
    memset(t18, 0, 32U);
    t19 = t18;
    memset(t19, (unsigned char)4, 32U);
    t20 = (t0 + 3504);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memcpy(t24, t18, 32U);
    xsi_driver_first_trans_fast_port(t20);

LAB2:    t25 = (t0 + 3424);
    *((int *)t25) = 1;

LAB1:    return;
LAB3:    t8 = (t0 + 1672U);
    t9 = *((char **)t8);
    t8 = (t0 + 5656U);
    t10 = (t0 + 1832U);
    t11 = *((char **)t10);
    t10 = (t0 + 5656U);
    t12 = ieee_p_3620187407_sub_1496620905533649268_3965413181(IEEE_P_3620187407, t7, t9, t8, t11, t10);
    t13 = (t0 + 3504);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t12, 32U);
    xsi_driver_first_trans_fast_port(t13);
    goto LAB2;

LAB6:    goto LAB2;

}


extern void work_a_3620750693_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3620750693_3212880686_p_0};
	xsi_register_didat("work_a_3620750693_3212880686", "isim/testbench_isim_beh.exe.sim/work/a_3620750693_3212880686.didat");
	xsi_register_executes(pe);
}

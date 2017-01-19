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
static const char *ng0 = "/home/m1/adansar/Bureau/TPS_AOE/TP9_b/Nex1/random.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_3488768497506413324_503743352(char *, unsigned char , unsigned char );


static void work_a_3219098319_3212880686_p_0(char *t0)
{
    char t20[16];
    char t21[16];
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    int t22;
    unsigned int t23;
    char *t24;
    int t25;
    unsigned int t26;
    unsigned int t27;
    int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned char t36;
    char *t37;
    char *t38;

LAB0:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 1032U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)3);
    if (t5 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t2 = (t0 + 3408);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t3, 32U);
    xsi_driver_first_trans_fast_port(t2);
    t2 = (t0 + 3264);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(49, ng0);
    t7 = (t0 + 1192U);
    t8 = *((char **)t7);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t1 = *((unsigned char *)t3);
    t4 = (t1 == (unsigned char)3);
    if (t4 != 0)
        goto LAB11;

LAB12:
LAB9:    goto LAB3;

LAB5:    t2 = (t0 + 992U);
    t6 = xsi_signal_has_event(t2);
    t1 = t6;
    goto LAB7;

LAB8:    xsi_set_current_line(50, ng0);
    t7 = (t0 + 5247);
    t12 = (t0 + 3344);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t7, 32U);
    xsi_driver_first_trans_fast(t12);
    goto LAB9;

LAB11:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1672U);
    t7 = *((char **)t2);
    t17 = (31 - 31);
    t18 = (t17 * 1U);
    t19 = (0 + t18);
    t2 = (t7 + t19);
    t11 = ((IEEE_P_2592010699) + 4000);
    t12 = (t21 + 0U);
    t13 = (t12 + 0U);
    *((int *)t13) = 31;
    t13 = (t12 + 4U);
    *((int *)t13) = 1;
    t13 = (t12 + 8U);
    *((int *)t13) = -1;
    t22 = (1 - 31);
    t23 = (t22 * -1);
    t23 = (t23 + 1);
    t13 = (t12 + 12U);
    *((unsigned int *)t13) = t23;
    t8 = xsi_base_array_concat(t8, t20, t11, (char)99, (unsigned char)2, (char)97, t2, t21, (char)101);
    t13 = (t0 + 3344);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t24 = *((char **)t16);
    memcpy(t24, t8, 32U);
    xsi_driver_first_trans_fast(t13);
    xsi_set_current_line(53, ng0);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t22 = (0 - 31);
    t17 = (t22 * -1);
    t18 = (1U * t17);
    t19 = (0 + t18);
    t2 = (t3 + t19);
    t1 = *((unsigned char *)t2);
    t7 = (t0 + 1672U);
    t8 = *((char **)t7);
    t25 = (2 - 31);
    t23 = (t25 * -1);
    t26 = (1U * t23);
    t27 = (0 + t26);
    t7 = (t8 + t27);
    t4 = *((unsigned char *)t7);
    t5 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t1, t4);
    t11 = (t0 + 1672U);
    t12 = *((char **)t11);
    t28 = (3 - 31);
    t29 = (t28 * -1);
    t30 = (1U * t29);
    t31 = (0 + t30);
    t11 = (t12 + t31);
    t6 = *((unsigned char *)t11);
    t9 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t5, t6);
    t13 = (t0 + 1672U);
    t14 = *((char **)t13);
    t32 = (4 - 31);
    t33 = (t32 * -1);
    t34 = (1U * t33);
    t35 = (0 + t34);
    t13 = (t14 + t35);
    t10 = *((unsigned char *)t13);
    t36 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t9, t10);
    t15 = (t0 + 3344);
    t16 = (t15 + 56U);
    t24 = *((char **)t16);
    t37 = (t24 + 56U);
    t38 = *((char **)t37);
    *((unsigned char *)t38) = t36;
    xsi_driver_first_trans_delta(t15, 0U, 1, 0LL);
    goto LAB9;

}


extern void work_a_3219098319_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3219098319_3212880686_p_0};
	xsi_register_didat("work_a_3219098319_3212880686", "isim/testbench_isim_beh.exe.sim/work/a_3219098319_3212880686.didat");
	xsi_register_executes(pe);
}

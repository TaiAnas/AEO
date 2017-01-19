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
static const char *ng0 = "/home/m1/adansar/Bureau/TPS_AOE/TP9_b/Nex1/IP_Rdm.vhd";
extern char *IEEE_P_2592010699;



static void work_a_4205237495_3212880686_p_0(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    char *t7;
    unsigned char t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned char t15;
    unsigned char t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;

LAB0:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t4 = (10 - 10);
    t5 = (t4 * 1U);
    t6 = (0 + t5);
    t2 = (t3 + t6);
    t7 = (t0 + 6649);
    t9 = 1;
    if (11U == 11U)
        goto LAB8;

LAB9:    t9 = 0;

LAB10:    if (t9 == 1)
        goto LAB5;

LAB6:    t13 = (t0 + 1192U);
    t14 = *((char **)t13);
    t15 = *((unsigned char *)t14);
    t16 = (t15 == (unsigned char)3);
    t1 = t16;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB14:    t21 = (t0 + 4192);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    *((unsigned char *)t25) = (unsigned char)2;
    xsi_driver_first_trans_fast(t21);

LAB2:    t26 = (t0 + 4080);
    *((int *)t26) = 1;

LAB1:    return;
LAB3:    t13 = (t0 + 4192);
    t17 = (t13 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    *((unsigned char *)t20) = (unsigned char)3;
    xsi_driver_first_trans_fast(t13);
    goto LAB2;

LAB5:    t1 = (unsigned char)1;
    goto LAB7;

LAB8:    t10 = 0;

LAB11:    if (t10 < 11U)
        goto LAB12;
    else
        goto LAB10;

LAB12:    t11 = (t2 + t10);
    t12 = (t7 + t10);
    if (*((unsigned char *)t11) != *((unsigned char *)t12))
        goto LAB9;

LAB13:    t10 = (t10 + 1);
    goto LAB11;

LAB15:    goto LAB2;

}

static void work_a_4205237495_3212880686_p_1(char *t0)
{
    char t20[16];
    char t22[16];
    char t27[16];
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t6;
    unsigned char t8;
    unsigned int t9;
    char *t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t21;
    char *t23;
    char *t24;
    int t25;
    unsigned int t26;
    char *t28;
    int t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;

LAB0:    xsi_set_current_line(67, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t3 = (10 - 10);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 6660);
    t8 = 1;
    if (11U == 11U)
        goto LAB5;

LAB6:    t8 = 0;

LAB7:    if (t8 != 0)
        goto LAB3;

LAB4:
LAB11:    t34 = xsi_get_transient_memory(32U);
    memset(t34, 0, 32U);
    t35 = t34;
    memset(t35, (unsigned char)4, 32U);
    t36 = (t0 + 4256);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    memcpy(t40, t34, 32U);
    xsi_driver_first_trans_fast_port(t36);

LAB2:    t41 = (t0 + 4096);
    *((int *)t41) = 1;

LAB1:    return;
LAB3:    t12 = (t0 + 6671);
    t14 = (t0 + 1992U);
    t15 = *((char **)t14);
    t16 = (31 - 11);
    t17 = (t16 * 1U);
    t18 = (0 + t17);
    t14 = (t15 + t18);
    t21 = ((IEEE_P_2592010699) + 4000);
    t23 = (t22 + 0U);
    t24 = (t23 + 0U);
    *((int *)t24) = 0;
    t24 = (t23 + 4U);
    *((int *)t24) = 19;
    t24 = (t23 + 8U);
    *((int *)t24) = 1;
    t25 = (19 - 0);
    t26 = (t25 * 1);
    t26 = (t26 + 1);
    t24 = (t23 + 12U);
    *((unsigned int *)t24) = t26;
    t24 = (t27 + 0U);
    t28 = (t24 + 0U);
    *((int *)t28) = 11;
    t28 = (t24 + 4U);
    *((int *)t28) = 0;
    t28 = (t24 + 8U);
    *((int *)t28) = -1;
    t29 = (0 - 11);
    t26 = (t29 * -1);
    t26 = (t26 + 1);
    t28 = (t24 + 12U);
    *((unsigned int *)t28) = t26;
    t19 = xsi_base_array_concat(t19, t20, t21, (char)97, t12, t22, (char)97, t14, t27, (char)101);
    t28 = (t0 + 4256);
    t30 = (t28 + 56U);
    t31 = *((char **)t30);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    memcpy(t33, t19, 32U);
    xsi_driver_first_trans_fast_port(t28);
    goto LAB2;

LAB5:    t9 = 0;

LAB8:    if (t9 < 11U)
        goto LAB9;
    else
        goto LAB7;

LAB9:    t10 = (t1 + t9);
    t11 = (t6 + t9);
    if (*((unsigned char *)t10) != *((unsigned char *)t11))
        goto LAB6;

LAB10:    t9 = (t9 + 1);
    goto LAB8;

LAB12:    goto LAB2;

}

static void work_a_4205237495_3212880686_p_2(char *t0)
{
    char t20[16];
    char t22[16];
    char t27[16];
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t6;
    unsigned char t8;
    unsigned int t9;
    char *t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t21;
    char *t23;
    char *t24;
    int t25;
    unsigned int t26;
    char *t28;
    int t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;

LAB0:    xsi_set_current_line(68, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t3 = (10 - 10);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 6691);
    t8 = 1;
    if (11U == 11U)
        goto LAB5;

LAB6:    t8 = 0;

LAB7:    if (t8 != 0)
        goto LAB3;

LAB4:
LAB11:    t34 = xsi_get_transient_memory(32U);
    memset(t34, 0, 32U);
    t35 = t34;
    memset(t35, (unsigned char)4, 32U);
    t36 = (t0 + 4320);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    memcpy(t40, t34, 32U);
    xsi_driver_first_trans_fast_port(t36);

LAB2:    t41 = (t0 + 4112);
    *((int *)t41) = 1;

LAB1:    return;
LAB3:    t12 = (t0 + 6702);
    t14 = (t0 + 1992U);
    t15 = *((char **)t14);
    t16 = (31 - 23);
    t17 = (t16 * 1U);
    t18 = (0 + t17);
    t14 = (t15 + t18);
    t21 = ((IEEE_P_2592010699) + 4000);
    t23 = (t22 + 0U);
    t24 = (t23 + 0U);
    *((int *)t24) = 0;
    t24 = (t23 + 4U);
    *((int *)t24) = 19;
    t24 = (t23 + 8U);
    *((int *)t24) = 1;
    t25 = (19 - 0);
    t26 = (t25 * 1);
    t26 = (t26 + 1);
    t24 = (t23 + 12U);
    *((unsigned int *)t24) = t26;
    t24 = (t27 + 0U);
    t28 = (t24 + 0U);
    *((int *)t28) = 23;
    t28 = (t24 + 4U);
    *((int *)t28) = 12;
    t28 = (t24 + 8U);
    *((int *)t28) = -1;
    t29 = (12 - 23);
    t26 = (t29 * -1);
    t26 = (t26 + 1);
    t28 = (t24 + 12U);
    *((unsigned int *)t28) = t26;
    t19 = xsi_base_array_concat(t19, t20, t21, (char)97, t12, t22, (char)97, t14, t27, (char)101);
    t28 = (t0 + 4320);
    t30 = (t28 + 56U);
    t31 = *((char **)t30);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    memcpy(t33, t19, 32U);
    xsi_driver_first_trans_fast_port(t28);
    goto LAB2;

LAB5:    t9 = 0;

LAB8:    if (t9 < 11U)
        goto LAB9;
    else
        goto LAB7;

LAB9:    t10 = (t1 + t9);
    t11 = (t6 + t9);
    if (*((unsigned char *)t10) != *((unsigned char *)t11))
        goto LAB6;

LAB10:    t9 = (t9 + 1);
    goto LAB8;

LAB12:    goto LAB2;

}


extern void work_a_4205237495_3212880686_init()
{
	static char *pe[] = {(void *)work_a_4205237495_3212880686_p_0,(void *)work_a_4205237495_3212880686_p_1,(void *)work_a_4205237495_3212880686_p_2};
	xsi_register_didat("work_a_4205237495_3212880686", "isim/testbench_isim_beh.exe.sim/work/a_4205237495_3212880686.didat");
	xsi_register_executes(pe);
}

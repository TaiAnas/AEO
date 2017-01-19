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
static const char *ng0 = "/home/m1/adansar/Bureau/TPS_AOE/TP9_b/Nex1/testmaster.vhd";
extern char *IEEE_P_3499444699;

int ieee_p_3499444699_sub_1548073968174253783_3536714472(char *, int );


static void work_a_1949178628_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;

LAB0:    t1 = (t0 + 4864U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(131, ng0);
    t2 = (t0 + 6008);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(132, ng0);
    t7 = (5 * 1000LL);
    t2 = (t0 + 4672);
    xsi_process_wait(t2, t7);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(133, ng0);
    t2 = (t0 + 6008);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(134, ng0);
    t7 = (5 * 1000LL);
    t2 = (t0 + 4672);
    xsi_process_wait(t2, t7);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_1949178628_2372691052_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;

LAB0:    t1 = (t0 + 5112U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(143, ng0);
    t2 = (t0 + 6072);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(144, ng0);
    t7 = (30 * 1000LL);
    t2 = (t0 + 4920);
    xsi_process_wait(t2, t7);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(145, ng0);
    t2 = (t0 + 6072);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(146, ng0);
    t7 = (1 * 1000000000LL);
    t2 = (t0 + 4920);
    xsi_process_wait(t2, t7);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    xsi_set_current_line(147, ng0);
    t2 = (t0 + 6136);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_1949178628_2372691052_p_2(char *t0)
{
    int64 t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;

LAB0:    xsi_set_current_line(152, ng0);

LAB3:    t1 = (2.2999999999999998 * 1000000LL);
    t2 = (t0 + 11602);
    t4 = (t0 + 6200);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 5U);
    xsi_driver_first_trans_delta(t4, 0U, 5U, t1);
    t9 = (t0 + 6200);
    xsi_driver_intertial_reject(t9, t1, t1);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1949178628_2372691052_p_3(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    char *t11;
    unsigned char t12;
    unsigned char t13;
    char *t14;
    int t15;
    unsigned char t16;
    char *t17;
    char *t18;
    int t19;
    int t20;
    int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    int t36;
    int t37;
    int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    char *t44;

LAB0:    xsi_set_current_line(159, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 5928);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(161, ng0);
    t1 = (t0 + 992U);
    t6 = xsi_signal_has_event(t1);
    if (t6 == 1)
        goto LAB8;

LAB9:    t5 = (unsigned char)0;

LAB10:    if (t5 != 0)
        goto LAB5;

LAB7:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(163, ng0);
    t7 = (t0 + 2792U);
    t11 = *((char **)t7);
    t12 = *((unsigned char *)t11);
    t13 = (t12 == (unsigned char)2);
    if (t13 != 0)
        goto LAB11;

LAB13:    xsi_set_current_line(203, ng0);
    t1 = (t0 + 6776);
    t2 = (t1 + 56U);
    t7 = *((char **)t2);
    t8 = (t7 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB12:    goto LAB6;

LAB8:    t7 = (t0 + 1032U);
    t8 = *((char **)t7);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    t5 = t10;
    goto LAB10;

LAB11:    xsi_set_current_line(164, ng0);
    t7 = (t0 + 1992U);
    t14 = *((char **)t7);
    t15 = *((int *)t14);
    t16 = (t15 == 0);
    if (t16 != 0)
        goto LAB14;

LAB16:    xsi_set_current_line(192, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t1 = (t0 + 1992U);
    t7 = *((char **)t1);
    t15 = *((int *)t7);
    t19 = (t15 - 63);
    t22 = (t19 * -1);
    xsi_vhdl_check_range_of_index(63, 0, -1, t15);
    t23 = (1U * t22);
    t24 = (0 + t23);
    t1 = (t2 + t24);
    t3 = *((unsigned char *)t1);
    t8 = (t0 + 6328);
    t11 = (t8 + 56U);
    t14 = *((char **)t11);
    t17 = (t14 + 56U);
    t18 = *((char **)t17);
    *((unsigned char *)t18) = t3;
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(194, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t15 = *((int *)t2);
    t19 = (t15 + 1);
    t1 = (t0 + 6520);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t11 = (t8 + 56U);
    t14 = *((char **)t11);
    *((int *)t14) = t19;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(195, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t15 = *((int *)t2);
    t3 = (t15 == 63);
    if (t3 != 0)
        goto LAB32;

LAB34:
LAB33:
LAB15:    xsi_set_current_line(201, ng0);
    t1 = (t0 + 6776);
    t2 = (t1 + 56U);
    t7 = *((char **)t2);
    t8 = (t7 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB12;

LAB14:    xsi_set_current_line(165, ng0);
    t7 = (t0 + 3888U);
    t17 = *((char **)t7);
    t7 = (t0 + 1512U);
    t18 = *((char **)t7);
    t19 = *((int *)t18);
    t20 = ieee_p_3499444699_sub_1548073968174253783_3536714472(IEEE_P_3499444699, t19);
    t21 = (t20 - 0);
    t22 = (t21 * 1);
    xsi_vhdl_check_range_of_index(0, 18, 1, t20);
    t23 = (64U * t22);
    t24 = (0 + t23);
    t7 = (t17 + t24);
    t25 = (t0 + 6264);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    memcpy(t29, t7, 64U);
    xsi_driver_first_trans_fast(t25);
    xsi_set_current_line(166, ng0);
    t1 = (t0 + 3888U);
    t2 = *((char **)t1);
    t22 = (63 - 63);
    t23 = (t22 * 1U);
    t1 = (t0 + 1512U);
    t7 = *((char **)t1);
    t15 = *((int *)t7);
    t19 = ieee_p_3499444699_sub_1548073968174253783_3536714472(IEEE_P_3499444699, t15);
    t20 = (t19 - 0);
    t24 = (t20 * 1);
    xsi_vhdl_check_range_of_index(0, 18, 1, t19);
    t30 = (64U * t24);
    t31 = (0 + t30);
    t32 = (t31 + t23);
    t1 = (t2 + t32);
    t8 = (t0 + 11607);
    t3 = 1;
    if (16U == 16U)
        goto LAB20;

LAB21:    t3 = 0;

LAB22:    if ((!(t3)) != 0)
        goto LAB17;

LAB19:    xsi_set_current_line(177, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB29;

LAB31:    xsi_set_current_line(182, ng0);
    t1 = (t0 + 6712);
    t2 = (t1 + 56U);
    t7 = *((char **)t2);
    t8 = (t7 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(183, ng0);
    t1 = (t0 + 6456);
    t2 = (t1 + 56U);
    t7 = *((char **)t2);
    t8 = (t7 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(184, ng0);
    t1 = (t0 + 6392);
    t2 = (t1 + 56U);
    t7 = *((char **)t2);
    t8 = (t7 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(185, ng0);
    t1 = (t0 + 6776);
    t2 = (t1 + 56U);
    t7 = *((char **)t2);
    t8 = (t7 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB30:
LAB18:    goto LAB15;

LAB17:    xsi_set_current_line(167, ng0);
    t18 = (t0 + 3888U);
    t25 = *((char **)t18);
    t21 = (0 - 63);
    t34 = (t21 * -1);
    t35 = (1U * t34);
    t18 = (t0 + 1512U);
    t26 = *((char **)t18);
    t36 = *((int *)t26);
    t37 = ieee_p_3499444699_sub_1548073968174253783_3536714472(IEEE_P_3499444699, t36);
    t38 = (t37 - 0);
    t39 = (t38 * 1);
    xsi_vhdl_check_range_of_index(0, 18, 1, t37);
    t40 = (64U * t39);
    t41 = (0 + t40);
    t42 = (t41 + t35);
    t18 = (t25 + t42);
    t4 = *((unsigned char *)t18);
    t27 = (t0 + 6328);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    t43 = (t29 + 56U);
    t44 = *((char **)t43);
    *((unsigned char *)t44) = t4;
    xsi_driver_first_trans_fast(t27);
    xsi_set_current_line(168, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB26;

LAB28:    xsi_set_current_line(172, ng0);
    t1 = (t0 + 6456);
    t2 = (t1 + 56U);
    t7 = *((char **)t2);
    t8 = (t7 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(173, ng0);
    t1 = (t0 + 6392);
    t2 = (t1 + 56U);
    t7 = *((char **)t2);
    t8 = (t7 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB27:    xsi_set_current_line(175, ng0);
    t1 = (t0 + 6520);
    t2 = (t1 + 56U);
    t7 = *((char **)t2);
    t8 = (t7 + 56U);
    t11 = *((char **)t8);
    *((int *)t11) = 1;
    xsi_driver_first_trans_fast(t1);
    goto LAB18;

LAB20:    t33 = 0;

LAB23:    if (t33 < 16U)
        goto LAB24;
    else
        goto LAB22;

LAB24:    t14 = (t1 + t33);
    t17 = (t8 + t33);
    if (*((unsigned char *)t14) != *((unsigned char *)t17))
        goto LAB21;

LAB25:    t33 = (t33 + 1);
    goto LAB23;

LAB26:    xsi_set_current_line(169, ng0);
    t1 = (t0 + 6392);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t11 = (t8 + 56U);
    t14 = *((char **)t11);
    *((unsigned char *)t14) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(170, ng0);
    t1 = (t0 + 6456);
    t2 = (t1 + 56U);
    t7 = *((char **)t2);
    t8 = (t7 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB27;

LAB29:    xsi_set_current_line(178, ng0);
    t1 = (t0 + 6584);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t11 = (t8 + 56U);
    t14 = *((char **)t11);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(179, ng0);
    t1 = (t0 + 6392);
    t2 = (t1 + 56U);
    t7 = *((char **)t2);
    t8 = (t7 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(180, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t15 = *((int *)t2);
    t19 = (t15 + 1);
    t1 = (t0 + 6648);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t11 = (t8 + 56U);
    t14 = *((char **)t11);
    *((int *)t14) = t19;
    xsi_driver_first_trans_fast(t1);
    goto LAB30;

LAB32:    xsi_set_current_line(196, ng0);
    t1 = (t0 + 1512U);
    t7 = *((char **)t1);
    t19 = *((int *)t7);
    t20 = (t19 + 1);
    t1 = (t0 + 6648);
    t8 = (t1 + 56U);
    t11 = *((char **)t8);
    t14 = (t11 + 56U);
    t17 = *((char **)t14);
    *((int *)t17) = t20;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(197, ng0);
    t1 = (t0 + 6520);
    t2 = (t1 + 56U);
    t7 = *((char **)t2);
    t8 = (t7 + 56U);
    t11 = *((char **)t8);
    *((int *)t11) = 0;
    xsi_driver_first_trans_fast(t1);
    goto LAB33;

}


extern void work_a_1949178628_2372691052_init()
{
	static char *pe[] = {(void *)work_a_1949178628_2372691052_p_0,(void *)work_a_1949178628_2372691052_p_1,(void *)work_a_1949178628_2372691052_p_2,(void *)work_a_1949178628_2372691052_p_3};
	xsi_register_didat("work_a_1949178628_2372691052", "isim/testbench_isim_beh.exe.sim/work/a_1949178628_2372691052.didat");
	xsi_register_executes(pe);
}

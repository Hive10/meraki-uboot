/*
 * Copyright (C) 1999-2013, Broadcom Corporation 
 *  
 *      Unless you and Broadcom execute a separate written software license 
 * agreement governing use of this software, this software is licensed to you 
 * under the terms of the GNU General Public License version 2 (the "GPL"), 
 * available at http://www.broadcom.com/licenses/GPLv2.php, with the 
 * following added to such license: 
 *  
 *      As a special exception, the copyright holders of this software give you 
 * permission to link this software with independent modules, and to copy and 
 * distribute the resulting executable under terms of your choice, provided that 
 * you also meet, for each linked independent module, the terms and conditions of 
 * the license of that module.  An independent module is a module which is not 
 * derived from this software.  The special exception does not apply to any 
 * modifications of the software. 
 *  
 *      Notwithstanding the above, under no circumstances may you combine this 
 * software in any way with any other Broadcom software provided under a license 
 * other than the GPL, without Broadcom's express prior written consent. 
 */
/*  *********************************************************************
    *********************************************************************
    *  Broadcom Memoroy Diagnostics Environment (MDE)
    *********************************************************************
    *  Filename: mde_phy_word_lane.h
    *
    *  Function: 
    *
    *  Author:  Chung Kwong (C.K.) Der (ckder@broadcom.com)
    *
 */
#ifndef MDE_PHY_WORD_LANE_H
#define MDE_PHY_WORD_LANE_H

/***************************************************************************
 *Ddr40_PHY_WORD_LANE_0 - DDR40 DDR40 byte lane #0 control registers
 ***************************************************************************/
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE_RD_EN        (0x200) /* Read Enable Byte VDL static override control register */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_W           (0x204) /* Write Byte VDL static override control register */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_P         (0x208) /* Read Byte DQSP VDL static override control register */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_N         (0x20c) /* Read Byte DQSN VDL static override control register */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_W      (0x210) /* Write Bit VDL static override control register */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_W      (0x214) /* Write Bit VDL static override control register */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_W      (0x218) /* Write Bit VDL static override control register */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_W      (0x21c) /* Write Bit VDL static override control register */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_W      (0x220) /* Write Bit VDL static override control register */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_W      (0x224) /* Write Bit VDL static override control register */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_W      (0x228) /* Write Bit VDL static override control register */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_W      (0x22c) /* Write Bit VDL static override control register */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_DM_W        (0x230) /* Write Bit VDL static override control register */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_P    (0x234) /* Read DQSP Bit VDL static override control register */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_N    (0x238) /* Read DQSN Bit VDL static override control register */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_P    (0x23c) /* Read DQSP Bit VDL static override control register */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_N    (0x240) /* Read DQSN Bit VDL static override control register */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_P    (0x244) /* Read DQSP Bit VDL static override control register */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_N    (0x248) /* Read DQSN Bit VDL static override control register */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_P    (0x24c) /* Read DQSP Bit VDL static override control register */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_N    (0x250) /* Read DQSN Bit VDL static override control register */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_P    (0x254) /* Read DQSP Bit VDL static override control register */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_N    (0x258) /* Read DQSN Bit VDL static override control register */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_P    (0x25c) /* Read DQSP Bit VDL static override control register */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_N    (0x260) /* Read DQSN Bit VDL static override control register */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_P    (0x264) /* Read DQSP Bit VDL static override control register */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_N    (0x268) /* Read DQSN Bit VDL static override control register */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_P    (0x26c) /* Read DQSP Bit VDL static override control register */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_N    (0x270) /* Read DQSN Bit VDL static override control register */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT_RD_EN   (0x274) /* Read Enable Bit VDL static override control register */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_W           (0x2a4) /* Write Byte VDL static override control register */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_P         (0x2a8) /* Read Byte DQSP VDL static override control register */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_N         (0x2ac) /* Read Byte DQSN VDL static override control register */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_W      (0x2b0) /* Write Bit VDL static override control register */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_W      (0x2b4) /* Write Bit VDL static override control register */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_W      (0x2b8) /* Write Bit VDL static override control register */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_W      (0x2bc) /* Write Bit VDL static override control register */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_W      (0x2c0) /* Write Bit VDL static override control register */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_W      (0x2c4) /* Write Bit VDL static override control register */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_W      (0x2c8) /* Write Bit VDL static override control register */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_W      (0x2cc) /* Write Bit VDL static override control register */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_DM_W        (0x2d0) /* Write Bit VDL static override control register */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_P    (0x2d4) /* Read DQSP Bit VDL static override control register */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_N    (0x2d8) /* Read DQSN Bit VDL static override control register */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_P    (0x2dc) /* Read DQSP Bit VDL static override control register */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_N    (0x2e0) /* Read DQSN Bit VDL static override control register */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_P    (0x2e4) /* Read DQSP Bit VDL static override control register */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_N    (0x2e8) /* Read DQSN Bit VDL static override control register */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_P    (0x2ec) /* Read DQSP Bit VDL static override control register */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_N    (0x2f0) /* Read DQSN Bit VDL static override control register */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_P    (0x2f4) /* Read DQSP Bit VDL static override control register */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_N    (0x2f8) /* Read DQSN Bit VDL static override control register */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_P    (0x2fc) /* Read DQSP Bit VDL static override control register */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_N    (0x300) /* Read DQSN Bit VDL static override control register */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_P    (0x304) /* Read DQSP Bit VDL static override control register */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_N    (0x308) /* Read DQSN Bit VDL static override control register */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_P    (0x30c) /* Read DQSP Bit VDL static override control register */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_N    (0x310) /* Read DQSN Bit VDL static override control register */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT_RD_EN   (0x314) /* Read Enable Bit VDL static override control register */
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_R_P     (0x328) /* Read DQSP VDL dynamic override control register */
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_R_N     (0x32c) /* Read DQSN VDL dynamic override control register */
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_R_P (0x330) /* Read DQ-P VDL dynamic override control register */
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_R_N (0x334) /* Read DQ-N VDL dynamic override control register */
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_W       (0x338) /* Write DQ Byte VDL dynamic override control register */
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_W   (0x33c) /* Write DQ Bit VDL dynamic override control register */
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_R_P     (0x348) /* Read DQSP VDL dynamic override control register */
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_R_N     (0x34c) /* Read DQSN VDL dynamic override control register */
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_R_P (0x350) /* Read DQ-P VDL dynamic override control register */
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_R_N (0x354) /* Read DQ-N VDL dynamic override control register */
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_W       (0x358) /* Write DQ Byte VDL dynamic override control register */
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_W   (0x35c) /* Write DQ Bit VDL dynamic override control register */
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_DATA_DLY                (0x360) /* Word Lane read channel control register */
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_CONTROL                 (0x364) /* Word Lane read channel control register */
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL0_0         (0x370) /* Read fifo data register, first data */
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL0_1         (0x374) /* Read fifo data register, second data */
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL0_2         (0x378) /* Read fifo data register, third data */
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL0_3         (0x37c) /* Read fifo data register, fourth data */
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL1_0         (0x380) /* Read fifo data register, first data */
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL1_1         (0x384) /* Read fifo data register, second data */
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL1_2         (0x388) /* Read fifo data register, third data */
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL1_3         (0x38c) /* Read fifo data register, fourth data */
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_STATUS             (0x390) /* Read fifo status register */
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_CLEAR              (0x394) /* Read fifo status clear register */
#define BCHP_DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL             (0x3a0) /* Idle mode SSTL pad control register */
#define BCHP_DDR40_PHY_WORD_LANE_0_DRIVE_PAD_CTL                (0x3a4) /* SSTL pad drive characteristics control register */
#define BCHP_DDR40_PHY_WORD_LANE_0_CLOCK_PAD_DISABLE            (0x3a8) /* Clock pad disable register */
#define BCHP_DDR40_PHY_WORD_LANE_0_WR_PREAMBLE_MODE             (0x3ac) /* Write cycle preamble control register */

/***************************************************************************
 *VDL_OVRIDE_BYTE_RD_EN - Read Enable Byte VDL static override control register
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE_RD_EN :: busy [31:31] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE_RD_EN_busy_MASK 0x80000000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE_RD_EN_busy_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE_RD_EN_busy_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE_RD_EN_busy_SHIFT 31

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE_RD_EN :: reserved0 [30:18] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE_RD_EN_reserved0_MASK 0x7ffc0000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE_RD_EN_reserved0_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE_RD_EN_reserved0_BITS 13
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE_RD_EN_reserved0_SHIFT 18

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE_RD_EN :: ovr_force [17:17] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE_RD_EN_ovr_force_MASK 0x00020000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE_RD_EN_ovr_force_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE_RD_EN_ovr_force_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE_RD_EN_ovr_force_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE_RD_EN :: ovr_en [16:16] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE_RD_EN_ovr_en_MASK 0x00010000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE_RD_EN_ovr_en_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE_RD_EN_ovr_en_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE_RD_EN_ovr_en_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE_RD_EN :: reserved1 [15:09] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE_RD_EN_reserved1_MASK 0x0000fe00
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE_RD_EN_reserved1_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE_RD_EN_reserved1_BITS 7
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE_RD_EN_reserved1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE_RD_EN :: byte_sel [08:08] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE_RD_EN_byte_sel_MASK 0x00000100
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE_RD_EN_byte_sel_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE_RD_EN_byte_sel_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE_RD_EN_byte_sel_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE_RD_EN :: reserved2 [07:06] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE_RD_EN_reserved2_MASK 0x000000c0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE_RD_EN_reserved2_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE_RD_EN_reserved2_BITS 2
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE_RD_EN_reserved2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE_RD_EN :: ovr_step [05:00] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE_RD_EN_ovr_step_MASK 0x0000003f
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE_RD_EN_ovr_step_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE_RD_EN_ovr_step_BITS 6
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE_RD_EN_ovr_step_SHIFT 0

/***************************************************************************
 *VDL_OVRIDE_BYTE0_W - Write Byte VDL static override control register
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_W :: busy [31:31] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_W_busy_MASK    0x80000000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_W_busy_ALIGN   0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_W_busy_BITS    1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_W_busy_SHIFT   31

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_W :: reserved0 [30:18] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_W_reserved0_MASK 0x7ffc0000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_W_reserved0_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_W_reserved0_BITS 13
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_W_reserved0_SHIFT 18

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_W :: ovr_force [17:17] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_W_ovr_force_MASK 0x00020000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_W_ovr_force_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_W_ovr_force_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_W_ovr_force_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_W :: ovr_en [16:16] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_W_ovr_en_MASK  0x00010000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_W_ovr_en_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_W_ovr_en_BITS  1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_W_ovr_en_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_W :: reserved1 [15:09] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_W_reserved1_MASK 0x0000fe00
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_W_reserved1_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_W_reserved1_BITS 7
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_W_reserved1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_W :: byte_sel [08:08] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_W_byte_sel_MASK 0x00000100
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_W_byte_sel_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_W_byte_sel_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_W_byte_sel_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_W :: reserved2 [07:06] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_W_reserved2_MASK 0x000000c0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_W_reserved2_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_W_reserved2_BITS 2
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_W_reserved2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_W :: ovr_step [05:00] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_W_ovr_step_MASK 0x0000003f
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_W_ovr_step_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_W_ovr_step_BITS 6
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_W_ovr_step_SHIFT 0

/***************************************************************************
 *VDL_OVRIDE_BYTE0_R_P - Read Byte DQSP VDL static override control register
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_R_P :: busy [31:31] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_P_busy_MASK  0x80000000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_P_busy_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_P_busy_BITS  1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_P_busy_SHIFT 31

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_R_P :: reserved0 [30:18] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_P_reserved0_MASK 0x7ffc0000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_P_reserved0_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_P_reserved0_BITS 13
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_P_reserved0_SHIFT 18

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_R_P :: ovr_force [17:17] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_P_ovr_force_MASK 0x00020000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_P_ovr_force_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_P_ovr_force_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_P_ovr_force_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_R_P :: ovr_en [16:16] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_P_ovr_en_MASK 0x00010000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_P_ovr_en_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_P_ovr_en_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_P_ovr_en_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_R_P :: reserved1 [15:09] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_P_reserved1_MASK 0x0000fe00
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_P_reserved1_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_P_reserved1_BITS 7
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_P_reserved1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_R_P :: byte_sel [08:08] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_P_byte_sel_MASK 0x00000100
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_P_byte_sel_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_P_byte_sel_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_P_byte_sel_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_R_P :: reserved2 [07:06] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_P_reserved2_MASK 0x000000c0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_P_reserved2_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_P_reserved2_BITS 2
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_P_reserved2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_R_P :: ovr_step [05:00] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_P_ovr_step_MASK 0x0000003f
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_P_ovr_step_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_P_ovr_step_BITS 6
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_P_ovr_step_SHIFT 0

/***************************************************************************
 *VDL_OVRIDE_BYTE0_R_N - Read Byte DQSN VDL static override control register
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_R_N :: busy [31:31] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_N_busy_MASK  0x80000000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_N_busy_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_N_busy_BITS  1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_N_busy_SHIFT 31

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_R_N :: reserved0 [30:18] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_N_reserved0_MASK 0x7ffc0000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_N_reserved0_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_N_reserved0_BITS 13
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_N_reserved0_SHIFT 18

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_R_N :: ovr_force [17:17] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_N_ovr_force_MASK 0x00020000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_N_ovr_force_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_N_ovr_force_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_N_ovr_force_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_R_N :: ovr_en [16:16] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_N_ovr_en_MASK 0x00010000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_N_ovr_en_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_N_ovr_en_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_N_ovr_en_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_R_N :: reserved1 [15:09] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_N_reserved1_MASK 0x0000fe00
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_N_reserved1_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_N_reserved1_BITS 7
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_N_reserved1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_R_N :: byte_sel [08:08] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_N_byte_sel_MASK 0x00000100
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_N_byte_sel_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_N_byte_sel_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_N_byte_sel_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_R_N :: reserved2 [07:06] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_N_reserved2_MASK 0x000000c0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_N_reserved2_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_N_reserved2_BITS 2
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_N_reserved2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_R_N :: ovr_step [05:00] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_N_ovr_step_MASK 0x0000003f
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_N_ovr_step_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_N_ovr_step_BITS 6
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_R_N_ovr_step_SHIFT 0

/***************************************************************************
 *VDL_OVRIDE_BYTE0_BIT0_W - Write Bit VDL static override control register
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT0_W :: busy [31:31] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_W_busy_MASK 0x80000000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_W_busy_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_W_busy_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_W_busy_SHIFT 31

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT0_W :: reserved0 [30:18] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_W_reserved0_MASK 0x7ffc0000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_W_reserved0_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_W_reserved0_BITS 13
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_W_reserved0_SHIFT 18

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT0_W :: ovr_force [17:17] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_W_ovr_force_MASK 0x00020000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_W_ovr_force_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_W_ovr_force_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_W_ovr_force_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT0_W :: ovr_en [16:16] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_W_ovr_en_MASK 0x00010000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_W_ovr_en_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_W_ovr_en_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_W_ovr_en_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT0_W :: reserved1 [15:09] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_W_reserved1_MASK 0x0000fe00
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_W_reserved1_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_W_reserved1_BITS 7
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_W_reserved1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT0_W :: byte_sel [08:08] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_W_byte_sel_MASK 0x00000100
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_W_byte_sel_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_W_byte_sel_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_W_byte_sel_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT0_W :: reserved2 [07:06] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_W_reserved2_MASK 0x000000c0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_W_reserved2_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_W_reserved2_BITS 2
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_W_reserved2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT0_W :: ovr_step [05:00] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_W_ovr_step_MASK 0x0000003f
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_W_ovr_step_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_W_ovr_step_BITS 6
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_W_ovr_step_SHIFT 0

/***************************************************************************
 *VDL_OVRIDE_BYTE0_BIT1_W - Write Bit VDL static override control register
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT1_W :: busy [31:31] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_W_busy_MASK 0x80000000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_W_busy_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_W_busy_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_W_busy_SHIFT 31

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT1_W :: reserved0 [30:18] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_W_reserved0_MASK 0x7ffc0000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_W_reserved0_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_W_reserved0_BITS 13
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_W_reserved0_SHIFT 18

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT1_W :: ovr_force [17:17] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_W_ovr_force_MASK 0x00020000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_W_ovr_force_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_W_ovr_force_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_W_ovr_force_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT1_W :: ovr_en [16:16] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_W_ovr_en_MASK 0x00010000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_W_ovr_en_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_W_ovr_en_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_W_ovr_en_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT1_W :: reserved1 [15:09] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_W_reserved1_MASK 0x0000fe00
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_W_reserved1_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_W_reserved1_BITS 7
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_W_reserved1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT1_W :: byte_sel [08:08] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_W_byte_sel_MASK 0x00000100
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_W_byte_sel_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_W_byte_sel_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_W_byte_sel_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT1_W :: reserved2 [07:06] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_W_reserved2_MASK 0x000000c0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_W_reserved2_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_W_reserved2_BITS 2
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_W_reserved2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT1_W :: ovr_step [05:00] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_W_ovr_step_MASK 0x0000003f
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_W_ovr_step_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_W_ovr_step_BITS 6
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_W_ovr_step_SHIFT 0

/***************************************************************************
 *VDL_OVRIDE_BYTE0_BIT2_W - Write Bit VDL static override control register
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT2_W :: busy [31:31] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_W_busy_MASK 0x80000000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_W_busy_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_W_busy_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_W_busy_SHIFT 31

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT2_W :: reserved0 [30:18] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_W_reserved0_MASK 0x7ffc0000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_W_reserved0_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_W_reserved0_BITS 13
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_W_reserved0_SHIFT 18

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT2_W :: ovr_force [17:17] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_W_ovr_force_MASK 0x00020000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_W_ovr_force_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_W_ovr_force_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_W_ovr_force_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT2_W :: ovr_en [16:16] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_W_ovr_en_MASK 0x00010000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_W_ovr_en_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_W_ovr_en_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_W_ovr_en_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT2_W :: reserved1 [15:09] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_W_reserved1_MASK 0x0000fe00
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_W_reserved1_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_W_reserved1_BITS 7
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_W_reserved1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT2_W :: byte_sel [08:08] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_W_byte_sel_MASK 0x00000100
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_W_byte_sel_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_W_byte_sel_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_W_byte_sel_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT2_W :: reserved2 [07:06] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_W_reserved2_MASK 0x000000c0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_W_reserved2_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_W_reserved2_BITS 2
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_W_reserved2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT2_W :: ovr_step [05:00] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_W_ovr_step_MASK 0x0000003f
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_W_ovr_step_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_W_ovr_step_BITS 6
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_W_ovr_step_SHIFT 0

/***************************************************************************
 *VDL_OVRIDE_BYTE0_BIT3_W - Write Bit VDL static override control register
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT3_W :: busy [31:31] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_W_busy_MASK 0x80000000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_W_busy_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_W_busy_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_W_busy_SHIFT 31

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT3_W :: reserved0 [30:18] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_W_reserved0_MASK 0x7ffc0000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_W_reserved0_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_W_reserved0_BITS 13
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_W_reserved0_SHIFT 18

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT3_W :: ovr_force [17:17] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_W_ovr_force_MASK 0x00020000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_W_ovr_force_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_W_ovr_force_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_W_ovr_force_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT3_W :: ovr_en [16:16] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_W_ovr_en_MASK 0x00010000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_W_ovr_en_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_W_ovr_en_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_W_ovr_en_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT3_W :: reserved1 [15:09] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_W_reserved1_MASK 0x0000fe00
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_W_reserved1_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_W_reserved1_BITS 7
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_W_reserved1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT3_W :: byte_sel [08:08] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_W_byte_sel_MASK 0x00000100
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_W_byte_sel_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_W_byte_sel_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_W_byte_sel_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT3_W :: reserved2 [07:06] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_W_reserved2_MASK 0x000000c0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_W_reserved2_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_W_reserved2_BITS 2
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_W_reserved2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT3_W :: ovr_step [05:00] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_W_ovr_step_MASK 0x0000003f
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_W_ovr_step_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_W_ovr_step_BITS 6
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_W_ovr_step_SHIFT 0

/***************************************************************************
 *VDL_OVRIDE_BYTE0_BIT4_W - Write Bit VDL static override control register
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT4_W :: busy [31:31] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_W_busy_MASK 0x80000000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_W_busy_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_W_busy_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_W_busy_SHIFT 31

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT4_W :: reserved0 [30:18] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_W_reserved0_MASK 0x7ffc0000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_W_reserved0_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_W_reserved0_BITS 13
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_W_reserved0_SHIFT 18

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT4_W :: ovr_force [17:17] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_W_ovr_force_MASK 0x00020000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_W_ovr_force_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_W_ovr_force_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_W_ovr_force_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT4_W :: ovr_en [16:16] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_W_ovr_en_MASK 0x00010000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_W_ovr_en_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_W_ovr_en_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_W_ovr_en_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT4_W :: reserved1 [15:09] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_W_reserved1_MASK 0x0000fe00
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_W_reserved1_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_W_reserved1_BITS 7
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_W_reserved1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT4_W :: byte_sel [08:08] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_W_byte_sel_MASK 0x00000100
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_W_byte_sel_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_W_byte_sel_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_W_byte_sel_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT4_W :: reserved2 [07:06] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_W_reserved2_MASK 0x000000c0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_W_reserved2_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_W_reserved2_BITS 2
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_W_reserved2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT4_W :: ovr_step [05:00] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_W_ovr_step_MASK 0x0000003f
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_W_ovr_step_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_W_ovr_step_BITS 6
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_W_ovr_step_SHIFT 0

/***************************************************************************
 *VDL_OVRIDE_BYTE0_BIT5_W - Write Bit VDL static override control register
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT5_W :: busy [31:31] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_W_busy_MASK 0x80000000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_W_busy_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_W_busy_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_W_busy_SHIFT 31

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT5_W :: reserved0 [30:18] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_W_reserved0_MASK 0x7ffc0000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_W_reserved0_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_W_reserved0_BITS 13
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_W_reserved0_SHIFT 18

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT5_W :: ovr_force [17:17] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_W_ovr_force_MASK 0x00020000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_W_ovr_force_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_W_ovr_force_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_W_ovr_force_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT5_W :: ovr_en [16:16] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_W_ovr_en_MASK 0x00010000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_W_ovr_en_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_W_ovr_en_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_W_ovr_en_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT5_W :: reserved1 [15:09] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_W_reserved1_MASK 0x0000fe00
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_W_reserved1_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_W_reserved1_BITS 7
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_W_reserved1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT5_W :: byte_sel [08:08] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_W_byte_sel_MASK 0x00000100
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_W_byte_sel_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_W_byte_sel_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_W_byte_sel_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT5_W :: reserved2 [07:06] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_W_reserved2_MASK 0x000000c0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_W_reserved2_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_W_reserved2_BITS 2
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_W_reserved2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT5_W :: ovr_step [05:00] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_W_ovr_step_MASK 0x0000003f
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_W_ovr_step_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_W_ovr_step_BITS 6
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_W_ovr_step_SHIFT 0

/***************************************************************************
 *VDL_OVRIDE_BYTE0_BIT6_W - Write Bit VDL static override control register
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT6_W :: busy [31:31] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_W_busy_MASK 0x80000000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_W_busy_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_W_busy_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_W_busy_SHIFT 31

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT6_W :: reserved0 [30:18] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_W_reserved0_MASK 0x7ffc0000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_W_reserved0_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_W_reserved0_BITS 13
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_W_reserved0_SHIFT 18

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT6_W :: ovr_force [17:17] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_W_ovr_force_MASK 0x00020000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_W_ovr_force_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_W_ovr_force_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_W_ovr_force_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT6_W :: ovr_en [16:16] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_W_ovr_en_MASK 0x00010000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_W_ovr_en_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_W_ovr_en_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_W_ovr_en_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT6_W :: reserved1 [15:09] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_W_reserved1_MASK 0x0000fe00
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_W_reserved1_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_W_reserved1_BITS 7
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_W_reserved1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT6_W :: byte_sel [08:08] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_W_byte_sel_MASK 0x00000100
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_W_byte_sel_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_W_byte_sel_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_W_byte_sel_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT6_W :: reserved2 [07:06] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_W_reserved2_MASK 0x000000c0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_W_reserved2_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_W_reserved2_BITS 2
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_W_reserved2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT6_W :: ovr_step [05:00] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_W_ovr_step_MASK 0x0000003f
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_W_ovr_step_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_W_ovr_step_BITS 6
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_W_ovr_step_SHIFT 0

/***************************************************************************
 *VDL_OVRIDE_BYTE0_BIT7_W - Write Bit VDL static override control register
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT7_W :: busy [31:31] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_W_busy_MASK 0x80000000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_W_busy_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_W_busy_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_W_busy_SHIFT 31

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT7_W :: reserved0 [30:18] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_W_reserved0_MASK 0x7ffc0000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_W_reserved0_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_W_reserved0_BITS 13
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_W_reserved0_SHIFT 18

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT7_W :: ovr_force [17:17] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_W_ovr_force_MASK 0x00020000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_W_ovr_force_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_W_ovr_force_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_W_ovr_force_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT7_W :: ovr_en [16:16] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_W_ovr_en_MASK 0x00010000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_W_ovr_en_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_W_ovr_en_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_W_ovr_en_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT7_W :: reserved1 [15:09] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_W_reserved1_MASK 0x0000fe00
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_W_reserved1_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_W_reserved1_BITS 7
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_W_reserved1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT7_W :: byte_sel [08:08] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_W_byte_sel_MASK 0x00000100
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_W_byte_sel_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_W_byte_sel_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_W_byte_sel_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT7_W :: reserved2 [07:06] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_W_reserved2_MASK 0x000000c0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_W_reserved2_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_W_reserved2_BITS 2
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_W_reserved2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT7_W :: ovr_step [05:00] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_W_ovr_step_MASK 0x0000003f
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_W_ovr_step_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_W_ovr_step_BITS 6
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_W_ovr_step_SHIFT 0

/***************************************************************************
 *VDL_OVRIDE_BYTE0_DM_W - Write Bit VDL static override control register
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_DM_W :: busy [31:31] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_DM_W_busy_MASK 0x80000000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_DM_W_busy_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_DM_W_busy_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_DM_W_busy_SHIFT 31

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_DM_W :: reserved0 [30:18] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_DM_W_reserved0_MASK 0x7ffc0000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_DM_W_reserved0_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_DM_W_reserved0_BITS 13
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_DM_W_reserved0_SHIFT 18

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_DM_W :: ovr_force [17:17] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_DM_W_ovr_force_MASK 0x00020000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_DM_W_ovr_force_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_DM_W_ovr_force_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_DM_W_ovr_force_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_DM_W :: ovr_en [16:16] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_DM_W_ovr_en_MASK 0x00010000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_DM_W_ovr_en_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_DM_W_ovr_en_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_DM_W_ovr_en_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_DM_W :: reserved1 [15:09] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_DM_W_reserved1_MASK 0x0000fe00
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_DM_W_reserved1_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_DM_W_reserved1_BITS 7
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_DM_W_reserved1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_DM_W :: byte_sel [08:08] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_DM_W_byte_sel_MASK 0x00000100
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_DM_W_byte_sel_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_DM_W_byte_sel_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_DM_W_byte_sel_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_DM_W :: reserved2 [07:06] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_DM_W_reserved2_MASK 0x000000c0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_DM_W_reserved2_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_DM_W_reserved2_BITS 2
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_DM_W_reserved2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_DM_W :: ovr_step [05:00] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_DM_W_ovr_step_MASK 0x0000003f
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_DM_W_ovr_step_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_DM_W_ovr_step_BITS 6
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_DM_W_ovr_step_SHIFT 0

/***************************************************************************
 *VDL_OVRIDE_BYTE0_BIT0_R_P - Read DQSP Bit VDL static override control register
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT0_R_P :: busy [31:31] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_P_busy_MASK 0x80000000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_P_busy_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_P_busy_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_P_busy_SHIFT 31

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT0_R_P :: reserved0 [30:18] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_P_reserved0_MASK 0x7ffc0000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_P_reserved0_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_P_reserved0_BITS 13
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_P_reserved0_SHIFT 18

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT0_R_P :: ovr_force [17:17] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_P_ovr_force_MASK 0x00020000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_P_ovr_force_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_P_ovr_force_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_P_ovr_force_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT0_R_P :: ovr_en [16:16] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_P_ovr_en_MASK 0x00010000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_P_ovr_en_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_P_ovr_en_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_P_ovr_en_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT0_R_P :: reserved1 [15:09] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_P_reserved1_MASK 0x0000fe00
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_P_reserved1_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_P_reserved1_BITS 7
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_P_reserved1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT0_R_P :: byte_sel [08:08] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_P_byte_sel_MASK 0x00000100
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_P_byte_sel_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_P_byte_sel_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_P_byte_sel_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT0_R_P :: reserved2 [07:06] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_P_reserved2_MASK 0x000000c0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_P_reserved2_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_P_reserved2_BITS 2
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_P_reserved2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT0_R_P :: ovr_step [05:00] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_P_ovr_step_MASK 0x0000003f
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_P_ovr_step_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_P_ovr_step_BITS 6
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_P_ovr_step_SHIFT 0

/***************************************************************************
 *VDL_OVRIDE_BYTE0_BIT0_R_N - Read DQSN Bit VDL static override control register
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT0_R_N :: busy [31:31] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_N_busy_MASK 0x80000000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_N_busy_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_N_busy_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_N_busy_SHIFT 31

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT0_R_N :: reserved0 [30:18] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_N_reserved0_MASK 0x7ffc0000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_N_reserved0_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_N_reserved0_BITS 13
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_N_reserved0_SHIFT 18

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT0_R_N :: ovr_force [17:17] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_N_ovr_force_MASK 0x00020000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_N_ovr_force_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_N_ovr_force_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_N_ovr_force_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT0_R_N :: ovr_en [16:16] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_N_ovr_en_MASK 0x00010000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_N_ovr_en_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_N_ovr_en_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_N_ovr_en_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT0_R_N :: reserved1 [15:09] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_N_reserved1_MASK 0x0000fe00
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_N_reserved1_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_N_reserved1_BITS 7
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_N_reserved1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT0_R_N :: byte_sel [08:08] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_N_byte_sel_MASK 0x00000100
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_N_byte_sel_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_N_byte_sel_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_N_byte_sel_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT0_R_N :: reserved2 [07:06] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_N_reserved2_MASK 0x000000c0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_N_reserved2_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_N_reserved2_BITS 2
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_N_reserved2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT0_R_N :: ovr_step [05:00] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_N_ovr_step_MASK 0x0000003f
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_N_ovr_step_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_N_ovr_step_BITS 6
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT0_R_N_ovr_step_SHIFT 0

/***************************************************************************
 *VDL_OVRIDE_BYTE0_BIT1_R_P - Read DQSP Bit VDL static override control register
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT1_R_P :: busy [31:31] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_P_busy_MASK 0x80000000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_P_busy_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_P_busy_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_P_busy_SHIFT 31

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT1_R_P :: reserved0 [30:18] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_P_reserved0_MASK 0x7ffc0000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_P_reserved0_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_P_reserved0_BITS 13
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_P_reserved0_SHIFT 18

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT1_R_P :: ovr_force [17:17] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_P_ovr_force_MASK 0x00020000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_P_ovr_force_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_P_ovr_force_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_P_ovr_force_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT1_R_P :: ovr_en [16:16] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_P_ovr_en_MASK 0x00010000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_P_ovr_en_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_P_ovr_en_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_P_ovr_en_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT1_R_P :: reserved1 [15:09] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_P_reserved1_MASK 0x0000fe00
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_P_reserved1_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_P_reserved1_BITS 7
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_P_reserved1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT1_R_P :: byte_sel [08:08] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_P_byte_sel_MASK 0x00000100
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_P_byte_sel_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_P_byte_sel_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_P_byte_sel_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT1_R_P :: reserved2 [07:06] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_P_reserved2_MASK 0x000000c0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_P_reserved2_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_P_reserved2_BITS 2
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_P_reserved2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT1_R_P :: ovr_step [05:00] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_P_ovr_step_MASK 0x0000003f
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_P_ovr_step_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_P_ovr_step_BITS 6
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_P_ovr_step_SHIFT 0

/***************************************************************************
 *VDL_OVRIDE_BYTE0_BIT1_R_N - Read DQSN Bit VDL static override control register
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT1_R_N :: busy [31:31] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_N_busy_MASK 0x80000000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_N_busy_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_N_busy_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_N_busy_SHIFT 31

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT1_R_N :: reserved0 [30:18] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_N_reserved0_MASK 0x7ffc0000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_N_reserved0_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_N_reserved0_BITS 13
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_N_reserved0_SHIFT 18

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT1_R_N :: ovr_force [17:17] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_N_ovr_force_MASK 0x00020000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_N_ovr_force_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_N_ovr_force_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_N_ovr_force_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT1_R_N :: ovr_en [16:16] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_N_ovr_en_MASK 0x00010000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_N_ovr_en_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_N_ovr_en_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_N_ovr_en_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT1_R_N :: reserved1 [15:09] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_N_reserved1_MASK 0x0000fe00
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_N_reserved1_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_N_reserved1_BITS 7
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_N_reserved1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT1_R_N :: byte_sel [08:08] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_N_byte_sel_MASK 0x00000100
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_N_byte_sel_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_N_byte_sel_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_N_byte_sel_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT1_R_N :: reserved2 [07:06] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_N_reserved2_MASK 0x000000c0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_N_reserved2_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_N_reserved2_BITS 2
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_N_reserved2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT1_R_N :: ovr_step [05:00] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_N_ovr_step_MASK 0x0000003f
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_N_ovr_step_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_N_ovr_step_BITS 6
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT1_R_N_ovr_step_SHIFT 0

/***************************************************************************
 *VDL_OVRIDE_BYTE0_BIT2_R_P - Read DQSP Bit VDL static override control register
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT2_R_P :: busy [31:31] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_P_busy_MASK 0x80000000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_P_busy_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_P_busy_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_P_busy_SHIFT 31

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT2_R_P :: reserved0 [30:18] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_P_reserved0_MASK 0x7ffc0000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_P_reserved0_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_P_reserved0_BITS 13
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_P_reserved0_SHIFT 18

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT2_R_P :: ovr_force [17:17] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_P_ovr_force_MASK 0x00020000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_P_ovr_force_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_P_ovr_force_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_P_ovr_force_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT2_R_P :: ovr_en [16:16] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_P_ovr_en_MASK 0x00010000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_P_ovr_en_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_P_ovr_en_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_P_ovr_en_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT2_R_P :: reserved1 [15:09] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_P_reserved1_MASK 0x0000fe00
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_P_reserved1_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_P_reserved1_BITS 7
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_P_reserved1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT2_R_P :: byte_sel [08:08] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_P_byte_sel_MASK 0x00000100
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_P_byte_sel_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_P_byte_sel_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_P_byte_sel_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT2_R_P :: reserved2 [07:06] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_P_reserved2_MASK 0x000000c0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_P_reserved2_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_P_reserved2_BITS 2
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_P_reserved2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT2_R_P :: ovr_step [05:00] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_P_ovr_step_MASK 0x0000003f
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_P_ovr_step_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_P_ovr_step_BITS 6
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_P_ovr_step_SHIFT 0

/***************************************************************************
 *VDL_OVRIDE_BYTE0_BIT2_R_N - Read DQSN Bit VDL static override control register
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT2_R_N :: busy [31:31] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_N_busy_MASK 0x80000000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_N_busy_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_N_busy_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_N_busy_SHIFT 31

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT2_R_N :: reserved0 [30:18] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_N_reserved0_MASK 0x7ffc0000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_N_reserved0_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_N_reserved0_BITS 13
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_N_reserved0_SHIFT 18

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT2_R_N :: ovr_force [17:17] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_N_ovr_force_MASK 0x00020000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_N_ovr_force_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_N_ovr_force_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_N_ovr_force_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT2_R_N :: ovr_en [16:16] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_N_ovr_en_MASK 0x00010000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_N_ovr_en_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_N_ovr_en_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_N_ovr_en_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT2_R_N :: reserved1 [15:09] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_N_reserved1_MASK 0x0000fe00
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_N_reserved1_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_N_reserved1_BITS 7
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_N_reserved1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT2_R_N :: byte_sel [08:08] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_N_byte_sel_MASK 0x00000100
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_N_byte_sel_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_N_byte_sel_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_N_byte_sel_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT2_R_N :: reserved2 [07:06] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_N_reserved2_MASK 0x000000c0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_N_reserved2_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_N_reserved2_BITS 2
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_N_reserved2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT2_R_N :: ovr_step [05:00] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_N_ovr_step_MASK 0x0000003f
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_N_ovr_step_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_N_ovr_step_BITS 6
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT2_R_N_ovr_step_SHIFT 0

/***************************************************************************
 *VDL_OVRIDE_BYTE0_BIT3_R_P - Read DQSP Bit VDL static override control register
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT3_R_P :: busy [31:31] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_P_busy_MASK 0x80000000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_P_busy_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_P_busy_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_P_busy_SHIFT 31

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT3_R_P :: reserved0 [30:18] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_P_reserved0_MASK 0x7ffc0000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_P_reserved0_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_P_reserved0_BITS 13
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_P_reserved0_SHIFT 18

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT3_R_P :: ovr_force [17:17] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_P_ovr_force_MASK 0x00020000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_P_ovr_force_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_P_ovr_force_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_P_ovr_force_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT3_R_P :: ovr_en [16:16] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_P_ovr_en_MASK 0x00010000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_P_ovr_en_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_P_ovr_en_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_P_ovr_en_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT3_R_P :: reserved1 [15:09] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_P_reserved1_MASK 0x0000fe00
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_P_reserved1_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_P_reserved1_BITS 7
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_P_reserved1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT3_R_P :: byte_sel [08:08] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_P_byte_sel_MASK 0x00000100
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_P_byte_sel_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_P_byte_sel_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_P_byte_sel_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT3_R_P :: reserved2 [07:06] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_P_reserved2_MASK 0x000000c0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_P_reserved2_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_P_reserved2_BITS 2
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_P_reserved2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT3_R_P :: ovr_step [05:00] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_P_ovr_step_MASK 0x0000003f
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_P_ovr_step_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_P_ovr_step_BITS 6
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_P_ovr_step_SHIFT 0

/***************************************************************************
 *VDL_OVRIDE_BYTE0_BIT3_R_N - Read DQSN Bit VDL static override control register
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT3_R_N :: busy [31:31] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_N_busy_MASK 0x80000000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_N_busy_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_N_busy_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_N_busy_SHIFT 31

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT3_R_N :: reserved0 [30:18] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_N_reserved0_MASK 0x7ffc0000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_N_reserved0_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_N_reserved0_BITS 13
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_N_reserved0_SHIFT 18

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT3_R_N :: ovr_force [17:17] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_N_ovr_force_MASK 0x00020000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_N_ovr_force_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_N_ovr_force_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_N_ovr_force_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT3_R_N :: ovr_en [16:16] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_N_ovr_en_MASK 0x00010000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_N_ovr_en_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_N_ovr_en_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_N_ovr_en_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT3_R_N :: reserved1 [15:09] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_N_reserved1_MASK 0x0000fe00
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_N_reserved1_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_N_reserved1_BITS 7
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_N_reserved1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT3_R_N :: byte_sel [08:08] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_N_byte_sel_MASK 0x00000100
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_N_byte_sel_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_N_byte_sel_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_N_byte_sel_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT3_R_N :: reserved2 [07:06] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_N_reserved2_MASK 0x000000c0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_N_reserved2_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_N_reserved2_BITS 2
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_N_reserved2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT3_R_N :: ovr_step [05:00] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_N_ovr_step_MASK 0x0000003f
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_N_ovr_step_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_N_ovr_step_BITS 6
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT3_R_N_ovr_step_SHIFT 0

/***************************************************************************
 *VDL_OVRIDE_BYTE0_BIT4_R_P - Read DQSP Bit VDL static override control register
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT4_R_P :: busy [31:31] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_P_busy_MASK 0x80000000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_P_busy_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_P_busy_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_P_busy_SHIFT 31

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT4_R_P :: reserved0 [30:18] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_P_reserved0_MASK 0x7ffc0000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_P_reserved0_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_P_reserved0_BITS 13
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_P_reserved0_SHIFT 18

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT4_R_P :: ovr_force [17:17] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_P_ovr_force_MASK 0x00020000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_P_ovr_force_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_P_ovr_force_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_P_ovr_force_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT4_R_P :: ovr_en [16:16] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_P_ovr_en_MASK 0x00010000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_P_ovr_en_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_P_ovr_en_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_P_ovr_en_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT4_R_P :: reserved1 [15:09] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_P_reserved1_MASK 0x0000fe00
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_P_reserved1_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_P_reserved1_BITS 7
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_P_reserved1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT4_R_P :: byte_sel [08:08] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_P_byte_sel_MASK 0x00000100
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_P_byte_sel_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_P_byte_sel_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_P_byte_sel_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT4_R_P :: reserved2 [07:06] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_P_reserved2_MASK 0x000000c0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_P_reserved2_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_P_reserved2_BITS 2
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_P_reserved2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT4_R_P :: ovr_step [05:00] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_P_ovr_step_MASK 0x0000003f
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_P_ovr_step_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_P_ovr_step_BITS 6
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_P_ovr_step_SHIFT 0

/***************************************************************************
 *VDL_OVRIDE_BYTE0_BIT4_R_N - Read DQSN Bit VDL static override control register
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT4_R_N :: busy [31:31] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_N_busy_MASK 0x80000000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_N_busy_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_N_busy_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_N_busy_SHIFT 31

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT4_R_N :: reserved0 [30:18] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_N_reserved0_MASK 0x7ffc0000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_N_reserved0_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_N_reserved0_BITS 13
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_N_reserved0_SHIFT 18

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT4_R_N :: ovr_force [17:17] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_N_ovr_force_MASK 0x00020000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_N_ovr_force_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_N_ovr_force_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_N_ovr_force_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT4_R_N :: ovr_en [16:16] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_N_ovr_en_MASK 0x00010000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_N_ovr_en_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_N_ovr_en_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_N_ovr_en_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT4_R_N :: reserved1 [15:09] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_N_reserved1_MASK 0x0000fe00
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_N_reserved1_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_N_reserved1_BITS 7
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_N_reserved1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT4_R_N :: byte_sel [08:08] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_N_byte_sel_MASK 0x00000100
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_N_byte_sel_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_N_byte_sel_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_N_byte_sel_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT4_R_N :: reserved2 [07:06] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_N_reserved2_MASK 0x000000c0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_N_reserved2_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_N_reserved2_BITS 2
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_N_reserved2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT4_R_N :: ovr_step [05:00] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_N_ovr_step_MASK 0x0000003f
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_N_ovr_step_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_N_ovr_step_BITS 6
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT4_R_N_ovr_step_SHIFT 0

/***************************************************************************
 *VDL_OVRIDE_BYTE0_BIT5_R_P - Read DQSP Bit VDL static override control register
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT5_R_P :: busy [31:31] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_P_busy_MASK 0x80000000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_P_busy_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_P_busy_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_P_busy_SHIFT 31

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT5_R_P :: reserved0 [30:18] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_P_reserved0_MASK 0x7ffc0000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_P_reserved0_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_P_reserved0_BITS 13
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_P_reserved0_SHIFT 18

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT5_R_P :: ovr_force [17:17] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_P_ovr_force_MASK 0x00020000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_P_ovr_force_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_P_ovr_force_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_P_ovr_force_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT5_R_P :: ovr_en [16:16] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_P_ovr_en_MASK 0x00010000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_P_ovr_en_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_P_ovr_en_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_P_ovr_en_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT5_R_P :: reserved1 [15:09] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_P_reserved1_MASK 0x0000fe00
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_P_reserved1_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_P_reserved1_BITS 7
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_P_reserved1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT5_R_P :: byte_sel [08:08] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_P_byte_sel_MASK 0x00000100
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_P_byte_sel_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_P_byte_sel_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_P_byte_sel_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT5_R_P :: reserved2 [07:06] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_P_reserved2_MASK 0x000000c0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_P_reserved2_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_P_reserved2_BITS 2
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_P_reserved2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT5_R_P :: ovr_step [05:00] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_P_ovr_step_MASK 0x0000003f
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_P_ovr_step_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_P_ovr_step_BITS 6
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_P_ovr_step_SHIFT 0

/***************************************************************************
 *VDL_OVRIDE_BYTE0_BIT5_R_N - Read DQSN Bit VDL static override control register
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT5_R_N :: busy [31:31] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_N_busy_MASK 0x80000000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_N_busy_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_N_busy_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_N_busy_SHIFT 31

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT5_R_N :: reserved0 [30:18] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_N_reserved0_MASK 0x7ffc0000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_N_reserved0_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_N_reserved0_BITS 13
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_N_reserved0_SHIFT 18

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT5_R_N :: ovr_force [17:17] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_N_ovr_force_MASK 0x00020000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_N_ovr_force_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_N_ovr_force_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_N_ovr_force_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT5_R_N :: ovr_en [16:16] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_N_ovr_en_MASK 0x00010000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_N_ovr_en_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_N_ovr_en_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_N_ovr_en_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT5_R_N :: reserved1 [15:09] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_N_reserved1_MASK 0x0000fe00
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_N_reserved1_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_N_reserved1_BITS 7
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_N_reserved1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT5_R_N :: byte_sel [08:08] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_N_byte_sel_MASK 0x00000100
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_N_byte_sel_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_N_byte_sel_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_N_byte_sel_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT5_R_N :: reserved2 [07:06] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_N_reserved2_MASK 0x000000c0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_N_reserved2_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_N_reserved2_BITS 2
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_N_reserved2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT5_R_N :: ovr_step [05:00] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_N_ovr_step_MASK 0x0000003f
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_N_ovr_step_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_N_ovr_step_BITS 6
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT5_R_N_ovr_step_SHIFT 0

/***************************************************************************
 *VDL_OVRIDE_BYTE0_BIT6_R_P - Read DQSP Bit VDL static override control register
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT6_R_P :: busy [31:31] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_P_busy_MASK 0x80000000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_P_busy_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_P_busy_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_P_busy_SHIFT 31

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT6_R_P :: reserved0 [30:18] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_P_reserved0_MASK 0x7ffc0000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_P_reserved0_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_P_reserved0_BITS 13
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_P_reserved0_SHIFT 18

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT6_R_P :: ovr_force [17:17] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_P_ovr_force_MASK 0x00020000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_P_ovr_force_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_P_ovr_force_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_P_ovr_force_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT6_R_P :: ovr_en [16:16] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_P_ovr_en_MASK 0x00010000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_P_ovr_en_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_P_ovr_en_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_P_ovr_en_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT6_R_P :: reserved1 [15:09] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_P_reserved1_MASK 0x0000fe00
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_P_reserved1_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_P_reserved1_BITS 7
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_P_reserved1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT6_R_P :: byte_sel [08:08] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_P_byte_sel_MASK 0x00000100
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_P_byte_sel_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_P_byte_sel_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_P_byte_sel_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT6_R_P :: reserved2 [07:06] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_P_reserved2_MASK 0x000000c0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_P_reserved2_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_P_reserved2_BITS 2
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_P_reserved2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT6_R_P :: ovr_step [05:00] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_P_ovr_step_MASK 0x0000003f
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_P_ovr_step_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_P_ovr_step_BITS 6
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_P_ovr_step_SHIFT 0

/***************************************************************************
 *VDL_OVRIDE_BYTE0_BIT6_R_N - Read DQSN Bit VDL static override control register
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT6_R_N :: busy [31:31] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_N_busy_MASK 0x80000000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_N_busy_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_N_busy_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_N_busy_SHIFT 31

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT6_R_N :: reserved0 [30:18] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_N_reserved0_MASK 0x7ffc0000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_N_reserved0_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_N_reserved0_BITS 13
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_N_reserved0_SHIFT 18

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT6_R_N :: ovr_force [17:17] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_N_ovr_force_MASK 0x00020000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_N_ovr_force_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_N_ovr_force_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_N_ovr_force_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT6_R_N :: ovr_en [16:16] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_N_ovr_en_MASK 0x00010000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_N_ovr_en_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_N_ovr_en_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_N_ovr_en_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT6_R_N :: reserved1 [15:09] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_N_reserved1_MASK 0x0000fe00
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_N_reserved1_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_N_reserved1_BITS 7
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_N_reserved1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT6_R_N :: byte_sel [08:08] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_N_byte_sel_MASK 0x00000100
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_N_byte_sel_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_N_byte_sel_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_N_byte_sel_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT6_R_N :: reserved2 [07:06] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_N_reserved2_MASK 0x000000c0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_N_reserved2_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_N_reserved2_BITS 2
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_N_reserved2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT6_R_N :: ovr_step [05:00] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_N_ovr_step_MASK 0x0000003f
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_N_ovr_step_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_N_ovr_step_BITS 6
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT6_R_N_ovr_step_SHIFT 0

/***************************************************************************
 *VDL_OVRIDE_BYTE0_BIT7_R_P - Read DQSP Bit VDL static override control register
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT7_R_P :: busy [31:31] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_P_busy_MASK 0x80000000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_P_busy_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_P_busy_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_P_busy_SHIFT 31

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT7_R_P :: reserved0 [30:18] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_P_reserved0_MASK 0x7ffc0000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_P_reserved0_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_P_reserved0_BITS 13
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_P_reserved0_SHIFT 18

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT7_R_P :: ovr_force [17:17] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_P_ovr_force_MASK 0x00020000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_P_ovr_force_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_P_ovr_force_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_P_ovr_force_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT7_R_P :: ovr_en [16:16] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_P_ovr_en_MASK 0x00010000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_P_ovr_en_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_P_ovr_en_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_P_ovr_en_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT7_R_P :: reserved1 [15:09] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_P_reserved1_MASK 0x0000fe00
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_P_reserved1_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_P_reserved1_BITS 7
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_P_reserved1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT7_R_P :: byte_sel [08:08] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_P_byte_sel_MASK 0x00000100
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_P_byte_sel_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_P_byte_sel_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_P_byte_sel_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT7_R_P :: reserved2 [07:06] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_P_reserved2_MASK 0x000000c0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_P_reserved2_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_P_reserved2_BITS 2
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_P_reserved2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT7_R_P :: ovr_step [05:00] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_P_ovr_step_MASK 0x0000003f
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_P_ovr_step_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_P_ovr_step_BITS 6
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_P_ovr_step_SHIFT 0

/***************************************************************************
 *VDL_OVRIDE_BYTE0_BIT7_R_N - Read DQSN Bit VDL static override control register
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT7_R_N :: busy [31:31] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_N_busy_MASK 0x80000000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_N_busy_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_N_busy_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_N_busy_SHIFT 31

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT7_R_N :: reserved0 [30:18] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_N_reserved0_MASK 0x7ffc0000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_N_reserved0_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_N_reserved0_BITS 13
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_N_reserved0_SHIFT 18

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT7_R_N :: ovr_force [17:17] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_N_ovr_force_MASK 0x00020000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_N_ovr_force_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_N_ovr_force_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_N_ovr_force_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT7_R_N :: ovr_en [16:16] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_N_ovr_en_MASK 0x00010000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_N_ovr_en_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_N_ovr_en_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_N_ovr_en_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT7_R_N :: reserved1 [15:09] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_N_reserved1_MASK 0x0000fe00
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_N_reserved1_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_N_reserved1_BITS 7
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_N_reserved1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT7_R_N :: byte_sel [08:08] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_N_byte_sel_MASK 0x00000100
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_N_byte_sel_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_N_byte_sel_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_N_byte_sel_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT7_R_N :: reserved2 [07:06] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_N_reserved2_MASK 0x000000c0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_N_reserved2_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_N_reserved2_BITS 2
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_N_reserved2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT7_R_N :: ovr_step [05:00] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_N_ovr_step_MASK 0x0000003f
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_N_ovr_step_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_N_ovr_step_BITS 6
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT7_R_N_ovr_step_SHIFT 0

/***************************************************************************
 *VDL_OVRIDE_BYTE0_BIT_RD_EN - Read Enable Bit VDL static override control register
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT_RD_EN :: busy [31:31] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT_RD_EN_busy_MASK 0x80000000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT_RD_EN_busy_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT_RD_EN_busy_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT_RD_EN_busy_SHIFT 31

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT_RD_EN :: reserved0 [30:18] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT_RD_EN_reserved0_MASK 0x7ffc0000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT_RD_EN_reserved0_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT_RD_EN_reserved0_BITS 13
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT_RD_EN_reserved0_SHIFT 18

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT_RD_EN :: ovr_force [17:17] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT_RD_EN_ovr_force_MASK 0x00020000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT_RD_EN_ovr_force_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT_RD_EN_ovr_force_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT_RD_EN_ovr_force_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT_RD_EN :: ovr_en [16:16] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT_RD_EN_ovr_en_MASK 0x00010000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT_RD_EN_ovr_en_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT_RD_EN_ovr_en_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT_RD_EN_ovr_en_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT_RD_EN :: reserved1 [15:09] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT_RD_EN_reserved1_MASK 0x0000fe00
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT_RD_EN_reserved1_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT_RD_EN_reserved1_BITS 7
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT_RD_EN_reserved1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT_RD_EN :: byte_sel [08:08] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT_RD_EN_byte_sel_MASK 0x00000100
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT_RD_EN_byte_sel_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT_RD_EN_byte_sel_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT_RD_EN_byte_sel_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT_RD_EN :: reserved2 [07:06] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT_RD_EN_reserved2_MASK 0x000000c0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT_RD_EN_reserved2_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT_RD_EN_reserved2_BITS 2
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT_RD_EN_reserved2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE0_BIT_RD_EN :: ovr_step [05:00] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT_RD_EN_ovr_step_MASK 0x0000003f
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT_RD_EN_ovr_step_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT_RD_EN_ovr_step_BITS 6
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE0_BIT_RD_EN_ovr_step_SHIFT 0

/***************************************************************************
 *VDL_OVRIDE_BYTE1_W - Write Byte VDL static override control register
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_W :: busy [31:31] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_W_busy_MASK    0x80000000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_W_busy_ALIGN   0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_W_busy_BITS    1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_W_busy_SHIFT   31

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_W :: reserved0 [30:18] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_W_reserved0_MASK 0x7ffc0000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_W_reserved0_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_W_reserved0_BITS 13
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_W_reserved0_SHIFT 18

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_W :: ovr_force [17:17] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_W_ovr_force_MASK 0x00020000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_W_ovr_force_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_W_ovr_force_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_W_ovr_force_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_W :: ovr_en [16:16] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_W_ovr_en_MASK  0x00010000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_W_ovr_en_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_W_ovr_en_BITS  1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_W_ovr_en_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_W :: reserved1 [15:09] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_W_reserved1_MASK 0x0000fe00
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_W_reserved1_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_W_reserved1_BITS 7
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_W_reserved1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_W :: byte_sel [08:08] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_W_byte_sel_MASK 0x00000100
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_W_byte_sel_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_W_byte_sel_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_W_byte_sel_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_W :: reserved2 [07:06] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_W_reserved2_MASK 0x000000c0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_W_reserved2_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_W_reserved2_BITS 2
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_W_reserved2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_W :: ovr_step [05:00] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_W_ovr_step_MASK 0x0000003f
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_W_ovr_step_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_W_ovr_step_BITS 6
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_W_ovr_step_SHIFT 0

/***************************************************************************
 *VDL_OVRIDE_BYTE1_R_P - Read Byte DQSP VDL static override control register
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_R_P :: busy [31:31] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_P_busy_MASK  0x80000000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_P_busy_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_P_busy_BITS  1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_P_busy_SHIFT 31

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_R_P :: reserved0 [30:18] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_P_reserved0_MASK 0x7ffc0000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_P_reserved0_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_P_reserved0_BITS 13
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_P_reserved0_SHIFT 18

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_R_P :: ovr_force [17:17] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_P_ovr_force_MASK 0x00020000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_P_ovr_force_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_P_ovr_force_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_P_ovr_force_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_R_P :: ovr_en [16:16] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_P_ovr_en_MASK 0x00010000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_P_ovr_en_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_P_ovr_en_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_P_ovr_en_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_R_P :: reserved1 [15:09] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_P_reserved1_MASK 0x0000fe00
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_P_reserved1_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_P_reserved1_BITS 7
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_P_reserved1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_R_P :: byte_sel [08:08] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_P_byte_sel_MASK 0x00000100
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_P_byte_sel_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_P_byte_sel_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_P_byte_sel_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_R_P :: reserved2 [07:06] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_P_reserved2_MASK 0x000000c0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_P_reserved2_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_P_reserved2_BITS 2
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_P_reserved2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_R_P :: ovr_step [05:00] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_P_ovr_step_MASK 0x0000003f
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_P_ovr_step_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_P_ovr_step_BITS 6
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_P_ovr_step_SHIFT 0

/***************************************************************************
 *VDL_OVRIDE_BYTE1_R_N - Read Byte DQSN VDL static override control register
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_R_N :: busy [31:31] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_N_busy_MASK  0x80000000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_N_busy_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_N_busy_BITS  1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_N_busy_SHIFT 31

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_R_N :: reserved0 [30:18] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_N_reserved0_MASK 0x7ffc0000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_N_reserved0_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_N_reserved0_BITS 13
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_N_reserved0_SHIFT 18

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_R_N :: ovr_force [17:17] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_N_ovr_force_MASK 0x00020000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_N_ovr_force_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_N_ovr_force_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_N_ovr_force_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_R_N :: ovr_en [16:16] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_N_ovr_en_MASK 0x00010000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_N_ovr_en_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_N_ovr_en_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_N_ovr_en_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_R_N :: reserved1 [15:09] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_N_reserved1_MASK 0x0000fe00
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_N_reserved1_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_N_reserved1_BITS 7
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_N_reserved1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_R_N :: byte_sel [08:08] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_N_byte_sel_MASK 0x00000100
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_N_byte_sel_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_N_byte_sel_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_N_byte_sel_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_R_N :: reserved2 [07:06] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_N_reserved2_MASK 0x000000c0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_N_reserved2_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_N_reserved2_BITS 2
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_N_reserved2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_R_N :: ovr_step [05:00] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_N_ovr_step_MASK 0x0000003f
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_N_ovr_step_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_N_ovr_step_BITS 6
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_R_N_ovr_step_SHIFT 0

/***************************************************************************
 *VDL_OVRIDE_BYTE1_BIT0_W - Write Bit VDL static override control register
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT0_W :: busy [31:31] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_W_busy_MASK 0x80000000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_W_busy_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_W_busy_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_W_busy_SHIFT 31

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT0_W :: reserved0 [30:18] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_W_reserved0_MASK 0x7ffc0000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_W_reserved0_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_W_reserved0_BITS 13
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_W_reserved0_SHIFT 18

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT0_W :: ovr_force [17:17] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_W_ovr_force_MASK 0x00020000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_W_ovr_force_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_W_ovr_force_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_W_ovr_force_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT0_W :: ovr_en [16:16] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_W_ovr_en_MASK 0x00010000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_W_ovr_en_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_W_ovr_en_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_W_ovr_en_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT0_W :: reserved1 [15:09] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_W_reserved1_MASK 0x0000fe00
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_W_reserved1_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_W_reserved1_BITS 7
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_W_reserved1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT0_W :: byte_sel [08:08] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_W_byte_sel_MASK 0x00000100
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_W_byte_sel_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_W_byte_sel_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_W_byte_sel_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT0_W :: reserved2 [07:06] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_W_reserved2_MASK 0x000000c0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_W_reserved2_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_W_reserved2_BITS 2
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_W_reserved2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT0_W :: ovr_step [05:00] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_W_ovr_step_MASK 0x0000003f
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_W_ovr_step_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_W_ovr_step_BITS 6
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_W_ovr_step_SHIFT 0

/***************************************************************************
 *VDL_OVRIDE_BYTE1_BIT1_W - Write Bit VDL static override control register
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT1_W :: busy [31:31] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_W_busy_MASK 0x80000000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_W_busy_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_W_busy_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_W_busy_SHIFT 31

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT1_W :: reserved0 [30:18] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_W_reserved0_MASK 0x7ffc0000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_W_reserved0_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_W_reserved0_BITS 13
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_W_reserved0_SHIFT 18

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT1_W :: ovr_force [17:17] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_W_ovr_force_MASK 0x00020000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_W_ovr_force_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_W_ovr_force_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_W_ovr_force_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT1_W :: ovr_en [16:16] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_W_ovr_en_MASK 0x00010000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_W_ovr_en_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_W_ovr_en_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_W_ovr_en_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT1_W :: reserved1 [15:09] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_W_reserved1_MASK 0x0000fe00
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_W_reserved1_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_W_reserved1_BITS 7
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_W_reserved1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT1_W :: byte_sel [08:08] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_W_byte_sel_MASK 0x00000100
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_W_byte_sel_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_W_byte_sel_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_W_byte_sel_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT1_W :: reserved2 [07:06] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_W_reserved2_MASK 0x000000c0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_W_reserved2_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_W_reserved2_BITS 2
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_W_reserved2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT1_W :: ovr_step [05:00] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_W_ovr_step_MASK 0x0000003f
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_W_ovr_step_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_W_ovr_step_BITS 6
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_W_ovr_step_SHIFT 0

/***************************************************************************
 *VDL_OVRIDE_BYTE1_BIT2_W - Write Bit VDL static override control register
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT2_W :: busy [31:31] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_W_busy_MASK 0x80000000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_W_busy_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_W_busy_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_W_busy_SHIFT 31

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT2_W :: reserved0 [30:18] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_W_reserved0_MASK 0x7ffc0000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_W_reserved0_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_W_reserved0_BITS 13
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_W_reserved0_SHIFT 18

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT2_W :: ovr_force [17:17] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_W_ovr_force_MASK 0x00020000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_W_ovr_force_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_W_ovr_force_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_W_ovr_force_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT2_W :: ovr_en [16:16] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_W_ovr_en_MASK 0x00010000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_W_ovr_en_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_W_ovr_en_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_W_ovr_en_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT2_W :: reserved1 [15:09] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_W_reserved1_MASK 0x0000fe00
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_W_reserved1_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_W_reserved1_BITS 7
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_W_reserved1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT2_W :: byte_sel [08:08] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_W_byte_sel_MASK 0x00000100
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_W_byte_sel_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_W_byte_sel_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_W_byte_sel_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT2_W :: reserved2 [07:06] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_W_reserved2_MASK 0x000000c0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_W_reserved2_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_W_reserved2_BITS 2
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_W_reserved2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT2_W :: ovr_step [05:00] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_W_ovr_step_MASK 0x0000003f
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_W_ovr_step_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_W_ovr_step_BITS 6
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_W_ovr_step_SHIFT 0

/***************************************************************************
 *VDL_OVRIDE_BYTE1_BIT3_W - Write Bit VDL static override control register
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT3_W :: busy [31:31] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_W_busy_MASK 0x80000000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_W_busy_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_W_busy_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_W_busy_SHIFT 31

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT3_W :: reserved0 [30:18] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_W_reserved0_MASK 0x7ffc0000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_W_reserved0_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_W_reserved0_BITS 13
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_W_reserved0_SHIFT 18

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT3_W :: ovr_force [17:17] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_W_ovr_force_MASK 0x00020000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_W_ovr_force_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_W_ovr_force_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_W_ovr_force_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT3_W :: ovr_en [16:16] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_W_ovr_en_MASK 0x00010000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_W_ovr_en_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_W_ovr_en_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_W_ovr_en_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT3_W :: reserved1 [15:09] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_W_reserved1_MASK 0x0000fe00
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_W_reserved1_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_W_reserved1_BITS 7
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_W_reserved1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT3_W :: byte_sel [08:08] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_W_byte_sel_MASK 0x00000100
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_W_byte_sel_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_W_byte_sel_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_W_byte_sel_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT3_W :: reserved2 [07:06] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_W_reserved2_MASK 0x000000c0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_W_reserved2_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_W_reserved2_BITS 2
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_W_reserved2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT3_W :: ovr_step [05:00] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_W_ovr_step_MASK 0x0000003f
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_W_ovr_step_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_W_ovr_step_BITS 6
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_W_ovr_step_SHIFT 0

/***************************************************************************
 *VDL_OVRIDE_BYTE1_BIT4_W - Write Bit VDL static override control register
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT4_W :: busy [31:31] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_W_busy_MASK 0x80000000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_W_busy_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_W_busy_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_W_busy_SHIFT 31

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT4_W :: reserved0 [30:18] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_W_reserved0_MASK 0x7ffc0000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_W_reserved0_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_W_reserved0_BITS 13
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_W_reserved0_SHIFT 18

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT4_W :: ovr_force [17:17] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_W_ovr_force_MASK 0x00020000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_W_ovr_force_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_W_ovr_force_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_W_ovr_force_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT4_W :: ovr_en [16:16] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_W_ovr_en_MASK 0x00010000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_W_ovr_en_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_W_ovr_en_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_W_ovr_en_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT4_W :: reserved1 [15:09] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_W_reserved1_MASK 0x0000fe00
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_W_reserved1_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_W_reserved1_BITS 7
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_W_reserved1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT4_W :: byte_sel [08:08] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_W_byte_sel_MASK 0x00000100
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_W_byte_sel_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_W_byte_sel_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_W_byte_sel_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT4_W :: reserved2 [07:06] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_W_reserved2_MASK 0x000000c0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_W_reserved2_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_W_reserved2_BITS 2
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_W_reserved2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT4_W :: ovr_step [05:00] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_W_ovr_step_MASK 0x0000003f
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_W_ovr_step_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_W_ovr_step_BITS 6
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_W_ovr_step_SHIFT 0

/***************************************************************************
 *VDL_OVRIDE_BYTE1_BIT5_W - Write Bit VDL static override control register
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT5_W :: busy [31:31] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_W_busy_MASK 0x80000000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_W_busy_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_W_busy_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_W_busy_SHIFT 31

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT5_W :: reserved0 [30:18] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_W_reserved0_MASK 0x7ffc0000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_W_reserved0_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_W_reserved0_BITS 13
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_W_reserved0_SHIFT 18

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT5_W :: ovr_force [17:17] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_W_ovr_force_MASK 0x00020000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_W_ovr_force_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_W_ovr_force_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_W_ovr_force_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT5_W :: ovr_en [16:16] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_W_ovr_en_MASK 0x00010000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_W_ovr_en_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_W_ovr_en_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_W_ovr_en_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT5_W :: reserved1 [15:09] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_W_reserved1_MASK 0x0000fe00
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_W_reserved1_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_W_reserved1_BITS 7
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_W_reserved1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT5_W :: byte_sel [08:08] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_W_byte_sel_MASK 0x00000100
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_W_byte_sel_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_W_byte_sel_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_W_byte_sel_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT5_W :: reserved2 [07:06] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_W_reserved2_MASK 0x000000c0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_W_reserved2_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_W_reserved2_BITS 2
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_W_reserved2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT5_W :: ovr_step [05:00] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_W_ovr_step_MASK 0x0000003f
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_W_ovr_step_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_W_ovr_step_BITS 6
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_W_ovr_step_SHIFT 0

/***************************************************************************
 *VDL_OVRIDE_BYTE1_BIT6_W - Write Bit VDL static override control register
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT6_W :: busy [31:31] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_W_busy_MASK 0x80000000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_W_busy_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_W_busy_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_W_busy_SHIFT 31

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT6_W :: reserved0 [30:18] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_W_reserved0_MASK 0x7ffc0000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_W_reserved0_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_W_reserved0_BITS 13
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_W_reserved0_SHIFT 18

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT6_W :: ovr_force [17:17] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_W_ovr_force_MASK 0x00020000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_W_ovr_force_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_W_ovr_force_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_W_ovr_force_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT6_W :: ovr_en [16:16] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_W_ovr_en_MASK 0x00010000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_W_ovr_en_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_W_ovr_en_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_W_ovr_en_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT6_W :: reserved1 [15:09] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_W_reserved1_MASK 0x0000fe00
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_W_reserved1_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_W_reserved1_BITS 7
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_W_reserved1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT6_W :: byte_sel [08:08] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_W_byte_sel_MASK 0x00000100
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_W_byte_sel_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_W_byte_sel_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_W_byte_sel_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT6_W :: reserved2 [07:06] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_W_reserved2_MASK 0x000000c0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_W_reserved2_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_W_reserved2_BITS 2
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_W_reserved2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT6_W :: ovr_step [05:00] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_W_ovr_step_MASK 0x0000003f
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_W_ovr_step_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_W_ovr_step_BITS 6
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_W_ovr_step_SHIFT 0

/***************************************************************************
 *VDL_OVRIDE_BYTE1_BIT7_W - Write Bit VDL static override control register
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT7_W :: busy [31:31] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_W_busy_MASK 0x80000000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_W_busy_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_W_busy_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_W_busy_SHIFT 31

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT7_W :: reserved0 [30:18] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_W_reserved0_MASK 0x7ffc0000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_W_reserved0_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_W_reserved0_BITS 13
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_W_reserved0_SHIFT 18

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT7_W :: ovr_force [17:17] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_W_ovr_force_MASK 0x00020000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_W_ovr_force_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_W_ovr_force_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_W_ovr_force_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT7_W :: ovr_en [16:16] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_W_ovr_en_MASK 0x00010000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_W_ovr_en_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_W_ovr_en_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_W_ovr_en_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT7_W :: reserved1 [15:09] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_W_reserved1_MASK 0x0000fe00
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_W_reserved1_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_W_reserved1_BITS 7
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_W_reserved1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT7_W :: byte_sel [08:08] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_W_byte_sel_MASK 0x00000100
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_W_byte_sel_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_W_byte_sel_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_W_byte_sel_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT7_W :: reserved2 [07:06] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_W_reserved2_MASK 0x000000c0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_W_reserved2_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_W_reserved2_BITS 2
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_W_reserved2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT7_W :: ovr_step [05:00] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_W_ovr_step_MASK 0x0000003f
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_W_ovr_step_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_W_ovr_step_BITS 6
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_W_ovr_step_SHIFT 0

/***************************************************************************
 *VDL_OVRIDE_BYTE1_DM_W - Write Bit VDL static override control register
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_DM_W :: busy [31:31] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_DM_W_busy_MASK 0x80000000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_DM_W_busy_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_DM_W_busy_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_DM_W_busy_SHIFT 31

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_DM_W :: reserved0 [30:18] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_DM_W_reserved0_MASK 0x7ffc0000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_DM_W_reserved0_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_DM_W_reserved0_BITS 13
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_DM_W_reserved0_SHIFT 18

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_DM_W :: ovr_force [17:17] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_DM_W_ovr_force_MASK 0x00020000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_DM_W_ovr_force_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_DM_W_ovr_force_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_DM_W_ovr_force_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_DM_W :: ovr_en [16:16] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_DM_W_ovr_en_MASK 0x00010000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_DM_W_ovr_en_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_DM_W_ovr_en_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_DM_W_ovr_en_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_DM_W :: reserved1 [15:09] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_DM_W_reserved1_MASK 0x0000fe00
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_DM_W_reserved1_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_DM_W_reserved1_BITS 7
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_DM_W_reserved1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_DM_W :: byte_sel [08:08] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_DM_W_byte_sel_MASK 0x00000100
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_DM_W_byte_sel_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_DM_W_byte_sel_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_DM_W_byte_sel_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_DM_W :: reserved2 [07:06] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_DM_W_reserved2_MASK 0x000000c0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_DM_W_reserved2_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_DM_W_reserved2_BITS 2
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_DM_W_reserved2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_DM_W :: ovr_step [05:00] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_DM_W_ovr_step_MASK 0x0000003f
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_DM_W_ovr_step_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_DM_W_ovr_step_BITS 6
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_DM_W_ovr_step_SHIFT 0

/***************************************************************************
 *VDL_OVRIDE_BYTE1_BIT0_R_P - Read DQSP Bit VDL static override control register
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT0_R_P :: busy [31:31] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_P_busy_MASK 0x80000000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_P_busy_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_P_busy_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_P_busy_SHIFT 31

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT0_R_P :: reserved0 [30:18] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_P_reserved0_MASK 0x7ffc0000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_P_reserved0_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_P_reserved0_BITS 13
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_P_reserved0_SHIFT 18

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT0_R_P :: ovr_force [17:17] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_P_ovr_force_MASK 0x00020000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_P_ovr_force_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_P_ovr_force_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_P_ovr_force_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT0_R_P :: ovr_en [16:16] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_P_ovr_en_MASK 0x00010000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_P_ovr_en_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_P_ovr_en_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_P_ovr_en_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT0_R_P :: reserved1 [15:09] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_P_reserved1_MASK 0x0000fe00
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_P_reserved1_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_P_reserved1_BITS 7
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_P_reserved1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT0_R_P :: byte_sel [08:08] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_P_byte_sel_MASK 0x00000100
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_P_byte_sel_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_P_byte_sel_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_P_byte_sel_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT0_R_P :: reserved2 [07:06] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_P_reserved2_MASK 0x000000c0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_P_reserved2_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_P_reserved2_BITS 2
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_P_reserved2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT0_R_P :: ovr_step [05:00] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_P_ovr_step_MASK 0x0000003f
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_P_ovr_step_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_P_ovr_step_BITS 6
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_P_ovr_step_SHIFT 0

/***************************************************************************
 *VDL_OVRIDE_BYTE1_BIT0_R_N - Read DQSN Bit VDL static override control register
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT0_R_N :: busy [31:31] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_N_busy_MASK 0x80000000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_N_busy_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_N_busy_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_N_busy_SHIFT 31

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT0_R_N :: reserved0 [30:18] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_N_reserved0_MASK 0x7ffc0000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_N_reserved0_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_N_reserved0_BITS 13
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_N_reserved0_SHIFT 18

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT0_R_N :: ovr_force [17:17] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_N_ovr_force_MASK 0x00020000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_N_ovr_force_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_N_ovr_force_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_N_ovr_force_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT0_R_N :: ovr_en [16:16] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_N_ovr_en_MASK 0x00010000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_N_ovr_en_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_N_ovr_en_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_N_ovr_en_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT0_R_N :: reserved1 [15:09] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_N_reserved1_MASK 0x0000fe00
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_N_reserved1_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_N_reserved1_BITS 7
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_N_reserved1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT0_R_N :: byte_sel [08:08] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_N_byte_sel_MASK 0x00000100
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_N_byte_sel_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_N_byte_sel_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_N_byte_sel_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT0_R_N :: reserved2 [07:06] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_N_reserved2_MASK 0x000000c0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_N_reserved2_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_N_reserved2_BITS 2
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_N_reserved2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT0_R_N :: ovr_step [05:00] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_N_ovr_step_MASK 0x0000003f
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_N_ovr_step_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_N_ovr_step_BITS 6
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT0_R_N_ovr_step_SHIFT 0

/***************************************************************************
 *VDL_OVRIDE_BYTE1_BIT1_R_P - Read DQSP Bit VDL static override control register
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT1_R_P :: busy [31:31] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_P_busy_MASK 0x80000000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_P_busy_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_P_busy_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_P_busy_SHIFT 31

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT1_R_P :: reserved0 [30:18] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_P_reserved0_MASK 0x7ffc0000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_P_reserved0_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_P_reserved0_BITS 13
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_P_reserved0_SHIFT 18

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT1_R_P :: ovr_force [17:17] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_P_ovr_force_MASK 0x00020000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_P_ovr_force_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_P_ovr_force_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_P_ovr_force_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT1_R_P :: ovr_en [16:16] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_P_ovr_en_MASK 0x00010000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_P_ovr_en_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_P_ovr_en_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_P_ovr_en_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT1_R_P :: reserved1 [15:09] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_P_reserved1_MASK 0x0000fe00
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_P_reserved1_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_P_reserved1_BITS 7
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_P_reserved1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT1_R_P :: byte_sel [08:08] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_P_byte_sel_MASK 0x00000100
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_P_byte_sel_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_P_byte_sel_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_P_byte_sel_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT1_R_P :: reserved2 [07:06] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_P_reserved2_MASK 0x000000c0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_P_reserved2_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_P_reserved2_BITS 2
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_P_reserved2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT1_R_P :: ovr_step [05:00] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_P_ovr_step_MASK 0x0000003f
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_P_ovr_step_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_P_ovr_step_BITS 6
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_P_ovr_step_SHIFT 0

/***************************************************************************
 *VDL_OVRIDE_BYTE1_BIT1_R_N - Read DQSN Bit VDL static override control register
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT1_R_N :: busy [31:31] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_N_busy_MASK 0x80000000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_N_busy_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_N_busy_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_N_busy_SHIFT 31

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT1_R_N :: reserved0 [30:18] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_N_reserved0_MASK 0x7ffc0000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_N_reserved0_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_N_reserved0_BITS 13
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_N_reserved0_SHIFT 18

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT1_R_N :: ovr_force [17:17] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_N_ovr_force_MASK 0x00020000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_N_ovr_force_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_N_ovr_force_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_N_ovr_force_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT1_R_N :: ovr_en [16:16] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_N_ovr_en_MASK 0x00010000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_N_ovr_en_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_N_ovr_en_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_N_ovr_en_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT1_R_N :: reserved1 [15:09] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_N_reserved1_MASK 0x0000fe00
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_N_reserved1_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_N_reserved1_BITS 7
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_N_reserved1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT1_R_N :: byte_sel [08:08] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_N_byte_sel_MASK 0x00000100
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_N_byte_sel_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_N_byte_sel_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_N_byte_sel_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT1_R_N :: reserved2 [07:06] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_N_reserved2_MASK 0x000000c0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_N_reserved2_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_N_reserved2_BITS 2
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_N_reserved2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT1_R_N :: ovr_step [05:00] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_N_ovr_step_MASK 0x0000003f
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_N_ovr_step_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_N_ovr_step_BITS 6
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT1_R_N_ovr_step_SHIFT 0

/***************************************************************************
 *VDL_OVRIDE_BYTE1_BIT2_R_P - Read DQSP Bit VDL static override control register
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT2_R_P :: busy [31:31] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_P_busy_MASK 0x80000000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_P_busy_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_P_busy_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_P_busy_SHIFT 31

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT2_R_P :: reserved0 [30:18] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_P_reserved0_MASK 0x7ffc0000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_P_reserved0_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_P_reserved0_BITS 13
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_P_reserved0_SHIFT 18

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT2_R_P :: ovr_force [17:17] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_P_ovr_force_MASK 0x00020000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_P_ovr_force_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_P_ovr_force_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_P_ovr_force_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT2_R_P :: ovr_en [16:16] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_P_ovr_en_MASK 0x00010000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_P_ovr_en_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_P_ovr_en_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_P_ovr_en_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT2_R_P :: reserved1 [15:09] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_P_reserved1_MASK 0x0000fe00
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_P_reserved1_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_P_reserved1_BITS 7
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_P_reserved1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT2_R_P :: byte_sel [08:08] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_P_byte_sel_MASK 0x00000100
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_P_byte_sel_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_P_byte_sel_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_P_byte_sel_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT2_R_P :: reserved2 [07:06] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_P_reserved2_MASK 0x000000c0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_P_reserved2_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_P_reserved2_BITS 2
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_P_reserved2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT2_R_P :: ovr_step [05:00] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_P_ovr_step_MASK 0x0000003f
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_P_ovr_step_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_P_ovr_step_BITS 6
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_P_ovr_step_SHIFT 0

/***************************************************************************
 *VDL_OVRIDE_BYTE1_BIT2_R_N - Read DQSN Bit VDL static override control register
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT2_R_N :: busy [31:31] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_N_busy_MASK 0x80000000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_N_busy_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_N_busy_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_N_busy_SHIFT 31

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT2_R_N :: reserved0 [30:18] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_N_reserved0_MASK 0x7ffc0000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_N_reserved0_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_N_reserved0_BITS 13
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_N_reserved0_SHIFT 18

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT2_R_N :: ovr_force [17:17] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_N_ovr_force_MASK 0x00020000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_N_ovr_force_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_N_ovr_force_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_N_ovr_force_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT2_R_N :: ovr_en [16:16] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_N_ovr_en_MASK 0x00010000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_N_ovr_en_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_N_ovr_en_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_N_ovr_en_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT2_R_N :: reserved1 [15:09] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_N_reserved1_MASK 0x0000fe00
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_N_reserved1_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_N_reserved1_BITS 7
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_N_reserved1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT2_R_N :: byte_sel [08:08] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_N_byte_sel_MASK 0x00000100
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_N_byte_sel_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_N_byte_sel_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_N_byte_sel_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT2_R_N :: reserved2 [07:06] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_N_reserved2_MASK 0x000000c0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_N_reserved2_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_N_reserved2_BITS 2
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_N_reserved2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT2_R_N :: ovr_step [05:00] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_N_ovr_step_MASK 0x0000003f
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_N_ovr_step_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_N_ovr_step_BITS 6
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT2_R_N_ovr_step_SHIFT 0

/***************************************************************************
 *VDL_OVRIDE_BYTE1_BIT3_R_P - Read DQSP Bit VDL static override control register
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT3_R_P :: busy [31:31] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_P_busy_MASK 0x80000000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_P_busy_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_P_busy_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_P_busy_SHIFT 31

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT3_R_P :: reserved0 [30:18] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_P_reserved0_MASK 0x7ffc0000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_P_reserved0_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_P_reserved0_BITS 13
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_P_reserved0_SHIFT 18

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT3_R_P :: ovr_force [17:17] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_P_ovr_force_MASK 0x00020000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_P_ovr_force_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_P_ovr_force_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_P_ovr_force_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT3_R_P :: ovr_en [16:16] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_P_ovr_en_MASK 0x00010000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_P_ovr_en_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_P_ovr_en_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_P_ovr_en_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT3_R_P :: reserved1 [15:09] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_P_reserved1_MASK 0x0000fe00
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_P_reserved1_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_P_reserved1_BITS 7
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_P_reserved1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT3_R_P :: byte_sel [08:08] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_P_byte_sel_MASK 0x00000100
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_P_byte_sel_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_P_byte_sel_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_P_byte_sel_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT3_R_P :: reserved2 [07:06] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_P_reserved2_MASK 0x000000c0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_P_reserved2_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_P_reserved2_BITS 2
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_P_reserved2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT3_R_P :: ovr_step [05:00] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_P_ovr_step_MASK 0x0000003f
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_P_ovr_step_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_P_ovr_step_BITS 6
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_P_ovr_step_SHIFT 0

/***************************************************************************
 *VDL_OVRIDE_BYTE1_BIT3_R_N - Read DQSN Bit VDL static override control register
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT3_R_N :: busy [31:31] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_N_busy_MASK 0x80000000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_N_busy_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_N_busy_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_N_busy_SHIFT 31

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT3_R_N :: reserved0 [30:18] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_N_reserved0_MASK 0x7ffc0000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_N_reserved0_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_N_reserved0_BITS 13
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_N_reserved0_SHIFT 18

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT3_R_N :: ovr_force [17:17] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_N_ovr_force_MASK 0x00020000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_N_ovr_force_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_N_ovr_force_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_N_ovr_force_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT3_R_N :: ovr_en [16:16] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_N_ovr_en_MASK 0x00010000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_N_ovr_en_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_N_ovr_en_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_N_ovr_en_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT3_R_N :: reserved1 [15:09] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_N_reserved1_MASK 0x0000fe00
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_N_reserved1_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_N_reserved1_BITS 7
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_N_reserved1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT3_R_N :: byte_sel [08:08] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_N_byte_sel_MASK 0x00000100
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_N_byte_sel_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_N_byte_sel_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_N_byte_sel_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT3_R_N :: reserved2 [07:06] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_N_reserved2_MASK 0x000000c0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_N_reserved2_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_N_reserved2_BITS 2
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_N_reserved2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT3_R_N :: ovr_step [05:00] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_N_ovr_step_MASK 0x0000003f
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_N_ovr_step_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_N_ovr_step_BITS 6
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT3_R_N_ovr_step_SHIFT 0

/***************************************************************************
 *VDL_OVRIDE_BYTE1_BIT4_R_P - Read DQSP Bit VDL static override control register
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT4_R_P :: busy [31:31] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_P_busy_MASK 0x80000000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_P_busy_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_P_busy_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_P_busy_SHIFT 31

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT4_R_P :: reserved0 [30:18] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_P_reserved0_MASK 0x7ffc0000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_P_reserved0_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_P_reserved0_BITS 13
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_P_reserved0_SHIFT 18

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT4_R_P :: ovr_force [17:17] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_P_ovr_force_MASK 0x00020000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_P_ovr_force_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_P_ovr_force_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_P_ovr_force_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT4_R_P :: ovr_en [16:16] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_P_ovr_en_MASK 0x00010000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_P_ovr_en_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_P_ovr_en_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_P_ovr_en_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT4_R_P :: reserved1 [15:09] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_P_reserved1_MASK 0x0000fe00
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_P_reserved1_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_P_reserved1_BITS 7
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_P_reserved1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT4_R_P :: byte_sel [08:08] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_P_byte_sel_MASK 0x00000100
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_P_byte_sel_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_P_byte_sel_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_P_byte_sel_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT4_R_P :: reserved2 [07:06] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_P_reserved2_MASK 0x000000c0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_P_reserved2_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_P_reserved2_BITS 2
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_P_reserved2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT4_R_P :: ovr_step [05:00] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_P_ovr_step_MASK 0x0000003f
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_P_ovr_step_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_P_ovr_step_BITS 6
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_P_ovr_step_SHIFT 0

/***************************************************************************
 *VDL_OVRIDE_BYTE1_BIT4_R_N - Read DQSN Bit VDL static override control register
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT4_R_N :: busy [31:31] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_N_busy_MASK 0x80000000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_N_busy_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_N_busy_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_N_busy_SHIFT 31

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT4_R_N :: reserved0 [30:18] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_N_reserved0_MASK 0x7ffc0000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_N_reserved0_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_N_reserved0_BITS 13
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_N_reserved0_SHIFT 18

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT4_R_N :: ovr_force [17:17] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_N_ovr_force_MASK 0x00020000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_N_ovr_force_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_N_ovr_force_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_N_ovr_force_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT4_R_N :: ovr_en [16:16] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_N_ovr_en_MASK 0x00010000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_N_ovr_en_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_N_ovr_en_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_N_ovr_en_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT4_R_N :: reserved1 [15:09] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_N_reserved1_MASK 0x0000fe00
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_N_reserved1_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_N_reserved1_BITS 7
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_N_reserved1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT4_R_N :: byte_sel [08:08] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_N_byte_sel_MASK 0x00000100
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_N_byte_sel_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_N_byte_sel_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_N_byte_sel_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT4_R_N :: reserved2 [07:06] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_N_reserved2_MASK 0x000000c0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_N_reserved2_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_N_reserved2_BITS 2
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_N_reserved2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT4_R_N :: ovr_step [05:00] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_N_ovr_step_MASK 0x0000003f
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_N_ovr_step_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_N_ovr_step_BITS 6
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT4_R_N_ovr_step_SHIFT 0

/***************************************************************************
 *VDL_OVRIDE_BYTE1_BIT5_R_P - Read DQSP Bit VDL static override control register
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT5_R_P :: busy [31:31] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_P_busy_MASK 0x80000000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_P_busy_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_P_busy_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_P_busy_SHIFT 31

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT5_R_P :: reserved0 [30:18] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_P_reserved0_MASK 0x7ffc0000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_P_reserved0_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_P_reserved0_BITS 13
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_P_reserved0_SHIFT 18

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT5_R_P :: ovr_force [17:17] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_P_ovr_force_MASK 0x00020000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_P_ovr_force_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_P_ovr_force_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_P_ovr_force_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT5_R_P :: ovr_en [16:16] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_P_ovr_en_MASK 0x00010000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_P_ovr_en_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_P_ovr_en_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_P_ovr_en_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT5_R_P :: reserved1 [15:09] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_P_reserved1_MASK 0x0000fe00
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_P_reserved1_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_P_reserved1_BITS 7
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_P_reserved1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT5_R_P :: byte_sel [08:08] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_P_byte_sel_MASK 0x00000100
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_P_byte_sel_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_P_byte_sel_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_P_byte_sel_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT5_R_P :: reserved2 [07:06] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_P_reserved2_MASK 0x000000c0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_P_reserved2_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_P_reserved2_BITS 2
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_P_reserved2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT5_R_P :: ovr_step [05:00] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_P_ovr_step_MASK 0x0000003f
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_P_ovr_step_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_P_ovr_step_BITS 6
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_P_ovr_step_SHIFT 0

/***************************************************************************
 *VDL_OVRIDE_BYTE1_BIT5_R_N - Read DQSN Bit VDL static override control register
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT5_R_N :: busy [31:31] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_N_busy_MASK 0x80000000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_N_busy_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_N_busy_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_N_busy_SHIFT 31

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT5_R_N :: reserved0 [30:18] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_N_reserved0_MASK 0x7ffc0000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_N_reserved0_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_N_reserved0_BITS 13
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_N_reserved0_SHIFT 18

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT5_R_N :: ovr_force [17:17] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_N_ovr_force_MASK 0x00020000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_N_ovr_force_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_N_ovr_force_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_N_ovr_force_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT5_R_N :: ovr_en [16:16] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_N_ovr_en_MASK 0x00010000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_N_ovr_en_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_N_ovr_en_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_N_ovr_en_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT5_R_N :: reserved1 [15:09] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_N_reserved1_MASK 0x0000fe00
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_N_reserved1_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_N_reserved1_BITS 7
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_N_reserved1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT5_R_N :: byte_sel [08:08] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_N_byte_sel_MASK 0x00000100
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_N_byte_sel_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_N_byte_sel_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_N_byte_sel_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT5_R_N :: reserved2 [07:06] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_N_reserved2_MASK 0x000000c0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_N_reserved2_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_N_reserved2_BITS 2
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_N_reserved2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT5_R_N :: ovr_step [05:00] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_N_ovr_step_MASK 0x0000003f
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_N_ovr_step_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_N_ovr_step_BITS 6
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT5_R_N_ovr_step_SHIFT 0

/***************************************************************************
 *VDL_OVRIDE_BYTE1_BIT6_R_P - Read DQSP Bit VDL static override control register
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT6_R_P :: busy [31:31] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_P_busy_MASK 0x80000000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_P_busy_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_P_busy_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_P_busy_SHIFT 31

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT6_R_P :: reserved0 [30:18] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_P_reserved0_MASK 0x7ffc0000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_P_reserved0_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_P_reserved0_BITS 13
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_P_reserved0_SHIFT 18

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT6_R_P :: ovr_force [17:17] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_P_ovr_force_MASK 0x00020000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_P_ovr_force_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_P_ovr_force_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_P_ovr_force_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT6_R_P :: ovr_en [16:16] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_P_ovr_en_MASK 0x00010000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_P_ovr_en_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_P_ovr_en_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_P_ovr_en_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT6_R_P :: reserved1 [15:09] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_P_reserved1_MASK 0x0000fe00
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_P_reserved1_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_P_reserved1_BITS 7
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_P_reserved1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT6_R_P :: byte_sel [08:08] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_P_byte_sel_MASK 0x00000100
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_P_byte_sel_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_P_byte_sel_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_P_byte_sel_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT6_R_P :: reserved2 [07:06] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_P_reserved2_MASK 0x000000c0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_P_reserved2_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_P_reserved2_BITS 2
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_P_reserved2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT6_R_P :: ovr_step [05:00] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_P_ovr_step_MASK 0x0000003f
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_P_ovr_step_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_P_ovr_step_BITS 6
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_P_ovr_step_SHIFT 0

/***************************************************************************
 *VDL_OVRIDE_BYTE1_BIT6_R_N - Read DQSN Bit VDL static override control register
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT6_R_N :: busy [31:31] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_N_busy_MASK 0x80000000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_N_busy_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_N_busy_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_N_busy_SHIFT 31

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT6_R_N :: reserved0 [30:18] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_N_reserved0_MASK 0x7ffc0000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_N_reserved0_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_N_reserved0_BITS 13
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_N_reserved0_SHIFT 18

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT6_R_N :: ovr_force [17:17] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_N_ovr_force_MASK 0x00020000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_N_ovr_force_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_N_ovr_force_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_N_ovr_force_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT6_R_N :: ovr_en [16:16] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_N_ovr_en_MASK 0x00010000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_N_ovr_en_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_N_ovr_en_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_N_ovr_en_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT6_R_N :: reserved1 [15:09] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_N_reserved1_MASK 0x0000fe00
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_N_reserved1_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_N_reserved1_BITS 7
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_N_reserved1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT6_R_N :: byte_sel [08:08] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_N_byte_sel_MASK 0x00000100
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_N_byte_sel_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_N_byte_sel_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_N_byte_sel_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT6_R_N :: reserved2 [07:06] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_N_reserved2_MASK 0x000000c0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_N_reserved2_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_N_reserved2_BITS 2
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_N_reserved2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT6_R_N :: ovr_step [05:00] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_N_ovr_step_MASK 0x0000003f
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_N_ovr_step_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_N_ovr_step_BITS 6
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT6_R_N_ovr_step_SHIFT 0

/***************************************************************************
 *VDL_OVRIDE_BYTE1_BIT7_R_P - Read DQSP Bit VDL static override control register
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT7_R_P :: busy [31:31] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_P_busy_MASK 0x80000000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_P_busy_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_P_busy_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_P_busy_SHIFT 31

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT7_R_P :: reserved0 [30:18] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_P_reserved0_MASK 0x7ffc0000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_P_reserved0_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_P_reserved0_BITS 13
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_P_reserved0_SHIFT 18

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT7_R_P :: ovr_force [17:17] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_P_ovr_force_MASK 0x00020000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_P_ovr_force_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_P_ovr_force_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_P_ovr_force_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT7_R_P :: ovr_en [16:16] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_P_ovr_en_MASK 0x00010000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_P_ovr_en_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_P_ovr_en_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_P_ovr_en_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT7_R_P :: reserved1 [15:09] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_P_reserved1_MASK 0x0000fe00
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_P_reserved1_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_P_reserved1_BITS 7
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_P_reserved1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT7_R_P :: byte_sel [08:08] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_P_byte_sel_MASK 0x00000100
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_P_byte_sel_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_P_byte_sel_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_P_byte_sel_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT7_R_P :: reserved2 [07:06] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_P_reserved2_MASK 0x000000c0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_P_reserved2_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_P_reserved2_BITS 2
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_P_reserved2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT7_R_P :: ovr_step [05:00] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_P_ovr_step_MASK 0x0000003f
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_P_ovr_step_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_P_ovr_step_BITS 6
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_P_ovr_step_SHIFT 0

/***************************************************************************
 *VDL_OVRIDE_BYTE1_BIT7_R_N - Read DQSN Bit VDL static override control register
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT7_R_N :: busy [31:31] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_N_busy_MASK 0x80000000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_N_busy_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_N_busy_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_N_busy_SHIFT 31

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT7_R_N :: reserved0 [30:18] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_N_reserved0_MASK 0x7ffc0000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_N_reserved0_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_N_reserved0_BITS 13
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_N_reserved0_SHIFT 18

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT7_R_N :: ovr_force [17:17] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_N_ovr_force_MASK 0x00020000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_N_ovr_force_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_N_ovr_force_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_N_ovr_force_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT7_R_N :: ovr_en [16:16] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_N_ovr_en_MASK 0x00010000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_N_ovr_en_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_N_ovr_en_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_N_ovr_en_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT7_R_N :: reserved1 [15:09] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_N_reserved1_MASK 0x0000fe00
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_N_reserved1_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_N_reserved1_BITS 7
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_N_reserved1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT7_R_N :: byte_sel [08:08] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_N_byte_sel_MASK 0x00000100
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_N_byte_sel_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_N_byte_sel_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_N_byte_sel_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT7_R_N :: reserved2 [07:06] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_N_reserved2_MASK 0x000000c0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_N_reserved2_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_N_reserved2_BITS 2
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_N_reserved2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT7_R_N :: ovr_step [05:00] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_N_ovr_step_MASK 0x0000003f
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_N_ovr_step_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_N_ovr_step_BITS 6
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT7_R_N_ovr_step_SHIFT 0

/***************************************************************************
 *VDL_OVRIDE_BYTE1_BIT_RD_EN - Read Enable Bit VDL static override control register
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT_RD_EN :: busy [31:31] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT_RD_EN_busy_MASK 0x80000000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT_RD_EN_busy_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT_RD_EN_busy_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT_RD_EN_busy_SHIFT 31

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT_RD_EN :: reserved0 [30:18] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT_RD_EN_reserved0_MASK 0x7ffc0000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT_RD_EN_reserved0_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT_RD_EN_reserved0_BITS 13
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT_RD_EN_reserved0_SHIFT 18

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT_RD_EN :: ovr_force [17:17] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT_RD_EN_ovr_force_MASK 0x00020000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT_RD_EN_ovr_force_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT_RD_EN_ovr_force_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT_RD_EN_ovr_force_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT_RD_EN :: ovr_en [16:16] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT_RD_EN_ovr_en_MASK 0x00010000
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT_RD_EN_ovr_en_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT_RD_EN_ovr_en_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT_RD_EN_ovr_en_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT_RD_EN :: reserved1 [15:09] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT_RD_EN_reserved1_MASK 0x0000fe00
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT_RD_EN_reserved1_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT_RD_EN_reserved1_BITS 7
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT_RD_EN_reserved1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT_RD_EN :: byte_sel [08:08] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT_RD_EN_byte_sel_MASK 0x00000100
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT_RD_EN_byte_sel_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT_RD_EN_byte_sel_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT_RD_EN_byte_sel_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT_RD_EN :: reserved2 [07:06] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT_RD_EN_reserved2_MASK 0x000000c0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT_RD_EN_reserved2_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT_RD_EN_reserved2_BITS 2
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT_RD_EN_reserved2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: VDL_OVRIDE_BYTE1_BIT_RD_EN :: ovr_step [05:00] */
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT_RD_EN_ovr_step_MASK 0x0000003f
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT_RD_EN_ovr_step_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT_RD_EN_ovr_step_BITS 6
#define BCHP_DDR40_PHY_WORD_LANE_0_VDL_OVRIDE_BYTE1_BIT_RD_EN_ovr_step_SHIFT 0

/***************************************************************************
 *DYN_VDL_OVRIDE_BYTE0_R_P - Read DQSP VDL dynamic override control register
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE0_R_P :: reserved0 [31:17] */
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_R_P_reserved0_MASK 0xfffe0000
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_R_P_reserved0_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_R_P_reserved0_BITS 15
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_R_P_reserved0_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE0_R_P :: ovr_en [16:16] */
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_R_P_ovr_en_MASK 0x00010000
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_R_P_ovr_en_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_R_P_ovr_en_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_R_P_ovr_en_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE0_R_P :: reserved1 [15:09] */
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_R_P_reserved1_MASK 0x0000fe00
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_R_P_reserved1_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_R_P_reserved1_BITS 7
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_R_P_reserved1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE0_R_P :: byte_sel [08:08] */
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_R_P_byte_sel_MASK 0x00000100
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_R_P_byte_sel_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_R_P_byte_sel_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_R_P_byte_sel_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE0_R_P :: reserved2 [07:06] */
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_R_P_reserved2_MASK 0x000000c0
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_R_P_reserved2_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_R_P_reserved2_BITS 2
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_R_P_reserved2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE0_R_P :: ovr_step [05:00] */
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_R_P_ovr_step_MASK 0x0000003f
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_R_P_ovr_step_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_R_P_ovr_step_BITS 6
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_R_P_ovr_step_SHIFT 0

/***************************************************************************
 *DYN_VDL_OVRIDE_BYTE0_R_N - Read DQSN VDL dynamic override control register
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE0_R_N :: reserved0 [31:17] */
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_R_N_reserved0_MASK 0xfffe0000
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_R_N_reserved0_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_R_N_reserved0_BITS 15
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_R_N_reserved0_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE0_R_N :: ovr_en [16:16] */
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_R_N_ovr_en_MASK 0x00010000
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_R_N_ovr_en_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_R_N_ovr_en_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_R_N_ovr_en_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE0_R_N :: reserved1 [15:09] */
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_R_N_reserved1_MASK 0x0000fe00
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_R_N_reserved1_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_R_N_reserved1_BITS 7
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_R_N_reserved1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE0_R_N :: byte_sel [08:08] */
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_R_N_byte_sel_MASK 0x00000100
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_R_N_byte_sel_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_R_N_byte_sel_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_R_N_byte_sel_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE0_R_N :: reserved2 [07:06] */
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_R_N_reserved2_MASK 0x000000c0
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_R_N_reserved2_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_R_N_reserved2_BITS 2
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_R_N_reserved2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE0_R_N :: ovr_step [05:00] */
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_R_N_ovr_step_MASK 0x0000003f
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_R_N_ovr_step_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_R_N_ovr_step_BITS 6
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_R_N_ovr_step_SHIFT 0

/***************************************************************************
 *DYN_VDL_OVRIDE_BYTE0_BIT_R_P - Read DQ-P VDL dynamic override control register
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE0_BIT_R_P :: reserved0 [31:17] */
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_R_P_reserved0_MASK 0xfffe0000
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_R_P_reserved0_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_R_P_reserved0_BITS 15
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_R_P_reserved0_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE0_BIT_R_P :: ovr_en [16:16] */
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_R_P_ovr_en_MASK 0x00010000
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_R_P_ovr_en_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_R_P_ovr_en_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_R_P_ovr_en_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE0_BIT_R_P :: reserved1 [15:09] */
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_R_P_reserved1_MASK 0x0000fe00
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_R_P_reserved1_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_R_P_reserved1_BITS 7
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_R_P_reserved1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE0_BIT_R_P :: byte_sel [08:08] */
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_R_P_byte_sel_MASK 0x00000100
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_R_P_byte_sel_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_R_P_byte_sel_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_R_P_byte_sel_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE0_BIT_R_P :: reserved2 [07:06] */
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_R_P_reserved2_MASK 0x000000c0
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_R_P_reserved2_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_R_P_reserved2_BITS 2
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_R_P_reserved2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE0_BIT_R_P :: ovr_step [05:00] */
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_R_P_ovr_step_MASK 0x0000003f
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_R_P_ovr_step_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_R_P_ovr_step_BITS 6
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_R_P_ovr_step_SHIFT 0

/***************************************************************************
 *DYN_VDL_OVRIDE_BYTE0_BIT_R_N - Read DQ-N VDL dynamic override control register
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE0_BIT_R_N :: reserved0 [31:17] */
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_R_N_reserved0_MASK 0xfffe0000
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_R_N_reserved0_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_R_N_reserved0_BITS 15
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_R_N_reserved0_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE0_BIT_R_N :: ovr_en [16:16] */
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_R_N_ovr_en_MASK 0x00010000
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_R_N_ovr_en_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_R_N_ovr_en_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_R_N_ovr_en_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE0_BIT_R_N :: reserved1 [15:09] */
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_R_N_reserved1_MASK 0x0000fe00
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_R_N_reserved1_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_R_N_reserved1_BITS 7
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_R_N_reserved1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE0_BIT_R_N :: byte_sel [08:08] */
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_R_N_byte_sel_MASK 0x00000100
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_R_N_byte_sel_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_R_N_byte_sel_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_R_N_byte_sel_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE0_BIT_R_N :: reserved2 [07:06] */
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_R_N_reserved2_MASK 0x000000c0
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_R_N_reserved2_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_R_N_reserved2_BITS 2
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_R_N_reserved2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE0_BIT_R_N :: ovr_step [05:00] */
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_R_N_ovr_step_MASK 0x0000003f
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_R_N_ovr_step_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_R_N_ovr_step_BITS 6
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_R_N_ovr_step_SHIFT 0

/***************************************************************************
 *DYN_VDL_OVRIDE_BYTE0_W - Write DQ Byte VDL dynamic override control register
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE0_W :: reserved0 [31:17] */
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_W_reserved0_MASK 0xfffe0000
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_W_reserved0_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_W_reserved0_BITS 15
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_W_reserved0_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE0_W :: ovr_en [16:16] */
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_W_ovr_en_MASK 0x00010000
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_W_ovr_en_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_W_ovr_en_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_W_ovr_en_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE0_W :: reserved1 [15:09] */
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_W_reserved1_MASK 0x0000fe00
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_W_reserved1_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_W_reserved1_BITS 7
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_W_reserved1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE0_W :: byte_sel [08:08] */
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_W_byte_sel_MASK 0x00000100
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_W_byte_sel_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_W_byte_sel_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_W_byte_sel_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE0_W :: reserved2 [07:06] */
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_W_reserved2_MASK 0x000000c0
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_W_reserved2_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_W_reserved2_BITS 2
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_W_reserved2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE0_W :: ovr_step [05:00] */
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_W_ovr_step_MASK 0x0000003f
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_W_ovr_step_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_W_ovr_step_BITS 6
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_W_ovr_step_SHIFT 0

/***************************************************************************
 *DYN_VDL_OVRIDE_BYTE0_BIT_W - Write DQ Bit VDL dynamic override control register
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE0_BIT_W :: reserved0 [31:17] */
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_W_reserved0_MASK 0xfffe0000
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_W_reserved0_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_W_reserved0_BITS 15
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_W_reserved0_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE0_BIT_W :: ovr_en [16:16] */
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_W_ovr_en_MASK 0x00010000
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_W_ovr_en_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_W_ovr_en_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_W_ovr_en_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE0_BIT_W :: reserved1 [15:09] */
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_W_reserved1_MASK 0x0000fe00
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_W_reserved1_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_W_reserved1_BITS 7
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_W_reserved1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE0_BIT_W :: byte_sel [08:08] */
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_W_byte_sel_MASK 0x00000100
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_W_byte_sel_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_W_byte_sel_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_W_byte_sel_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE0_BIT_W :: reserved2 [07:06] */
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_W_reserved2_MASK 0x000000c0
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_W_reserved2_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_W_reserved2_BITS 2
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_W_reserved2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE0_BIT_W :: ovr_step [05:00] */
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_W_ovr_step_MASK 0x0000003f
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_W_ovr_step_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_W_ovr_step_BITS 6
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE0_BIT_W_ovr_step_SHIFT 0

/***************************************************************************
 *DYN_VDL_OVRIDE_BYTE1_R_P - Read DQSP VDL dynamic override control register
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE1_R_P :: reserved0 [31:17] */
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_R_P_reserved0_MASK 0xfffe0000
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_R_P_reserved0_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_R_P_reserved0_BITS 15
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_R_P_reserved0_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE1_R_P :: ovr_en [16:16] */
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_R_P_ovr_en_MASK 0x00010000
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_R_P_ovr_en_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_R_P_ovr_en_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_R_P_ovr_en_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE1_R_P :: reserved1 [15:09] */
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_R_P_reserved1_MASK 0x0000fe00
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_R_P_reserved1_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_R_P_reserved1_BITS 7
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_R_P_reserved1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE1_R_P :: byte_sel [08:08] */
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_R_P_byte_sel_MASK 0x00000100
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_R_P_byte_sel_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_R_P_byte_sel_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_R_P_byte_sel_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE1_R_P :: reserved2 [07:06] */
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_R_P_reserved2_MASK 0x000000c0
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_R_P_reserved2_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_R_P_reserved2_BITS 2
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_R_P_reserved2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE1_R_P :: ovr_step [05:00] */
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_R_P_ovr_step_MASK 0x0000003f
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_R_P_ovr_step_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_R_P_ovr_step_BITS 6
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_R_P_ovr_step_SHIFT 0

/***************************************************************************
 *DYN_VDL_OVRIDE_BYTE1_R_N - Read DQSN VDL dynamic override control register
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE1_R_N :: reserved0 [31:17] */
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_R_N_reserved0_MASK 0xfffe0000
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_R_N_reserved0_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_R_N_reserved0_BITS 15
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_R_N_reserved0_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE1_R_N :: ovr_en [16:16] */
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_R_N_ovr_en_MASK 0x00010000
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_R_N_ovr_en_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_R_N_ovr_en_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_R_N_ovr_en_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE1_R_N :: reserved1 [15:09] */
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_R_N_reserved1_MASK 0x0000fe00
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_R_N_reserved1_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_R_N_reserved1_BITS 7
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_R_N_reserved1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE1_R_N :: byte_sel [08:08] */
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_R_N_byte_sel_MASK 0x00000100
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_R_N_byte_sel_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_R_N_byte_sel_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_R_N_byte_sel_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE1_R_N :: reserved2 [07:06] */
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_R_N_reserved2_MASK 0x000000c0
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_R_N_reserved2_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_R_N_reserved2_BITS 2
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_R_N_reserved2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE1_R_N :: ovr_step [05:00] */
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_R_N_ovr_step_MASK 0x0000003f
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_R_N_ovr_step_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_R_N_ovr_step_BITS 6
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_R_N_ovr_step_SHIFT 0

/***************************************************************************
 *DYN_VDL_OVRIDE_BYTE1_BIT_R_P - Read DQ-P VDL dynamic override control register
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE1_BIT_R_P :: reserved0 [31:17] */
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_R_P_reserved0_MASK 0xfffe0000
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_R_P_reserved0_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_R_P_reserved0_BITS 15
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_R_P_reserved0_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE1_BIT_R_P :: ovr_en [16:16] */
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_R_P_ovr_en_MASK 0x00010000
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_R_P_ovr_en_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_R_P_ovr_en_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_R_P_ovr_en_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE1_BIT_R_P :: reserved1 [15:09] */
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_R_P_reserved1_MASK 0x0000fe00
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_R_P_reserved1_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_R_P_reserved1_BITS 7
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_R_P_reserved1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE1_BIT_R_P :: byte_sel [08:08] */
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_R_P_byte_sel_MASK 0x00000100
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_R_P_byte_sel_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_R_P_byte_sel_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_R_P_byte_sel_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE1_BIT_R_P :: reserved2 [07:06] */
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_R_P_reserved2_MASK 0x000000c0
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_R_P_reserved2_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_R_P_reserved2_BITS 2
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_R_P_reserved2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE1_BIT_R_P :: ovr_step [05:00] */
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_R_P_ovr_step_MASK 0x0000003f
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_R_P_ovr_step_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_R_P_ovr_step_BITS 6
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_R_P_ovr_step_SHIFT 0

/***************************************************************************
 *DYN_VDL_OVRIDE_BYTE1_BIT_R_N - Read DQ-N VDL dynamic override control register
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE1_BIT_R_N :: reserved0 [31:17] */
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_R_N_reserved0_MASK 0xfffe0000
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_R_N_reserved0_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_R_N_reserved0_BITS 15
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_R_N_reserved0_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE1_BIT_R_N :: ovr_en [16:16] */
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_R_N_ovr_en_MASK 0x00010000
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_R_N_ovr_en_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_R_N_ovr_en_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_R_N_ovr_en_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE1_BIT_R_N :: reserved1 [15:09] */
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_R_N_reserved1_MASK 0x0000fe00
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_R_N_reserved1_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_R_N_reserved1_BITS 7
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_R_N_reserved1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE1_BIT_R_N :: byte_sel [08:08] */
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_R_N_byte_sel_MASK 0x00000100
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_R_N_byte_sel_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_R_N_byte_sel_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_R_N_byte_sel_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE1_BIT_R_N :: reserved2 [07:06] */
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_R_N_reserved2_MASK 0x000000c0
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_R_N_reserved2_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_R_N_reserved2_BITS 2
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_R_N_reserved2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE1_BIT_R_N :: ovr_step [05:00] */
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_R_N_ovr_step_MASK 0x0000003f
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_R_N_ovr_step_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_R_N_ovr_step_BITS 6
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_R_N_ovr_step_SHIFT 0

/***************************************************************************
 *DYN_VDL_OVRIDE_BYTE1_W - Write DQ Byte VDL dynamic override control register
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE1_W :: reserved0 [31:17] */
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_W_reserved0_MASK 0xfffe0000
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_W_reserved0_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_W_reserved0_BITS 15
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_W_reserved0_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE1_W :: ovr_en [16:16] */
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_W_ovr_en_MASK 0x00010000
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_W_ovr_en_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_W_ovr_en_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_W_ovr_en_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE1_W :: reserved1 [15:09] */
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_W_reserved1_MASK 0x0000fe00
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_W_reserved1_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_W_reserved1_BITS 7
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_W_reserved1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE1_W :: byte_sel [08:08] */
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_W_byte_sel_MASK 0x00000100
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_W_byte_sel_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_W_byte_sel_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_W_byte_sel_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE1_W :: reserved2 [07:06] */
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_W_reserved2_MASK 0x000000c0
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_W_reserved2_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_W_reserved2_BITS 2
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_W_reserved2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE1_W :: ovr_step [05:00] */
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_W_ovr_step_MASK 0x0000003f
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_W_ovr_step_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_W_ovr_step_BITS 6
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_W_ovr_step_SHIFT 0

/***************************************************************************
 *DYN_VDL_OVRIDE_BYTE1_BIT_W - Write DQ Bit VDL dynamic override control register
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE1_BIT_W :: reserved0 [31:17] */
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_W_reserved0_MASK 0xfffe0000
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_W_reserved0_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_W_reserved0_BITS 15
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_W_reserved0_SHIFT 17

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE1_BIT_W :: ovr_en [16:16] */
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_W_ovr_en_MASK 0x00010000
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_W_ovr_en_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_W_ovr_en_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_W_ovr_en_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE1_BIT_W :: reserved1 [15:09] */
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_W_reserved1_MASK 0x0000fe00
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_W_reserved1_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_W_reserved1_BITS 7
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_W_reserved1_SHIFT 9

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE1_BIT_W :: byte_sel [08:08] */
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_W_byte_sel_MASK 0x00000100
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_W_byte_sel_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_W_byte_sel_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_W_byte_sel_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE1_BIT_W :: reserved2 [07:06] */
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_W_reserved2_MASK 0x000000c0
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_W_reserved2_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_W_reserved2_BITS 2
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_W_reserved2_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: DYN_VDL_OVRIDE_BYTE1_BIT_W :: ovr_step [05:00] */
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_W_ovr_step_MASK 0x0000003f
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_W_ovr_step_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_W_ovr_step_BITS 6
#define BCHP_DDR40_PHY_WORD_LANE_0_DYN_VDL_OVRIDE_BYTE1_BIT_W_ovr_step_SHIFT 0

/***************************************************************************
 *READ_DATA_DLY - Word Lane read channel control register
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: READ_DATA_DLY :: reserved0 [31:03] */
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_DATA_DLY_reserved0_MASK    0xfffffff8
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_DATA_DLY_reserved0_ALIGN   0
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_DATA_DLY_reserved0_BITS    29
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_DATA_DLY_reserved0_SHIFT   3

/* DDR40_PHY_WORD_LANE_0 :: READ_DATA_DLY :: rd_data_dly [02:00] */
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_DATA_DLY_rd_data_dly_MASK  0x00000007
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_DATA_DLY_rd_data_dly_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_DATA_DLY_rd_data_dly_BITS  3
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_DATA_DLY_rd_data_dly_SHIFT 0

/***************************************************************************
 *READ_CONTROL - Word Lane read channel control register
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: READ_CONTROL :: reserved0 [31:03] */
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_CONTROL_reserved0_MASK     0xfffffff8
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_CONTROL_reserved0_ALIGN    0
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_CONTROL_reserved0_BITS     29
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_CONTROL_reserved0_SHIFT    3

/* DDR40_PHY_WORD_LANE_0 :: READ_CONTROL :: dq_odt_enable [02:02] */
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_CONTROL_dq_odt_enable_MASK 0x00000004
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_CONTROL_dq_odt_enable_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_CONTROL_dq_odt_enable_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_CONTROL_dq_odt_enable_SHIFT 2

/* DDR40_PHY_WORD_LANE_0 :: READ_CONTROL :: dq_odt_te_adj [01:01] */
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_CONTROL_dq_odt_te_adj_MASK 0x00000002
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_CONTROL_dq_odt_te_adj_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_CONTROL_dq_odt_te_adj_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_CONTROL_dq_odt_te_adj_SHIFT 1

/* DDR40_PHY_WORD_LANE_0 :: READ_CONTROL :: dq_odt_le_adj [00:00] */
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_CONTROL_dq_odt_le_adj_MASK 0x00000001
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_CONTROL_dq_odt_le_adj_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_CONTROL_dq_odt_le_adj_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_CONTROL_dq_odt_le_adj_SHIFT 0

/***************************************************************************
 *READ_FIFO_DATA_BL0_0 - Read fifo data register, first data
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: READ_FIFO_DATA_BL0_0 :: reserved0 [31:16] */
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL0_0_reserved0_MASK 0xffff0000
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL0_0_reserved0_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL0_0_reserved0_BITS 16
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL0_0_reserved0_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: READ_FIFO_DATA_BL0_0 :: data_p [15:08] */
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL0_0_data_p_MASK 0x0000ff00
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL0_0_data_p_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL0_0_data_p_BITS 8
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL0_0_data_p_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: READ_FIFO_DATA_BL0_0 :: data_n [07:00] */
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL0_0_data_n_MASK 0x000000ff
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL0_0_data_n_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL0_0_data_n_BITS 8
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL0_0_data_n_SHIFT 0

/***************************************************************************
 *READ_FIFO_DATA_BL0_1 - Read fifo data register, second data
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: READ_FIFO_DATA_BL0_1 :: reserved0 [31:16] */
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL0_1_reserved0_MASK 0xffff0000
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL0_1_reserved0_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL0_1_reserved0_BITS 16
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL0_1_reserved0_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: READ_FIFO_DATA_BL0_1 :: data_p [15:08] */
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL0_1_data_p_MASK 0x0000ff00
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL0_1_data_p_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL0_1_data_p_BITS 8
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL0_1_data_p_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: READ_FIFO_DATA_BL0_1 :: data_n [07:00] */
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL0_1_data_n_MASK 0x000000ff
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL0_1_data_n_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL0_1_data_n_BITS 8
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL0_1_data_n_SHIFT 0

/***************************************************************************
 *READ_FIFO_DATA_BL0_2 - Read fifo data register, third data
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: READ_FIFO_DATA_BL0_2 :: reserved0 [31:16] */
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL0_2_reserved0_MASK 0xffff0000
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL0_2_reserved0_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL0_2_reserved0_BITS 16
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL0_2_reserved0_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: READ_FIFO_DATA_BL0_2 :: data_p [15:08] */
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL0_2_data_p_MASK 0x0000ff00
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL0_2_data_p_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL0_2_data_p_BITS 8
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL0_2_data_p_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: READ_FIFO_DATA_BL0_2 :: data_n [07:00] */
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL0_2_data_n_MASK 0x000000ff
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL0_2_data_n_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL0_2_data_n_BITS 8
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL0_2_data_n_SHIFT 0

/***************************************************************************
 *READ_FIFO_DATA_BL0_3 - Read fifo data register, fourth data
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: READ_FIFO_DATA_BL0_3 :: reserved0 [31:16] */
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL0_3_reserved0_MASK 0xffff0000
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL0_3_reserved0_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL0_3_reserved0_BITS 16
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL0_3_reserved0_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: READ_FIFO_DATA_BL0_3 :: data_p [15:08] */
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL0_3_data_p_MASK 0x0000ff00
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL0_3_data_p_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL0_3_data_p_BITS 8
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL0_3_data_p_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: READ_FIFO_DATA_BL0_3 :: data_n [07:00] */
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL0_3_data_n_MASK 0x000000ff
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL0_3_data_n_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL0_3_data_n_BITS 8
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL0_3_data_n_SHIFT 0

/***************************************************************************
 *READ_FIFO_DATA_BL1_0 - Read fifo data register, first data
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: READ_FIFO_DATA_BL1_0 :: reserved0 [31:16] */
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL1_0_reserved0_MASK 0xffff0000
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL1_0_reserved0_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL1_0_reserved0_BITS 16
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL1_0_reserved0_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: READ_FIFO_DATA_BL1_0 :: data_p [15:08] */
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL1_0_data_p_MASK 0x0000ff00
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL1_0_data_p_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL1_0_data_p_BITS 8
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL1_0_data_p_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: READ_FIFO_DATA_BL1_0 :: data_n [07:00] */
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL1_0_data_n_MASK 0x000000ff
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL1_0_data_n_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL1_0_data_n_BITS 8
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL1_0_data_n_SHIFT 0

/***************************************************************************
 *READ_FIFO_DATA_BL1_1 - Read fifo data register, second data
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: READ_FIFO_DATA_BL1_1 :: reserved0 [31:16] */
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL1_1_reserved0_MASK 0xffff0000
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL1_1_reserved0_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL1_1_reserved0_BITS 16
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL1_1_reserved0_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: READ_FIFO_DATA_BL1_1 :: data_p [15:08] */
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL1_1_data_p_MASK 0x0000ff00
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL1_1_data_p_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL1_1_data_p_BITS 8
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL1_1_data_p_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: READ_FIFO_DATA_BL1_1 :: data_n [07:00] */
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL1_1_data_n_MASK 0x000000ff
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL1_1_data_n_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL1_1_data_n_BITS 8
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL1_1_data_n_SHIFT 0

/***************************************************************************
 *READ_FIFO_DATA_BL1_2 - Read fifo data register, third data
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: READ_FIFO_DATA_BL1_2 :: reserved0 [31:16] */
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL1_2_reserved0_MASK 0xffff0000
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL1_2_reserved0_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL1_2_reserved0_BITS 16
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL1_2_reserved0_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: READ_FIFO_DATA_BL1_2 :: data_p [15:08] */
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL1_2_data_p_MASK 0x0000ff00
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL1_2_data_p_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL1_2_data_p_BITS 8
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL1_2_data_p_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: READ_FIFO_DATA_BL1_2 :: data_n [07:00] */
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL1_2_data_n_MASK 0x000000ff
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL1_2_data_n_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL1_2_data_n_BITS 8
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL1_2_data_n_SHIFT 0

/***************************************************************************
 *READ_FIFO_DATA_BL1_3 - Read fifo data register, fourth data
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: READ_FIFO_DATA_BL1_3 :: reserved0 [31:16] */
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL1_3_reserved0_MASK 0xffff0000
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL1_3_reserved0_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL1_3_reserved0_BITS 16
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL1_3_reserved0_SHIFT 16

/* DDR40_PHY_WORD_LANE_0 :: READ_FIFO_DATA_BL1_3 :: data_p [15:08] */
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL1_3_data_p_MASK 0x0000ff00
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL1_3_data_p_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL1_3_data_p_BITS 8
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL1_3_data_p_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: READ_FIFO_DATA_BL1_3 :: data_n [07:00] */
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL1_3_data_n_MASK 0x000000ff
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL1_3_data_n_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL1_3_data_n_BITS 8
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_DATA_BL1_3_data_n_SHIFT 0

/***************************************************************************
 *READ_FIFO_STATUS - Read fifo status register
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: READ_FIFO_STATUS :: reserved0 [31:08] */
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_STATUS_reserved0_MASK 0xffffff00
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_STATUS_reserved0_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_STATUS_reserved0_BITS 24
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_STATUS_reserved0_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: READ_FIFO_STATUS :: status1 [07:04] */
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_STATUS_status1_MASK   0x000000f0
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_STATUS_status1_ALIGN  0
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_STATUS_status1_BITS   4
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_STATUS_status1_SHIFT  4

/* DDR40_PHY_WORD_LANE_0 :: READ_FIFO_STATUS :: status0 [03:00] */
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_STATUS_status0_MASK   0x0000000f
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_STATUS_status0_ALIGN  0
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_STATUS_status0_BITS   4
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_STATUS_status0_SHIFT  0

/***************************************************************************
 *READ_FIFO_CLEAR - Read fifo status clear register
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: READ_FIFO_CLEAR :: reserved0 [31:01] */
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_CLEAR_reserved0_MASK  0xfffffffe
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_CLEAR_reserved0_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_CLEAR_reserved0_BITS  31
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_CLEAR_reserved0_SHIFT 1

/* DDR40_PHY_WORD_LANE_0 :: READ_FIFO_CLEAR :: clear [00:00] */
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_CLEAR_clear_MASK      0x00000001
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_CLEAR_clear_ALIGN     0
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_CLEAR_clear_BITS      1
#define BCHP_DDR40_PHY_WORD_LANE_0_READ_FIFO_CLEAR_clear_SHIFT     0

/***************************************************************************
 *IDLE_PAD_CONTROL - Idle mode SSTL pad control register
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: IDLE_PAD_CONTROL :: idle [31:31] */
#define BCHP_DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_idle_MASK      0x80000000
#define BCHP_DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_idle_ALIGN     0
#define BCHP_DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_idle_BITS      1
#define BCHP_DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_idle_SHIFT     31

/* DDR40_PHY_WORD_LANE_0 :: IDLE_PAD_CONTROL :: reserved0 [30:24] */
#define BCHP_DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_reserved0_MASK 0x7f000000
#define BCHP_DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_reserved0_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_reserved0_BITS 7
#define BCHP_DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_reserved0_SHIFT 24

/* DDR40_PHY_WORD_LANE_0 :: IDLE_PAD_CONTROL :: auto_dq_rxenb_mode [23:22] */
#define BCHP_DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_auto_dq_rxenb_mode_MASK 0x00c00000
#define BCHP_DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_auto_dq_rxenb_mode_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_auto_dq_rxenb_mode_BITS 2
#define BCHP_DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_auto_dq_rxenb_mode_SHIFT 22

/* DDR40_PHY_WORD_LANE_0 :: IDLE_PAD_CONTROL :: auto_dq_iddq_mode [21:20] */
#define BCHP_DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_auto_dq_iddq_mode_MASK 0x00300000
#define BCHP_DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_auto_dq_iddq_mode_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_auto_dq_iddq_mode_BITS 2
#define BCHP_DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_auto_dq_iddq_mode_SHIFT 20

/* DDR40_PHY_WORD_LANE_0 :: IDLE_PAD_CONTROL :: dq_rxenb [19:19] */
#define BCHP_DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_dq_rxenb_MASK  0x00080000
#define BCHP_DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_dq_rxenb_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_dq_rxenb_BITS  1
#define BCHP_DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_dq_rxenb_SHIFT 19

/* DDR40_PHY_WORD_LANE_0 :: IDLE_PAD_CONTROL :: dq_iddq [18:18] */
#define BCHP_DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_dq_iddq_MASK   0x00040000
#define BCHP_DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_dq_iddq_ALIGN  0
#define BCHP_DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_dq_iddq_BITS   1
#define BCHP_DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_dq_iddq_SHIFT  18

/* DDR40_PHY_WORD_LANE_0 :: IDLE_PAD_CONTROL :: dq_reb [17:17] */
#define BCHP_DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_dq_reb_MASK    0x00020000
#define BCHP_DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_dq_reb_ALIGN   0
#define BCHP_DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_dq_reb_BITS    1
#define BCHP_DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_dq_reb_SHIFT   17

/* DDR40_PHY_WORD_LANE_0 :: IDLE_PAD_CONTROL :: dq_oeb [16:16] */
#define BCHP_DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_dq_oeb_MASK    0x00010000
#define BCHP_DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_dq_oeb_ALIGN   0
#define BCHP_DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_dq_oeb_BITS    1
#define BCHP_DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_dq_oeb_SHIFT   16

/* DDR40_PHY_WORD_LANE_0 :: IDLE_PAD_CONTROL :: read_enb_rxenb [15:15] */
#define BCHP_DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_read_enb_rxenb_MASK 0x00008000
#define BCHP_DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_read_enb_rxenb_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_read_enb_rxenb_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_read_enb_rxenb_SHIFT 15

/* DDR40_PHY_WORD_LANE_0 :: IDLE_PAD_CONTROL :: read_enb_iddq [14:14] */
#define BCHP_DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_read_enb_iddq_MASK 0x00004000
#define BCHP_DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_read_enb_iddq_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_read_enb_iddq_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_read_enb_iddq_SHIFT 14

/* DDR40_PHY_WORD_LANE_0 :: IDLE_PAD_CONTROL :: read_enb_reb [13:13] */
#define BCHP_DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_read_enb_reb_MASK 0x00002000
#define BCHP_DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_read_enb_reb_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_read_enb_reb_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_read_enb_reb_SHIFT 13

/* DDR40_PHY_WORD_LANE_0 :: IDLE_PAD_CONTROL :: read_enb_oeb [12:12] */
#define BCHP_DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_read_enb_oeb_MASK 0x00001000
#define BCHP_DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_read_enb_oeb_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_read_enb_oeb_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_read_enb_oeb_SHIFT 12

/* DDR40_PHY_WORD_LANE_0 :: IDLE_PAD_CONTROL :: dqs_rxenb [11:11] */
#define BCHP_DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_dqs_rxenb_MASK 0x00000800
#define BCHP_DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_dqs_rxenb_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_dqs_rxenb_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_dqs_rxenb_SHIFT 11

/* DDR40_PHY_WORD_LANE_0 :: IDLE_PAD_CONTROL :: dqs_iddq [10:10] */
#define BCHP_DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_dqs_iddq_MASK  0x00000400
#define BCHP_DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_dqs_iddq_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_dqs_iddq_BITS  1
#define BCHP_DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_dqs_iddq_SHIFT 10

/* DDR40_PHY_WORD_LANE_0 :: IDLE_PAD_CONTROL :: dqs_reb [09:09] */
#define BCHP_DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_dqs_reb_MASK   0x00000200
#define BCHP_DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_dqs_reb_ALIGN  0
#define BCHP_DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_dqs_reb_BITS   1
#define BCHP_DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_dqs_reb_SHIFT  9

/* DDR40_PHY_WORD_LANE_0 :: IDLE_PAD_CONTROL :: dqs_oeb [08:08] */
#define BCHP_DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_dqs_oeb_MASK   0x00000100
#define BCHP_DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_dqs_oeb_ALIGN  0
#define BCHP_DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_dqs_oeb_BITS   1
#define BCHP_DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_dqs_oeb_SHIFT  8

/* DDR40_PHY_WORD_LANE_0 :: IDLE_PAD_CONTROL :: clk1_rxenb [07:07] */
#define BCHP_DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_clk1_rxenb_MASK 0x00000080
#define BCHP_DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_clk1_rxenb_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_clk1_rxenb_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_clk1_rxenb_SHIFT 7

/* DDR40_PHY_WORD_LANE_0 :: IDLE_PAD_CONTROL :: clk1_iddq [06:06] */
#define BCHP_DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_clk1_iddq_MASK 0x00000040
#define BCHP_DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_clk1_iddq_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_clk1_iddq_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_clk1_iddq_SHIFT 6

/* DDR40_PHY_WORD_LANE_0 :: IDLE_PAD_CONTROL :: clk1_reb [05:05] */
#define BCHP_DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_clk1_reb_MASK  0x00000020
#define BCHP_DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_clk1_reb_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_clk1_reb_BITS  1
#define BCHP_DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_clk1_reb_SHIFT 5

/* DDR40_PHY_WORD_LANE_0 :: IDLE_PAD_CONTROL :: clk1_oeb [04:04] */
#define BCHP_DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_clk1_oeb_MASK  0x00000010
#define BCHP_DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_clk1_oeb_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_clk1_oeb_BITS  1
#define BCHP_DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_clk1_oeb_SHIFT 4

/* DDR40_PHY_WORD_LANE_0 :: IDLE_PAD_CONTROL :: clk0_rxenb [03:03] */
#define BCHP_DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_clk0_rxenb_MASK 0x00000008
#define BCHP_DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_clk0_rxenb_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_clk0_rxenb_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_clk0_rxenb_SHIFT 3

/* DDR40_PHY_WORD_LANE_0 :: IDLE_PAD_CONTROL :: clk0_iddq [02:02] */
#define BCHP_DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_clk0_iddq_MASK 0x00000004
#define BCHP_DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_clk0_iddq_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_clk0_iddq_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_clk0_iddq_SHIFT 2

/* DDR40_PHY_WORD_LANE_0 :: IDLE_PAD_CONTROL :: clk0_reb [01:01] */
#define BCHP_DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_clk0_reb_MASK  0x00000002
#define BCHP_DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_clk0_reb_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_clk0_reb_BITS  1
#define BCHP_DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_clk0_reb_SHIFT 1

/* DDR40_PHY_WORD_LANE_0 :: IDLE_PAD_CONTROL :: clk0_oeb [00:00] */
#define BCHP_DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_clk0_oeb_MASK  0x00000001
#define BCHP_DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_clk0_oeb_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_clk0_oeb_BITS  1
#define BCHP_DDR40_PHY_WORD_LANE_0_IDLE_PAD_CONTROL_clk0_oeb_SHIFT 0

/***************************************************************************
 *DRIVE_PAD_CTL - SSTL pad drive characteristics control register
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: DRIVE_PAD_CTL :: reserved0 [31:10] */
#define BCHP_DDR40_PHY_WORD_LANE_0_DRIVE_PAD_CTL_reserved0_MASK    0xfffffc00
#define BCHP_DDR40_PHY_WORD_LANE_0_DRIVE_PAD_CTL_reserved0_ALIGN   0
#define BCHP_DDR40_PHY_WORD_LANE_0_DRIVE_PAD_CTL_reserved0_BITS    22
#define BCHP_DDR40_PHY_WORD_LANE_0_DRIVE_PAD_CTL_reserved0_SHIFT   10

/* DDR40_PHY_WORD_LANE_0 :: DRIVE_PAD_CTL :: dqs_tx_dis [09:09] */
#define BCHP_DDR40_PHY_WORD_LANE_0_DRIVE_PAD_CTL_dqs_tx_dis_MASK   0x00000200
#define BCHP_DDR40_PHY_WORD_LANE_0_DRIVE_PAD_CTL_dqs_tx_dis_ALIGN  0
#define BCHP_DDR40_PHY_WORD_LANE_0_DRIVE_PAD_CTL_dqs_tx_dis_BITS   1
#define BCHP_DDR40_PHY_WORD_LANE_0_DRIVE_PAD_CTL_dqs_tx_dis_SHIFT  9

/* DDR40_PHY_WORD_LANE_0 :: DRIVE_PAD_CTL :: half_strength_ck [08:08] */
#define BCHP_DDR40_PHY_WORD_LANE_0_DRIVE_PAD_CTL_half_strength_ck_MASK 0x00000100
#define BCHP_DDR40_PHY_WORD_LANE_0_DRIVE_PAD_CTL_half_strength_ck_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_DRIVE_PAD_CTL_half_strength_ck_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_DRIVE_PAD_CTL_half_strength_ck_SHIFT 8

/* DDR40_PHY_WORD_LANE_0 :: DRIVE_PAD_CTL :: half_strength [07:07] */
#define BCHP_DDR40_PHY_WORD_LANE_0_DRIVE_PAD_CTL_half_strength_MASK 0x00000080
#define BCHP_DDR40_PHY_WORD_LANE_0_DRIVE_PAD_CTL_half_strength_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_DRIVE_PAD_CTL_half_strength_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_DRIVE_PAD_CTL_half_strength_SHIFT 7

/* DDR40_PHY_WORD_LANE_0 :: DRIVE_PAD_CTL :: rdqs_en [06:06] */
#define BCHP_DDR40_PHY_WORD_LANE_0_DRIVE_PAD_CTL_rdqs_en_MASK      0x00000040
#define BCHP_DDR40_PHY_WORD_LANE_0_DRIVE_PAD_CTL_rdqs_en_ALIGN     0
#define BCHP_DDR40_PHY_WORD_LANE_0_DRIVE_PAD_CTL_rdqs_en_BITS      1
#define BCHP_DDR40_PHY_WORD_LANE_0_DRIVE_PAD_CTL_rdqs_en_SHIFT     6

/* DDR40_PHY_WORD_LANE_0 :: DRIVE_PAD_CTL :: gddr_symmetry [05:05] */
#define BCHP_DDR40_PHY_WORD_LANE_0_DRIVE_PAD_CTL_gddr_symmetry_MASK 0x00000020
#define BCHP_DDR40_PHY_WORD_LANE_0_DRIVE_PAD_CTL_gddr_symmetry_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_DRIVE_PAD_CTL_gddr_symmetry_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_DRIVE_PAD_CTL_gddr_symmetry_SHIFT 5

/* DDR40_PHY_WORD_LANE_0 :: DRIVE_PAD_CTL :: vddo_volts [04:03] */
#define BCHP_DDR40_PHY_WORD_LANE_0_DRIVE_PAD_CTL_vddo_volts_MASK   0x00000018
#define BCHP_DDR40_PHY_WORD_LANE_0_DRIVE_PAD_CTL_vddo_volts_ALIGN  0
#define BCHP_DDR40_PHY_WORD_LANE_0_DRIVE_PAD_CTL_vddo_volts_BITS   2
#define BCHP_DDR40_PHY_WORD_LANE_0_DRIVE_PAD_CTL_vddo_volts_SHIFT  3

/* DDR40_PHY_WORD_LANE_0 :: DRIVE_PAD_CTL :: rt60b [02:02] */
#define BCHP_DDR40_PHY_WORD_LANE_0_DRIVE_PAD_CTL_rt60b_MASK        0x00000004
#define BCHP_DDR40_PHY_WORD_LANE_0_DRIVE_PAD_CTL_rt60b_ALIGN       0
#define BCHP_DDR40_PHY_WORD_LANE_0_DRIVE_PAD_CTL_rt60b_BITS        1
#define BCHP_DDR40_PHY_WORD_LANE_0_DRIVE_PAD_CTL_rt60b_SHIFT       2

/* DDR40_PHY_WORD_LANE_0 :: DRIVE_PAD_CTL :: rt120b_g [01:01] */
#define BCHP_DDR40_PHY_WORD_LANE_0_DRIVE_PAD_CTL_rt120b_g_MASK     0x00000002
#define BCHP_DDR40_PHY_WORD_LANE_0_DRIVE_PAD_CTL_rt120b_g_ALIGN    0
#define BCHP_DDR40_PHY_WORD_LANE_0_DRIVE_PAD_CTL_rt120b_g_BITS     1
#define BCHP_DDR40_PHY_WORD_LANE_0_DRIVE_PAD_CTL_rt120b_g_SHIFT    1

/* DDR40_PHY_WORD_LANE_0 :: DRIVE_PAD_CTL :: g_ddr [00:00] */
#define BCHP_DDR40_PHY_WORD_LANE_0_DRIVE_PAD_CTL_g_ddr_MASK        0x00000001
#define BCHP_DDR40_PHY_WORD_LANE_0_DRIVE_PAD_CTL_g_ddr_ALIGN       0
#define BCHP_DDR40_PHY_WORD_LANE_0_DRIVE_PAD_CTL_g_ddr_BITS        1
#define BCHP_DDR40_PHY_WORD_LANE_0_DRIVE_PAD_CTL_g_ddr_SHIFT       0

/***************************************************************************
 *CLOCK_PAD_DISABLE - Clock pad disable register
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: CLOCK_PAD_DISABLE :: reserved0 [31:03] */
#define BCHP_DDR40_PHY_WORD_LANE_0_CLOCK_PAD_DISABLE_reserved0_MASK 0xfffffff8
#define BCHP_DDR40_PHY_WORD_LANE_0_CLOCK_PAD_DISABLE_reserved0_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_CLOCK_PAD_DISABLE_reserved0_BITS 29
#define BCHP_DDR40_PHY_WORD_LANE_0_CLOCK_PAD_DISABLE_reserved0_SHIFT 3

/* DDR40_PHY_WORD_LANE_0 :: CLOCK_PAD_DISABLE :: dm_pad_dis [02:02] */
#define BCHP_DDR40_PHY_WORD_LANE_0_CLOCK_PAD_DISABLE_dm_pad_dis_MASK 0x00000004
#define BCHP_DDR40_PHY_WORD_LANE_0_CLOCK_PAD_DISABLE_dm_pad_dis_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_CLOCK_PAD_DISABLE_dm_pad_dis_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_CLOCK_PAD_DISABLE_dm_pad_dis_SHIFT 2

/* DDR40_PHY_WORD_LANE_0 :: CLOCK_PAD_DISABLE :: clk1_pad_dis [01:01] */
#define BCHP_DDR40_PHY_WORD_LANE_0_CLOCK_PAD_DISABLE_clk1_pad_dis_MASK 0x00000002
#define BCHP_DDR40_PHY_WORD_LANE_0_CLOCK_PAD_DISABLE_clk1_pad_dis_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_CLOCK_PAD_DISABLE_clk1_pad_dis_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_CLOCK_PAD_DISABLE_clk1_pad_dis_SHIFT 1

/* DDR40_PHY_WORD_LANE_0 :: CLOCK_PAD_DISABLE :: clk0_pad_dis [00:00] */
#define BCHP_DDR40_PHY_WORD_LANE_0_CLOCK_PAD_DISABLE_clk0_pad_dis_MASK 0x00000001
#define BCHP_DDR40_PHY_WORD_LANE_0_CLOCK_PAD_DISABLE_clk0_pad_dis_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_CLOCK_PAD_DISABLE_clk0_pad_dis_BITS 1
#define BCHP_DDR40_PHY_WORD_LANE_0_CLOCK_PAD_DISABLE_clk0_pad_dis_SHIFT 0

/***************************************************************************
 *WR_PREAMBLE_MODE - Write cycle preamble control register
 ***************************************************************************/
/* DDR40_PHY_WORD_LANE_0 :: WR_PREAMBLE_MODE :: reserved0 [31:02] */
#define BCHP_DDR40_PHY_WORD_LANE_0_WR_PREAMBLE_MODE_reserved0_MASK 0xfffffffc
#define BCHP_DDR40_PHY_WORD_LANE_0_WR_PREAMBLE_MODE_reserved0_ALIGN 0
#define BCHP_DDR40_PHY_WORD_LANE_0_WR_PREAMBLE_MODE_reserved0_BITS 30
#define BCHP_DDR40_PHY_WORD_LANE_0_WR_PREAMBLE_MODE_reserved0_SHIFT 2

/* DDR40_PHY_WORD_LANE_0 :: WR_PREAMBLE_MODE :: long [01:01] */
#define BCHP_DDR40_PHY_WORD_LANE_0_WR_PREAMBLE_MODE_long_MASK      0x00000002
#define BCHP_DDR40_PHY_WORD_LANE_0_WR_PREAMBLE_MODE_long_ALIGN     0
#define BCHP_DDR40_PHY_WORD_LANE_0_WR_PREAMBLE_MODE_long_BITS      1
#define BCHP_DDR40_PHY_WORD_LANE_0_WR_PREAMBLE_MODE_long_SHIFT     1

/* DDR40_PHY_WORD_LANE_0 :: WR_PREAMBLE_MODE :: mode [00:00] */
#define BCHP_DDR40_PHY_WORD_LANE_0_WR_PREAMBLE_MODE_mode_MASK      0x00000001
#define BCHP_DDR40_PHY_WORD_LANE_0_WR_PREAMBLE_MODE_mode_ALIGN     0
#define BCHP_DDR40_PHY_WORD_LANE_0_WR_PREAMBLE_MODE_mode_BITS      1
#define BCHP_DDR40_PHY_WORD_LANE_0_WR_PREAMBLE_MODE_mode_SHIFT     0



/* End of File */
#endif // MDE__H

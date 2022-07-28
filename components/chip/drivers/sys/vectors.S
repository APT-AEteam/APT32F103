/*
 * Copyright (C) 2017-2019 Alibaba Group Holding Limited
 */
 /******************************************************************************
 * @file     vectors.S
 * @brief    define default vector handlers. Should use with
 *           GCC for CSKY Embedded Processors
 * @version  V1.0
 * @date     28. Nove 2017
 ******************************************************************************/

//#include <csi_config.h>

/* Enable interrupts when returning from the handler */
#define MSTATUS_PRV1 0x1880
	
	//stack size
	.equ 	STACK_SIZE, CONFIG_ARCH_INTERRUPTSTACK			
	.globl 	STACK_SIZE
	
.section .bss
    .align  2
    .globl  g_trapstackalloc
    .global g_trapstackbase
    .global g_top_trapstack
g_trapstackalloc:
g_trapstackbase:
    .space 512
g_top_trapstack:

    .align 2
    .globl g_trap_sp
    .type  g_trap_sp, object
g_trap_sp:
    .long 0
    .size g_trap_sp, .-g_trap_sp

/******************************************************************************
 * Functions:
 *     void trap(void);
 * default exception handler
 ******************************************************************************/
.text

    .align  2
    .global trap
    .type   trap, %function
trap:
    la      t0, g_trap_sp
    addi    t0, t0, -68
    sw      x1, 0(t0)
    sw      x2, 4(t0)
    sw      x3, 8(t0)
    sw      x4, 12(t0)
    sw      x6, 20(t0)
    sw      x7, 24(t0)
    sw      x8, 28(t0)
    sw      x9, 32(t0)
    sw      x10, 36(t0)
    sw      x11, 40(t0)
    sw      x12, 44(t0)
    sw      x13, 48(t0)
    sw      x14, 52(t0)
    sw      x15, 56(t0)
    csrr    a0, mepc
    sw      a0, 60(t0)
    csrr    a0, mstatus
    sw      a0, 64(t0)

    mv      a0, t0
    lw      t0, -4(sp)
    mv      sp, a0
    sw      t0, 16(sp)

    jal     trap_c


    .align  6
    .weak   Default_Handler
    .global Default_Handler
    .type   Default_Handler, %function
Default_Handler:
    j      trap
    .size   Default_Handler, . - Default_Handler

/*    Macro to define default handlers. Default handler
 *    will be weak symbol and just dead loops. They can be
 *    overwritten by other handlers */
    .macro  def_irq_handler handler_name
    .weak   \handler_name
    .globl  \handler_name
    .set    \handler_name, Default_Handler
    .endm


    def_irq_handler tspend_handler
    def_irq_handler coret_int_handler
//    def_irq_handler syscon_int_handler
//	def_irq_handler ifc_int_handler
//    def_irq_handler adc0_int_handler
//    def_irq_handler epta_int_handler
//	def_irq_handler dma_int_handler
//	def_irq_handler wwdt_int_handler
//	def_irq_handler exi0_int_handler
//    def_irq_handler exi1_int_handler
//    def_irq_handler gpta0_int_handler
//	def_irq_handler rtc_int_handler
//    def_irq_handler usart_int_handler
//	def_irq_handler uart0_int_handler
//    def_irq_handler uart1_int_handler
//    def_irq_handler uart2_int_handler
//	def_irq_handler i2c_int_handler
//    def_irq_handler spi0_int_handler
//    def_irq_handler sio0_int_handler
//	def_irq_handler exi2_3_int_handler
//    def_irq_handler exi4_9_int_handler
//    def_irq_handler exi10_15_int_handler
//	def_irq_handler cnta_int_handler
//	def_irq_handler tkey_int_handler
//	def_irq_handler lpt_int_handler
//	def_irq_handler bt0_int_handler
//	def_irq_handler bt1_int_handler	
	


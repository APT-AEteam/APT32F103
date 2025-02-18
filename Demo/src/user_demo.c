
/*============================================================================
 * Name        : main.c
 * Author      : $(username)
 * Version     : 0.0.0
 * Copyright   : Your copyright notice
 * Description : Simple function in C, Ansi-style
 *============================================================================
 */
/* include ----------------------------------------------------------------*/
#include "demo.h"
#include "pin.h"

uint8_t byFlashData[] = {0x12, 0x34, 0x56, 0x78,0x9a,0xbc, 0xde, 0xff};

void user_demo(void)
{

/// ***************************************************
///  GPIO相关示例代码
///  gpio_xxx适用于多个pin同时配置和操作的情况
///  pin_xxx适用于单独对一个pin进行配置和操作的情况
/// ***************************************************	
//	gpio_port_ouput_demo();
//	gpio_port_input_demo();
//	gpio_port_irq_demo();
//	pin_output_demo();
//	pin_input_demo();
//	pin_irq_demo();
//	pin_ioremap_demo();
	
/// ***************************************************
///  通过PA02输出系统时钟，主要用于调试。
///  同时示例管脚功能配置的方法。
/// ***************************************************	
//	csi_pin_set_mux(PA02, PA02_CLO);
//	csi_clo_config(CLO_HCLK, CLO_DIV2);
	
/// ***************************************************
///  系统可靠性相关的示例代码
/// ***************************************************
//	lvd_demo();
//	lvr_demo();
//	memorycheck_demo();
//	emcm_demo();

/// ***************************************************
/// IWDT相关的示例代码
/// ***************************************************
//	iwdt_normal_demo();
//	iwdt_irq_demo();

/// ***************************************************
/// WWDT相关的示例代码
/// ***************************************************
//	wwdt_demo();
	
/// ***************************************************
///  flash相关的示例代码
/// ***************************************************	
//	ifc_read();
//	ifc_program();
	
/// ***************************************************
///  RTC相关的示例代码
/// ***************************************************
//	rtc_set_time_demo();
//	rtc_alarm_demo();
//	rtc_timer_demo();
//	rtc_trgev_demo();

/// ***************************************************
///  低功耗相关的示例代码
/// ***************************************************
//	lp_wakeup_demo();
//	lp_lpt_wakeup_deepsleep_demo();
	
/// ***************************************************
///  BT相关的示例代码
/// ***************************************************
//	bt_timer_demo();
//	bt_pwm_demo();
//	bt_sync_trg_start_demo();
//	bt_sync_trg_count_demo();
//	bt_sync_trg_stop_demo();
//	bt_trg_out_demo();
//	bt_soft_trg_out_demo();

/// ***************************************************
///  LPT相关的示例代码
/// ***************************************************
//	lpt_timer_demo();
//	lpt_pwm_demo();

/// ***************************************************
///  Counter A相关的示例代码
/// ***************************************************
//	cnta_timer_demo();
//	cnta_pwm_demo();
	
/// ***************************************************
///  GPTA相关的示例代码
/// ***************************************************
//	gpta_capture_demo();
//	gpta_pwm_demo();

/// ***************************************************
///  EPT相关的示例代码
/// ***************************************************
//	ept_capture_demo();
//	ept_pwm_demo();
//	ept_pwm_dz_demo();
//	ept_pwm_dz_em_demo();
	
/// ***************************************************
///  ADC相关的示例代码
/// ***************************************************
//	adc_samp_oneshot_demo();
//	adc_samp_continuous_demo();
//	adc_samp_oneshot_int_demo();
//	adc_samp_continuous_int_demo();
//	adc_samp_continuous_dma_transfer_demo();
	
/// ***************************************************
///  CRC相关的示例代码
/// ***************************************************
//	crc_demo();
	
/// ***************************************************
///  ETCB相关的示例代码
/// ***************************************************
//	etcb_one_trg_one_demo0();
//	etcb_one_trg_one_demo1();
//	etcb_one_trg_more_demo();
//	etcb_more_trg_one_demo();
//	etcb_mix_demo();

/// ***************************************************
///  UART相关的示例代码
/// ***************************************************
//	uart_char_demo();
//	uart_send_demo();
//	uart_send_int_demo();
//	uart_receive_demo();
//	uart_recv_rx_int_demo();
//	uart_recv_rxfifo_int_demo();
//	uart_send_dma_demo();
//	uart_recv_dma_demo();

/// ***************************************************
///  USART相关的示例代码
/// ***************************************************
//	usart_char_demo();
//	usart_send_demo();
//	usart_send_int_demo();
//	usart_recv_demo();
//	usart_recv_rx_int_demo();
//	usart_recv_rxfifo_int_demo();
//	usart_send_dma_demo();  
//	usart_recv_dma_demo();
//	
//	lin_send_test();        
//	lin_send_recv_test();

/// ***************************************************
///  IIC相关的示例代码
/// ***************************************************
//	iic_master_demo();
//	iic_master_slave_demo();
//	iic_slave_demo();
//	
/// ***************************************************
///  SIO相关的示例代码
/// ***************************************************
//	sio_led_rgb_demo();
//	sio_led_rgb_recv_rxfull_demo();
//	sio_led_rgb_recv_rxdone_demo();
//	sio_hdq_send_demo();
//	sio_hdq_recv_wrcmd_demo();
//	sio_hdq_send_recv_demo();
//	sio_hdq_recv_rdcmd_demo();
	
/// ***************************************************
///  SPI相关的示例代码
/// ***************************************************
//	spi_master_send_demo();
//	spi_master_send_int_demo();
//	spi_slave_receive_int_demo();
//	spi_master_send_receive_demo();
//	spi_slave_send_receive_int_demo();
//	spi_etcb_dma_send();
//	spi_etcb_dma_send_receive();          
	
/// ***************************************************
///  TKEY相关的示例代码
/// ***************************************************
//	tkey_demo();

}


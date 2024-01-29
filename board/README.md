# board组件信息
系统初始化，板级配置参数，ld文件，svc文件等，依赖于CHIP组件

# Release Notes
======================================================
Version: V1.2.0
Release Date: 2024.1.25

Release Notes
1.touch key库升级到V1.0.1
2.usart/uart中断处理更新
3.增加printf和atof文件，防止调用print类函数占用空间过大
4.修复lp——demo中的exi唤醒的bug
5.将interrupt.c从board组件移到工程组件下
6.在工程配置中增加CONFIG_IRQ_LOOKUP=1，默认使用中断查表法
7.ifc中断前先清相应的标志位/增加使能IFC clk；只校验USEROPTION这一个地址
8.图形化更新，支持sio外所有外设
9.添加ADC OFFSET校准静态库及校准函数adc0_offset_trim
10.修改link文件，使得0x104地址为0
======================================================
Version: V1.1.0
Release Date: 2023.8.14

Release Notes
1.touch key新增跳频版本库
2.touch key修复原有多次变量移位的问题
======================================================
Version: V1.0.0
Release Date: 2023.8.3

Release Notes

1.TouchKey驱动更新
2.增加GUI组件，适用CDK版本2.20.0
======================================================
Version: V0.0.1
Release Date: 2023.1.4

Release Notes

TouchKey驱动修改
======================================================
Version: V0.0.0
Release Date: 2023.1.3

Release Notes
初始版本。
======================================================
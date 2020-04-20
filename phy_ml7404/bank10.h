/****************************************************************************************/
/**
   @file     bank10.h

   @brief    RF LSI register information header file
   @version  V1.00
   @date     26. Feb. 2018

   @copyright    Copyright (C) 2018 LAPIS Semiconductor Co., Ltd. All rights reserved.

   @par  
        This software is provided "as is" and any expressed or implied
         warranties, including, but not limited to, the implied warranties of
         merchantability and fitness for a particular purpose are disclaimed.
         LAPIS Semiconductor shall not be liable for any direct, indirect, consequential or 
         incidental damages arising from using or modifying this software.
         You (customer) can modify and use this software in whole or part on
         your own responsibility, only for the purpose of developing the software
         for use with microcontroller manufactured by LAPIS Semiconductor.
    
*******************************************************************************************/
#ifndef _bank10_H
#define _bank10_H

/**
    \addtogroup RF_REGISTER_BANK10
    \{
*/
 
/*�mBANK10 Register Address Definitions�bBANK10���W�X�^�A�h���X��`�n*/
#define RADIO_BPSK_STEP_CTRL_ADR        (0x01u)     /*!< �m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����ݒ�(@ref RADIO_BPSK_STEP_CTRL_T �^�ŃA�N�Z�X)�n */
#define RADIO_BPSK_STEP_CLK_SET_ADR     (0x02u)     /*!< �m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����N���b�N�ݒ�(@ref RADIO_BPSK_STEP_CLK_SET_T �^�ŃA�N�Z�X)�n */
#define RADIO_NONPUBLIC_B10_ADR03       (0x03u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_BPSK_STEP_SET0_ADR        (0x04u)     /*!< �m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����ݒ�0(@ref RADIO_BPSK_STEP_SET0_T �^�ŃA�N�Z�X)�n */
#define RADIO_BPSK_STEP_SET1_ADR        (0x05u)     /*!< �m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����ݒ�1(@ref RADIO_BPSK_STEP_SET1_T �^�ŃA�N�Z�X)�n */
#define RADIO_BPSK_STEP_SET2_ADR        (0x06u)     /*!< �m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����ݒ�2(@ref RADIO_BPSK_STEP_SET2_T �^�ŃA�N�Z�X)�n */
#define RADIO_BPSK_STEP_SET3_ADR        (0x07u)     /*!< �m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����ݒ�3(@ref RADIO_BPSK_STEP_SET3_T �^�ŃA�N�Z�X)�n */
#define RADIO_BPSK_STEP_SET4_ADR        (0x08u)     /*!< �m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����ݒ�4(@ref RADIO_BPSK_STEP_SET4_T �^�ŃA�N�Z�X)�n */
#define RADIO_BPSK_STEP_SET5_ADR        (0x09u)     /*!< �m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����ݒ�5(@ref RADIO_BPSK_STEP_SET5_T �^�ŃA�N�Z�X)�n */
#define RADIO_BPSK_STEP_SET6_ADR        (0x0Au)     /*!< �m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����ݒ�6(@ref RADIO_BPSK_STEP_SET6_T �^�ŃA�N�Z�X)�n */
#define RADIO_BPSK_STEP_SET7_ADR        (0x0Bu)     /*!< �m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����ݒ�7(@ref RADIO_BPSK_STEP_SET7_T �^�ŃA�N�Z�X)�n */
#define RADIO_BPSK_STEP_SET8_ADR        (0x0Cu)     /*!< �m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����ݒ�8(@ref RADIO_BPSK_STEP_SET8_T �^�ŃA�N�Z�X)�n */
#define RADIO_BPSK_STEP_SET9_ADR        (0x0Du)     /*!< �m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����ݒ�9(@ref RADIO_BPSK_STEP_SET9_T �^�ŃA�N�Z�X)�n */
#define RADIO_BPSK_STEP_SET10_ADR       (0x0Eu)     /*!< �m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����ݒ�10(@ref RADIO_BPSK_STEP_SET10_T �^�ŃA�N�Z�X)�n */
#define RADIO_BPSK_STEP_SET11_ADR       (0x0Fu)     /*!< �m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����ݒ�11(@ref RADIO_BPSK_STEP_SET11_T �^�ŃA�N�Z�X)�n */
#define RADIO_BPSK_STEP_SET12_ADR       (0x10u)     /*!< �m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����ݒ�12(@ref RADIO_BPSK_STEP_SET12_T �^�ŃA�N�Z�X)�n */
#define RADIO_BPSK_STEP_SET13_ADR       (0x11u)     /*!< �m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����ݒ�13(@ref RADIO_BPSK_STEP_SET13_T �^�ŃA�N�Z�X)�n */
#define RADIO_BPSK_STEP_SET14_ADR       (0x12u)     /*!< �m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����ݒ�14(@ref RADIO_BPSK_STEP_SET14_T �^�ŃA�N�Z�X)�n */
#define RADIO_BPSK_STEP_SET15_ADR       (0x13u)     /*!< �m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����ݒ�15(@ref RADIO_BPSK_STEP_SET15_T �^�ŃA�N�Z�X)�n */
#define RADIO_BPSK_STEP_SET16_ADR       (0x14u)     /*!< �m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����ݒ�16(@ref RADIO_BPSK_STEP_SET16_T �^�ŃA�N�Z�X)�n */
#define RADIO_BPSK_STEP_SET17_ADR       (0x15u)     /*!< �m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����ݒ�17(@ref RADIO_BPSK_STEP_SET17_T �^�ŃA�N�Z�X)�n */
#define RADIO_BPSK_STEP_SET18_ADR       (0x16u)     /*!< �m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����ݒ�18(@ref RADIO_BPSK_STEP_SET18_T �^�ŃA�N�Z�X)�n */
#define RADIO_BPSK_STEP_SET19_ADR       (0x17u)     /*!< �m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����ݒ�19(@ref RADIO_BPSK_STEP_SET19_T �^�ŃA�N�Z�X)�n */
#define RADIO_BPSK_STEP_SET20_ADR       (0x18u)     /*!< �m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����ݒ�20(@ref RADIO_BPSK_STEP_SET20_T �^�ŃA�N�Z�X)�n */
#define RADIO_BPSK_STEP_SET21_ADR       (0x19u)     /*!< �m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����ݒ�21(@ref RADIO_BPSK_STEP_SET21_T �^�ŃA�N�Z�X)�n */
#define RADIO_BPSK_STEP_SET22_ADR       (0x1Au)     /*!< �m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����ݒ�22(@ref RADIO_BPSK_STEP_SET22_T �^�ŃA�N�Z�X)�n */
#define RADIO_BPSK_STEP_SET23_ADR       (0x1Bu)     /*!< �m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����ݒ�23(@ref RADIO_BPSK_STEP_SET23_T �^�ŃA�N�Z�X)�n */
#define RADIO_BPSK_STEP_SET24_ADR       (0x1Cu)     /*!< �m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����ݒ�24(@ref RADIO_BPSK_STEP_SET24_T �^�ŃA�N�Z�X)�n */
#define RADIO_BPSK_STEP_SET25_ADR       (0x1Du)     /*!< �m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����ݒ�25(@ref RADIO_BPSK_STEP_SET25_T �^�ŃA�N�Z�X)�n */
#define RADIO_BPSK_STEP_SET26_ADR       (0x1Eu)     /*!< �m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����ݒ�26(@ref RADIO_BPSK_STEP_SET26_T �^�ŃA�N�Z�X)�n */
#define RADIO_BPSK_STEP_SET27_ADR       (0x1Fu)     /*!< �m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����ݒ�27(@ref RADIO_BPSK_STEP_SET27_T �^�ŃA�N�Z�X)�n */
#define RADIO_BPSK_STEP_SET28_ADR       (0x20u)     /*!< �m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����ݒ�28(@ref RADIO_BPSK_STEP_SET28_T �^�ŃA�N�Z�X)�n */
#define RADIO_BPSK_STEP_SET29_ADR       (0x21u)     /*!< �m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����ݒ�29(@ref RADIO_BPSK_STEP_SET29_T �^�ŃA�N�Z�X)�n */
#define RADIO_BPSK_STEP_SET30_ADR       (0x22u)     /*!< �m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����ݒ�30(@ref RADIO_BPSK_STEP_SET30_T �^�ŃA�N�Z�X)�n */
#define RADIO_BPSK_STEP_SET31_ADR       (0x23u)     /*!< �m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����ݒ�31(@ref RADIO_BPSK_STEP_SET31_T �^�ŃA�N�Z�X)�n */
#define RADIO_BPSK_STEP_SET32_ADR       (0x24u)     /*!< �m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����ݒ�32(@ref RADIO_BPSK_STEP_SET32_T �^�ŃA�N�Z�X)�n */
#define RADIO_BPSK_STEP_SET33_ADR       (0x25u)     /*!< �m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����ݒ�33(@ref RADIO_BPSK_STEP_SET33_T �^�ŃA�N�Z�X)�n */
#define RADIO_BPSK_STEP_SET34_ADR       (0x26u)     /*!< �m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����ݒ�34(@ref RADIO_BPSK_STEP_SET34_T �^�ŃA�N�Z�X)�n */
#define RADIO_BPSK_STEP_SET35_ADR       (0x27u)     /*!< �m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����ݒ�35(@ref RADIO_BPSK_STEP_SET35_T �^�ŃA�N�Z�X)�n */
#define RADIO_BPSK_STEP_SET36_ADR       (0x28u)     /*!< �m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����ݒ�36(@ref RADIO_BPSK_STEP_SET36_T �^�ŃA�N�Z�X)�n */
#define RADIO_BPSK_STEP_SET37_ADR       (0x29u)     /*!< �m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����ݒ�37(@ref RADIO_BPSK_STEP_SET37_T �^�ŃA�N�Z�X)�n */
#define RADIO_BPSK_STEP_SET38_ADR       (0x2Au)     /*!< �m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����ݒ�38(@ref RADIO_BPSK_STEP_SET38_T �^�ŃA�N�Z�X)�n */
#define RADIO_BPSK_STEP_SET39_ADR       (0x2Bu)     /*!< �m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����ݒ�39(@ref RADIO_BPSK_STEP_SET39_T �^�ŃA�N�Z�X)�n */
#define RADIO_BPSK_STEP_SET40_ADR       (0x2Cu)     /*!< �m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����ݒ�40(@ref RADIO_BPSK_STEP_SET40_T �^�ŃA�N�Z�X)�n */
#define RADIO_BPSK_STEP_SET41_ADR       (0x2Du)     /*!< �m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����ݒ�41(@ref RADIO_BPSK_STEP_SET41_T �^�ŃA�N�Z�X)�n */
#define RADIO_BPSK_STEP_SET42_ADR       (0x2Eu)     /*!< �m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����ݒ�42(@ref RADIO_BPSK_STEP_SET42_T �^�ŃA�N�Z�X)�n */
#define RADIO_BPSK_STEP_SET43_ADR       (0x2Fu)     /*!< �m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����ݒ�43(@ref RADIO_BPSK_STEP_SET43_T �^�ŃA�N�Z�X)�n */
#define RADIO_BPSK_STEP_SET44_ADR       (0x30u)     /*!< �m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����ݒ�44(@ref RADIO_BPSK_STEP_SET44_T �^�ŃA�N�Z�X)�n */
#define RADIO_BPSK_STEP_SET45_ADR       (0x31u)     /*!< �m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����ݒ�45(@ref RADIO_BPSK_STEP_SET45_T �^�ŃA�N�Z�X)�n */
#define RADIO_BPSK_STEP_SET46_ADR       (0x32u)     /*!< �m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����ݒ�46(@ref RADIO_BPSK_STEP_SET46_T �^�ŃA�N�Z�X)�n */
#define RADIO_BPSK_STEP_SET47_ADR       (0x33u)     /*!< �m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����ݒ�47(@ref RADIO_BPSK_STEP_SET47_T �^�ŃA�N�Z�X)�n */
#define RADIO_BPSK_STEP_SET48_ADR       (0x34u)     /*!< �m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����ݒ�48(@ref RADIO_BPSK_STEP_SET48_T �^�ŃA�N�Z�X)�n */
#define RADIO_BPSK_STEP_SET49_ADR       (0x35u)     /*!< �m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����ݒ�49(@ref RADIO_BPSK_STEP_SET49_T �^�ŃA�N�Z�X)�n */
#define RADIO_BPSK_STEP_SET50_ADR       (0x36u)     /*!< �m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����ݒ�50(@ref RADIO_BPSK_STEP_SET50_T �^�ŃA�N�Z�X)�n */
#define RADIO_BPSK_STEP_SET51_ADR       (0x37u)     /*!< �m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����ݒ�51(@ref RADIO_BPSK_STEP_SET51_T �^�ŃA�N�Z�X)�n */
#define RADIO_BPSK_STEP_SET52_ADR       (0x38u)     /*!< �m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����ݒ�52(@ref RADIO_BPSK_STEP_SET52_T �^�ŃA�N�Z�X)�n */
#define RADIO_BPSK_STEP_SET53_ADR       (0x39u)     /*!< �m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����ݒ�53(@ref RADIO_BPSK_STEP_SET53_T �^�ŃA�N�Z�X)�n */
#define RADIO_BPSK_STEP_SET54_ADR       (0x3Au)     /*!< �m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����ݒ�54(@ref RADIO_BPSK_STEP_SET54_T �^�ŃA�N�Z�X)�n */
#define RADIO_BPSK_STEP_SET55_ADR       (0x3Bu)     /*!< �m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����ݒ�55(@ref RADIO_BPSK_STEP_SET55_T �^�ŃA�N�Z�X)�n */
#define RADIO_BPSK_STEP_SET56_ADR       (0x3Cu)     /*!< �m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����ݒ�56(@ref RADIO_BPSK_STEP_SET56_T �^�ŃA�N�Z�X)�n */
#define RADIO_BPSK_STEP_SET57_ADR       (0x3Du)     /*!< �m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����ݒ�57(@ref RADIO_BPSK_STEP_SET57_T �^�ŃA�N�Z�X)�n */
#define RADIO_BPSK_STEP_SET58_ADR       (0x3Eu)     /*!< �m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����ݒ�58(@ref RADIO_BPSK_STEP_SET58_T �^�ŃA�N�Z�X)�n */
#define RADIO_BPSK_STEP_SET59_ADR       (0x3Fu)     /*!< �m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����ݒ�59(@ref RADIO_BPSK_STEP_SET59_T �^�ŃA�N�Z�X)�n */
#define RADIO_PADRV_CTRL_ADR            (0x40u)     /*!< �m�b<in-house>*TODO*�p��bPA�h���C�o����ݒ�(@ref RADIO_PADRV_CTRL_T �^�ŃA�N�Z�X)�n */
#define RADIO_PADRV_ADJ1_ADR            (0x41u)     /*!< �m�b<in-house>*TODO*�p��bPA�h���C�o����1(@ref RADIO_PADRV_ADJ1_T �^�ŃA�N�Z�X)�n */
#define RADIO_PADRV_ADJ2_H_ADR          (0x42u)     /*!< �m�b<in-house>*TODO*�p��bPA�h���C�o����1(��ʃo�C�g)(@ref RADIO_PADRV_ADJ2_H_T �^�ŃA�N�Z�X)�n */
#define RADIO_PADRV_ADJ2_L_ADR          (0x43u)     /*!< �m�b<in-house>*TODO*�p��bPA�h���C�o����1(���ʃo�C�g)(@ref RADIO_PADRV_ADJ2_L_T �^�ŃA�N�Z�X)�n */
#define RADIO_PADRV_CLK_SET_H_ADR       (0x44u)     /*!< �m�b<in-house>*TODO*�p��bPA�h���C�o����p�N���b�N�ݒ�(��ʃo�C�g)(@ref RADIO_PADRV_CLK_SET_H_T �^�ŃA�N�Z�X)�n */
#define RADIO_PADRV_CLK_SET_L_ADR       (0x45u)     /*!< �m�b<in-house>*TODO*�p��bPA�h���C�o����p�N���b�N�ݒ�(���ʃo�C�g)(@ref RADIO_PADRV_CLK_SET_L_T �^�ŃA�N�Z�X)�n */
#define RADIO_PADRV_UP_ADJ_ADR          (0x46u)     /*!< �m�b<in-house>*TODO*�p��bBPSK�h���C�o���䗧���J�n���Ԑݒ�(@ref RADIO_PADRV_UP_ADJ_T �^�ŃA�N�Z�X)�n */
#define RADIO_NONPUBLIC_B10_ADR47       (0x47u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B10_ADR48       (0x48u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B10_ADR49       (0x49u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B10_ADR4A       (0x4Au)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B10_ADR4B       (0x4Bu)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B10_ADR4C       (0x4Cu)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B10_ADR4D       (0x4Du)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B10_ADR4E       (0x4Eu)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B10_ADR4F       (0x4Fu)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B10_ADR50       (0x50u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B10_ADR51       (0x51u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B10_ADR52       (0x52u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B10_ADR53       (0x53u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B10_ADR54       (0x54u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B10_ADR55       (0x55u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B10_ADR56       (0x56u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B10_ADR57       (0x57u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B10_ADR58       (0x58u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B10_ADR59       (0x59u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B10_ADR5A       (0x5Au)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B10_ADR5B       (0x5Bu)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B10_ADR5C       (0x5Cu)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B10_ADR5D       (0x5Du)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B10_ADR5E       (0x5Eu)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B10_ADR5F       (0x5Fu)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B10_ADR60       (0x60u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B10_ADR61       (0x61u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B10_ADR62       (0x62u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B10_ADR63       (0x63u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B10_ADR64       (0x64u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B10_ADR65       (0x65u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B10_ADR66       (0x66u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B10_ADR67       (0x67u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B10_ADR68       (0x68u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B10_ADR69       (0x69u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B10_ADR6A       (0x6Au)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B10_ADR6B       (0x6Bu)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B10_ADR6C       (0x6Cu)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B10_ADR6D       (0x6Du)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B10_ADR6E       (0x6Eu)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B10_ADR6F       (0x6Fu)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B10_ADR70       (0x70u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B10_ADR71       (0x71u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B10_ADR72       (0x72u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B10_ADR73       (0x73u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B10_ADR74       (0x74u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B10_ADR75       (0x75u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B10_ADR76       (0x76u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B10_ADR77       (0x77u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B10_ADR78       (0x78u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B10_ADR79       (0x79u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B10_ADR7A       (0x7Au)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B10_ADR7B       (0x7Bu)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B10_ADR7C       (0x7Cu)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B10_ADR7D       (0x7Du)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B10_ADR7E       (0x7Eu)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B10_ADR7F       (0x7Fu)     /*!< �m�b<in-house>*TODO*�p��b����J�n */

#define BANK_BPSK_STEP_CTRL_ADR        (10)     /*!< �m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����ݒ�(@ref RADIO_BPSK_STEP_CTRL_T �^�ŃA�N�Z�X)�n */
#define BANK_BPSK_STEP_CLK_SET_ADR     (10)     /*!< �m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����N���b�N�ݒ�(@ref RADIO_BPSK_STEP_CLK_SET_T �^�ŃA�N�Z�X)�n */
#define BANK_NONPUBLIC_B10_ADR03       (10)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_BPSK_STEP_SET0_ADR        (10)     /*!< �m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����ݒ�0(@ref RADIO_BPSK_STEP_SET0_T �^�ŃA�N�Z�X)�n */
#define BANK_BPSK_STEP_SET1_ADR        (10)     /*!< �m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����ݒ�1(@ref RADIO_BPSK_STEP_SET1_T �^�ŃA�N�Z�X)�n */
#define BANK_BPSK_STEP_SET2_ADR        (10)     /*!< �m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����ݒ�2(@ref RADIO_BPSK_STEP_SET2_T �^�ŃA�N�Z�X)�n */
#define BANK_BPSK_STEP_SET3_ADR        (10)     /*!< �m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����ݒ�3(@ref RADIO_BPSK_STEP_SET3_T �^�ŃA�N�Z�X)�n */
#define BANK_BPSK_STEP_SET4_ADR        (10)     /*!< �m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����ݒ�4(@ref RADIO_BPSK_STEP_SET4_T �^�ŃA�N�Z�X)�n */
#define BANK_BPSK_STEP_SET5_ADR        (10)     /*!< �m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����ݒ�5(@ref RADIO_BPSK_STEP_SET5_T �^�ŃA�N�Z�X)�n */
#define BANK_BPSK_STEP_SET6_ADR        (10)     /*!< �m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����ݒ�6(@ref RADIO_BPSK_STEP_SET6_T �^�ŃA�N�Z�X)�n */
#define BANK_BPSK_STEP_SET7_ADR        (10)     /*!< �m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����ݒ�7(@ref RADIO_BPSK_STEP_SET7_T �^�ŃA�N�Z�X)�n */
#define BANK_BPSK_STEP_SET8_ADR        (10)     /*!< �m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����ݒ�8(@ref RADIO_BPSK_STEP_SET8_T �^�ŃA�N�Z�X)�n */
#define BANK_BPSK_STEP_SET9_ADR        (10)     /*!< �m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����ݒ�9(@ref RADIO_BPSK_STEP_SET9_T �^�ŃA�N�Z�X)�n */
#define BANK_BPSK_STEP_SET10_ADR       (10)     /*!< �m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����ݒ�10(@ref RADIO_BPSK_STEP_SET10_T �^�ŃA�N�Z�X)�n */
#define BANK_BPSK_STEP_SET11_ADR       (10)     /*!< �m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����ݒ�11(@ref RADIO_BPSK_STEP_SET11_T �^�ŃA�N�Z�X)�n */
#define BANK_BPSK_STEP_SET12_ADR       (10)     /*!< �m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����ݒ�12(@ref RADIO_BPSK_STEP_SET12_T �^�ŃA�N�Z�X)�n */
#define BANK_BPSK_STEP_SET13_ADR       (10)     /*!< �m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����ݒ�13(@ref RADIO_BPSK_STEP_SET13_T �^�ŃA�N�Z�X)�n */
#define BANK_BPSK_STEP_SET14_ADR       (10)     /*!< �m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����ݒ�14(@ref RADIO_BPSK_STEP_SET14_T �^�ŃA�N�Z�X)�n */
#define BANK_BPSK_STEP_SET15_ADR       (10)     /*!< �m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����ݒ�15(@ref RADIO_BPSK_STEP_SET15_T �^�ŃA�N�Z�X)�n */
#define BANK_BPSK_STEP_SET16_ADR       (10)     /*!< �m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����ݒ�16(@ref RADIO_BPSK_STEP_SET16_T �^�ŃA�N�Z�X)�n */
#define BANK_BPSK_STEP_SET17_ADR       (10)     /*!< �m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����ݒ�17(@ref RADIO_BPSK_STEP_SET17_T �^�ŃA�N�Z�X)�n */
#define BANK_BPSK_STEP_SET18_ADR       (10)     /*!< �m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����ݒ�18(@ref RADIO_BPSK_STEP_SET18_T �^�ŃA�N�Z�X)�n */
#define BANK_BPSK_STEP_SET19_ADR       (10)     /*!< �m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����ݒ�19(@ref RADIO_BPSK_STEP_SET19_T �^�ŃA�N�Z�X)�n */
#define BANK_BPSK_STEP_SET20_ADR       (10)     /*!< �m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����ݒ�20(@ref RADIO_BPSK_STEP_SET20_T �^�ŃA�N�Z�X)�n */
#define BANK_BPSK_STEP_SET21_ADR       (10)     /*!< �m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����ݒ�21(@ref RADIO_BPSK_STEP_SET21_T �^�ŃA�N�Z�X)�n */
#define BANK_BPSK_STEP_SET22_ADR       (10)     /*!< �m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����ݒ�22(@ref RADIO_BPSK_STEP_SET22_T �^�ŃA�N�Z�X)�n */
#define BANK_BPSK_STEP_SET23_ADR       (10)     /*!< �m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����ݒ�23(@ref RADIO_BPSK_STEP_SET23_T �^�ŃA�N�Z�X)�n */
#define BANK_BPSK_STEP_SET24_ADR       (10)     /*!< �m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����ݒ�24(@ref RADIO_BPSK_STEP_SET24_T �^�ŃA�N�Z�X)�n */
#define BANK_BPSK_STEP_SET25_ADR       (10)     /*!< �m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����ݒ�25(@ref RADIO_BPSK_STEP_SET25_T �^�ŃA�N�Z�X)�n */
#define BANK_BPSK_STEP_SET26_ADR       (10)     /*!< �m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����ݒ�26(@ref RADIO_BPSK_STEP_SET26_T �^�ŃA�N�Z�X)�n */
#define BANK_BPSK_STEP_SET27_ADR       (10)     /*!< �m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����ݒ�27(@ref RADIO_BPSK_STEP_SET27_T �^�ŃA�N�Z�X)�n */
#define BANK_BPSK_STEP_SET28_ADR       (10)     /*!< �m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����ݒ�28(@ref RADIO_BPSK_STEP_SET28_T �^�ŃA�N�Z�X)�n */
#define BANK_BPSK_STEP_SET29_ADR       (10)     /*!< �m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����ݒ�29(@ref RADIO_BPSK_STEP_SET29_T �^�ŃA�N�Z�X)�n */
#define BANK_BPSK_STEP_SET30_ADR       (10)     /*!< �m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����ݒ�30(@ref RADIO_BPSK_STEP_SET30_T �^�ŃA�N�Z�X)�n */
#define BANK_BPSK_STEP_SET31_ADR       (10)     /*!< �m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����ݒ�31(@ref RADIO_BPSK_STEP_SET31_T �^�ŃA�N�Z�X)�n */
#define BANK_BPSK_STEP_SET32_ADR       (10)     /*!< �m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����ݒ�32(@ref RADIO_BPSK_STEP_SET32_T �^�ŃA�N�Z�X)�n */
#define BANK_BPSK_STEP_SET33_ADR       (10)     /*!< �m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����ݒ�33(@ref RADIO_BPSK_STEP_SET33_T �^�ŃA�N�Z�X)�n */
#define BANK_BPSK_STEP_SET34_ADR       (10)     /*!< �m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����ݒ�34(@ref RADIO_BPSK_STEP_SET34_T �^�ŃA�N�Z�X)�n */
#define BANK_BPSK_STEP_SET35_ADR       (10)     /*!< �m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����ݒ�35(@ref RADIO_BPSK_STEP_SET35_T �^�ŃA�N�Z�X)�n */
#define BANK_BPSK_STEP_SET36_ADR       (10)     /*!< �m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����ݒ�36(@ref RADIO_BPSK_STEP_SET36_T �^�ŃA�N�Z�X)�n */
#define BANK_BPSK_STEP_SET37_ADR       (10)     /*!< �m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����ݒ�37(@ref RADIO_BPSK_STEP_SET37_T �^�ŃA�N�Z�X)�n */
#define BANK_BPSK_STEP_SET38_ADR       (10)     /*!< �m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����ݒ�38(@ref RADIO_BPSK_STEP_SET38_T �^�ŃA�N�Z�X)�n */
#define BANK_BPSK_STEP_SET39_ADR       (10)     /*!< �m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����ݒ�39(@ref RADIO_BPSK_STEP_SET39_T �^�ŃA�N�Z�X)�n */
#define BANK_BPSK_STEP_SET40_ADR       (10)     /*!< �m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����ݒ�40(@ref RADIO_BPSK_STEP_SET40_T �^�ŃA�N�Z�X)�n */
#define BANK_BPSK_STEP_SET41_ADR       (10)     /*!< �m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����ݒ�41(@ref RADIO_BPSK_STEP_SET41_T �^�ŃA�N�Z�X)�n */
#define BANK_BPSK_STEP_SET42_ADR       (10)     /*!< �m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����ݒ�42(@ref RADIO_BPSK_STEP_SET42_T �^�ŃA�N�Z�X)�n */
#define BANK_BPSK_STEP_SET43_ADR       (10)     /*!< �m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����ݒ�43(@ref RADIO_BPSK_STEP_SET43_T �^�ŃA�N�Z�X)�n */
#define BANK_BPSK_STEP_SET44_ADR       (10)     /*!< �m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����ݒ�44(@ref RADIO_BPSK_STEP_SET44_T �^�ŃA�N�Z�X)�n */
#define BANK_BPSK_STEP_SET45_ADR       (10)     /*!< �m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����ݒ�45(@ref RADIO_BPSK_STEP_SET45_T �^�ŃA�N�Z�X)�n */
#define BANK_BPSK_STEP_SET46_ADR       (10)     /*!< �m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����ݒ�46(@ref RADIO_BPSK_STEP_SET46_T �^�ŃA�N�Z�X)�n */
#define BANK_BPSK_STEP_SET47_ADR       (10)     /*!< �m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����ݒ�47(@ref RADIO_BPSK_STEP_SET47_T �^�ŃA�N�Z�X)�n */
#define BANK_BPSK_STEP_SET48_ADR       (10)     /*!< �m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����ݒ�48(@ref RADIO_BPSK_STEP_SET48_T �^�ŃA�N�Z�X)�n */
#define BANK_BPSK_STEP_SET49_ADR       (10)     /*!< �m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����ݒ�49(@ref RADIO_BPSK_STEP_SET49_T �^�ŃA�N�Z�X)�n */
#define BANK_BPSK_STEP_SET50_ADR       (10)     /*!< �m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����ݒ�50(@ref RADIO_BPSK_STEP_SET50_T �^�ŃA�N�Z�X)�n */
#define BANK_BPSK_STEP_SET51_ADR       (10)     /*!< �m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����ݒ�51(@ref RADIO_BPSK_STEP_SET51_T �^�ŃA�N�Z�X)�n */
#define BANK_BPSK_STEP_SET52_ADR       (10)     /*!< �m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����ݒ�52(@ref RADIO_BPSK_STEP_SET52_T �^�ŃA�N�Z�X)�n */
#define BANK_BPSK_STEP_SET53_ADR       (10)     /*!< �m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����ݒ�53(@ref RADIO_BPSK_STEP_SET53_T �^�ŃA�N�Z�X)�n */
#define BANK_BPSK_STEP_SET54_ADR       (10)     /*!< �m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����ݒ�54(@ref RADIO_BPSK_STEP_SET54_T �^�ŃA�N�Z�X)�n */
#define BANK_BPSK_STEP_SET55_ADR       (10)     /*!< �m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����ݒ�55(@ref RADIO_BPSK_STEP_SET55_T �^�ŃA�N�Z�X)�n */
#define BANK_BPSK_STEP_SET56_ADR       (10)     /*!< �m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����ݒ�56(@ref RADIO_BPSK_STEP_SET56_T �^�ŃA�N�Z�X)�n */
#define BANK_BPSK_STEP_SET57_ADR       (10)     /*!< �m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����ݒ�57(@ref RADIO_BPSK_STEP_SET57_T �^�ŃA�N�Z�X)�n */
#define BANK_BPSK_STEP_SET58_ADR       (10)     /*!< �m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����ݒ�58(@ref RADIO_BPSK_STEP_SET58_T �^�ŃA�N�Z�X)�n */
#define BANK_BPSK_STEP_SET59_ADR       (10)     /*!< �m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����ݒ�59(@ref RADIO_BPSK_STEP_SET59_T �^�ŃA�N�Z�X)�n */
#define BANK_PADRV_CTRL_ADR            (10)     /*!< �m�b<in-house>*TODO*�p��bPA�h���C�o����ݒ�(@ref RADIO_PADRV_CTRL_T �^�ŃA�N�Z�X)�n */
#define BANK_PADRV_ADJ1_ADR            (10)     /*!< �m�b<in-house>*TODO*�p��bPA�h���C�o����1(@ref RADIO_PADRV_ADJ1_T �^�ŃA�N�Z�X)�n */
#define BANK_PADRV_ADJ2_H_ADR          (10)     /*!< �m�b<in-house>*TODO*�p��bPA�h���C�o����1(��ʃo�C�g)(@ref RADIO_PADRV_ADJ2_H_T �^�ŃA�N�Z�X)�n */
#define BANK_PADRV_ADJ2_L_ADR          (10)     /*!< �m�b<in-house>*TODO*�p��bPA�h���C�o����1(���ʃo�C�g)(@ref RADIO_PADRV_ADJ2_L_T �^�ŃA�N�Z�X)�n */
#define BANK_PADRV_CLK_SET_H_ADR       (10)     /*!< �m�b<in-house>*TODO*�p��bPA�h���C�o����p�N���b�N�ݒ�(��ʃo�C�g)(@ref RADIO_PADRV_CLK_SET_H_T �^�ŃA�N�Z�X)�n */
#define BANK_PADRV_CLK_SET_L_ADR       (10)     /*!< �m�b<in-house>*TODO*�p��bPA�h���C�o����p�N���b�N�ݒ�(���ʃo�C�g)(@ref RADIO_PADRV_CLK_SET_L_T �^�ŃA�N�Z�X)�n */
#define BANK_PADRV_UP_ADJ_ADR          (10)     /*!< �m�b<in-house>*TODO*�p��bBPSK�h���C�o���䗧���J�n���Ԑݒ�(@ref RADIO_PADRV_UP_ADJ_T �^�ŃA�N�Z�X)�n */
#define BANK_NONPUBLIC_B10_ADR47       (10)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B10_ADR48       (10)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B10_ADR49       (10)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B10_ADR4A       (10)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B10_ADR4B       (10)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B10_ADR4C       (10)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B10_ADR4D       (10)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B10_ADR4E       (10)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B10_ADR4F       (10)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B10_ADR50       (10)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B10_ADR51       (10)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B10_ADR52       (10)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B10_ADR53       (10)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B10_ADR54       (10)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B10_ADR55       (10)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B10_ADR56       (10)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B10_ADR57       (10)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B10_ADR58       (10)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B10_ADR59       (10)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B10_ADR5A       (10)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B10_ADR5B       (10)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B10_ADR5C       (10)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B10_ADR5D       (10)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B10_ADR5E       (10)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B10_ADR5F       (10)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B10_ADR60       (10)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B10_ADR61       (10)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B10_ADR62       (10)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B10_ADR63       (10)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B10_ADR64       (10)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B10_ADR65       (10)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B10_ADR66       (10)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B10_ADR67       (10)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B10_ADR68       (10)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B10_ADR69       (10)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B10_ADR6A       (10)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B10_ADR6B       (10)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B10_ADR6C       (10)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B10_ADR6D       (10)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B10_ADR6E       (10)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B10_ADR6F       (10)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B10_ADR70       (10)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B10_ADR71       (10)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B10_ADR72       (10)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B10_ADR73       (10)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B10_ADR74       (10)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B10_ADR75       (10)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B10_ADR76       (10)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B10_ADR77       (10)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B10_ADR78       (10)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B10_ADR79       (10)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B10_ADR7A       (10)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B10_ADR7B       (10)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B10_ADR7C       (10)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B10_ADR7D       (10)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B10_ADR7E       (10)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B10_ADR7F       (10)     /*!< �m�b<in-house>*TODO*�p��b����J�n */


/* �mRF register structures�bRF���W�X�^�\���́n */

/** @brief �mType definition for @ref RADIO_BPSK_STEP_CTRL_ADR access�b@ref RADIO_BPSK_STEP_CTRL_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t bpsk_clk_set:       1;      /*!<�m�b<in-house>*TODO*�p��b�X�e�b�v����N���b�N�����ݒ� R/W�n*/
        uint8_t reserved0:          3;      /*!<�m�b<in-house>*TODO*�p��b�\�� R�n*/
        uint8_t bpsk_step_en:       1;      /*!<�m�b<in-house>*TODO*�p��b�X�e�b�v����C�l�[�u���ݒ� R/W�n*/
        uint8_t bpsk_step_sel:      1;      /*!<�m�b<in-house>*TODO*�p��b�X�e�b�v����@�\�I��ݒ� R/W�n*/
        uint8_t bpsk_clk_sel:       1;      /*!<�m�b<in-house>*TODO*�p��b�X�e�b�v����N���b�N�I��ݒ� R/W�n*/
        uint8_t reserved1:          1;      /*!<�m�b<in-house>*TODO*�p��b�\�� R�n*/
    }bits;
    uint8_t byte;
}RADIO_BPSK_STEP_CTRL_T;

/** @brief �mType definition for @ref RADIO_BPSK_STEP_CLK_SET_ADR access�b@ref RADIO_BPSK_STEP_CLK_SET_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t bpsk_clk_set:       8;      /*!<�m�b<in-house>*TODO*�p��b�X�e�b�v����N���b�N�����ݒ� R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_BPSK_STEP_CLK_SET_T;

/** @brief �mType definition for @ref RADIO_BPSK_STEP_SET0_ADR access�b@ref RADIO_BPSK_STEP_SET0_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t step0:              4;      /*!<�m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����0 R/W�n*/
        uint8_t step1:              4;      /*!<�m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����1 R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_BPSK_STEP_SET0_T;

/** @brief �mType definition for @ref RADIO_BPSK_STEP_SET1_ADR access�b@ref RADIO_BPSK_STEP_SET1_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t step2:              4;      /*!<�m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����2 R/W�n*/
        uint8_t step3:              4;      /*!<�m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����3 R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_BPSK_STEP_SET1_T;

/** @brief �mType definition for @ref RADIO_BPSK_STEP_SET2_ADR access�b@ref RADIO_BPSK_STEP_SET2_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t step4:              4;      /*!<�m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����4 R/W�n*/
        uint8_t step5:              4;      /*!<�m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����5 R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_BPSK_STEP_SET2_T;

/** @brief �mType definition for @ref RADIO_BPSK_STEP_SET3_ADR access�b@ref RADIO_BPSK_STEP_SET3_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t step6:              4;      /*!<�m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����6 R/W�n*/
        uint8_t step7:              4;      /*!<�m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����7 R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_BPSK_STEP_SET3_T;

/** @brief �mType definition for @ref RADIO_BPSK_STEP_SET4_ADR access�b@ref RADIO_BPSK_STEP_SET4_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t step8:              4;      /*!<�m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����8 R/W�n*/
        uint8_t step9:              4;      /*!<�m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����9 R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_BPSK_STEP_SET4_T;

/** @brief �mType definition for @ref RADIO_BPSK_STEP_SET5_ADR access�b@ref RADIO_BPSK_STEP_SET5_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t step10:             4;      /*!<�m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����10 R/W�n*/
        uint8_t step11:             4;      /*!<�m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����11 R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_BPSK_STEP_SET5_T;

/** @brief �mType definition for @ref RADIO_BPSK_STEP_SET6_ADR access�b@ref RADIO_BPSK_STEP_SET6_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t step12:             4;      /*!<�m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����12 R/W�n*/
        uint8_t step13:             4;      /*!<�m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����13 R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_BPSK_STEP_SET6_T;

/** @brief �mType definition for @ref RADIO_BPSK_STEP_SET7_ADR access�b@ref RADIO_BPSK_STEP_SET7_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t step14:             4;      /*!<�m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����14 R/W�n*/
        uint8_t step15:             4;      /*!<�m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����15 R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_BPSK_STEP_SET7_T;

/** @brief �mType definition for @ref RADIO_BPSK_STEP_SET8_ADR access�b@ref RADIO_BPSK_STEP_SET8_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t step16:             4;      /*!<�m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����16 R/W�n*/
        uint8_t step17:             4;      /*!<�m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����17 R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_BPSK_STEP_SET8_T;

/** @brief �mType definition for @ref RADIO_BPSK_STEP_SET9_ADR access�b@ref RADIO_BPSK_STEP_SET9_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t step18:             4;      /*!<�m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����18 R/W�n*/
        uint8_t step19:             4;      /*!<�m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����19 R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_BPSK_STEP_SET9_T;

/** @brief �mType definition for @ref RADIO_BPSK_STEP_SET10_ADR access�b@ref RADIO_BPSK_STEP_SET10_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t step20:             4;      /*!<�m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����20 R/W�n*/
        uint8_t step21:             4;      /*!<�m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����21 R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_BPSK_STEP_SET10_T;

/** @brief �mType definition for @ref RADIO_BPSK_STEP_SET11_ADR access�b@ref RADIO_BPSK_STEP_SET11_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t step22:             4;      /*!<�m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����22 R/W�n*/
        uint8_t step23:             4;      /*!<�m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����23 R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_BPSK_STEP_SET11_T;

/** @brief �mType definition for @ref RADIO_BPSK_STEP_SET12_ADR access�b@ref RADIO_BPSK_STEP_SET12_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t step24:             4;      /*!<�m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����24 R/W�n*/
        uint8_t step25:             4;      /*!<�m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����25 R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_BPSK_STEP_SET12_T;

/** @brief �mType definition for @ref RADIO_BPSK_STEP_SET13_ADR access�b@ref RADIO_BPSK_STEP_SET13_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t step26:             4;      /*!<�m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����26 R/W�n*/
        uint8_t step27:             4;      /*!<�m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����27 R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_BPSK_STEP_SET13_T;

/** @brief �mType definition for @ref RADIO_BPSK_STEP_SET14_ADR access�b@ref RADIO_BPSK_STEP_SET14_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t step28:             4;      /*!<�m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����28 R/W�n*/
        uint8_t step29:             4;      /*!<�m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����29 R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_BPSK_STEP_SET14_T;

/** @brief �mType definition for @ref RADIO_BPSK_STEP_SET15_ADR access�b@ref RADIO_BPSK_STEP_SET15_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t step30:             4;      /*!<�m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����30 R/W�n*/
        uint8_t step31:             4;      /*!<�m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����31 R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_BPSK_STEP_SET15_T;

/** @brief �mType definition for @ref RADIO_BPSK_STEP_SET16_ADR access�b@ref RADIO_BPSK_STEP_SET16_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t step32:             4;      /*!<�m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����32 R/W�n*/
        uint8_t step33:             4;      /*!<�m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����33 R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_BPSK_STEP_SET16_T;

/** @brief �mType definition for @ref RADIO_BPSK_STEP_SET17_ADR access�b@ref RADIO_BPSK_STEP_SET17_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t step34:             4;      /*!<�m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����34 R/W�n*/
        uint8_t step35:             4;      /*!<�m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����35 R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_BPSK_STEP_SET17_T;

/** @brief �mType definition for @ref RADIO_BPSK_STEP_SET18_ADR access�b@ref RADIO_BPSK_STEP_SET18_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t step36:             4;      /*!<�m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����36 R/W�n*/
        uint8_t step37:             4;      /*!<�m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����37 R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_BPSK_STEP_SET18_T;

/** @brief �mType definition for @ref RADIO_BPSK_STEP_SET19_ADR access�b@ref RADIO_BPSK_STEP_SET19_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t step38:             4;      /*!<�m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����38 R/W�n*/
        uint8_t step39:             4;      /*!<�m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����39 R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_BPSK_STEP_SET19_T;

/** @brief �mType definition for @ref RADIO_BPSK_STEP_SET20_ADR access�b@ref RADIO_BPSK_STEP_SET20_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t step40:             4;      /*!<�m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����40 R/W�n*/
        uint8_t step41:             4;      /*!<�m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����41 R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_BPSK_STEP_SET20_T;

/** @brief �mType definition for @ref RADIO_BPSK_STEP_SET21_ADR access�b@ref RADIO_BPSK_STEP_SET21_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t step42:             4;      /*!<�m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����42 R/W�n*/
        uint8_t step43:             4;      /*!<�m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����43 R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_BPSK_STEP_SET21_T;

/** @brief �mType definition for @ref RADIO_BPSK_STEP_SET22_ADR access�b@ref RADIO_BPSK_STEP_SET22_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t step44:             4;      /*!<�m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����44 R/W�n*/
        uint8_t step45:             4;      /*!<�m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����45 R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_BPSK_STEP_SET22_T;

/** @brief �mType definition for @ref RADIO_BPSK_STEP_SET23_ADR access�b@ref RADIO_BPSK_STEP_SET23_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t step46:             4;      /*!<�m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����46 R/W�n*/
        uint8_t step47:             4;      /*!<�m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����47 R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_BPSK_STEP_SET23_T;

/** @brief �mType definition for @ref RADIO_BPSK_STEP_SET24_ADR access�b@ref RADIO_BPSK_STEP_SET24_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t step48:             4;      /*!<�m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����48 R/W�n*/
        uint8_t step49:             4;      /*!<�m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����49 R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_BPSK_STEP_SET24_T;

/** @brief �mType definition for @ref RADIO_BPSK_STEP_SET25_ADR access�b@ref RADIO_BPSK_STEP_SET25_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t step50:             4;      /*!<�m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����50 R/W�n*/
        uint8_t step51:             4;      /*!<�m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����51 R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_BPSK_STEP_SET25_T;

/** @brief �mType definition for @ref RADIO_BPSK_STEP_SET26_ADR access�b@ref RADIO_BPSK_STEP_SET26_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t step52:             4;      /*!<�m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����52 R/W�n*/
        uint8_t step53:             4;      /*!<�m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����53 R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_BPSK_STEP_SET26_T;

/** @brief �mType definition for @ref RADIO_BPSK_STEP_SET27_ADR access�b@ref RADIO_BPSK_STEP_SET27_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t step54:             4;      /*!<�m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����54 R/W�n*/
        uint8_t step55:             4;      /*!<�m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����55 R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_BPSK_STEP_SET27_T;

/** @brief �mType definition for @ref RADIO_BPSK_STEP_SET28_ADR access�b@ref RADIO_BPSK_STEP_SET28_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t step56:             4;      /*!<�m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����56 R/W�n*/
        uint8_t step57:             4;      /*!<�m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����57 R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_BPSK_STEP_SET28_T;

/** @brief �mType definition for @ref RADIO_BPSK_STEP_SET29_ADR access�b@ref RADIO_BPSK_STEP_SET29_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t step58:             4;      /*!<�m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����58 R/W�n*/
        uint8_t step59:             4;      /*!<�m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����59 R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_BPSK_STEP_SET29_T;

/** @brief �mType definition for @ref RADIO_BPSK_STEP_SET30_ADR access�b@ref RADIO_BPSK_STEP_SET30_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t step60:             4;      /*!<�m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����60 R/W�n*/
        uint8_t step61:             4;      /*!<�m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����61 R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_BPSK_STEP_SET30_T;

/** @brief �mType definition for @ref RADIO_BPSK_STEP_SET31_ADR access�b@ref RADIO_BPSK_STEP_SET31_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t step62:             4;      /*!<�m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����62 R/W�n*/
        uint8_t step63:             4;      /*!<�m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����63 R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_BPSK_STEP_SET31_T;

/** @brief �mType definition for @ref RADIO_BPSK_STEP_SET32_ADR access�b@ref RADIO_BPSK_STEP_SET32_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t step64:             4;      /*!<�m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����64 R/W�n*/
        uint8_t step65:             4;      /*!<�m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����65 R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_BPSK_STEP_SET32_T;

/** @brief �mType definition for @ref RADIO_BPSK_STEP_SET33_ADR access�b@ref RADIO_BPSK_STEP_SET33_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t step66:             4;      /*!<�m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����66 R/W�n*/
        uint8_t step67:             4;      /*!<�m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����67 R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_BPSK_STEP_SET33_T;

/** @brief �mType definition for @ref RADIO_BPSK_STEP_SET34_ADR access�b@ref RADIO_BPSK_STEP_SET34_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t step68:             4;      /*!<�m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����68 R/W�n*/
        uint8_t step69:             4;      /*!<�m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����69 R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_BPSK_STEP_SET34_T;

/** @brief �mType definition for @ref RADIO_BPSK_STEP_SET35_ADR access�b@ref RADIO_BPSK_STEP_SET35_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t step70:             4;      /*!<�m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����70 R/W�n*/
        uint8_t step71:             4;      /*!<�m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����71 R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_BPSK_STEP_SET35_T;

/** @brief �mType definition for @ref RADIO_BPSK_STEP_SET36_ADR access�b@ref RADIO_BPSK_STEP_SET36_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t step72:             4;      /*!<�m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����72 R/W�n*/
        uint8_t step73:             4;      /*!<�m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����73 R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_BPSK_STEP_SET36_T;

/** @brief �mType definition for @ref RADIO_BPSK_STEP_SET37_ADR access�b@ref RADIO_BPSK_STEP_SET37_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t step74:             4;      /*!<�m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����74 R/W�n*/
        uint8_t step75:             4;      /*!<�m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����75 R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_BPSK_STEP_SET37_T;

/** @brief �mType definition for @ref RADIO_BPSK_STEP_SET38_ADR access�b@ref RADIO_BPSK_STEP_SET38_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t step76:             4;      /*!<�m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����76 R/W�n*/
        uint8_t step77:             4;      /*!<�m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����77 R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_BPSK_STEP_SET38_T;

/** @brief �mType definition for @ref RADIO_BPSK_STEP_SET39_ADR access�b@ref RADIO_BPSK_STEP_SET39_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t step78:             4;      /*!<�m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����78 R/W�n*/
        uint8_t step79:             4;      /*!<�m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����79 R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_BPSK_STEP_SET39_T;

/** @brief �mType definition for @ref RADIO_BPSK_STEP_SET40_ADR access�b@ref RADIO_BPSK_STEP_SET40_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t step80:             4;      /*!<�m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����80 R/W�n*/
        uint8_t step81:             4;      /*!<�m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����81 R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_BPSK_STEP_SET40_T;

/** @brief �mType definition for @ref RADIO_BPSK_STEP_SET41_ADR access�b@ref RADIO_BPSK_STEP_SET41_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t step82:             4;      /*!<�m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����82 R/W�n*/
        uint8_t step83:             4;      /*!<�m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����83 R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_BPSK_STEP_SET41_T;

/** @brief �mType definition for @ref RADIO_BPSK_STEP_SET42_ADR access�b@ref RADIO_BPSK_STEP_SET42_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t step84:             4;      /*!<�m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����84 R/W�n*/
        uint8_t step85:             4;      /*!<�m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����85 R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_BPSK_STEP_SET42_T;

/** @brief �mType definition for @ref RADIO_BPSK_STEP_SET43_ADR access�b@ref RADIO_BPSK_STEP_SET43_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t step86:             4;      /*!<�m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����86 R/W�n*/
        uint8_t step87:             4;      /*!<�m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����87 R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_BPSK_STEP_SET43_T;

/** @brief �mType definition for @ref RADIO_BPSK_STEP_SET44_ADR access�b@ref RADIO_BPSK_STEP_SET44_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t step88:             4;      /*!<�m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����88 R/W�n*/
        uint8_t step89:             4;      /*!<�m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����89 R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_BPSK_STEP_SET44_T;

/** @brief �mType definition for @ref RADIO_BPSK_STEP_SET45_ADR access�b@ref RADIO_BPSK_STEP_SET45_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t step90:             4;      /*!<�m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����90 R/W�n*/
        uint8_t step91:             4;      /*!<�m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����91 R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_BPSK_STEP_SET45_T;

/** @brief �mType definition for @ref RADIO_BPSK_STEP_SET46_ADR access�b@ref RADIO_BPSK_STEP_SET46_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t step92:             4;      /*!<�m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����92 R/W�n*/
        uint8_t step93:             4;      /*!<�m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����93 R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_BPSK_STEP_SET46_T;

/** @brief �mType definition for @ref RADIO_BPSK_STEP_SET47_ADR access�b@ref RADIO_BPSK_STEP_SET47_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t step94:             4;      /*!<�m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����94 R/W�n*/
        uint8_t step95:             4;      /*!<�m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����95 R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_BPSK_STEP_SET47_T;

/** @brief �mType definition for @ref RADIO_BPSK_STEP_SET48_ADR access�b@ref RADIO_BPSK_STEP_SET48_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t step96:             4;      /*!<�m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����96 R/W�n*/
        uint8_t step97:             4;      /*!<�m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����97 R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_BPSK_STEP_SET48_T;

/** @brief �mType definition for @ref RADIO_BPSK_STEP_SET49_ADR access�b@ref RADIO_BPSK_STEP_SET49_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t step98:             4;      /*!<�m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����98 R/W�n*/
        uint8_t step99:             4;      /*!<�m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����99 R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_BPSK_STEP_SET49_T;

/** @brief �mType definition for @ref RADIO_BPSK_STEP_SET50_ADR access�b@ref RADIO_BPSK_STEP_SET50_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t step100:            4;      /*!<�m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����100 R/W�n*/
        uint8_t step101:            4;      /*!<�m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����101 R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_BPSK_STEP_SET50_T;

/** @brief �mType definition for @ref RADIO_BPSK_STEP_SET51_ADR access�b@ref RADIO_BPSK_STEP_SET51_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t step102:            4;      /*!<�m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����102 R/W�n*/
        uint8_t step103:            4;      /*!<�m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����103 R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_BPSK_STEP_SET51_T;

/** @brief �mType definition for @ref RADIO_BPSK_STEP_SET52_ADR access�b@ref RADIO_BPSK_STEP_SET52_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t step104:            4;      /*!<�m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����104 R/W�n*/
        uint8_t step105:            4;      /*!<�m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����105 R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_BPSK_STEP_SET52_T;

/** @brief �mType definition for @ref RADIO_BPSK_STEP_SET53_ADR access�b@ref RADIO_BPSK_STEP_SET53_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t step106:            4;      /*!<�m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����106 R/W�n*/
        uint8_t step107:            4;      /*!<�m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����107 R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_BPSK_STEP_SET53_T;

/** @brief �mType definition for @ref RADIO_BPSK_STEP_SET54_ADR access�b@ref RADIO_BPSK_STEP_SET54_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t step108:            4;      /*!<�m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����108 R/W�n*/
        uint8_t step109:            4;      /*!<�m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����109 R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_BPSK_STEP_SET54_T;

/** @brief �mType definition for @ref RADIO_BPSK_STEP_SET55_ADR access�b@ref RADIO_BPSK_STEP_SET55_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t step110:            4;      /*!<�m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����110 R/W�n*/
        uint8_t step111:            4;      /*!<�m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����111 R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_BPSK_STEP_SET55_T;

/** @brief �mType definition for @ref RADIO_BPSK_STEP_SET56_ADR access�b@ref RADIO_BPSK_STEP_SET56_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t step112:            4;      /*!<�m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����112 R/W�n*/
        uint8_t step113:            4;      /*!<�m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����113 R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_BPSK_STEP_SET56_T;

/** @brief �mType definition for @ref RADIO_BPSK_STEP_SET57_ADR access�b@ref RADIO_BPSK_STEP_SET57_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t step114:            4;      /*!<�m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����114 R/W�n*/
        uint8_t step115:            4;      /*!<�m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����115 R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_BPSK_STEP_SET57_T;

/** @brief �mType definition for @ref RADIO_BPSK_STEP_SET58_ADR access�b@ref RADIO_BPSK_STEP_SET58_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t step116:            4;      /*!<�m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����116 R/W�n*/
        uint8_t step117:            4;      /*!<�m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����117 R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_BPSK_STEP_SET58_T;

/** @brief �mType definition for @ref RADIO_BPSK_STEP_SET59_ADR access�b@ref RADIO_BPSK_STEP_SET59_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t step118:            4;      /*!<�m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����118 R/W�n*/
        uint8_t step119:            4;      /*!<�m�b<in-house>*TODO*�p��bBPSK�X�e�b�v����119 R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_BPSK_STEP_SET59_T;

/** @brief �mType definition for @ref RADIO_PADRV_CTRL_ADR access�b@ref RADIO_PADRV_CTRL_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t padrv_ctrl_en:      1;      /*!<�m�b<in-house>*TODO*�p��bPA�h���C�o����C�l�[�u�� R/W�n*/
        uint8_t padrv_ctrl_sel:     1;      /*!<�m�b<in-house>*TODO*�p��bPA�h���C�o����@�\�I��ݒ� R/W�n*/
        uint8_t reserved0:          2;      /*!<�m�b<in-house>*TODO*�p��b�\�� R�n*/
        uint8_t padrv_dly:          4;      /*!<�m�b<in-house>*TODO*�p��bPA�h���C�o����x���ݒ�(�ݒ�͈�: 2�`15) R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_PADRV_CTRL_T;

/** @brief �mType definition for @ref RADIO_PADRV_ADJ1_ADR access�b@ref RADIO_PADRV_ADJ1_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t padrv_adj1:         3;      /*!<�m�b<in-house>*TODO*�p��bPA�h���C�o����1 R/W�n*/
        uint8_t reserved0:          5;      /*!<�m�b<in-house>*TODO*�p��b�\�� R�n*/
    }bits;
    uint8_t byte;
}RADIO_PADRV_ADJ1_T;

/** @brief �mType definition for @ref RADIO_PADRV_ADJ2_H_ADR access�b@ref RADIO_PADRV_ADJ2_H_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t padrv_adj2_h:       1;      /*!<�m�b<in-house>*TODO*�p��bPA�h���C�o����2 R/W�n*/
        uint8_t padrv_inc:          1;      /*!<�m�b<in-house>*TODO*�p��bPA�h���C�o���`����p�J�E���^�C���N�������g�E�f�N�������g�ݒ� R/W�n*/
        uint8_t reserved0:          6;      /*!<�m�b<in-house>*TODO*�p��b�\�� R�n*/
    }bits;
    uint8_t byte;
}RADIO_PADRV_ADJ2_H_T;

/** @brief �mType definition for @ref RADIO_PADRV_ADJ2_L_ADR access�b@ref RADIO_PADRV_ADJ2_L_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t padrv_adj2_l:       8;      /*!<�m�b<in-house>*TODO*�p��bPA�h���C�o����2(���ʃo�C�g) R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_PADRV_ADJ2_L_T;

/** @brief �mType definition for @ref RADIO_PADRV_CLK_SET_H_ADR access�b@ref RADIO_PADRV_CLK_SET_H_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t padrv_clk_set_h:    1;      /*!<�m�b<in-house>*TODO*�p��bPA �h���C�o����N���b�N�����ݒ� R/W�n*/
        uint8_t reserved0:          6;      /*!<�m�b<in-house>*TODO*�p��b�\�� R�n*/
        uint8_t padrv_clk_step:     1;      /*!<�m�b<in-house>*TODO*�p��bPA �h���C�o���`����N���b�N���g���I��ݒ� R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_PADRV_CLK_SET_H_T;

/** @brief �mType definition for @ref RADIO_PADRV_CLK_SET_L_ADR access�b@ref RADIO_PADRV_CLK_SET_L_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t padrv_clk_set_l:    8;      /*!<�m�b<in-house>*TODO*�p��bPA �h���C�o����N���b�N�����ݒ�(���ʃo�C�g) R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_PADRV_CLK_SET_L_T;

/** @brief �mType definition for @ref RADIO_PADRV_UP_ADJ_ADR access�b@ref RADIO_PADRV_UP_ADJ_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t padrv_up_adj:       6;      /*!<�m�b<in-house>*TODO*�p��bPA �h���C�o���䗧���J�n���Ԑݒ� R/W�n*/
        uint8_t reserved0:          2;      /*!<�m�b<in-house>*TODO*�p��b�\�� R�n*/
    }bits;
    uint8_t byte;
}RADIO_PADRV_UP_ADJ_T;

/** \} */ /* End of group RF_REGISTER_BANK10 */

#endif

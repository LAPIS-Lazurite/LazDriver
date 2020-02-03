/****************************************************************************************/
/**
   @file     bank6.h

   @brief    RF LSI register information header file
   @version  V1.00
   @date     22. Feb. 2018

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
#ifndef _bank6_H
#define _bank6_H

/**
    \addtogroup RF_REGISTER_BANK6
    \{
*/
 
/*�mBANK6 Register Address Definitions�bBANK6���W�X�^�A�h���X��`�n*/
#define RADIO_MOD_CTRL_ADR              (0x01u)     /*!< �m�b<in-house>*TODO*�p��b�ϒ������ݒ�(@ref RADIO_MOD_CTRL_T �^�ŃA�N�Z�X)�n */
#define RADIO_FEC_CTRL_MRR_ADR          (0x02u)     /*!< �m�b<in-house>*TODO*�p��b*TODO*TBD(@ref RADIO_FEC_CTRL_MRR_T �^�ŃA�N�Z�X)�n */
#define RADIO_NONPUBLIC_B6_ADR03        (0x03u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B6_ADR04        (0x04u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B6_ADR05        (0x05u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B6_ADR06        (0x06u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B6_ADR07        (0x07u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B6_ADR08        (0x08u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B6_ADR09        (0x09u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B6_ADR0A        (0x0Au)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B6_ADR0B        (0x0Bu)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B6_ADR0C        (0x0Cu)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B6_ADR0D        (0x0Du)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B6_ADR0E        (0x0Eu)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B6_ADR0F        (0x0Fu)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B6_ADR10        (0x10u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B6_ADR11        (0x11u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B6_ADR12        (0x12u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B6_ADR13        (0x13u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B6_ADR14        (0x14u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B6_ADR15        (0x15u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B6_ADR16        (0x16u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B6_ADR17        (0x17u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B6_ADR18        (0x18u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B6_ADR19        (0x19u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B6_ADR1A        (0x1Au)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B6_ADR1B        (0x1Bu)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B6_ADR1C        (0x1Cu)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B6_ADR1D        (0x1Du)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B6_ADR1E        (0x1Eu)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B6_ADR1F        (0x1Fu)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B6_ADR20        (0x20u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B6_ADR21        (0x21u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B6_ADR22        (0x22u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B6_ADR23        (0x23u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B6_ADR24        (0x24u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B6_ADR25        (0x25u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B6_ADR26        (0x26u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B6_ADR27        (0x27u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B6_ADR28        (0x28u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B6_ADR29        (0x29u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B6_ADR2A        (0x2Au)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B6_ADR2B        (0x2Bu)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B6_ADR2C        (0x2Cu)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B6_ADR2D        (0x2Du)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B6_ADR2E        (0x2Eu)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B6_ADR2F        (0x2Fu)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B6_ADR30        (0x30u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B6_ADR31        (0x31u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B6_ADR32        (0x32u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B6_ADR33        (0x33u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B6_ADR34        (0x34u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B6_ADR35        (0x35u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B6_ADR36        (0x36u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B6_ADR37        (0x37u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B6_ADR38        (0x38u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B6_ADR39        (0x39u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B6_ADR3A        (0x3Au)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B6_ADR3B        (0x3Bu)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B6_ADR3C        (0x3Cu)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B6_ADR3D        (0x3Du)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B6_ADR3E        (0x3Eu)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B6_ADR3F        (0x3Fu)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B6_ADR40        (0x40u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B6_ADR41        (0x41u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B6_ADR42        (0x42u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B6_ADR43        (0x43u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B6_ADR44        (0x44u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B6_ADR45        (0x45u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B6_ADR46        (0x46u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B6_ADR47        (0x47u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B6_ADR48        (0x48u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B6_ADR49        (0x49u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B6_ADR4A        (0x4Au)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B6_ADR4B        (0x4Bu)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B6_ADR4C        (0x4Cu)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B6_ADR4D        (0x4Du)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B6_ADR4E        (0x4Eu)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B6_ADR4F        (0x4Fu)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B6_ADR50        (0x50u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B6_ADR51        (0x51u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B6_ADR52        (0x52u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B6_ADR53        (0x53u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B6_ADR54        (0x54u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B6_ADR55        (0x55u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B6_ADR56        (0x56u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B6_ADR57        (0x57u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B6_ADR58        (0x58u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B6_ADR59        (0x59u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B6_ADR5A        (0x5Au)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B6_ADR5B        (0x5Bu)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B6_ADR5C        (0x5Cu)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B6_ADR5D        (0x5Du)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B6_ADR5E        (0x5Eu)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B6_ADR5F        (0x5Fu)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B6_ADR60        (0x60u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B6_ADR61        (0x61u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B6_ADR62        (0x62u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B6_ADR63        (0x63u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B6_ADR64        (0x64u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B6_ADR65        (0x65u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B6_ADR66        (0x66u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B6_ADR67        (0x67u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B6_ADR68        (0x68u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B6_ADR69        (0x69u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B6_ADR6A        (0x6Au)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B6_ADR6B        (0x6Bu)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B6_ADR6C        (0x6Cu)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B6_ADR6D        (0x6Du)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B6_ADR6E        (0x6Eu)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B6_ADR6F        (0x6Fu)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B6_ADR70        (0x70u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B6_ADR71        (0x71u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B6_ADR72        (0x72u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B6_ADR73        (0x73u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B6_ADR74        (0x74u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B6_ADR75        (0x75u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B6_ADR76        (0x76u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B6_ADR77        (0x77u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B6_ADR78        (0x78u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B6_ADR79        (0x79u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B6_ADR7A        (0x7Au)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_BPSK_PLL_CTRL_ADR         (0x7Bu)     /*!< �m�b<in-house>*TODO*�p��bBPSK�����ݒ�(@ref RADIO_BPSK_PLL_CTRL_T �^�ŃA�N�Z�X)�n */
#define RADIO_BPSK_P_START_H_ADR        (0x7Cu)     /*!< �m�b<in-house>*TODO*�p��bBPSK���g�����䎞�̎��g���ΈʊJ�n���Ԑݒ�(���3�r�b�g)(@ref RADIO_BPSK_P_START_H_T �^�ŃA�N�Z�X)�n */
#define RADIO_BPSK_P_START_L_ADR        (0x7Du)     /*!< �m�b<in-house>*TODO*�p��bBPSK���g�����䎞�̎��g���ΈʊJ�n���Ԑݒ�(���ʃo�C�g)(@ref RADIO_BPSK_P_START_L_T �^�ŃA�N�Z�X)�n */
#define RADIO_BPSK_P_HOLD_H_ADR         (0x7Eu)     /*!< �m�b<in-house>*TODO*�p��bBPSK���g�����䎞�̎��g���Έʕێ����Ԑݒ�(���4�r�b�g)(@ref RADIO_BPSK_P_HOLD_H_T �^�ŃA�N�Z�X)�n */
#define RADIO_BPSK_P_HOLD_L_ADR         (0x7Fu)     /*!< �m�b<in-house>*TODO*�p��bBPSK���g�����䎞�̎��g���Έʕێ����Ԑݒ�(���ʃo�C�g)(@ref RADIO_BPSK_P_HOLD_L_T �^�ŃA�N�Z�X)�n */

#define BANK_MOD_CTRL_ADR              (6)     /*!< �m�b<in-house>*TODO*�p��b�ϒ������ݒ�(@ref RADIO_MOD_CTRL_T �^�ŃA�N�Z�X)�n */
#define BANK_FEC_CTRL_MRR_ADR          (6)     /*!< �m�b<in-house>*TODO*�p��b*TODO*TBD(@ref RADIO_FEC_CTRL_MRR_T �^�ŃA�N�Z�X)�n */
#define BANK_NONPUBLIC_B6_ADR03        (6)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B6_ADR04        (6)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B6_ADR05        (6)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B6_ADR06        (6)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B6_ADR07        (6)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B6_ADR08        (6)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B6_ADR09        (6)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B6_ADR0A        (6)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B6_ADR0B        (6)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B6_ADR0C        (6)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B6_ADR0D        (6)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B6_ADR0E        (6)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B6_ADR0F        (6)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B6_ADR10        (6)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B6_ADR11        (6)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B6_ADR12        (6)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B6_ADR13        (6)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B6_ADR14        (6)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B6_ADR15        (6)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B6_ADR16        (6)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B6_ADR17        (6)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B6_ADR18        (6)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B6_ADR19        (6)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B6_ADR1A        (6)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B6_ADR1B        (6)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B6_ADR1C        (6)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B6_ADR1D        (6)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B6_ADR1E        (6)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B6_ADR1F        (6)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B6_ADR20        (6)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B6_ADR21        (6)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B6_ADR22        (6)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B6_ADR23        (6)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B6_ADR24        (6)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B6_ADR25        (6)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B6_ADR26        (6)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B6_ADR27        (6)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B6_ADR28        (6)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B6_ADR29        (6)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B6_ADR2A        (6)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B6_ADR2B        (6)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B6_ADR2C        (6)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B6_ADR2D        (6)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B6_ADR2E        (6)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B6_ADR2F        (6)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B6_ADR30        (6)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B6_ADR31        (6)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B6_ADR32        (6)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B6_ADR33        (6)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B6_ADR34        (6)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B6_ADR35        (6)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B6_ADR36        (6)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B6_ADR37        (6)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B6_ADR38        (6)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B6_ADR39        (6)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B6_ADR3A        (6)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B6_ADR3B        (6)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B6_ADR3C        (6)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B6_ADR3D        (6)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B6_ADR3E        (6)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B6_ADR3F        (6)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B6_ADR40        (6)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B6_ADR41        (6)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B6_ADR42        (6)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B6_ADR43        (6)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B6_ADR44        (6)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B6_ADR45        (6)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B6_ADR46        (6)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B6_ADR47        (6)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B6_ADR48        (6)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B6_ADR49        (6)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B6_ADR4A        (6)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B6_ADR4B        (6)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B6_ADR4C        (6)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B6_ADR4D        (6)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B6_ADR4E        (6)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B6_ADR4F        (6)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B6_ADR50        (6)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B6_ADR51        (6)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B6_ADR52        (6)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B6_ADR53        (6)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B6_ADR54        (6)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B6_ADR55        (6)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B6_ADR56        (6)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B6_ADR57        (6)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B6_ADR58        (6)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B6_ADR59        (6)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B6_ADR5A        (6)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B6_ADR5B        (6)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B6_ADR5C        (6)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B6_ADR5D        (6)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B6_ADR5E        (6)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B6_ADR5F        (6)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B6_ADR60        (6)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B6_ADR61        (6)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B6_ADR62        (6)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B6_ADR63        (6)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B6_ADR64        (6)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B6_ADR65        (6)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B6_ADR66        (6)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B6_ADR67        (6)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B6_ADR68        (6)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B6_ADR69        (6)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B6_ADR6A        (6)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B6_ADR6B        (6)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B6_ADR6C        (6)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B6_ADR6D        (6)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B6_ADR6E        (6)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B6_ADR6F        (6)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B6_ADR70        (6)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B6_ADR71        (6)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B6_ADR72        (6)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B6_ADR73        (6)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B6_ADR74        (6)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B6_ADR75        (6)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B6_ADR76        (6)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B6_ADR77        (6)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B6_ADR78        (6)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B6_ADR79        (6)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B6_ADR7A        (6)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_BPSK_PLL_CTRL_ADR         (6)     /*!< �m�b<in-house>*TODO*�p��bBPSK�����ݒ�(@ref RADIO_BPSK_PLL_CTRL_T �^�ŃA�N�Z�X)�n */
#define BANK_BPSK_P_START_H_ADR        (6)     /*!< �m�b<in-house>*TODO*�p��bBPSK���g�����䎞�̎��g���ΈʊJ�n���Ԑݒ�(���3�r�b�g)(@ref RADIO_BPSK_P_START_H_T �^�ŃA�N�Z�X)�n */
#define BANK_BPSK_P_START_L_ADR        (6)     /*!< �m�b<in-house>*TODO*�p��bBPSK���g�����䎞�̎��g���ΈʊJ�n���Ԑݒ�(���ʃo�C�g)(@ref RADIO_BPSK_P_START_L_T �^�ŃA�N�Z�X)�n */
#define BANK_BPSK_P_HOLD_H_ADR         (6)     /*!< �m�b<in-house>*TODO*�p��bBPSK���g�����䎞�̎��g���Έʕێ����Ԑݒ�(���4�r�b�g)(@ref RADIO_BPSK_P_HOLD_H_T �^�ŃA�N�Z�X)�n */
#define BANK_BPSK_P_HOLD_L_ADR         (6)     /*!< �m�b<in-house>*TODO*�p��bBPSK���g�����䎞�̎��g���Έʕێ����Ԑݒ�(���ʃo�C�g)(@ref RADIO_BPSK_P_HOLD_L_T �^�ŃA�N�Z�X)�n */


/* �mRF register structures�bRF���W�X�^�\���́n */

/** @brief �mType definition for @ref RADIO_MOD_CTRL_ADR access�b@ref RADIO_MOD_CTRL_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t mod_type:           2;      /*!<�m�b<in-house>*TODO*�p��b�ϒ������ݒ� R/W�n*/
        uint8_t reserved0:          6;      /*!<�m�b<in-house>*TODO*�p��b�\�� R�n*/
    }bits;
    uint8_t byte;
}RADIO_MOD_CTRL_T;

/** @brief �mType definition for @ref RADIO_FEC_CTRL_MRR_ADR access�b@ref RADIO_FEC_CTRL_MRR_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t fec_en:             1;      /*!<�m�b<in-house>*TODO*�p��bFEC�ݒ� R/W�n*/
        uint8_t fec_scheme:         1;      /*!<�m�b<in-house>*TODO*�p��bFEC�����ݒ� R/W�n*/
        uint8_t intlv_en:           1;      /*!<�m�b<in-house>*TODO*�p��b�C���^�[���[�u�ݒ� R/W�n*/
        uint8_t reserved0:          5;      /*!<�m�b<in-house>*TODO*�p��b�\�� R�n*/
    }bits;
    uint8_t byte;
}RADIO_FEC_CTRL_MRR_T;

/** @brief �mType definition for @ref RADIO_BPSK_PLL_CTRL_ADR access�b@ref RADIO_BPSK_PLL_CTRL_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t bpsk_pll_ctrl:      1;      /*!<�m�b<in-house>*TODO*�p��bBPSK�����I��ݒ� R/W�n*/
        uint8_t bpsk_p_clksel:      1;      /*!<�m�b<in-house>*TODO*�p��bBPSK PLL���䎞�̎��g���Έʎ��ԎZ�o�p�N���b�N�I�� R/W�n*/
        uint8_t reserved0:          6;      /*!<�m�b<in-house>*TODO*�p��b�\�� R�n*/
    }bits;
    uint8_t byte;
}RADIO_BPSK_PLL_CTRL_T;

/** @brief �mType definition for @ref RADIO_BPSK_P_START_H_ADR access�b@ref RADIO_BPSK_P_START_H_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t bpsk_p_start_h:     3;      /*!<�m�b<in-house>*TODO*�p��bBPSK ���g�����䎞�̎��g���ΈʊJ�n����(���3�r�b�g) R/W�n*/
        uint8_t reserved0:          5;      /*!<�m�b<in-house>*TODO*�p��b�\�� R�n*/
    }bits;
    uint8_t byte;
}RADIO_BPSK_P_START_H_T;

/** @brief �mType definition for @ref RADIO_BPSK_P_START_L_ADR access�b@ref RADIO_BPSK_P_START_L_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t bpsk_p_start_l:     8;      /*!<�m�b<in-house>*TODO*�p��bBPSK ���g�����䎞�̎��g���ΈʊJ�n����(���ʃo�C�g) R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_BPSK_P_START_L_T;

/** @brief �mType definition for @ref RADIO_BPSK_P_HOLD_H_ADR access�b@ref RADIO_BPSK_P_HOLD_H_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t bpsk_p_hold_h:      4;      /*!<�m�b<in-house>*TODO*�p��bBPSK ���g�����䎞�̎��g���Έʕێ�����(���4�r�b�g) R/W�n*/
        uint8_t reserved0:          4;      /*!<�m�b<in-house>*TODO*�p��b�\�� R�n*/
    }bits;
    uint8_t byte;
}RADIO_BPSK_P_HOLD_H_T;

/** @brief �mType definition for @ref RADIO_BPSK_P_HOLD_L_ADR access�b@ref RADIO_BPSK_P_HOLD_L_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t bpsk_p_hold_l:      8;      /*!<�m�b<in-house>*TODO*�p��bBPSK ���g�����䎞�̎��g���Έʕێ�����(���ʃo�C�g) R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_BPSK_P_HOLD_L_T;

/** \} */ /* End of group RF_REGISTER_BANK6 */
#endif

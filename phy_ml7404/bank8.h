/****************************************************************************************/
/**
   @file     bank8.h

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
#ifndef _bank8_H
#define _bank8_H

/**
    \addtogroup RF_REGISTER_BANK8
    \{
 */
 
/*�mBANK8 Register Address Definitions�bBANK8���W�X�^�A�h���X��`�n*/
#define RADIO_SEARCH_CH_SET_ADR         (0x01u)     /*!< �m�b<in-house>*TODO*�p��b*TODO*TBD(@ref RADIO_SEARCH_CH_SET_T �^�ŃA�N�Z�X)�n */
#define RADIO_SEARCH_CH_EN_ADR          (0x02u)     /*!< �m�b<in-house>*TODO*�p��b*TODO*TBD(@ref RADIO_SEARCH_CH_EN_T �^�ŃA�N�Z�X)�n */
#define RADIO_SEARCH_CH0_ADR            (0x03u)     /*!< �m�b<in-house>*TODO*�p��b*TODO*TBD(@ref RADIO_SEARCH_CH0_T �^�ŃA�N�Z�X)�n */
#define RADIO_SEARCH_CH1_ADR            (0x04u)     /*!< �m�b<in-house>*TODO*�p��b*TODO*TBD(@ref RADIO_SEARCH_CH1_T �^�ŃA�N�Z�X)�n */
#define RADIO_SEARCH_CH2_ADR            (0x05u)     /*!< �m�b<in-house>*TODO*�p��b*TODO*TBD(@ref RADIO_SEARCH_CH2_T �^�ŃA�N�Z�X)�n */
#define RADIO_SEARCH_CH3_ADR            (0x06u)     /*!< �m�b<in-house>*TODO*�p��b*TODO*TBD(@ref RADIO_SEARCH_CH3_T �^�ŃA�N�Z�X)�n */
#define RADIO_SEARCH_CH4_ADR            (0x07u)     /*!< �m�b<in-house>*TODO*�p��b*TODO*TBD(@ref RADIO_SEARCH_CH4_T �^�ŃA�N�Z�X)�n */
#define RADIO_SEARCH_CH5_ADR            (0x08u)     /*!< �m�b<in-house>*TODO*�p��b*TODO*TBD(@ref RADIO_SEARCH_CH5_T �^�ŃA�N�Z�X)�n */
#define RADIO_SEARCH_CH6_ADR            (0x09u)     /*!< �m�b<in-house>*TODO*�p��b*TODO*TBD(@ref RADIO_SEARCH_CH6_T �^�ŃA�N�Z�X)�n */
#define RADIO_SEARCH_CH7_ADR            (0x0Au)     /*!< �m�b<in-house>*TODO*�p��b*TODO*TBD(@ref RADIO_SEARCH_CH7_T �^�ŃA�N�Z�X)�n */
#define RADIO_SRCH_ED_TH_ADR            (0x0Bu)     /*!< �m�b<in-house>*TODO*�p��b*TODO*TBD(@ref RADIO_SRCH_ED_TH_T �^�ŃA�N�Z�X)�n */
#define RADIO_PLL_WAIT_TIMER_ADR        (0x0Cu)     /*!< �m�b<in-house>*TODO*�p��b*TODO*TBD(@ref RADIO_PLL_WAIT_TIMER_T �^�ŃA�N�Z�X)�n */
#define RADIO_ED_WAIT_TIMER_ADR         (0x0Du)     /*!< �m�b<in-house>*TODO*�p��b*TODO*TBD(@ref RADIO_ED_WAIT_TIMER_T �^�ŃA�N�Z�X)�n */
#define RADIO_SYNC_WAIT_TIMER_ADR       (0x0Eu)     /*!< �m�b<in-house>*TODO*�p��b*TODO*TBD(@ref RADIO_SYNC_WAIT_TIMER_T �^�ŃA�N�Z�X)�n */
#define RADIO_SYNC_WAIT_TIMER2_ADR      (0x0Fu)     /*!< �m�b<in-house>*TODO*�p��b*TODO*TBD(@ref RADIO_SYNC_WAIT_TIMER2_T �^�ŃA�N�Z�X)�n */
#define RADIO_SRCH_ED_ANT1_ADR          (0x10u)     /*!< �m�b<in-house>*TODO*�p��b*TODO*TBD(@ref RADIO_SRCH_ED_ANT1_T �^�ŃA�N�Z�X)�n */
#define RADIO_SRCH_ED_ANT2_ADR          (0x11u)     /*!< �m�b<in-house>*TODO*�p��b*TODO*TBD(@ref RADIO_SRCH_ED_ANT2_T �^�ŃA�N�Z�X)�n */
#define RADIO_SRCH_CH_ADR               (0x12u)     /*!< �m�b<in-house>*TODO*�p��b*TODO*TBD(@ref RADIO_SRCH_CH_T �^�ŃA�N�Z�X)�n */
#define RADIO_SRCH_STATE_ADR            (0x13u)     /*!< �m�b<in-house>*TODO*�p��b*TODO*TBD(@ref RADIO_SRCH_STATE_T �^�ŃA�N�Z�X)�n */
#define RADIO_FH_SET_ADR                (0x14u)     /*!< �m�b<in-house>*TODO*�p��b*TODO*TBD(@ref RADIO_FH_SET_T �^�ŃA�N�Z�X)�n */
#define RADIO_FH_MAX_CH_ADR             (0x15u)     /*!< �m�b<in-house>*TODO*�p��b*TODO*TBD(@ref RADIO_FH_MAX_CH_T �^�ŃA�N�Z�X)�n */
#define RADIO_RANDOM_CH_DISP_ADR        (0x16u)     /*!< �m�b<in-house>*TODO*�p��b*TODO*TBD(@ref RADIO_RANDOM_CH_DISP_T �^�ŃA�N�Z�X)�n */
#define RADIO_NONPUBLIC_B8_ADR17        (0x17u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B8_ADR18        (0x18u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B8_ADR19        (0x19u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B8_ADR1A        (0x1Au)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B8_ADR1B        (0x1Bu)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B8_ADR1C        (0x1Cu)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B8_ADR1D        (0x1Du)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B8_ADR1E        (0x1Eu)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B8_ADR1F        (0x1Fu)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B8_ADR20        (0x20u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B8_ADR21        (0x21u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B8_ADR22        (0x22u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B8_ADR23        (0x23u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B8_ADR24        (0x24u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B8_ADR25        (0x25u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B8_ADR26        (0x26u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B8_ADR27        (0x27u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B8_ADR28        (0x28u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B8_ADR29        (0x29u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B8_ADR2A        (0x2Au)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B8_ADR2B        (0x2Bu)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B8_ADR2C        (0x2Cu)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B8_ADR2D        (0x2Du)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B8_ADR2E        (0x2Eu)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B8_ADR2F        (0x2Fu)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B8_ADR30        (0x30u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B8_ADR31        (0x31u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B8_ADR32        (0x32u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B8_ADR33        (0x33u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B8_ADR34        (0x34u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B8_ADR35        (0x35u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B8_ADR36        (0x36u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B8_ADR37        (0x37u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B8_ADR38        (0x38u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B8_ADR39        (0x39u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B8_ADR3A        (0x3Au)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B8_ADR3B        (0x3Bu)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B8_ADR3C        (0x3Cu)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B8_ADR3D        (0x3Du)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B8_ADR3E        (0x3Eu)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B8_ADR3F        (0x3Fu)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B8_ADR40        (0x40u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B8_ADR41        (0x41u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B8_ADR42        (0x42u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B8_ADR43        (0x43u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B8_ADR44        (0x44u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B8_ADR45        (0x45u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B8_ADR46        (0x46u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B8_ADR47        (0x47u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B8_ADR48        (0x48u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B8_ADR49        (0x49u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B8_ADR4A        (0x4Au)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B8_ADR4B        (0x4Bu)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B8_ADR4C        (0x4Cu)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B8_ADR4D        (0x4Du)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B8_ADR4E        (0x4Eu)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B8_ADR4F        (0x4Fu)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B8_ADR50        (0x50u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B8_ADR51        (0x51u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B8_ADR52        (0x52u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B8_ADR53        (0x53u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B8_ADR54        (0x54u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B8_ADR55        (0x55u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B8_ADR56        (0x56u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B8_ADR57        (0x57u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B8_ADR58        (0x58u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B8_ADR59        (0x59u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B8_ADR5A        (0x5Au)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B8_ADR5B        (0x5Bu)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B8_ADR5C        (0x5Cu)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B8_ADR5D        (0x5Du)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B8_ADR5E        (0x5Eu)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B8_ADR5F        (0x5Fu)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B8_ADR60        (0x60u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B8_ADR61        (0x61u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B8_ADR62        (0x62u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B8_ADR63        (0x63u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B8_ADR64        (0x64u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B8_ADR65        (0x65u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B8_ADR66        (0x66u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B8_ADR67        (0x67u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B8_ADR68        (0x68u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B8_ADR69        (0x69u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B8_ADR6A        (0x6Au)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B8_ADR6B        (0x6Bu)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B8_ADR6C        (0x6Cu)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B8_ADR6D        (0x6Du)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B8_ADR6E        (0x6Eu)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B8_ADR6F        (0x6Fu)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B8_ADR70        (0x70u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B8_ADR71        (0x71u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B8_ADR72        (0x72u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B8_ADR73        (0x73u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B8_ADR74        (0x74u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B8_ADR75        (0x75u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B8_ADR76        (0x76u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B8_ADR77        (0x77u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B8_ADR78        (0x78u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B8_ADR79        (0x79u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B8_ADR7A        (0x7Au)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B8_ADR7B        (0x7Bu)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B8_ADR7C        (0x7Cu)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B8_ADR7D        (0x7Du)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B8_ADR7E        (0x7Eu)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B8_ADR7F        (0x7Fu)     /*!< �m�b<in-house>*TODO*�p��b����J�n */

#define BANK_SEARCH_CH_SET_ADR         (8)     /*!< �m�b<in-house>*TODO*�p��b*TODO*TBD(@ref RADIO_SEARCH_CH_SET_T �^�ŃA�N�Z�X)�n */
#define BANK_SEARCH_CH_EN_ADR          (8)     /*!< �m�b<in-house>*TODO*�p��b*TODO*TBD(@ref RADIO_SEARCH_CH_EN_T �^�ŃA�N�Z�X)�n */
#define BANK_SEARCH_CH0_ADR            (8)     /*!< �m�b<in-house>*TODO*�p��b*TODO*TBD(@ref RADIO_SEARCH_CH0_T �^�ŃA�N�Z�X)�n */
#define BANK_SEARCH_CH1_ADR            (8)     /*!< �m�b<in-house>*TODO*�p��b*TODO*TBD(@ref RADIO_SEARCH_CH1_T �^�ŃA�N�Z�X)�n */
#define BANK_SEARCH_CH2_ADR            (8)     /*!< �m�b<in-house>*TODO*�p��b*TODO*TBD(@ref RADIO_SEARCH_CH2_T �^�ŃA�N�Z�X)�n */
#define BANK_SEARCH_CH3_ADR            (8)     /*!< �m�b<in-house>*TODO*�p��b*TODO*TBD(@ref RADIO_SEARCH_CH3_T �^�ŃA�N�Z�X)�n */
#define BANK_SEARCH_CH4_ADR            (8)     /*!< �m�b<in-house>*TODO*�p��b*TODO*TBD(@ref RADIO_SEARCH_CH4_T �^�ŃA�N�Z�X)�n */
#define BANK_SEARCH_CH5_ADR            (8)     /*!< �m�b<in-house>*TODO*�p��b*TODO*TBD(@ref RADIO_SEARCH_CH5_T �^�ŃA�N�Z�X)�n */
#define BANK_SEARCH_CH6_ADR            (8)     /*!< �m�b<in-house>*TODO*�p��b*TODO*TBD(@ref RADIO_SEARCH_CH6_T �^�ŃA�N�Z�X)�n */
#define BANK_SEARCH_CH7_ADR            (8)     /*!< �m�b<in-house>*TODO*�p��b*TODO*TBD(@ref RADIO_SEARCH_CH7_T �^�ŃA�N�Z�X)�n */
#define BANK_SRCH_ED_TH_ADR            (8)     /*!< �m�b<in-house>*TODO*�p��b*TODO*TBD(@ref RADIO_SRCH_ED_TH_T �^�ŃA�N�Z�X)�n */
#define BANK_PLL_WAIT_TIMER_ADR        (8)     /*!< �m�b<in-house>*TODO*�p��b*TODO*TBD(@ref RADIO_PLL_WAIT_TIMER_T �^�ŃA�N�Z�X)�n */
#define BANK_ED_WAIT_TIMER_ADR         (8)     /*!< �m�b<in-house>*TODO*�p��b*TODO*TBD(@ref RADIO_ED_WAIT_TIMER_T �^�ŃA�N�Z�X)�n */
#define BANK_SYNC_WAIT_TIMER_ADR       (8)     /*!< �m�b<in-house>*TODO*�p��b*TODO*TBD(@ref RADIO_SYNC_WAIT_TIMER_T �^�ŃA�N�Z�X)�n */
#define BANK_SYNC_WAIT_TIMER2_ADR      (8)     /*!< �m�b<in-house>*TODO*�p��b*TODO*TBD(@ref RADIO_SYNC_WAIT_TIMER2_T �^�ŃA�N�Z�X)�n */
#define BANK_SRCH_ED_ANT1_ADR          (8)     /*!< �m�b<in-house>*TODO*�p��b*TODO*TBD(@ref RADIO_SRCH_ED_ANT1_T �^�ŃA�N�Z�X)�n */
#define BANK_SRCH_ED_ANT2_ADR          (8)     /*!< �m�b<in-house>*TODO*�p��b*TODO*TBD(@ref RADIO_SRCH_ED_ANT2_T �^�ŃA�N�Z�X)�n */
#define BANK_SRCH_CH_ADR               (8)     /*!< �m�b<in-house>*TODO*�p��b*TODO*TBD(@ref RADIO_SRCH_CH_T �^�ŃA�N�Z�X)�n */
#define BANK_SRCH_STATE_ADR            (8)     /*!< �m�b<in-house>*TODO*�p��b*TODO*TBD(@ref RADIO_SRCH_STATE_T �^�ŃA�N�Z�X)�n */
#define BANK_FH_SET_ADR                (8)     /*!< �m�b<in-house>*TODO*�p��b*TODO*TBD(@ref RADIO_FH_SET_T �^�ŃA�N�Z�X)�n */
#define BANK_FH_MAX_CH_ADR             (8)     /*!< �m�b<in-house>*TODO*�p��b*TODO*TBD(@ref RADIO_FH_MAX_CH_T �^�ŃA�N�Z�X)�n */
#define BANK_RANDOM_CH_DISP_ADR        (8)     /*!< �m�b<in-house>*TODO*�p��b*TODO*TBD(@ref RADIO_RANDOM_CH_DISP_T �^�ŃA�N�Z�X)�n */
#define BANK_NONPUBLIC_B8_ADR17        (8)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B8_ADR18        (8)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B8_ADR19        (8)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B8_ADR1A        (8)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B8_ADR1B        (8)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B8_ADR1C        (8)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B8_ADR1D        (8)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B8_ADR1E        (8)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B8_ADR1F        (8)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B8_ADR20        (8)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B8_ADR21        (8)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B8_ADR22        (8)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B8_ADR23        (8)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B8_ADR24        (8)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B8_ADR25        (8)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B8_ADR26        (8)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B8_ADR27        (8)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B8_ADR28        (8)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B8_ADR29        (8)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B8_ADR2A        (8)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B8_ADR2B        (8)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B8_ADR2C        (8)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B8_ADR2D        (8)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B8_ADR2E        (8)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B8_ADR2F        (8)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B8_ADR30        (8)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B8_ADR31        (8)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B8_ADR32        (8)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B8_ADR33        (8)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B8_ADR34        (8)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B8_ADR35        (8)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B8_ADR36        (8)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B8_ADR37        (8)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B8_ADR38        (8)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B8_ADR39        (8)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B8_ADR3A        (8)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B8_ADR3B        (8)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B8_ADR3C        (8)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B8_ADR3D        (8)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B8_ADR3E        (8)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B8_ADR3F        (8)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B8_ADR40        (8)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B8_ADR41        (8)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B8_ADR42        (8)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B8_ADR43        (8)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B8_ADR44        (8)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B8_ADR45        (8)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B8_ADR46        (8)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B8_ADR47        (8)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B8_ADR48        (8)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B8_ADR49        (8)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B8_ADR4A        (8)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B8_ADR4B        (8)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B8_ADR4C        (8)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B8_ADR4D        (8)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B8_ADR4E        (8)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B8_ADR4F        (8)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B8_ADR50        (8)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B8_ADR51        (8)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B8_ADR52        (8)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B8_ADR53        (8)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B8_ADR54        (8)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B8_ADR55        (8)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B8_ADR56        (8)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B8_ADR57        (8)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B8_ADR58        (8)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B8_ADR59        (8)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B8_ADR5A        (8)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B8_ADR5B        (8)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B8_ADR5C        (8)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B8_ADR5D        (8)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B8_ADR5E        (8)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B8_ADR5F        (8)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B8_ADR60        (8)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B8_ADR61        (8)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B8_ADR62        (8)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B8_ADR63        (8)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B8_ADR64        (8)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B8_ADR65        (8)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B8_ADR66        (8)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B8_ADR67        (8)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B8_ADR68        (8)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B8_ADR69        (8)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B8_ADR6A        (8)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B8_ADR6B        (8)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B8_ADR6C        (8)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B8_ADR6D        (8)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B8_ADR6E        (8)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B8_ADR6F        (8)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B8_ADR70        (8)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B8_ADR71        (8)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B8_ADR72        (8)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B8_ADR73        (8)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B8_ADR74        (8)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B8_ADR75        (8)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B8_ADR76        (8)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B8_ADR77        (8)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B8_ADR78        (8)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B8_ADR79        (8)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B8_ADR7A        (8)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B8_ADR7B        (8)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B8_ADR7C        (8)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B8_ADR7D        (8)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B8_ADR7E        (8)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B8_ADR7F        (8)     /*!< �m�b<in-house>*TODO*�p��b����J�n */


/* �mRF register structures�bRF���W�X�^�\���́n */

/** @brief �mType definition for @ref RADIO_SEARCH_CH_SET_ADR access�b@ref RADIO_SEARCH_CH_SET_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t ch_srch_en:         1;      /*!<�m�b<in-house>*TODO*�p��b�`���l���T�[�`�C�l�[�u���ݒ� R/W�n*/
        uint8_t ch_srch_mode:       2;      /*!<�m�b<in-house>*TODO*�p��b�`���l���T�[�`���[�h R/W�n*/
        uint8_t reserved0:          1;      /*!<�m�b<in-house>*TODO*�p��b�\�� R�n*/
        uint8_t srch_ed_avg:        3;      /*!<�m�b<in-house>*TODO*�p��bED�l�Z�o���̕��ω񐔐ݒ� R/W�n*/
        uint8_t srch_time_res:      1;      /*!<�m�b<in-house>*TODO*�p��b�������o�҂����ԕ���\�ݒ� R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_SEARCH_CH_SET_T;

/** @brief �mType definition for @ref RADIO_SEARCH_CH_EN_ADR access�b@ref RADIO_SEARCH_CH_EN_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t srch_ch0_en:        1;      /*!<�m�b<in-house>*TODO*�p��b�T�[�`�`���l��#0�C�l�[�u�� R/W�n*/
        uint8_t srch_ch1_en:        1;      /*!<�m�b<in-house>*TODO*�p��b�T�[�`�`���l��#1�C�l�[�u�� R/W�n*/
        uint8_t srch_ch2_en:        1;      /*!<�m�b<in-house>*TODO*�p��b�T�[�`�`���l��#2�C�l�[�u�� R/W�n*/
        uint8_t srch_ch3_en:        1;      /*!<�m�b<in-house>*TODO*�p��b�T�[�`�`���l��#3�C�l�[�u�� R/W�n*/
        uint8_t srch_ch4_en:        1;      /*!<�m�b<in-house>*TODO*�p��b�T�[�`�`���l��#4�C�l�[�u�� R/W�n*/
        uint8_t srch_ch5_en:        1;      /*!<�m�b<in-house>*TODO*�p��b�T�[�`�`���l��#5�C�l�[�u�� R/W�n*/
        uint8_t srch_ch6_en:        1;      /*!<�m�b<in-house>*TODO*�p��b�T�[�`�`���l��#6�C�l�[�u�� R/W�n*/
        uint8_t srch_ch7_en:        1;      /*!<�m�b<in-house>*TODO*�p��b�T�[�`�`���l��#7�C�l�[�u�� R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_SEARCH_CH_EN_T;

/** @brief �mType definition for @ref RADIO_SEARCH_CH0_ADR access�b@ref RADIO_SEARCH_CH0_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t srch_ch0:           8;      /*!<�m�b<in-house>*TODO*�p��b�T�[�`�`���l��#0�̃`���l���ԍ� R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_SEARCH_CH0_T;

/** @brief �mType definition for @ref RADIO_SEARCH_CH1_ADR access�b@ref RADIO_SEARCH_CH1_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t srch_ch1:           8;      /*!<�m�b<in-house>*TODO*�p��b�T�[�`�`���l��#1�̃`���l���ԍ� R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_SEARCH_CH1_T;

/** @brief �mType definition for @ref RADIO_SEARCH_CH2_ADR access�b@ref RADIO_SEARCH_CH2_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t srch_ch2:           8;      /*!<�m�b<in-house>*TODO*�p��b�T�[�`�`���l��#2�̃`���l���ԍ� R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_SEARCH_CH2_T;

/** @brief �mType definition for @ref RADIO_SEARCH_CH3_ADR access�b@ref RADIO_SEARCH_CH3_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t srch_ch3:           8;      /*!<�m�b<in-house>*TODO*�p��b�T�[�`�`���l��#3�̃`���l���ԍ� R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_SEARCH_CH3_T;

/** @brief �mType definition for @ref RADIO_SEARCH_CH4_ADR access�b@ref RADIO_SEARCH_CH4_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t srch_ch4:           8;      /*!<�m�b<in-house>*TODO*�p��b�T�[�`�`���l��#4�̃`���l���ԍ� R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_SEARCH_CH4_T;

/** @brief �mType definition for @ref RADIO_SEARCH_CH5_ADR access�b@ref RADIO_SEARCH_CH5_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t srch_ch5:           8;      /*!<�m�b<in-house>*TODO*�p��b�T�[�`�`���l��#5�̃`���l���ԍ� R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_SEARCH_CH5_T;

/** @brief �mType definition for @ref RADIO_SEARCH_CH6_ADR access�b@ref RADIO_SEARCH_CH6_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t srch_ch6:           8;      /*!<�m�b<in-house>*TODO*�p��b�T�[�`�`���l��#6�̃`���l���ԍ� R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_SEARCH_CH6_T;

/** @brief �mType definition for @ref RADIO_SEARCH_CH7_ADR access�b@ref RADIO_SEARCH_CH7_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t srch_ch7:           8;      /*!<�m�b<in-house>*TODO*�p��b�T�[�`�`���l��#7�̃`���l���ԍ� R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_SEARCH_CH7_T;

/** @brief �mType definition for @ref RADIO_SRCH_ED_TH_ADR access�b@ref RADIO_SRCH_ED_TH_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t srch_ed_th:         8;      /*!<�m�b<in-house>*TODO*�p��b�`���l���T�[�`����ED�l臒l�ݒ� R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_SRCH_ED_TH_T;

/** @brief �mType definition for @ref RADIO_PLL_WAIT_TIMER_ADR access�b@ref RADIO_PLL_WAIT_TIMER_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t pll_wait_timer:     8;      /*!<�m�b<in-house>*TODO*�p��b�`���l���T�[�`����PLL�����҂����Ԑݒ� R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_PLL_WAIT_TIMER_T;

/** @brief �mType definition for @ref RADIO_ED_WAIT_TIMER_ADR access�b@ref RADIO_ED_WAIT_TIMER_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t ed_wait_timer:      8;      /*!<�m�b<in-house>*TODO*�p��b�`���l���T�[�`����ED�l�����҂����Ԑݒ� R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_ED_WAIT_TIMER_T;

/** @brief �mType definition for @ref RADIO_SYNC_WAIT_TIMER_ADR access�b@ref RADIO_SYNC_WAIT_TIMER_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t sync_wait_timer:    8;      /*!<�m�b<in-house>*TODO*�p��b�`���l���T�[�`���̓������o�҂����Ԑݒ� R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_SYNC_WAIT_TIMER_T;

/** @brief �mType definition for @ref RADIO_SYNC_WAIT_TIMER2_ADR access�b@ref RADIO_SYNC_WAIT_TIMER2_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t sync_wait_timer2:   8;      /*!<�m�b<in-house>*TODO*�p��b�`���l���T�[�`���̓������o�҂����Ԑݒ�2 R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_SYNC_WAIT_TIMER2_T;

/** @brief �mType definition for @ref RADIO_SRCH_ED_ANT1_ADR access�b@ref RADIO_SRCH_ED_ANT1_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t srch_ed_ant1:       8;      /*!<�m�b<in-house>*TODO*�p��b�`���l���T�[�`��ED�l�擾�l�\��(ANT1) R�n*/
    }bits;
    uint8_t byte;
}RADIO_SRCH_ED_ANT1_T;

/** @brief �mType definition for @ref RADIO_SRCH_ED_ANT2_ADR access�b@ref RADIO_SRCH_ED_ANT2_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t srch_ed_ant2:       8;      /*!<�m�b<in-house>*TODO*�p��b�`���l���T�[�`��ED�l�擾�l�\��(ANT2) R�n*/
    }bits;
    uint8_t byte;
}RADIO_SRCH_ED_ANT2_T;

/** @brief �mType definition for @ref RADIO_SRCH_CH_ADR access�b@ref RADIO_SRCH_CH_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t srch_ch:            8;      /*!<�m�b<in-house>*TODO*�p��b�`���l���T�[�`������̃`���l���ԍ��\�� R�n*/
    }bits;
    uint8_t byte;
}RADIO_SRCH_CH_T;

/** @brief �mType definition for @ref RADIO_SRCH_STATE_ADR access�b@ref RADIO_SRCH_STATE_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t srch_state:         3;      /*!<�m�b<in-house>*TODO*�p��b�`���l���T�[�`�X�e�[�g�\�� R�n*/
        uint8_t reserved0:          5;      /*!<�m�b<in-house>*TODO*�p��b�\�� R�n*/
    }bits;
    uint8_t byte;
}RADIO_SRCH_STATE_T;

/** @brief �mType definition for @ref RADIO_FH_SET_ADR access�b@ref RADIO_FH_SET_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t fh_ch_srch_en:      1;      /*!<�m�b<in-house>*TODO*�p��b���g���z�b�s���O�`���l���T�[�`�ݒ� R/W�n*/
        uint8_t random_ch_en:       1;      /*!<�m�b<in-house>*TODO*�p��b�����_���`���l���ԍ������ݒ� R/W�n*/
        uint8_t reserved0:          6;      /*!<�m�b<in-house>*TODO*�p��b�\�� R�n*/
    }bits;
    uint8_t byte;
}RADIO_FH_SET_T;

/** @brief �mType definition for @ref RADIO_FH_MAX_CH_ADR access�b@ref RADIO_FH_MAX_CH_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t fh_max_ch:          8;      /*!<�m�b<in-house>*TODO*�p��b���g���z�b�s���O�ő�`���l���ݒ� R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_FH_MAX_CH_T;

/** @brief �mType definition for @ref RADIO_RANDOM_CH_DISP_ADR access�b@ref RADIO_RANDOM_CH_DISP_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t random_ch_disp:     8;      /*!<�m�b<in-house>*TODO*�p��b�����_���`���l���ԍ��\�� R�n*/
    }bits;
    uint8_t byte;
}RADIO_RANDOM_CH_DISP_T;

/** \} */ /* End of group RF_REGISTER_BANK8 */
#endif

/****************************************************************************************/
/**
   @file     bank4.h

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
#ifndef _bank4_H
#define _bank4_H

/**
    \addtogroup RF_REGISTER_BANK4
    \{
 */
 
/*�mBANK4 Register Address Definitions�bBANK4���W�X�^�A�h���X��`�n*/
#define RADIO_C_CHECK_CTRL_B4_ADR       (0x01u)     /*!< �m�b<in-house>*TODO*�p��bC-field�`�F�b�N�C�l�[�u��(@ref RADIO_C_CHECK_CTRL_B4_T �^�ŃA�N�Z�X)�n */
#define RADIO_M_CHECK_CTRL_B4_ADR       (0x02u)     /*!< �m�b<in-house>*TODO*�p��bM-field�`�F�b�N�C�l�[�u��(@ref RADIO_M_CHECK_CTRL_B4_T �^�ŃA�N�Z�X)�n */
#define RADIO_A_CHECK_CTRL2_ADR         (0x03u)     /*!< �m�b<in-house>*TODO*�p��bA-field�`�F�b�N�C�l�[�u��2(@ref RADIO_A_CHECK_CTRL2_T �^�ŃA�N�Z�X)�n */
#define RADIO_A_CHECK_CTRL1_ADR         (0x04u)     /*!< �m�b<in-house>*TODO*�p��bA-field�`�F�b�N�C�l�[�u��1(@ref RADIO_A_CHECK_CTRL1_T �^�ŃA�N�Z�X)�n */
#define RADIO_C_FIELD_WORD1_B4_ADR      (0x05u)     /*!< �m�b<in-house>*TODO*�p��bC-field�ݒ�R�[�h1(@ref RADIO_C_FIELD_WORD1_B4_T �^�ŃA�N�Z�X)�n */
#define RADIO_C_FIELD_WORD2_B4_ADR      (0x06u)     /*!< �m�b<in-house>*TODO*�p��bC-field�ݒ�R�[�h2(@ref RADIO_C_FIELD_WORD2_B4_T �^�ŃA�N�Z�X)�n */
#define RADIO_C_FIELD_WORD3_B4_ADR      (0x07u)     /*!< �m�b<in-house>*TODO*�p��bC-field�ݒ�R�[�h3(@ref RADIO_C_FIELD_WORD3_B4_T �^�ŃA�N�Z�X)�n */
#define RADIO_C_FIELD_WORD4_B4_ADR      (0x08u)     /*!< �m�b<in-house>*TODO*�p��bC-field�ݒ�R�[�h4(@ref RADIO_C_FIELD_WORD4_B4_T �^�ŃA�N�Z�X)�n */
#define RADIO_C_FIELD_WORD5_B4_ADR      (0x09u)     /*!< �m�b<in-house>*TODO*�p��bC-field�ݒ�R�[�h5(@ref RADIO_C_FIELD_WORD5_B4_T �^�ŃA�N�Z�X)�n */
#define RADIO_M_FIELD_WORD1_B4_ADR      (0x0Au)     /*!< �m�b<in-house>*TODO*�p��bM-field 1st�o�C�g�ݒ�R�[�h1(@ref RADIO_M_FIELD_WORD1_B4_T �^�ŃA�N�Z�X)�n */
#define RADIO_M_FIELD_WORD2_B4_ADR      (0x0Bu)     /*!< �m�b<in-house>*TODO*�p��bM-field 1st�o�C�g�ݒ�R�[�h2(@ref RADIO_M_FIELD_WORD2_B4_T �^�ŃA�N�Z�X)�n */
#define RADIO_M_FIELD_WORD3_B4_ADR      (0x0Cu)     /*!< �m�b<in-house>*TODO*�p��bM-field 2nd�o�C�g�ݒ�R�[�h1(@ref RADIO_M_FIELD_WORD3_B4_T �^�ŃA�N�Z�X)�n */
#define RADIO_M_FIELD_WORD4_B4_ADR      (0x0Du)     /*!< �m�b<in-house>*TODO*�p��bM-field 2nd�o�C�g�ݒ�R�[�h2(@ref RADIO_M_FIELD_WORD4_B4_T �^�ŃA�N�Z�X)�n */
#define RADIO_A_FIELD_WORD1_B4_ADR      (0x0Eu)     /*!< �m�b<in-house>*TODO*�p��bA-field 1st�o�C�g�ݒ�(@ref RADIO_A_FIELD_WORD1_B4_T �^�ŃA�N�Z�X)�n */
#define RADIO_A_FIELD_WORD2_B4_ADR      (0x0Fu)     /*!< �m�b<in-house>*TODO*�p��bA-field 2nd�o�C�g�ݒ�(@ref RADIO_A_FIELD_WORD2_B4_T �^�ŃA�N�Z�X)�n */
#define RADIO_A_FIELD_WORD3_B4_ADR      (0x10u)     /*!< �m�b<in-house>*TODO*�p��bA-field 3rd�o�C�g�ݒ�(@ref RADIO_A_FIELD_WORD3_B4_T �^�ŃA�N�Z�X)�n */
#define RADIO_A_FIELD_WORD4_B4_ADR      (0x11u)     /*!< �m�b<in-house>*TODO*�p��bA-field 4th�o�C�g�ݒ�(@ref RADIO_A_FIELD_WORD4_B4_T �^�ŃA�N�Z�X)�n */
#define RADIO_A_FIELD_WORD5_B4_ADR      (0x12u)     /*!< �m�b<in-house>*TODO*�p��bA-field 5th�o�C�g�ݒ�(@ref RADIO_A_FIELD_WORD5_B4_T �^�ŃA�N�Z�X)�n */
#define RADIO_A_FIELD_WORD6_B4_ADR      (0x13u)     /*!< �m�b<in-house>*TODO*�p��bA-field 6th�o�C�g�ݒ�(@ref RADIO_A_FIELD_WORD6_B4_T �^�ŃA�N�Z�X)�n */
#define RADIO_A_FIELD_WORD7_B4_ADR      (0x14u)     /*!< �m�b<in-house>*TODO*�p��bA-field 7th�o�C�g�ݒ�(@ref RADIO_A_FIELD_WORD7_B4_T �^�ŃA�N�Z�X)�n */
#define RADIO_A_FIELD_WORD8_B4_ADR      (0x15u)     /*!< �m�b<in-house>*TODO*�p��bA-field 8th�o�C�g�ݒ�(@ref RADIO_A_FIELD_WORD8_B4_T �^�ŃA�N�Z�X)�n */
#define RADIO_A_FIELD_WORD9_B4_ADR      (0x16u)     /*!< �m�b<in-house>*TODO*�p��bA-field 9th�o�C�g�ݒ�(@ref RADIO_A_FIELD_WORD9_B4_T �^�ŃA�N�Z�X)�n */
#define RADIO_A_FIELD_WORD10_B4_ADR     (0x17u)     /*!< �m�b<in-house>*TODO*�p��bA-field 10th�o�C�g�ݒ�(@ref RADIO_A_FIELD_WORD10_B4_T �^�ŃA�N�Z�X)�n */
#define RADIO_NONPUBLIC_B4_ADR18        (0x18u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B4_ADR19        (0x19u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B4_ADR1A        (0x1Au)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B4_ADR1B        (0x1Bu)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B4_ADR1C        (0x1Cu)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B4_ADR1D        (0x1Du)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B4_ADR1E        (0x1Eu)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B4_ADR1F        (0x1Fu)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_CMA2_CHECK_CTRL1_ADR      (0x20u)     /*!< �m�b<in-house>*TODO*�p��bCMA-field2�`�F�b�N�C�l�[�u��1(@ref RADIO_CMA2_CHECK_CTRL1_T �^�ŃA�N�Z�X)�n */
#define RADIO_CMA2_CHECK_CTRL2_ADR      (0x21u)     /*!< �m�b<in-house>*TODO*�p��bCMA-field2�`�F�b�N�C�l�[�u��2(@ref RADIO_CMA2_CHECK_CTRL2_T �^�ŃA�N�Z�X)�n */
#define RADIO_C2_FIELD_WORD1_ADR        (0x22u)     /*!< �m�b<in-house>*TODO*�p��bC-field2�ݒ�(@ref RADIO_C2_FIELD_WORD1_T �^�ŃA�N�Z�X)�n */
#define RADIO_M2_FIELD_WORD1_ADR        (0x23u)     /*!< �m�b<in-house>*TODO*�p��bM-field2 1st�o�C�g�ݒ�(@ref RADIO_M2_FIELD_WORD1_T �^�ŃA�N�Z�X)�n */
#define RADIO_M2_FIELD_WORD2_ADR        (0x24u)     /*!< �m�b<in-house>*TODO*�p��bM-field2 2nd�o�C�g�ݒ�(@ref RADIO_M2_FIELD_WORD2_T �^�ŃA�N�Z�X)�n */
#define RADIO_A2_FIELD_WORD1_ADR        (0x25u)     /*!< �m�b<in-house>*TODO*�p��bA-field2 1st�o�C�g�ݒ�(@ref RADIO_A2_FIELD_WORD1_T �^�ŃA�N�Z�X)�n */
#define RADIO_A2_FIELD_WORD2_ADR        (0x26u)     /*!< �m�b<in-house>*TODO*�p��bA-field2 2nd�o�C�g�ݒ�(@ref RADIO_A2_FIELD_WORD2_T �^�ŃA�N�Z�X)�n */
#define RADIO_A2_FIELD_WORD3_ADR        (0x27u)     /*!< �m�b<in-house>*TODO*�p��bA-field2 3rd�o�C�g�ݒ�(@ref RADIO_A2_FIELD_WORD3_T �^�ŃA�N�Z�X)�n */
#define RADIO_A2_FIELD_WORD4_ADR        (0x28u)     /*!< �m�b<in-house>*TODO*�p��bA-field2 4th�o�C�g�ݒ�(@ref RADIO_A2_FIELD_WORD4_T �^�ŃA�N�Z�X)�n */
#define RADIO_A2_FIELD_WORD5_ADR        (0x29u)     /*!< �m�b<in-house>*TODO*�p��bA-field2 5th�o�C�g�ݒ�(@ref RADIO_A2_FIELD_WORD5_T �^�ŃA�N�Z�X)�n */
#define RADIO_A2_FIELD_WORD6_ADR        (0x2Au)     /*!< �m�b<in-house>*TODO*�p��bA-field2 6th�o�C�g�ݒ�(@ref RADIO_A2_FIELD_WORD6_T �^�ŃA�N�Z�X)�n */
#define RADIO_A2_FIELD_WORD7_ADR        (0x2Bu)     /*!< �m�b<in-house>*TODO*�p��bA-field2 7th�o�C�g�ݒ�(@ref RADIO_A2_FIELD_WORD7_T �^�ŃA�N�Z�X)�n */
#define RADIO_A2_FIELD_WORD8_ADR        (0x2Cu)     /*!< �m�b<in-house>*TODO*�p��bA-field2 8th�o�C�g�ݒ�(@ref RADIO_A2_FIELD_WORD8_T �^�ŃA�N�Z�X)�n */
#define RADIO_A2_FIELD_WORD9_ADR        (0x2Du)     /*!< �m�b<in-house>*TODO*�p��bA-field2 9th�o�C�g�ݒ�(@ref RADIO_A2_FIELD_WORD9_T �^�ŃA�N�Z�X)�n */
#define RADIO_A2_FIELD_WORD10_ADR       (0x2Eu)     /*!< �m�b<in-house>*TODO*�p��bA-field2 10th�o�C�g�ݒ�(@ref RADIO_A2_FIELD_WORD10_T �^�ŃA�N�Z�X)�n */
#define RADIO_NONPUBLIC_B4_ADR2F        (0x2Fu)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_CMA3_CHECK_CTRL1_ADR      (0x30u)     /*!< �m�b<in-house>*TODO*�p��bCMA-field3�`�F�b�N�C�l�[�u��1(@ref RADIO_CMA3_CHECK_CTRL1_T �^�ŃA�N�Z�X)�n */
#define RADIO_CMA3_CHECK_CTRL2_ADR      (0x31u)     /*!< �m�b<in-house>*TODO*�p��bCMA-field3�`�F�b�N�C�l�[�u��2(@ref RADIO_CMA3_CHECK_CTRL2_T �^�ŃA�N�Z�X)�n */
#define RADIO_C3_FIELD_WORD1_ADR        (0x32u)     /*!< �m�b<in-house>*TODO*�p��bC-field3�ݒ�(@ref RADIO_C3_FIELD_WORD1_T �^�ŃA�N�Z�X)�n */
#define RADIO_M3_FIELD_WORD1_ADR        (0x33u)     /*!< �m�b<in-house>*TODO*�p��bM-field3 1st�o�C�g�ݒ�(@ref RADIO_M3_FIELD_WORD1_T �^�ŃA�N�Z�X)�n */
#define RADIO_M3_FIELD_WORD2_ADR        (0x34u)     /*!< �m�b<in-house>*TODO*�p��bM-field3 2nd�o�C�g�ݒ�(@ref RADIO_M3_FIELD_WORD2_T �^�ŃA�N�Z�X)�n */
#define RADIO_A3_FIELD_WORD1_ADR        (0x35u)     /*!< �m�b<in-house>*TODO*�p��bA-field3 1st�o�C�g�ݒ�(@ref RADIO_A3_FIELD_WORD1_T �^�ŃA�N�Z�X)�n */
#define RADIO_A3_FIELD_WORD2_ADR        (0x36u)     /*!< �m�b<in-house>*TODO*�p��bA-field3 2nd�o�C�g�ݒ�(@ref RADIO_A3_FIELD_WORD2_T �^�ŃA�N�Z�X)�n */
#define RADIO_A3_FIELD_WORD3_ADR        (0x37u)     /*!< �m�b<in-house>*TODO*�p��bA-field3 3rd�o�C�g�ݒ�(@ref RADIO_A3_FIELD_WORD3_T �^�ŃA�N�Z�X)�n */
#define RADIO_A3_FIELD_WORD4_ADR        (0x38u)     /*!< �m�b<in-house>*TODO*�p��bA-field3 4th�o�C�g�ݒ�(@ref RADIO_A3_FIELD_WORD4_T �^�ŃA�N�Z�X)�n */
#define RADIO_A3_FIELD_WORD5_ADR        (0x39u)     /*!< �m�b<in-house>*TODO*�p��bA-field3 5th�o�C�g�ݒ�(@ref RADIO_A3_FIELD_WORD5_T �^�ŃA�N�Z�X)�n */
#define RADIO_A3_FIELD_WORD6_ADR        (0x3Au)     /*!< �m�b<in-house>*TODO*�p��bA-field3 6th�o�C�g�ݒ�(@ref RADIO_A3_FIELD_WORD6_T �^�ŃA�N�Z�X)�n */
#define RADIO_A3_FIELD_WORD7_ADR        (0x3Bu)     /*!< �m�b<in-house>*TODO*�p��bA-field3 7th�o�C�g�ݒ�(@ref RADIO_A3_FIELD_WORD7_T �^�ŃA�N�Z�X)�n */
#define RADIO_A3_FIELD_WORD8_ADR        (0x3Cu)     /*!< �m�b<in-house>*TODO*�p��bA-field3 8th�o�C�g�ݒ�(@ref RADIO_A3_FIELD_WORD8_T �^�ŃA�N�Z�X)�n */
#define RADIO_A3_FIELD_WORD9_ADR        (0x3Du)     /*!< �m�b<in-house>*TODO*�p��bA-field3 9th�o�C�g�ݒ�(@ref RADIO_A3_FIELD_WORD9_T �^�ŃA�N�Z�X)�n */
#define RADIO_A3_FIELD_WORD10_ADR       (0x3Eu)     /*!< �m�b<in-house>*TODO*�p��bA-field3 10th�o�C�g�ݒ�(@ref RADIO_A3_FIELD_WORD10_T �^�ŃA�N�Z�X)�n */
#define RADIO_NONPUBLIC_B4_ADR3F        (0x3Fu)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B4_ADR40        (0x40u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B4_ADR41        (0x41u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B4_ADR42        (0x42u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B4_ADR43        (0x43u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B4_ADR44        (0x44u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B4_ADR45        (0x45u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B4_ADR46        (0x46u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B4_ADR47        (0x47u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B4_ADR48        (0x48u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B4_ADR49        (0x49u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B4_ADR4A        (0x4Au)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B4_ADR4B        (0x4Bu)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B4_ADR4C        (0x4Cu)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B4_ADR4D        (0x4Du)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B4_ADR4E        (0x4Eu)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B4_ADR4F        (0x4Fu)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B4_ADR50        (0x50u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B4_ADR51        (0x51u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B4_ADR52        (0x52u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B4_ADR53        (0x53u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B4_ADR54        (0x54u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B4_ADR55        (0x55u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B4_ADR56        (0x56u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B4_ADR57        (0x57u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B4_ADR58        (0x58u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B4_ADR59        (0x59u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B4_ADR5A        (0x5Au)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B4_ADR5B        (0x5Bu)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B4_ADR5C        (0x5Cu)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B4_ADR5D        (0x5Du)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B4_ADR5E        (0x5Eu)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B4_ADR5F        (0x5Fu)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_TXFREQ_I_2G_ADR           (0x60u)     /*!< �m�b<in-house>*TODO*�p��b2.4GHz�p���M���g���ݒ�(I�J�E���^)(@ref RADIO_TXFREQ_I_2G_T �^�ŃA�N�Z�X)�n */
#define RADIO_TXFREQ_FH_2G_ADR          (0x61u)     /*!< �m�b<in-house>*TODO*�p��b2.4GHz�p���M���g���ݒ�(F�J�E���^���4�r�b�g)(@ref RADIO_TXFREQ_FH_2G_T �^�ŃA�N�Z�X)�n */
#define RADIO_TXFREQ_FM_2G_ADR          (0x62u)     /*!< �m�b<in-house>*TODO*�p��b2.4GHz�p���M���g���ݒ�(F�J�E���^����8�r�b�g)(@ref RADIO_TXFREQ_FM_2G_T �^�ŃA�N�Z�X)�n */
#define RADIO_TXFREQ_FL_2G_ADR          (0x63u)     /*!< �m�b<in-house>*TODO*�p��b2.4GHz�p���M���g���ݒ�(F�J�E���^����8�r�b�g)(@ref RADIO_TXFREQ_FL_2G_T �^�ŃA�N�Z�X)�n */
#define RADIO_RXFREQ_I_2G_ADR           (0x64u)     /*!< �m�b<in-house>*TODO*�p��b2.4GHz�p��M���g���ݒ�(I�J�E���^)(@ref RADIO_RXFREQ_I_2G_T �^�ŃA�N�Z�X)�n */
#define RADIO_RXFREQ_FH_2G_ADR          (0x65u)     /*!< �m�b<in-house>*TODO*�p��b2.4GHz�p��M���g���ݒ�(F�J�E���^���4�r�b�g)(@ref RADIO_RXFREQ_FH_2G_T �^�ŃA�N�Z�X)�n */
#define RADIO_RXFREQ_FM_2G_ADR          (0x66u)     /*!< �m�b<in-house>*TODO*�p��b2.4GHz�p��M���g���ݒ�(F�J�E���^����8�r�b�g)(@ref RADIO_RXFREQ_FM_2G_T �^�ŃA�N�Z�X)�n */
#define RADIO_RXFREQ_FL_2G_ADR          (0x67u)     /*!< �m�b<in-house>*TODO*�p��b2.4GHz�p��M���g���ݒ�(F�J�E���^����8�r�b�g)(@ref RADIO_RXFREQ_FL_2G_T �^�ŃA�N�Z�X)�n */
#define RADIO_CH_SPACE_H_2G_ADR         (0x68u)     /*!< �m�b<in-house>*TODO*�p��b2.4GHz�p�`���l���Ԋu�ݒ�(��ʃo�C�g)(@ref RADIO_CH_SPACE_H_2G_T �^�ŃA�N�Z�X)�n */
#define RADIO_CH_SPACE_L_2G_ADR         (0x69u)     /*!< �m�b<in-house>*TODO*�p��b2.4GHz�p�`���l���Ԋu�ݒ�(���ʃo�C�g)(@ref RADIO_CH_SPACE_L_2G_T �^�ŃA�N�Z�X)�n */
#define RADIO_GFSK_DEV_H_2G_ADR         (0x6Au)     /*!< �m�b<in-house>*TODO*�p��b2.4GHz�pGFSK���̎��g���Έʐݒ�(���6�r�b�g)(@ref RADIO_GFSK_DEV_H_2G_T �^�ŃA�N�Z�X)�n */
#define RADIO_GFSK_DEV_L_2G_ADR         (0x6Bu)     /*!< �m�b<in-house>*TODO*�p��b2.4GHz�pGFSK���̎��g���Έʐݒ�(���ʃo�C�g)(@ref RADIO_GFSK_DEV_L_2G_T �^�ŃA�N�Z�X)�n */
#define RADIO_PA_REG_ADJ_2G_ADR         (0x6Cu)     /*!< �m�b<in-house>*TODO*�p��b2.4GHz�pPA���M�����[�^�o�͓d������(@ref RADIO_PA_REG_ADJ_2G_T �^�ŃA�N�Z�X)�n */
#define RADIO_IQ_MAG_ADJ_H_2G_ADR       (0x6Du)     /*!< �m�b<in-house>*TODO*�p��b2.4GHz�pIF��IQ�U���o�����X����(���4�r�b�g)(@ref RADIO_IQ_MAG_ADJ_H_2G_T �^�ŃA�N�Z�X)�n */
#define RADIO_IQ_MAG_ADJ_L_2G_ADR       (0x6Eu)     /*!< �m�b<in-house>*TODO*�p��b2.4GHz�pIF��IQ�U���o�����X����(���ʃo�C�g)(@ref RADIO_IQ_MAG_ADJ_L_2G_T �^�ŃA�N�Z�X)�n */
#define RADIO_IQ_PHASE_ADJ_H_2G_ADR     (0x6Fu)     /*!< �m�b<in-house>*TODO*�p��b2.4GHz�pIF��IQ�ʑ��o�����X����(���4�r�b�g)(@ref RADIO_IQ_PHASE_ADJ_H_2G_T �^�ŃA�N�Z�X)�n */
#define RADIO_IQ_PHASE_ADJ_L_2G_ADR     (0x70u)     /*!< �m�b<in-house>*TODO*�p��b2.4GHz�pIF��IQ�ʑ��o�����X����(���ʃo�C�g)(@ref RADIO_IQ_PHASE_ADJ_L_2G_T �^�ŃA�N�Z�X)�n */
#define RADIO_GC_CTRL_2G_ADR            (0x71u)     /*!< �m�b<in-house>*TODO*�p��b2.4GHz�p�Q�C������ݒ�(@ref RADIO_GC_CTRL_2G_T �^�ŃA�N�Z�X)�n */
#define RADIO_VCO_CAL_MIN_I_2G_ADR      (0x72u)     /*!< �m�b<in-house>*TODO*�p��b2.4GHz�pVCO�L�����u���[�V�����������g���ݒ�(I�J�E���^)(@ref RADIO_VCO_CAL_MIN_I_2G_T �^�ŃA�N�Z�X)�n */
#define RADIO_VCO_CAL_MIN_FH_2G_ADR     (0x73u)     /*!< �m�b<in-house>*TODO*�p��b2.4GHz�pVCO�L�����u���[�V�����������g���ݒ�(F�J�E���^���4�r�b�g)(@ref RADIO_VCO_CAL_MIN_FH_2G_T �^�ŃA�N�Z�X)�n */
#define RADIO_VCO_CAL_MIN_FM_2G_ADR     (0x74u)     /*!< �m�b<in-house>*TODO*�p��b2.4GHz�pVCO�L�����u���[�V�����������g���ݒ�(F�J�E���^����8�r�b�g)(@ref RADIO_VCO_CAL_MIN_FM_2G_T �^�ŃA�N�Z�X)�n */
#define RADIO_VCO_CAL_MIN_FL_2G_ADR     (0x75u)     /*!< �m�b<in-house>*TODO*�p��b2.4GHz�pVCO�L�����u���[�V�����������g���ݒ�(F�J�E���^����8�r�b�g)(@ref RADIO_VCO_CAL_MIN_FL_2G_T �^�ŃA�N�Z�X)�n */
#define RADIO_VCO_CAL_MAX_N_2G_ADR      (0x76u)     /*!< �m�b<in-house>*TODO*�p��b2.4GHz�pVCO�L�����u���[�V�����̎��g���͈͐ݒ�(@ref RADIO_VCO_CAL_MAX_N_2G_T �^�ŃA�N�Z�X)�n */
#define RADIO_NONPUBLIC_B4_ADR77        (0x77u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B4_ADR78        (0x78u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B4_ADR79        (0x79u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B4_ADR7A        (0x7Au)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B4_ADR7B        (0x7Bu)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B4_ADR7C        (0x7Cu)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B4_ADR7D        (0x7Du)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B4_ADR7E        (0x7Eu)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B4_ADR7F        (0x7Fu)     /*!< �m�b<in-house>*TODO*�p��b����J�n */

#define BANK_C_CHECK_CTRL_B4_ADR       (4)     /*!< �m�b<in-house>*TODO*�p��bC-field�`�F�b�N�C�l�[�u��(@ref RADIO_C_CHECK_CTRL_B4_T �^�ŃA�N�Z�X)�n */
#define BANK_M_CHECK_CTRL_B4_ADR       (4)     /*!< �m�b<in-house>*TODO*�p��bM-field�`�F�b�N�C�l�[�u��(@ref RADIO_M_CHECK_CTRL_B4_T �^�ŃA�N�Z�X)�n */
#define BANK_A_CHECK_CTRL2_ADR         (4)     /*!< �m�b<in-house>*TODO*�p��bA-field�`�F�b�N�C�l�[�u��2(@ref RADIO_A_CHECK_CTRL2_T �^�ŃA�N�Z�X)�n */
#define BANK_A_CHECK_CTRL1_ADR         (4)     /*!< �m�b<in-house>*TODO*�p��bA-field�`�F�b�N�C�l�[�u��1(@ref RADIO_A_CHECK_CTRL1_T �^�ŃA�N�Z�X)�n */
#define BANK_C_FIELD_WORD1_B4_ADR      (4)     /*!< �m�b<in-house>*TODO*�p��bC-field�ݒ�R�[�h1(@ref RADIO_C_FIELD_WORD1_B4_T �^�ŃA�N�Z�X)�n */
#define BANK_C_FIELD_WORD2_B4_ADR      (4)     /*!< �m�b<in-house>*TODO*�p��bC-field�ݒ�R�[�h2(@ref RADIO_C_FIELD_WORD2_B4_T �^�ŃA�N�Z�X)�n */
#define BANK_C_FIELD_WORD3_B4_ADR      (4)     /*!< �m�b<in-house>*TODO*�p��bC-field�ݒ�R�[�h3(@ref RADIO_C_FIELD_WORD3_B4_T �^�ŃA�N�Z�X)�n */
#define BANK_C_FIELD_WORD4_B4_ADR      (4)     /*!< �m�b<in-house>*TODO*�p��bC-field�ݒ�R�[�h4(@ref RADIO_C_FIELD_WORD4_B4_T �^�ŃA�N�Z�X)�n */
#define BANK_C_FIELD_WORD5_B4_ADR      (4)     /*!< �m�b<in-house>*TODO*�p��bC-field�ݒ�R�[�h5(@ref RADIO_C_FIELD_WORD5_B4_T �^�ŃA�N�Z�X)�n */
#define BANK_M_FIELD_WORD1_B4_ADR      (4)     /*!< �m�b<in-house>*TODO*�p��bM-field 1st�o�C�g�ݒ�R�[�h1(@ref RADIO_M_FIELD_WORD1_B4_T �^�ŃA�N�Z�X)�n */
#define BANK_M_FIELD_WORD2_B4_ADR      (4)     /*!< �m�b<in-house>*TODO*�p��bM-field 1st�o�C�g�ݒ�R�[�h2(@ref RADIO_M_FIELD_WORD2_B4_T �^�ŃA�N�Z�X)�n */
#define BANK_M_FIELD_WORD3_B4_ADR      (4)     /*!< �m�b<in-house>*TODO*�p��bM-field 2nd�o�C�g�ݒ�R�[�h1(@ref RADIO_M_FIELD_WORD3_B4_T �^�ŃA�N�Z�X)�n */
#define BANK_M_FIELD_WORD4_B4_ADR      (4)     /*!< �m�b<in-house>*TODO*�p��bM-field 2nd�o�C�g�ݒ�R�[�h2(@ref RADIO_M_FIELD_WORD4_B4_T �^�ŃA�N�Z�X)�n */
#define BANK_A_FIELD_WORD1_B4_ADR      (4)     /*!< �m�b<in-house>*TODO*�p��bA-field 1st�o�C�g�ݒ�(@ref RADIO_A_FIELD_WORD1_B4_T �^�ŃA�N�Z�X)�n */
#define BANK_A_FIELD_WORD2_B4_ADR      (4)     /*!< �m�b<in-house>*TODO*�p��bA-field 2nd�o�C�g�ݒ�(@ref RADIO_A_FIELD_WORD2_B4_T �^�ŃA�N�Z�X)�n */
#define BANK_A_FIELD_WORD3_B4_ADR      (4)     /*!< �m�b<in-house>*TODO*�p��bA-field 3rd�o�C�g�ݒ�(@ref RADIO_A_FIELD_WORD3_B4_T �^�ŃA�N�Z�X)�n */
#define BANK_A_FIELD_WORD4_B4_ADR      (4)     /*!< �m�b<in-house>*TODO*�p��bA-field 4th�o�C�g�ݒ�(@ref RADIO_A_FIELD_WORD4_B4_T �^�ŃA�N�Z�X)�n */
#define BANK_A_FIELD_WORD5_B4_ADR      (4)     /*!< �m�b<in-house>*TODO*�p��bA-field 5th�o�C�g�ݒ�(@ref RADIO_A_FIELD_WORD5_B4_T �^�ŃA�N�Z�X)�n */
#define BANK_A_FIELD_WORD6_B4_ADR      (4)     /*!< �m�b<in-house>*TODO*�p��bA-field 6th�o�C�g�ݒ�(@ref RADIO_A_FIELD_WORD6_B4_T �^�ŃA�N�Z�X)�n */
#define BANK_A_FIELD_WORD7_B4_ADR      (4)     /*!< �m�b<in-house>*TODO*�p��bA-field 7th�o�C�g�ݒ�(@ref RADIO_A_FIELD_WORD7_B4_T �^�ŃA�N�Z�X)�n */
#define BANK_A_FIELD_WORD8_B4_ADR      (4)     /*!< �m�b<in-house>*TODO*�p��bA-field 8th�o�C�g�ݒ�(@ref RADIO_A_FIELD_WORD8_B4_T �^�ŃA�N�Z�X)�n */
#define BANK_A_FIELD_WORD9_B4_ADR      (4)     /*!< �m�b<in-house>*TODO*�p��bA-field 9th�o�C�g�ݒ�(@ref RADIO_A_FIELD_WORD9_B4_T �^�ŃA�N�Z�X)�n */
#define BANK_A_FIELD_WORD10_B4_ADR     (4)     /*!< �m�b<in-house>*TODO*�p��bA-field 10th�o�C�g�ݒ�(@ref RADIO_A_FIELD_WORD10_B4_T �^�ŃA�N�Z�X)�n */
#define BANK_NONPUBLIC_B4_ADR18        (4)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B4_ADR19        (4)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B4_ADR1A        (4)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B4_ADR1B        (4)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B4_ADR1C        (4)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B4_ADR1D        (4)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B4_ADR1E        (4)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B4_ADR1F        (4)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_CMA2_CHECK_CTRL1_ADR      (4)     /*!< �m�b<in-house>*TODO*�p��bCMA-field2�`�F�b�N�C�l�[�u��1(@ref RADIO_CMA2_CHECK_CTRL1_T �^�ŃA�N�Z�X)�n */
#define BANK_CMA2_CHECK_CTRL2_ADR      (4)     /*!< �m�b<in-house>*TODO*�p��bCMA-field2�`�F�b�N�C�l�[�u��2(@ref RADIO_CMA2_CHECK_CTRL2_T �^�ŃA�N�Z�X)�n */
#define BANK_C2_FIELD_WORD1_ADR        (4)     /*!< �m�b<in-house>*TODO*�p��bC-field2�ݒ�(@ref RADIO_C2_FIELD_WORD1_T �^�ŃA�N�Z�X)�n */
#define BANK_M2_FIELD_WORD1_ADR        (4)     /*!< �m�b<in-house>*TODO*�p��bM-field2 1st�o�C�g�ݒ�(@ref RADIO_M2_FIELD_WORD1_T �^�ŃA�N�Z�X)�n */
#define BANK_M2_FIELD_WORD2_ADR        (4)     /*!< �m�b<in-house>*TODO*�p��bM-field2 2nd�o�C�g�ݒ�(@ref RADIO_M2_FIELD_WORD2_T �^�ŃA�N�Z�X)�n */
#define BANK_A2_FIELD_WORD1_ADR        (4)     /*!< �m�b<in-house>*TODO*�p��bA-field2 1st�o�C�g�ݒ�(@ref RADIO_A2_FIELD_WORD1_T �^�ŃA�N�Z�X)�n */
#define BANK_A2_FIELD_WORD2_ADR        (4)     /*!< �m�b<in-house>*TODO*�p��bA-field2 2nd�o�C�g�ݒ�(@ref RADIO_A2_FIELD_WORD2_T �^�ŃA�N�Z�X)�n */
#define BANK_A2_FIELD_WORD3_ADR        (4)     /*!< �m�b<in-house>*TODO*�p��bA-field2 3rd�o�C�g�ݒ�(@ref RADIO_A2_FIELD_WORD3_T �^�ŃA�N�Z�X)�n */
#define BANK_A2_FIELD_WORD4_ADR        (4)     /*!< �m�b<in-house>*TODO*�p��bA-field2 4th�o�C�g�ݒ�(@ref RADIO_A2_FIELD_WORD4_T �^�ŃA�N�Z�X)�n */
#define BANK_A2_FIELD_WORD5_ADR        (4)     /*!< �m�b<in-house>*TODO*�p��bA-field2 5th�o�C�g�ݒ�(@ref RADIO_A2_FIELD_WORD5_T �^�ŃA�N�Z�X)�n */
#define BANK_A2_FIELD_WORD6_ADR        (4)     /*!< �m�b<in-house>*TODO*�p��bA-field2 6th�o�C�g�ݒ�(@ref RADIO_A2_FIELD_WORD6_T �^�ŃA�N�Z�X)�n */
#define BANK_A2_FIELD_WORD7_ADR        (4)     /*!< �m�b<in-house>*TODO*�p��bA-field2 7th�o�C�g�ݒ�(@ref RADIO_A2_FIELD_WORD7_T �^�ŃA�N�Z�X)�n */
#define BANK_A2_FIELD_WORD8_ADR        (4)     /*!< �m�b<in-house>*TODO*�p��bA-field2 8th�o�C�g�ݒ�(@ref RADIO_A2_FIELD_WORD8_T �^�ŃA�N�Z�X)�n */
#define BANK_A2_FIELD_WORD9_ADR        (4)     /*!< �m�b<in-house>*TODO*�p��bA-field2 9th�o�C�g�ݒ�(@ref RADIO_A2_FIELD_WORD9_T �^�ŃA�N�Z�X)�n */
#define BANK_A2_FIELD_WORD10_ADR       (4)     /*!< �m�b<in-house>*TODO*�p��bA-field2 10th�o�C�g�ݒ�(@ref RADIO_A2_FIELD_WORD10_T �^�ŃA�N�Z�X)�n */
#define BANK_NONPUBLIC_B4_ADR2F        (4)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_CMA3_CHECK_CTRL1_ADR      (4)     /*!< �m�b<in-house>*TODO*�p��bCMA-field3�`�F�b�N�C�l�[�u��1(@ref RADIO_CMA3_CHECK_CTRL1_T �^�ŃA�N�Z�X)�n */
#define BANK_CMA3_CHECK_CTRL2_ADR      (4)     /*!< �m�b<in-house>*TODO*�p��bCMA-field3�`�F�b�N�C�l�[�u��2(@ref RADIO_CMA3_CHECK_CTRL2_T �^�ŃA�N�Z�X)�n */
#define BANK_C3_FIELD_WORD1_ADR        (4)     /*!< �m�b<in-house>*TODO*�p��bC-field3�ݒ�(@ref RADIO_C3_FIELD_WORD1_T �^�ŃA�N�Z�X)�n */
#define BANK_M3_FIELD_WORD1_ADR        (4)     /*!< �m�b<in-house>*TODO*�p��bM-field3 1st�o�C�g�ݒ�(@ref RADIO_M3_FIELD_WORD1_T �^�ŃA�N�Z�X)�n */
#define BANK_M3_FIELD_WORD2_ADR        (4)     /*!< �m�b<in-house>*TODO*�p��bM-field3 2nd�o�C�g�ݒ�(@ref RADIO_M3_FIELD_WORD2_T �^�ŃA�N�Z�X)�n */
#define BANK_A3_FIELD_WORD1_ADR        (4)     /*!< �m�b<in-house>*TODO*�p��bA-field3 1st�o�C�g�ݒ�(@ref RADIO_A3_FIELD_WORD1_T �^�ŃA�N�Z�X)�n */
#define BANK_A3_FIELD_WORD2_ADR        (4)     /*!< �m�b<in-house>*TODO*�p��bA-field3 2nd�o�C�g�ݒ�(@ref RADIO_A3_FIELD_WORD2_T �^�ŃA�N�Z�X)�n */
#define BANK_A3_FIELD_WORD3_ADR        (4)     /*!< �m�b<in-house>*TODO*�p��bA-field3 3rd�o�C�g�ݒ�(@ref RADIO_A3_FIELD_WORD3_T �^�ŃA�N�Z�X)�n */
#define BANK_A3_FIELD_WORD4_ADR        (4)     /*!< �m�b<in-house>*TODO*�p��bA-field3 4th�o�C�g�ݒ�(@ref RADIO_A3_FIELD_WORD4_T �^�ŃA�N�Z�X)�n */
#define BANK_A3_FIELD_WORD5_ADR        (4)     /*!< �m�b<in-house>*TODO*�p��bA-field3 5th�o�C�g�ݒ�(@ref RADIO_A3_FIELD_WORD5_T �^�ŃA�N�Z�X)�n */
#define BANK_A3_FIELD_WORD6_ADR        (4)     /*!< �m�b<in-house>*TODO*�p��bA-field3 6th�o�C�g�ݒ�(@ref RADIO_A3_FIELD_WORD6_T �^�ŃA�N�Z�X)�n */
#define BANK_A3_FIELD_WORD7_ADR        (4)     /*!< �m�b<in-house>*TODO*�p��bA-field3 7th�o�C�g�ݒ�(@ref RADIO_A3_FIELD_WORD7_T �^�ŃA�N�Z�X)�n */
#define BANK_A3_FIELD_WORD8_ADR        (4)     /*!< �m�b<in-house>*TODO*�p��bA-field3 8th�o�C�g�ݒ�(@ref RADIO_A3_FIELD_WORD8_T �^�ŃA�N�Z�X)�n */
#define BANK_A3_FIELD_WORD9_ADR        (4)     /*!< �m�b<in-house>*TODO*�p��bA-field3 9th�o�C�g�ݒ�(@ref RADIO_A3_FIELD_WORD9_T �^�ŃA�N�Z�X)�n */
#define BANK_A3_FIELD_WORD10_ADR       (4)     /*!< �m�b<in-house>*TODO*�p��bA-field3 10th�o�C�g�ݒ�(@ref RADIO_A3_FIELD_WORD10_T �^�ŃA�N�Z�X)�n */
#define BANK_NONPUBLIC_B4_ADR3F        (4)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B4_ADR40        (4)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B4_ADR41        (4)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B4_ADR42        (4)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B4_ADR43        (4)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B4_ADR44        (4)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B4_ADR45        (4)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B4_ADR46        (4)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B4_ADR47        (4)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B4_ADR48        (4)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B4_ADR49        (4)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B4_ADR4A        (4)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B4_ADR4B        (4)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B4_ADR4C        (4)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B4_ADR4D        (4)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B4_ADR4E        (4)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B4_ADR4F        (4)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B4_ADR50        (4)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B4_ADR51        (4)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B4_ADR52        (4)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B4_ADR53        (4)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B4_ADR54        (4)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B4_ADR55        (4)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B4_ADR56        (4)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B4_ADR57        (4)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B4_ADR58        (4)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B4_ADR59        (4)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B4_ADR5A        (4)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B4_ADR5B        (4)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B4_ADR5C        (4)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B4_ADR5D        (4)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B4_ADR5E        (4)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B4_ADR5F        (4)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_TXFREQ_I_2G_ADR           (4)     /*!< �m�b<in-house>*TODO*�p��b2.4GHz�p���M���g���ݒ�(I�J�E���^)(@ref RADIO_TXFREQ_I_2G_T �^�ŃA�N�Z�X)�n */
#define BANK_TXFREQ_FH_2G_ADR          (4)     /*!< �m�b<in-house>*TODO*�p��b2.4GHz�p���M���g���ݒ�(F�J�E���^���4�r�b�g)(@ref RADIO_TXFREQ_FH_2G_T �^�ŃA�N�Z�X)�n */
#define BANK_TXFREQ_FM_2G_ADR          (4)     /*!< �m�b<in-house>*TODO*�p��b2.4GHz�p���M���g���ݒ�(F�J�E���^����8�r�b�g)(@ref RADIO_TXFREQ_FM_2G_T �^�ŃA�N�Z�X)�n */
#define BANK_TXFREQ_FL_2G_ADR          (4)     /*!< �m�b<in-house>*TODO*�p��b2.4GHz�p���M���g���ݒ�(F�J�E���^����8�r�b�g)(@ref RADIO_TXFREQ_FL_2G_T �^�ŃA�N�Z�X)�n */
#define BANK_RXFREQ_I_2G_ADR           (4)     /*!< �m�b<in-house>*TODO*�p��b2.4GHz�p��M���g���ݒ�(I�J�E���^)(@ref RADIO_RXFREQ_I_2G_T �^�ŃA�N�Z�X)�n */
#define BANK_RXFREQ_FH_2G_ADR          (4)     /*!< �m�b<in-house>*TODO*�p��b2.4GHz�p��M���g���ݒ�(F�J�E���^���4�r�b�g)(@ref RADIO_RXFREQ_FH_2G_T �^�ŃA�N�Z�X)�n */
#define BANK_RXFREQ_FM_2G_ADR          (4)     /*!< �m�b<in-house>*TODO*�p��b2.4GHz�p��M���g���ݒ�(F�J�E���^����8�r�b�g)(@ref RADIO_RXFREQ_FM_2G_T �^�ŃA�N�Z�X)�n */
#define BANK_RXFREQ_FL_2G_ADR          (4)     /*!< �m�b<in-house>*TODO*�p��b2.4GHz�p��M���g���ݒ�(F�J�E���^����8�r�b�g)(@ref RADIO_RXFREQ_FL_2G_T �^�ŃA�N�Z�X)�n */
#define BANK_CH_SPACE_H_2G_ADR         (4)     /*!< �m�b<in-house>*TODO*�p��b2.4GHz�p�`���l���Ԋu�ݒ�(��ʃo�C�g)(@ref RADIO_CH_SPACE_H_2G_T �^�ŃA�N�Z�X)�n */
#define BANK_CH_SPACE_L_2G_ADR         (4)     /*!< �m�b<in-house>*TODO*�p��b2.4GHz�p�`���l���Ԋu�ݒ�(���ʃo�C�g)(@ref RADIO_CH_SPACE_L_2G_T �^�ŃA�N�Z�X)�n */
#define BANK_GFSK_DEV_H_2G_ADR         (4)     /*!< �m�b<in-house>*TODO*�p��b2.4GHz�pGFSK���̎��g���Έʐݒ�(���6�r�b�g)(@ref RADIO_GFSK_DEV_H_2G_T �^�ŃA�N�Z�X)�n */
#define BANK_GFSK_DEV_L_2G_ADR         (4)     /*!< �m�b<in-house>*TODO*�p��b2.4GHz�pGFSK���̎��g���Έʐݒ�(���ʃo�C�g)(@ref RADIO_GFSK_DEV_L_2G_T �^�ŃA�N�Z�X)�n */
#define BANK_PA_REG_ADJ_2G_ADR         (4)     /*!< �m�b<in-house>*TODO*�p��b2.4GHz�pPA���M�����[�^�o�͓d������(@ref RADIO_PA_REG_ADJ_2G_T �^�ŃA�N�Z�X)�n */
#define BANK_IQ_MAG_ADJ_H_2G_ADR       (4)     /*!< �m�b<in-house>*TODO*�p��b2.4GHz�pIF��IQ�U���o�����X����(���4�r�b�g)(@ref RADIO_IQ_MAG_ADJ_H_2G_T �^�ŃA�N�Z�X)�n */
#define BANK_IQ_MAG_ADJ_L_2G_ADR       (4)     /*!< �m�b<in-house>*TODO*�p��b2.4GHz�pIF��IQ�U���o�����X����(���ʃo�C�g)(@ref RADIO_IQ_MAG_ADJ_L_2G_T �^�ŃA�N�Z�X)�n */
#define BANK_IQ_PHASE_ADJ_H_2G_ADR     (4)     /*!< �m�b<in-house>*TODO*�p��b2.4GHz�pIF��IQ�ʑ��o�����X����(���4�r�b�g)(@ref RADIO_IQ_PHASE_ADJ_H_2G_T �^�ŃA�N�Z�X)�n */
#define BANK_IQ_PHASE_ADJ_L_2G_ADR     (4)     /*!< �m�b<in-house>*TODO*�p��b2.4GHz�pIF��IQ�ʑ��o�����X����(���ʃo�C�g)(@ref RADIO_IQ_PHASE_ADJ_L_2G_T �^�ŃA�N�Z�X)�n */
#define BANK_GC_CTRL_2G_ADR            (4)     /*!< �m�b<in-house>*TODO*�p��b2.4GHz�p�Q�C������ݒ�(@ref RADIO_GC_CTRL_2G_T �^�ŃA�N�Z�X)�n */
#define BANK_VCO_CAL_MIN_I_2G_ADR      (4)     /*!< �m�b<in-house>*TODO*�p��b2.4GHz�pVCO�L�����u���[�V�����������g���ݒ�(I�J�E���^)(@ref RADIO_VCO_CAL_MIN_I_2G_T �^�ŃA�N�Z�X)�n */
#define BANK_VCO_CAL_MIN_FH_2G_ADR     (4)     /*!< �m�b<in-house>*TODO*�p��b2.4GHz�pVCO�L�����u���[�V�����������g���ݒ�(F�J�E���^���4�r�b�g)(@ref RADIO_VCO_CAL_MIN_FH_2G_T �^�ŃA�N�Z�X)�n */
#define BANK_VCO_CAL_MIN_FM_2G_ADR     (4)     /*!< �m�b<in-house>*TODO*�p��b2.4GHz�pVCO�L�����u���[�V�����������g���ݒ�(F�J�E���^����8�r�b�g)(@ref RADIO_VCO_CAL_MIN_FM_2G_T �^�ŃA�N�Z�X)�n */
#define BANK_VCO_CAL_MIN_FL_2G_ADR     (4)     /*!< �m�b<in-house>*TODO*�p��b2.4GHz�pVCO�L�����u���[�V�����������g���ݒ�(F�J�E���^����8�r�b�g)(@ref RADIO_VCO_CAL_MIN_FL_2G_T �^�ŃA�N�Z�X)�n */
#define BANK_VCO_CAL_MAX_N_2G_ADR      (4)     /*!< �m�b<in-house>*TODO*�p��b2.4GHz�pVCO�L�����u���[�V�����̎��g���͈͐ݒ�(@ref RADIO_VCO_CAL_MAX_N_2G_T �^�ŃA�N�Z�X)�n */
#define BANK_NONPUBLIC_B4_ADR77        (4)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B4_ADR78        (4)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B4_ADR79        (4)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B4_ADR7A        (4)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B4_ADR7B        (4)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B4_ADR7C        (4)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B4_ADR7D        (4)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B4_ADR7E        (4)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B4_ADR7F        (4)     /*!< �m�b<in-house>*TODO*�p��b����J�n */


/* �mRF register structures�bRF���W�X�^�\���́n */
/** @brief �mType definition for @ref RADIO_C_CHECK_CTRL_B4_ADR access�b@ref RADIO_C_CHECK_CTRL_B4_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t c_field_en:         5;      /*!<�m�b<in-house>*TODO*�p��b�R���g���[���t�B�[���h�p�^�[��1~5�`�F�b�N�C�l�[�u�� R/W�n*/
        uint8_t reserved0:          1;      /*!<�m�b<in-house>*TODO*�p��b�\�� R�n*/
        uint8_t ca_int_ctrl:        1;      /*!<�m�b<in-house>*TODO*�p��bField�`�F�b�N�����ݐݒ� R/W�n*/
        uint8_t ca_rxd_clr:         1;      /*!<�m�b<in-house>*TODO*�p��bField�s��v���̎�M�f�[�^�����ݒ� R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_C_CHECK_CTRL_B4_T;

/** @brief �mType definition for @ref RADIO_M_CHECK_CTRL_B4_ADR access�b@ref RADIO_M_CHECK_CTRL_B4_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t m_field_word1_en:   1;      /*!<�m�b<in-house>*TODO*�p��b�}�j���t�@�N�`���[ID�t�B�[���h�p�^�[��1�`�F�b�N�C�l�[�u�� R/W�n*/
        uint8_t m_field_word2_en:   1;      /*!<�m�b<in-house>*TODO*�p��b�}�j���t�@�N�`���[ID�t�B�[���h�p�^�[��2�`�F�b�N�C�l�[�u�� R/W�n*/
        uint8_t m_field_word3_en:   1;      /*!<�m�b<in-house>*TODO*�p��b�}�j���t�@�N�`���[ID�t�B�[���h�p�^�[��3�`�F�b�N�C�l�[�u�� R/W�n*/
        uint8_t m_field_word4_en:   1;      /*!<�m�b<in-house>*TODO*�p��b�}�j���t�@�N�`���[ID�t�B�[���h�p�^�[��4�`�F�b�N�C�l�[�u�� R/W�n*/
        uint8_t rcv_cont_sel:       2;      /*!<�m�b<in-house>*TODO*�p��b����p���^�C�}�������̎�M�p�������ݒ� R/W�n*/
        uint8_t reserved0:          2;      /*!<�m�b<in-house>*TODO*�p��b�\�� R�n*/
    }bits;
    uint8_t byte;
}RADIO_M_CHECK_CTRL_B4_T;
/** @brief �mType definition for @ref RADIO_A_CHECK_CTRL1_ADR access�b@ref RADIO_A_CHECK_CTRL1_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t a_field_word9_en:   1;      /*!<�m�b<in-house>*TODO*�p��b�A�h���X�t�B�[���h�p�^�[��9�`�F�b�N�C�l�[�u�� R/W�n*/
        uint8_t a_field_word10_en:  1;      /*!<�m�b<in-house>*TODO*�p��b�A�h���X�t�B�[���h�p�^�[��10�`�F�b�N�C�l�[�u�� R/W�n*/
        uint8_t reserved0:          6;      /*!<�m�b<in-house>*TODO*�p��b�\�� R�n*/
    }bits;
    uint8_t byte;
}RADIO_A_CHECK_CTRL1_T;

/** @brief �mType definition for @ref RADIO_A_CHECK_CTRL2_ADR access�b@ref RADIO_A_CHECK_CTRL2_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t a_field_word1_en:   1;      /*!<�m�b<in-house>*TODO*�p��b�A�h���X�t�B�[���h�p�^�[��1�`�F�b�N�C�l�[�u�� R/W�n*/
        uint8_t a_field_word2_en:   1;      /*!<�m�b<in-house>*TODO*�p��b�A�h���X�t�B�[���h�p�^�[��2�`�F�b�N�C�l�[�u�� R/W�n*/
        uint8_t a_field_word3_en:   1;      /*!<�m�b<in-house>*TODO*�p��b�A�h���X�t�B�[���h�p�^�[��3�`�F�b�N�C�l�[�u�� R/W�n*/
        uint8_t a_field_word4_en:   1;      /*!<�m�b<in-house>*TODO*�p��b�A�h���X�t�B�[���h�p�^�[��4�`�F�b�N�C�l�[�u�� R/W�n*/
        uint8_t a_field_word5_en:   1;      /*!<�m�b<in-house>*TODO*�p��b�A�h���X�t�B�[���h�p�^�[��5�`�F�b�N�C�l�[�u�� R/W�n*/
        uint8_t a_field_word6_en:   1;      /*!<�m�b<in-house>*TODO*�p��b�A�h���X�t�B�[���h�p�^�[��6�`�F�b�N�C�l�[�u�� R/W�n*/
        uint8_t a_field_word7_en:   1;      /*!<�m�b<in-house>*TODO*�p��b�A�h���X�t�B�[���h�p�^�[��7�`�F�b�N�C�l�[�u�� R/W�n*/
        uint8_t a_field_word8_en:   1;      /*!<�m�b<in-house>*TODO*�p��b�A�h���X�t�B�[���h�p�^�[��8�`�F�b�N�C�l�[�u�� R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_A_CHECK_CTRL2_T;

/** @brief �mType definition for @ref RADIO_C_FIELD_WORD1_B4_ADR access�b@ref RADIO_C_FIELD_WORD1_B4_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t c_field_word1:      8;      /*!<�m�b<in-house>*TODO*�p��bC-field �ݒ� �R�[�h#1 R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_C_FIELD_WORD1_B4_T;

/** @brief �mType definition for @ref RADIO_C_FIELD_WORD2_B4_ADR access�b@ref RADIO_C_FIELD_WORD2_B4_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t c_field_word2:      8;      /*!<�m�b<in-house>*TODO*�p��bC-field�ݒ� �R�[�h#2 R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_C_FIELD_WORD2_B4_T;

/** @brief �mType definition for @ref RADIO_C_FIELD_WORD3_B4_ADR access�b@ref RADIO_C_FIELD_WORD3_B4_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t c_field_word3:      8;      /*!<�m�b<in-house>*TODO*�p��bC-field �ݒ� �R�[�h#3 R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_C_FIELD_WORD3_B4_T;

/** @brief �mType definition for @ref RADIO_C_FIELD_WORD4_B4_ADR access�b@ref RADIO_C_FIELD_WORD4_B4_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t c_field_word4:      8;      /*!<�m�b<in-house>*TODO*�p��bC-field �ݒ� �R�[�h#4 R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_C_FIELD_WORD4_B4_T;

/** @brief �mType definition for @ref RADIO_C_FIELD_WORD5_B4_ADR access�b@ref RADIO_C_FIELD_WORD5_B4_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t c_field_word5:      8;      /*!<�m�b<in-house>*TODO*�p��bC-field �ݒ� �R�[�h#5 R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_C_FIELD_WORD5_B4_T;

/** @brief �mType definition for @ref RADIO_M_FIELD_WORD1_B4_ADR access�b@ref RADIO_M_FIELD_WORD1_B4_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t m_field_word1:      8;      /*!<�m�b<in-house>*TODO*�p��bM-field 1st�o�C�g�ݒ� �R�[�h#1 R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_M_FIELD_WORD1_B4_T;

/** @brief �mType definition for @ref RADIO_M_FIELD_WORD2_B4_ADR access�b@ref RADIO_M_FIELD_WORD2_B4_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t m_field_word2:      8;      /*!<�m�b<in-house>*TODO*�p��bM-field 1st�o�C�g�ݒ� �R�[�h#2 R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_M_FIELD_WORD2_B4_T;

/** @brief �mType definition for @ref RADIO_M_FIELD_WORD3_B4_ADR access�b@ref RADIO_M_FIELD_WORD3_B4_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t m_field_word3:      8;      /*!<�m�b<in-house>*TODO*�p��bM-field 2nd�o�C�g�ݒ� �R�[�h#1 R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_M_FIELD_WORD3_B4_T;

/** @brief �mType definition for @ref RADIO_M_FIELD_WORD4_B4_ADR access�b@ref RADIO_M_FIELD_WORD4_B4_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t m_field_word4:      8;      /*!<�m�b<in-house>*TODO*�p��bM-field 2nd�o�C�g�ݒ� �R�[�h#2 R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_M_FIELD_WORD4_B4_T;

/** @brief �mType definition for @ref RADIO_A_FIELD_WORD1_B4_ADR access�b@ref RADIO_A_FIELD_WORD1_B4_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t a_field_word1:      8;      /*!<�m�b<in-house>*TODO*�p��bA-field�ݒ�(1�o�C�g��) R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_A_FIELD_WORD1_B4_T;

/** @brief �mType definition for @ref RADIO_A_FIELD_WORD2_B4_ADR access�b@ref RADIO_A_FIELD_WORD2_B4_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t a_field_word2:      8;      /*!<�m�b<in-house>*TODO*�p��bA-field�ݒ�(2�o�C�g��) R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_A_FIELD_WORD2_B4_T;

/** @brief �mType definition for @ref RADIO_A_FIELD_WORD3_B4_ADR access�b@ref RADIO_A_FIELD_WORD3_B4_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t a_field_word3:      8;      /*!<�m�b<in-house>*TODO*�p��bA-field�ݒ�(3�o�C�g��) R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_A_FIELD_WORD3_B4_T;

/** @brief �mType definition for @ref RADIO_A_FIELD_WORD4_B4_ADR access�b@ref RADIO_A_FIELD_WORD4_B4_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t a_field_word4:      8;      /*!<�m�b<in-house>*TODO*�p��bA-field�ݒ�(4�o�C�g��) R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_A_FIELD_WORD4_B4_T;

/** @brief �mType definition for @ref RADIO_A_FIELD_WORD5_B4_ADR access�b@ref RADIO_A_FIELD_WORD5_B4_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t a_field_word5:      8;      /*!<�m�b<in-house>*TODO*�p��bA-field�ݒ�(5�o�C�g��) R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_A_FIELD_WORD5_B4_T;

/** @brief �mType definition for @ref RADIO_A_FIELD_WORD6_B4_ADR access�b@ref RADIO_A_FIELD_WORD6_B4_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t a_field_word6:      8;      /*!<�m�b<in-house>*TODO*�p��bA-field�ݒ�(6�o�C�g��) R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_A_FIELD_WORD6_B4_T;

/** @brief �mType definition for @ref RADIO_A_FIELD_WORD7_B4_ADR access�b@ref RADIO_A_FIELD_WORD7_B4_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t a_field_word7:      8;      /*!<�m�b<in-house>*TODO*�p��bA-field�ݒ�(7�o�C�g��) R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_A_FIELD_WORD7_B4_T;

/** @brief �mType definition for @ref RADIO_A_FIELD_WORD8_B4_ADR access�b@ref RADIO_A_FIELD_WORD8_B4_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t a_field_word8:      8;      /*!<�m�b<in-house>*TODO*�p��bA-field�ݒ�(8�o�C�g��) R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_A_FIELD_WORD8_B4_T;

/** @brief �mType definition for @ref RADIO_A_FIELD_WORD9_B4_ADR access�b@ref RADIO_A_FIELD_WORD9_B4_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t a_field_word9:      8;      /*!<�m�b<in-house>*TODO*�p��bA-field�ݒ�(9�o�C�g��) R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_A_FIELD_WORD9_B4_T;

/** @brief �mType definition for @ref RADIO_A_FIELD_WORD10_B4_ADR access�b@ref RADIO_A_FIELD_WORD10_B4_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t a_field_word10:     8;      /*!<�m�b<in-house>*TODO*�p��bA-field�ݒ�(10�o�C�g��) R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_A_FIELD_WORD10_B4_T;

/** @brief �mType definition for @ref RADIO_CMA2_CHECK_CTRL1_ADR access�b@ref RADIO_CMA2_CHECK_CTRL1_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t a2_field_word9_en:  1;      /*!<�m�b<in-house>*TODO*�p��b�A�h���X�t�B�[���h�p�^�[��9�`�F�b�N�C�l�[�u�� R/W�n*/
        uint8_t a2_field_word10_en: 1;      /*!<�m�b<in-house>*TODO*�p��b�A�h���X�t�B�[���h�p�^�[��10�`�F�b�N�C�l�[�u�� R/W�n*/
        uint8_t reserved0:          2;      /*!<�m�b<in-house>*TODO*�p��b�\�� R�n*/
        uint8_t c2_field_word_en:   1;      /*!<�m�b<in-house>*TODO*�p��b�R���g���[���t�B�[���h�p�^�[��1�`�F�b�N�C�l�[�u�� R/W�n*/
        uint8_t m2_field_word1_en:  1;      /*!<�m�b<in-house>*TODO*�p��b�}�j���t�@�N�`���[ID�t�B�[���h�p�^�[��1�`�F�b�N�C�l�[�u�� R/W�n*/
        uint8_t m2_field_word2_en:  1;      /*!<�m�b<in-house>*TODO*�p��b�}�j���t�@�N�`���[ID�t�B�[���h�p�^�[��2�`�F�b�N�C�l�[�u�� R/W�n*/
        uint8_t reserved1:          1;      /*!<�m�b<in-house>*TODO*�p��b�\�� R�n*/
    }bits;
    uint8_t byte;
}RADIO_CMA2_CHECK_CTRL1_T;

/** @brief �mType definition for @ref RADIO_CMA2_CHECK_CTRL2_ADR access�b@ref RADIO_CMA2_CHECK_CTRL2_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t a2_field_word1_en:  1;      /*!<�m�b<in-house>*TODO*�p��b�A�h���X�t�B�[���h�p�^�[��1�`�F�b�N�C�l�[�u�� R/W�n*/
        uint8_t a2_field_word2_en:  1;      /*!<�m�b<in-house>*TODO*�p��b�A�h���X�t�B�[���h�p�^�[��2�`�F�b�N�C�l�[�u�� R/W�n*/
        uint8_t a2_field_word3_en:  1;      /*!<�m�b<in-house>*TODO*�p��b�A�h���X�t�B�[���h�p�^�[��3�`�F�b�N�C�l�[�u�� R/W�n*/
        uint8_t a2_field_word4_en:  1;      /*!<�m�b<in-house>*TODO*�p��b�A�h���X�t�B�[���h�p�^�[��4�`�F�b�N�C�l�[�u�� R/W�n*/
        uint8_t a2_field_word5_en:  1;      /*!<�m�b<in-house>*TODO*�p��b�A�h���X�t�B�[���h�p�^�[��5�`�F�b�N�C�l�[�u�� R/W�n*/
        uint8_t a2_field_word6_en:  1;      /*!<�m�b<in-house>*TODO*�p��b�A�h���X�t�B�[���h�p�^�[��6�`�F�b�N�C�l�[�u�� R/W�n*/
        uint8_t a2_field_word7_en:  1;      /*!<�m�b<in-house>*TODO*�p��b�A�h���X�t�B�[���h�p�^�[��7�`�F�b�N�C�l�[�u�� R/W�n*/
        uint8_t a2_field_word8_en:  1;      /*!<�m�b<in-house>*TODO*�p��b�A�h���X�t�B�[���h�p�^�[��8�`�F�b�N�C�l�[�u�� R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_CMA2_CHECK_CTRL2_T;

/** @brief �mType definition for @ref RADIO_C2_FIELD_WORD1_ADR access�b@ref RADIO_C2_FIELD_WORD1_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t c2_field_word1:     8;      /*!<�m�b<in-house>*TODO*�p��bC-field2 �ݒ� R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_C2_FIELD_WORD1_T;

/** @brief �mType definition for @ref RADIO_M2_FIELD_WORD1_ADR access�b@ref RADIO_M2_FIELD_WORD1_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t m2_field_word1:     8;      /*!<�m�b<in-house>*TODO*�p��bM-field2 1st�o�C�g�ݒ� R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_M2_FIELD_WORD1_T;

/** @brief �mType definition for @ref RADIO_M2_FIELD_WORD2_ADR access�b@ref RADIO_M2_FIELD_WORD2_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t m2_field_word2:     8;      /*!<�m�b<in-house>*TODO*�p��bM-field2 2nd�o�C�g�ݒ� R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_M2_FIELD_WORD2_T;

/** @brief �mType definition for @ref RADIO_A2_FIELD_WORD1_ADR access�b@ref RADIO_A2_FIELD_WORD1_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t a2_field_word1:     8;      /*!<�m�b<in-house>*TODO*�p��bA-field2�ݒ�(1�o�C�g��) R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_A2_FIELD_WORD1_T;

/** @brief �mType definition for @ref RADIO_A2_FIELD_WORD2_ADR access�b@ref RADIO_A2_FIELD_WORD2_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t a2_field_word2:     8;      /*!<�m�b<in-house>*TODO*�p��bA-field2�ݒ�(2�o�C�g��) R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_A2_FIELD_WORD2_T;

/** @brief �mType definition for @ref RADIO_A2_FIELD_WORD3_ADR access�b@ref RADIO_A2_FIELD_WORD3_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t a2_field_word3:     8;      /*!<�m�b<in-house>*TODO*�p��bA-field2�ݒ�(3�o�C�g��) R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_A2_FIELD_WORD3_T;

/** @brief �mType definition for @ref RADIO_A2_FIELD_WORD4_ADR access�b@ref RADIO_A2_FIELD_WORD4_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t a2_field_word4:     8;      /*!<�m�b<in-house>*TODO*�p��bA-field2�ݒ�(4�o�C�g��) R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_A2_FIELD_WORD4_T;

/** @brief �mType definition for @ref RADIO_A2_FIELD_WORD5_ADR access�b@ref RADIO_A2_FIELD_WORD5_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t a2_field_word5:     8;      /*!<�m�b<in-house>*TODO*�p��bA-field2�ݒ�(5�o�C�g��) R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_A2_FIELD_WORD5_T;

/** @brief �mType definition for @ref RADIO_A2_FIELD_WORD6_ADR access�b@ref RADIO_A2_FIELD_WORD6_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t a2_field_word6:     8;      /*!<�m�b<in-house>*TODO*�p��bA-field2�ݒ�(6�o�C�g��) R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_A2_FIELD_WORD6_T;

/** @brief �mType definition for @ref RADIO_A2_FIELD_WORD7_ADR access�b@ref RADIO_A2_FIELD_WORD7_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t a2_field_word7:     8;      /*!<�m�b<in-house>*TODO*�p��bA-field2�ݒ�(7�o�C�g��) R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_A2_FIELD_WORD7_T;

/** @brief �mType definition for @ref RADIO_A2_FIELD_WORD8_ADR access�b@ref RADIO_A2_FIELD_WORD8_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t a2_field_word8:     8;      /*!<�m�b<in-house>*TODO*�p��bA-field2�ݒ�(8�o�C�g��) R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_A2_FIELD_WORD8_T;

/** @brief �mType definition for @ref RADIO_A2_FIELD_WORD9_ADR access�b@ref RADIO_A2_FIELD_WORD9_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t a2_field_word9:     8;      /*!<�m�b<in-house>*TODO*�p��bA-field2�ݒ�(9�o�C�g��) R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_A2_FIELD_WORD9_T;

/** @brief �mType definition for @ref RADIO_A2_FIELD_WORD10_ADR access�b@ref RADIO_A2_FIELD_WORD10_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t a2_field_word10:    8;      /*!<�m�b<in-house>*TODO*�p��bA-field2�ݒ�(10�o�C�g��) R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_A2_FIELD_WORD10_T;

/** @brief �mType definition for @ref RADIO_CMA3_CHECK_CTRL1_ADR access�b@ref RADIO_CMA3_CHECK_CTRL1_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t a3_field_word9_en:  1;      /*!<�m�b<in-house>*TODO*�p��b�A�h���X�t�B�[���h3�p�^�[��9�`�F�b�N�C�l�[�u�� R/W�n*/
        uint8_t a3_field_word10_en: 1;      /*!<�m�b<in-house>*TODO*�p��b�A�h���X�t�B�[���h3�p�^�[��10�`�F�b�N�C�l�[�u�� R/W�n*/
        uint8_t reserved0:          2;      /*!<�m�b<in-house>*TODO*�p��b�\�� R�n*/
        uint8_t c3_field_word_en:   1;      /*!<�m�b<in-house>*TODO*�p��b�R���g���[���t�B�[���h3�p�^�[���`�F�b�N�C�l�[�u�� R/W�n*/
        uint8_t m3_field_word1_en:  1;      /*!<�m�b<in-house>*TODO*�p��b�}�j���t�@�N�`���[ID�t�B�[���h3�p�^�[��1�`�F�b�N�C�l�[�u�� R/W�n*/
        uint8_t m3_field_word2_en:  1;      /*!<�m�b<in-house>*TODO*�p��b�}�j���t�@�N�`���[ID�t�B�[���h3�p�^�[��2�`�F�b�N�C�l�[�u�� R/W�n*/
        uint8_t reserved1:          1;      /*!<�m�b<in-house>*TODO*�p��b�\�� R�n*/
    }bits;
    uint8_t byte;
}RADIO_CMA3_CHECK_CTRL1_T;

/** @brief �mType definition for @ref RADIO_CMA3_CHECK_CTRL2_ADR access�b@ref RADIO_CMA3_CHECK_CTRL2_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t a3_field_word1_en:  1;      /*!<�m�b<in-house>*TODO*�p��b�A�h���X�t�B�[���h3�p�^�[��1�`�F�b�N�C�l�[�u�� R/W�n*/
        uint8_t a3_field_word2_en:  1;      /*!<�m�b<in-house>*TODO*�p��b�A�h���X�t�B�[���h3�p�^�[��2�`�F�b�N�C�l�[�u�� R/W�n*/
        uint8_t a3_field_word3_en:  1;      /*!<�m�b<in-house>*TODO*�p��b�A�h���X�t�B�[���h3�p�^�[��3�`�F�b�N�C�l�[�u�� R/W�n*/
        uint8_t a3_field_word4_en:  1;      /*!<�m�b<in-house>*TODO*�p��b�A�h���X�t�B�[���h3�p�^�[��4�`�F�b�N�C�l�[�u�� R/W�n*/
        uint8_t a3_field_word5_en:  1;      /*!<�m�b<in-house>*TODO*�p��b�A�h���X�t�B�[���h3�p�^�[��5�`�F�b�N�C�l�[�u�� R/W�n*/
        uint8_t a3_field_word6_en:  1;      /*!<�m�b<in-house>*TODO*�p��b�A�h���X�t�B�[���h3�p�^�[��6�`�F�b�N�C�l�[�u�� R/W�n*/
        uint8_t a3_field_word7_en:  1;      /*!<�m�b<in-house>*TODO*�p��b�A�h���X�t�B�[���h3�p�^�[��7�`�F�b�N�C�l�[�u�� R/W�n*/
        uint8_t a3_field_word8_en:  1;      /*!<�m�b<in-house>*TODO*�p��b�A�h���X�t�B�[���h3�p�^�[��8�`�F�b�N�C�l�[�u�� R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_CMA3_CHECK_CTRL2_T;

/** @brief �mType definition for @ref RADIO_C3_FIELD_WORD1_ADR access�b@ref RADIO_C3_FIELD_WORD1_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t c3_field_word1:     8;      /*!<�m�b<in-house>*TODO*�p��bC-field3 �ݒ� R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_C3_FIELD_WORD1_T;

/** @brief �mType definition for @ref RADIO_M3_FIELD_WORD1_ADR access�b@ref RADIO_M3_FIELD_WORD1_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t m3_field_word1:     8;      /*!<�m�b<in-house>*TODO*�p��bM-field3 1st�o�C�g�ݒ� R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_M3_FIELD_WORD1_T;

/** @brief �mType definition for @ref RADIO_M3_FIELD_WORD2_ADR access�b@ref RADIO_M3_FIELD_WORD2_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t m3_field_word2:     8;      /*!<�m�b<in-house>*TODO*�p��bM-field3 2nd�o�C�g�ݒ� R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_M3_FIELD_WORD2_T;

/** @brief �mType definition for @ref RADIO_A3_FIELD_WORD1_ADR access�b@ref RADIO_A3_FIELD_WORD1_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t a3_field_word1:     8;      /*!<�m�b<in-house>*TODO*�p��bA-field3�ݒ�(1�o�C�g��) R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_A3_FIELD_WORD1_T;

/** @brief �mType definition for @ref RADIO_A3_FIELD_WORD2_ADR access�b@ref RADIO_A3_FIELD_WORD2_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t a3_field_word2:     8;      /*!<�m�b<in-house>*TODO*�p��bA-field3�ݒ�(2�o�C�g��) R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_A3_FIELD_WORD2_T;

/** @brief �mType definition for @ref RADIO_A3_FIELD_WORD3_ADR access�b@ref RADIO_A3_FIELD_WORD3_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t a3_field_word3:     8;      /*!<�m�b<in-house>*TODO*�p��bA-field3�ݒ�(3�o�C�g��) R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_A3_FIELD_WORD3_T;

/** @brief �mType definition for @ref RADIO_A3_FIELD_WORD4_ADR access�b@ref RADIO_A3_FIELD_WORD4_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t a3_field_word4:     8;      /*!<�m�b<in-house>*TODO*�p��bA-field3�ݒ�(4�o�C�g��) R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_A3_FIELD_WORD4_T;

/** @brief �mType definition for @ref RADIO_A3_FIELD_WORD5_ADR access�b@ref RADIO_A3_FIELD_WORD5_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t a3_field_word5:     8;      /*!<�m�b<in-house>*TODO*�p��bA-field3�ݒ�(5�o�C�g��) R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_A3_FIELD_WORD5_T;

/** @brief �mType definition for @ref RADIO_A3_FIELD_WORD6_ADR access�b@ref RADIO_A3_FIELD_WORD6_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t a3_field_word6:     8;      /*!<�m�b<in-house>*TODO*�p��bA-field�ݒ�(6�o�C�g��) R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_A3_FIELD_WORD6_T;

/** @brief �mType definition for @ref RADIO_A3_FIELD_WORD7_ADR access�b@ref RADIO_A3_FIELD_WORD7_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t a3_field_word7:     8;      /*!<�m�b<in-house>*TODO*�p��bA-field�ݒ�(7�o�C�g��) R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_A3_FIELD_WORD7_T;

/** @brief �mType definition for @ref RADIO_A3_FIELD_WORD8_ADR access�b@ref RADIO_A3_FIELD_WORD8_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t a3_field_word8:     8;      /*!<�m�b<in-house>*TODO*�p��bA-field�ݒ�(8�o�C�g��) R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_A3_FIELD_WORD8_T;

/** @brief �mType definition for @ref RADIO_A3_FIELD_WORD9_ADR access�b@ref RADIO_A3_FIELD_WORD9_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t a3_field_word9:     8;      /*!<�m�b<in-house>*TODO*�p��bA-field�ݒ�(9�o�C�g��) R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_A3_FIELD_WORD9_T;

/** @brief �mType definition for @ref RADIO_A3_FIELD_WORD10_ADR access�b@ref RADIO_A3_FIELD_WORD10_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t a3_field_word10:    8;      /*!<�m�b<in-house>*TODO*�p��bA-field�ݒ�(10�o�C�g��) R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_A3_FIELD_WORD10_T;

/** @brief �mType definition for @ref RADIO_TXFREQ_I_2G_ADR access�b@ref RADIO_TXFREQ_I_2G_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t txfreq_i_2g:        6;      /*!<�m�b<in-house>*TODO*�p��b R/W�n*/
        uint8_t reserved0:          2;      /*!<�m�b<in-house>*TODO*�p��b R�n*/
    }bits;
    uint8_t byte;
}RADIO_TXFREQ_I_2G_T;

/** @brief �mType definition for @ref RADIO_TXFREQ_FH_2G_ADR access�b@ref RADIO_TXFREQ_FH_2G_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t txfreq_f_2g:        6;      /*!<�m�b<in-house>*TODO*�p��b R/W�n*/
        uint8_t reserved0:          2;      /*!<�m�b<in-house>*TODO*�p��b R�n*/
    }bits;
    uint8_t byte;
}RADIO_TXFREQ_FH_2G_T;

/** @brief �mType definition for @ref RADIO_TXFREQ_FM_2G_ADR access�b@ref RADIO_TXFREQ_FM_2G_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t txfreq_f_2g:        8;      /*!<�m�b<in-house>*TODO*�p��b R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_TXFREQ_FM_2G_T;

/** @brief �mType definition for @ref RADIO_TXFREQ_FL_2G_ADR access�b@ref RADIO_TXFREQ_FL_2G_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t txfreq_f_2g:        8;      /*!<�m�b<in-house>*TODO*�p��b R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_TXFREQ_FL_2G_T;

/** @brief �mType definition for @ref RADIO_RXFREQ_I_2G_ADR access�b@ref RADIO_RXFREQ_I_2G_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t rxfreq_i_2g:        6;      /*!<�m�b<in-house>*TODO*�p��b R/W�n*/
        uint8_t reserved0:          2;      /*!<�m�b<in-house>*TODO*�p��b R�n*/
    }bits;
    uint8_t byte;
}RADIO_RXFREQ_I_2G_T;

/** @brief �mType definition for @ref RADIO_RXFREQ_FH_2G_ADR access�b@ref RADIO_RXFREQ_FH_2G_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t rxfreq_f_2g:        6;      /*!<�m�b<in-house>*TODO*�p��b R/W�n*/
        uint8_t reserved0:          2;      /*!<�m�b<in-house>*TODO*�p��b R�n*/
    }bits;
    uint8_t byte;
}RADIO_RXFREQ_FH_2G_T;

/** @brief �mType definition for @ref RADIO_RXFREQ_FM_2G_ADR access�b@ref RADIO_RXFREQ_FM_2G_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t rxfreq_f_2g:        8;      /*!<�m�b<in-house>*TODO*�p��b R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_RXFREQ_FM_2G_T;

/** @brief �mType definition for @ref RADIO_RXFREQ_FL_2G_ADR access�b@ref RADIO_RXFREQ_FL_2G_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t rxfreq_f_2g:        8;      /*!<�m�b<in-house>*TODO*�p��b R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_RXFREQ_FL_2G_T;

/** @brief �mType definition for @ref RADIO_CH_SPACE_H_2G_ADR access�b@ref RADIO_CH_SPACE_H_2G_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t ch_space_2g:        8;      /*!<�m�b<in-house>*TODO*�p��b R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_CH_SPACE_H_2G_T;

/** @brief �mType definition for @ref RADIO_CH_SPACE_L_2G_ADR access�b@ref RADIO_CH_SPACE_L_2G_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t ch_space_2g:        8;      /*!<�m�b<in-house>*TODO*�p��b R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_CH_SPACE_L_2G_T;

/** @brief �mType definition for @ref RADIO_GFSK_DEV_H_2G_ADR access�b@ref RADIO_GFSK_DEV_H_2G_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t gfsk_dev_2g:        8;      /*!<�m�b<in-house>*TODO*�p��b R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_GFSK_DEV_H_2G_T;

/** @brief �mType definition for @ref RADIO_GFSK_DEV_L_2G_ADR access�b@ref RADIO_GFSK_DEV_L_2G_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t gfsk_dev_2g:        8;      /*!<�m�b<in-house>*TODO*�p��b R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_GFSK_DEV_L_2G_T;

/** @brief �mType definition for @ref RADIO_IQ_MAG_ADJ_H_2G_ADR access�b@ref RADIO_IQ_MAG_ADJ_H_2G_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t iq_mag_adj_h_2g:    4;      /*!<�m�b<in-house>*TODO*�p��bIQ�M���̐U�������ݒ�(���4�r�b�g) R/W�n*/
        uint8_t reserved0:          4;      /*!<�m�b<in-house>*TODO*�p��b�\�� R�n*/
    }bits;
    uint8_t byte;
}RADIO_IQ_MAG_ADJ_H_2G_T;

/** @brief �mType definition for @ref RADIO_IQ_MAG_ADJ_L_2G_ADR access�b@ref RADIO_IQ_MAG_ADJ_L_2G_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t iq_mag_adj_l_2g:    8;      /*!<�m�b<in-house>*TODO*�p��bIQ�M���̐U�������ݒ�(���ʃo�C�g) R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_IQ_MAG_ADJ_L_2G_T;

/** @brief �mType definition for @ref RADIO_IQ_PHASE_ADJ_H_2G_ADR access�b@ref RADIO_IQ_PHASE_ADJ_H_2G_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t iq_phase_adj_h_2g:  3;      /*!<�m�b<in-house>*TODO*�p��bIQ�M���̈ʑ������ݒ�(���3�r�b�g) R/W�n*/
        uint8_t reserved0:          1;      /*!<�m�b<in-house>*TODO*�p��b�\�� R�n*/
        uint8_t iq_phase_sign_2g:   1;      /*!<�m�b<in-house>*TODO*�p��bIQ�M���̈ʑ����������r�b�g R/W�n*/
        uint8_t reserved1:          3;      /*!<�m�b<in-house>*TODO*�p��b�\�� R�n*/
    }bits;
    uint8_t byte;
}RADIO_IQ_PHASE_ADJ_H_2G_T;

/** @brief �mType definition for @ref RADIO_IQ_PHASE_ADJ_L_2G_ADR access�b@ref RADIO_IQ_PHASE_ADJ_L_2G_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t iq_phase_adj_l_2g:  8;      /*!<�m�b<in-house>*TODO*�p��bIQ�M���̈ʑ������ݒ�(���ʃo�C�g) R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_IQ_PHASE_ADJ_L_2G_T;

/** @brief �mType definition for @ref RADIO_GC_CTRL_2G_ADR access�b@ref RADIO_GC_CTRL_2G_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t gc_mode_2g:         4;      /*!<�m�b<in-house>*TODO*�p��b2.4GHz�p�Q�C�����䃂�[�h�ݒ� R/W�n*/
        uint8_t gc_mode_cca_2g:     4;      /*!<�m�b<in-house>*TODO*�p��b2.4GHz�pCCA���Q�C�����䃂�[�h�ݒ� R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_GC_CTRL_2G_T;

/** @brief �mType definition for @ref RADIO_VCO_CAL_MIN_I_2G_ADR access�b@ref RADIO_VCO_CAL_MIN_I_2G_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t vco_cal_min_i_2g:   6;      /*!<�m�b<in-house>*TODO*�p��b R/W�n*/
        uint8_t reserved0:          2;      /*!<�m�b<in-house>*TODO*�p��b R�n*/
    }bits;
    uint8_t byte;
}RADIO_VCO_CAL_MIN_I_2G_T;

/** @brief �mType definition for @ref RADIO_VCO_CAL_MIN_FH_2G_ADR access�b@ref RADIO_VCO_CAL_MIN_FH_2G_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t vco_cal_min_f_2g:   6;      /*!<�m�b<in-house>*TODO*�p��b R/W�n*/
        uint8_t reserved0:          2;      /*!<�m�b<in-house>*TODO*�p��b R�n*/
    }bits;
    uint8_t byte;
}RADIO_VCO_CAL_MIN_FH_2G_T;

/** @brief �mType definition for @ref RADIO_VCO_CAL_MIN_FM_2G_ADR access�b@ref RADIO_VCO_CAL_MIN_FM_2G_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t vco_cal_min_f_2g:   8;      /*!<�m�b<in-house>*TODO*�p��b R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_VCO_CAL_MIN_FM_2G_T;

/** @brief �mType definition for @ref RADIO_VCO_CAL_MIN_FL_2G_ADR access�b@ref RADIO_VCO_CAL_MIN_FL_2G_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t vco_cal_min_f_2g:   8;      /*!<�m�b<in-house>*TODO*�p��b R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_VCO_CAL_MIN_FL_2G_T;

/** @brief �mType definition for @ref RADIO_VCAL_MAX_N_2G_ADR access�b@ref RADIO_VCAL_MAX_N_2G_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t vco_cal_max_n_2g:   4;      /*!<�m�b<in-house>*TODO*�p��b R/W�n*/
        uint8_t reserved0:          4;      /*!<�m�b<in-house>*TODO*�p��b R�n*/
    }bits;
    uint8_t byte;
}RADIO_VCO_CAL_MAX_N_2G_T;

/** \} */ /* End of group RF_REGISTER_BANK4 */
#endif

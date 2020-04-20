/****************************************************************************************/
/**
   @file     bank7.h

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
#ifndef _bank7_H
#define _bank7_H

/**
    \addtogroup RF_REGISTER_BANK7
    \{
*/
 
/*�mBANK7 Register Address Definitions�bBANK7���W�X�^�A�h���X��`�n*/
#define RADIO_DSSS_CTRL_ADR             (0x01u)     /*!< �m�b<in-house>*TODO*�p��bDSSS����ݒ�(@ref RADIO_DSSS_CTRL_T �^�ŃA�N�Z�X)�n */
#define RADIO_DSSS_MODE_ADR             (0x02u)     /*!< �m�b<in-house>*TODO*�p��bDSSS���[�h�ݒ�(@ref RADIO_DSSS_MODE_T �^�ŃA�N�Z�X)�n */
#define RADIO_FEC_ENC_CTRL_ADR          (0x03u)     /*!< �m�b<in-house>*TODO*�p��bFEC�G���R�[�_�ݒ�(@ref RADIO_FEC_ENC_CTRL_T �^�ŃA�N�Z�X)�n */
#define RADIO_FEC_INIT_STATE_ADR        (0x04u)     /*!< �m�b<in-house>*TODO*�p��bFEC�̏��������(@ref RADIO_FEC_INIT_STATE_T �^�ŃA�N�Z�X)�n */
#define RADIO_FEC_DEC_CTRL_ADR          (0x05u)     /*!< �m�b<in-house>*TODO*�p��bFEC�f�R�[�_�ݒ�(@ref RADIO_FEC_DEC_CTRL_T �^�ŃA�N�Z�X)�n */
#define RADIO_SF_CTRL_ADR               (0x06u)     /*!< �m�b<in-house>*TODO*�p��b�g�U���ݒ�(@ref RADIO_SF_CTRL_T �^�ŃA�N�Z�X)�n */
#define RADIO_SHR_GOLD_SEED3_ADR        (0x07u)     /*!< �m�b<in-house>*TODO*�p��bSHR�S�[���h�����V�[�h�ݒ�3(@ref RADIO_SHR_GOLD_SEED3_T �^�ŃA�N�Z�X)�n */
#define RADIO_SHR_GOLD_SEED2_ADR        (0x08u)     /*!< �m�b<in-house>*TODO*�p��bSHR�S�[���h�����V�[�h�ݒ�2(@ref RADIO_SHR_GOLD_SEED2_T �^�ŃA�N�Z�X)�n */
#define RADIO_SHR_GOLD_SEED1_ADR        (0x09u)     /*!< �m�b<in-house>*TODO*�p��bSHR�S�[���h�����V�[�h�ݒ�1(@ref RADIO_SHR_GOLD_SEED1_T �^�ŃA�N�Z�X)�n */
#define RADIO_SHR_GOLD_SEED0_ADR        (0x0Au)     /*!< �m�b<in-house>*TODO*�p��bSHR�S�[���h�����V�[�h�ݒ�0(@ref RADIO_SHR_GOLD_SEED0_T �^�ŃA�N�Z�X)�n */
#define RADIO_PSDU_GOLD_SEED3_ADR       (0x0Bu)     /*!< �m�b<in-house>*TODO*�p��bPSDU�S�[���h�����V�[�h�ݒ�3(@ref RADIO_PSDU_GOLD_SEED3_T �^�ŃA�N�Z�X)�n */
#define RADIO_PSDU_GOLD_SEED2_ADR       (0x0Cu)     /*!< �m�b<in-house>*TODO*�p��bPSDU�S�[���h�����V�[�h�ݒ�2(@ref RADIO_PSDU_GOLD_SEED2_T �^�ŃA�N�Z�X)�n */
#define RADIO_PSDU_GOLD_SEED1_ADR       (0x0Du)     /*!< �m�b<in-house>*TODO*�p��bPSDU�S�[���h�����V�[�h�ݒ�1(@ref RADIO_PSDU_GOLD_SEED1_T �^�ŃA�N�Z�X)�n */
#define RADIO_PSDU_GOLD_SEED0_ADR       (0x0Eu)     /*!< �m�b<in-house>*TODO*�p��bPSDU�S�[���h�����V�[�h�ݒ�0(@ref RADIO_PSDU_GOLD_SEED0_T �^�ŃA�N�Z�X)�n */
#define RADIO_DSSS_PREAMBLE3_ADR        (0x0Fu)     /*!< �m�b<in-house>*TODO*�p��bDSSS�v���A���u���p�^�[���ݒ�3(@ref RADIO_DSSS_PREAMBLE3_T �^�ŃA�N�Z�X)�n */
#define RADIO_DSSS_PREAMBLE2_ADR        (0x10u)     /*!< �m�b<in-house>*TODO*�p��bDSSS�v���A���u���p�^�[���ݒ�2(@ref RADIO_DSSS_PREAMBLE2_T �^�ŃA�N�Z�X)�n */
#define RADIO_DSSS_PREAMBLE1_ADR        (0x11u)     /*!< �m�b<in-house>*TODO*�p��bDSSS�v���A���u���p�^�[���ݒ�1(@ref RADIO_DSSS_PREAMBLE1_T �^�ŃA�N�Z�X)�n */
#define RADIO_DSSS_PREAMBLE0_ADR        (0x12u)     /*!< �m�b<in-house>*TODO*�p��bDSSS�v���A���u���p�^�[���ݒ�0(@ref RADIO_DSSS_PREAMBLE0_T �^�ŃA�N�Z�X)�n */
#define RADIO_SS_DOWN_SIZE_ADR          (0x13u)     /*!< �m�b<in-house>*TODO*�p��bDSSS�_�E���T���v���ݒ�(@ref RADIO_SS_DOWN_SIZE_T �^�ŃA�N�Z�X)�n */
#define RADIO_SS_AFC_RANGE_SYNC_ADR     (0x14u)     /*!< �m�b<in-house>*TODO*�p��bDSSS(@ref RADIO_SS_AFC_RANGE_SYNC_T �^�ŃA�N�Z�X)�n */
#define RADIO_SS_AFC_RANGE_ADR          (0x15u)     /*!< �m�b<in-house>*TODO*�p��bDSSS(@ref RADIO_SS_AFC_RANGE_T �^�ŃA�N�Z�X)�n */
#define RADIO_NONPUBLIC_B7_ADR16        (0x16u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_DSSS_RATE_SYNC_H_ADR      (0x17u)     /*!< �m�b<in-house>*TODO*�p��bDSSS��������M�`�b�v���[�g�ݒ�(���4�r�b�g)(@ref RADIO_DSSS_RATE_SYNC_H_T �^�ŃA�N�Z�X)�n */
#define RADIO_DSSS_RATE_SYNC_L_ADR      (0x18u)     /*!< �m�b<in-house>*TODO*�p��bDSSS��������M�`�b�v���[�g�ݒ�(���ʃo�C�g)(@ref RADIO_DSSS_RATE_SYNC_L_T �^�ŃA�N�Z�X)�n */
#define RADIO_DSSS_RATE_H_ADR           (0x19u)     /*!< �m�b<in-house>*TODO*�p��bDSSS�f�[�^��M����M�`�b�v���[�g�ݒ�(���4�r�b�g)(@ref RADIO_DSSS_RATE_H_T �^�ŃA�N�Z�X)�n */
#define RADIO_DSSS_RATE_L_ADR           (0x1Au)     /*!< �m�b<in-house>*TODO*�p��bDSSS�f�[�^��M����M�f�[�^���[�g�ݒ�(���ʃo�C�g)(@ref RADIO_DSSS_RATE_L_T �^�ŃA�N�Z�X)�n */
#define RADIO_SS_SYNC_BIT8_GATE_H_ADR   (0x1Bu)     /*!< �m�b<in-house>*TODO*�p��bDSSS�����m��������臒l�ݒ�(���3�r�b�g)(@ref RADIO_SS_SYNC_BIT8_GATE_H_T �^�ŃA�N�Z�X)�n */
#define RADIO_SS_SYNC_BIT8_GATE_L_ADR   (0x1Cu)     /*!< �m�b<in-house>*TODO*�p��bDSSS�����m��������臒l�ݒ�(���ʃo�C�g)(@ref RADIO_SS_SYNC_BIT8_GATE_L_T �^�ŃA�N�Z�X)�n */
#define RADIO_SS_SYNC_BIT8_GATE2_H_ADR  (0x1Du)     /*!< �m�b<in-house>*TODO*�p��bDSSS�����m��������臒l�ݒ�2(���3�r�b�g)(@ref RADIO_SS_SYNC_BIT8_GATE2_H_T �^�ŃA�N�Z�X)�n */
#define RADIO_SS_SYNC_BIT8_GATE2_L_ADR  (0x1Eu)     /*!< �m�b<in-house>*TODO*�p��bDSSS�����m��������臒l�ݒ�2(���ʃo�C�g)(@ref RADIO_SS_SYNC_BIT8_GATE2_L_T �^�ŃA�N�Z�X)�n */
#define RADIO_SS_SYNC_BIT_GATE_H_ADR    (0x1Fu)     /*!< �m�b<in-house>*TODO*�p��bDSSS�����m���㑊��臒l�ݒ�(���3�r�b�g(@ref RADIO_SS_SYNC_BIT_GATE_H_T �^�ŃA�N�Z�X)�n */
#define RADIO_SS_SYNC_BIT_GATE_L_ADR    (0x20u)     /*!< �m�b<in-house>*TODO*�p��bDSSS�����m���㑊��臒l�ݒ�(���ʃo�C�g)(@ref RADIO_SS_SYNC_BIT_GATE_L_T �^�ŃA�N�Z�X)�n */
#define RADIO_SS_SYNC_BIT4_GATE_H_ADR   (0x21u)     /*!< �m�b<in-house>*TODO*�p��b*TODO*TBD(@ref RADIO_SS_SYNC_BIT4_GATE_H_T �^�ŃA�N�Z�X)�n */
#define RADIO_SS_SYNC_BIT4_GATE_L_ADR   (0x22u)     /*!< �m�b<in-house>*TODO*�p��b*TODO*TBD(@ref RADIO_SS_SYNC_BIT4_GATE_L_T �^�ŃA�N�Z�X)�n */
#define RADIO_SS_SYNC_LOST_GATE_ADR     (0x23u)     /*!< �m�b<in-house>*TODO*�p��b*TODO*TBD(@ref RADIO_SS_SYNC_LOST_GATE_T �^�ŃA�N�Z�X)�n */
#define RADIO_SS_BIT8_MAX_ACC_H_ADR     (0x24u)     /*!< �m�b<in-house>*TODO*�p��b*TODO*TBD(@ref RADIO_SS_BIT8_MAX_ACC_H_T �^�ŃA�N�Z�X)�n */
#define RADIO_SS_BIT8_MAX_ACC_L_ADR     (0x25u)     /*!< �m�b<in-house>*TODO*�p��b*TODO*TBD(@ref RADIO_SS_BIT8_MAX_ACC_L_T �^�ŃA�N�Z�X)�n */
#define RADIO_SS_SYNC_GATE2_PLUS_ADR    (0x26u)     /*!< �m�b<in-house>*TODO*�p��b*TODO*TBD(@ref RADIO_SS_SYNC_GATE2_PLUS_T �^�ŃA�N�Z�X)�n */
#define RADIO_AGC_AVE_OFST_SYNC_ADR     (0x27u)     /*!< �m�b<in-house>*TODO*�p��b*TODO*TBD(@ref RADIO_AGC_AVE_OFST_SYNC_T �^�ŃA�N�Z�X)�n */
#define RADIO_AGC_AVE_OFST_ADR          (0x28u)     /*!< �m�b<in-house>*TODO*�p��b*TODO*TBD(@ref RADIO_AGC_AVE_OFST_T �^�ŃA�N�Z�X)�n */
#define RADIO_AGC_IIR_SET0_ADR          (0x29u)     /*!< �m�b<in-house>*TODO*�p��b*TODO*TBD(@ref RADIO_AGC_IIR_SET0_T �^�ŃA�N�Z�X)�n */
#define RADIO_AGC_IIR_SET1_ADR          (0x2Au)     /*!< �m�b<in-house>*TODO*�p��b*TODO*TBD(@ref RADIO_AGC_IIR_SET1_T �^�ŃA�N�Z�X)�n */
#define RADIO_NONPUBLIC_B7_ADR2B        (0x2Bu)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_DSSS_SET1_ADR             (0x2Cu)     /*!< �m�b<in-house>*TODO*�p��b*TODO*TBD(@ref RADIO_DSSS_SET1_T �^�ŃA�N�Z�X)�n */
#define RADIO_DSSS_SET2_ADR             (0x2Du)     /*!< �m�b<in-house>*TODO*�p��b*TODO*TBD(@ref RADIO_DSSS_SET2_T �^�ŃA�N�Z�X)�n */
#define RADIO_DSSS_SET3_ADR             (0x2Eu)     /*!< �m�b<in-house>*TODO*�p��b*TODO*TBD(@ref RADIO_DSSS_SET3_T �^�ŃA�N�Z�X)�n */
#define RADIO_DSSS_SET4_ADR             (0x2Fu)     /*!< �m�b<in-house>*TODO*�p��b*TODO*TBD(@ref RADIO_DSSS_SET4_T �^�ŃA�N�Z�X)�n */
#define RADIO_DSSS_SET5_ADR             (0x30u)     /*!< �m�b<in-house>*TODO*�p��b*TODO*TBD(@ref RADIO_DSSS_SET5_T �^�ŃA�N�Z�X)�n */
#define RADIO_SS_AFC_OUT_ADR            (0x31u)     /*!< �m�b<in-house>*TODO*�p��b*TODO*TBD(@ref RADIO_SS_AFC_OUT_T �^�ŃA�N�Z�X)�n */
#define RADIO_SS_AFC_FIX_EN_ADR         (0x32u)     /*!< �m�b<in-house>*TODO*�p��b*TODO*TBD(@ref RADIO_SS_AFC_FIX_EN_T �^�ŃA�N�Z�X)�n */
#define RADIO_SS_AFC_FIX_ADR            (0x33u)     /*!< �m�b<in-house>*TODO*�p��b*TODO*TBD(@ref RADIO_SS_AFC_FIX_T �^�ŃA�N�Z�X)�n */
#define RADIO_DSSS_MON_SEL_ADR          (0x34u)     /*!< �m�b<in-house>*TODO*�p��b*TODO*TBD(@ref RADIO_DSSS_MON_SEL_T �^�ŃA�N�Z�X)�n */
#define RADIO_BIT8_SPDET_TH_H_ADR       (0x35u)     /*!< �m�b<in-house>*TODO*�p��b*TODO*TBD(@ref RADIO_BIT8_SPDET_TH_H_T �^�ŃA�N�Z�X)�n */
#define RADIO_BIT8_SPDET_TH_L_ADR       (0x36u)     /*!< �m�b<in-house>*TODO*�p��b*TODO*TBD(@ref RADIO_BIT8_SPDET_TH_L_T �^�ŃA�N�Z�X)�n */
#define RADIO_DSSS_SET6_ADR             (0x37u)     /*!< �m�b<in-house>*TODO*�p��b*TODO*TBD(@ref RADIO_DSSS_SET6_T �^�ŃA�N�Z�X)�n */
#define RADIO_DSSS_SET7_ADR             (0x38u)     /*!< �m�b<in-house>*TODO*�p��b*TODO*TBD(@ref RADIO_DSSS_SET7_T �^�ŃA�N�Z�X)�n */
#define RADIO_DSSS_SET8_ADR             (0x39u)     /*!< �m�b<in-house>*TODO*�p��b*TODO*TBD(@ref RADIO_DSSS_SET8_T �^�ŃA�N�Z�X)�n */
#define RADIO_DSSS_SET9_ADR             (0x3Au)     /*!< �m�b<in-house>*TODO*�p��b*TODO*TBD(@ref RADIO_DSSS_SET9_T �^�ŃA�N�Z�X)�n */
#define RADIO_DSSS_SET10_ADR            (0x3Bu)     /*!< �m�b<in-house>*TODO*�p��b*TODO*TBD(@ref RADIO_DSSS_SET10_T �^�ŃA�N�Z�X)�n */
#define RADIO_NONPUBLIC_B7_ADR3C        (0x3Cu)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B7_ADR3D        (0x3Du)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B7_ADR3E        (0x3Eu)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B7_ADR3F        (0x3Fu)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B7_ADR40        (0x40u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B7_ADR41        (0x41u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B7_ADR42        (0x42u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B7_ADR43        (0x43u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B7_ADR44        (0x44u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B7_ADR45        (0x45u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B7_ADR46        (0x46u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B7_ADR47        (0x47u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B7_ADR48        (0x48u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B7_ADR49        (0x49u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B7_ADR4A        (0x4Au)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B7_ADR4B        (0x4Bu)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B7_ADR4C        (0x4Cu)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B7_ADR4D        (0x4Du)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B7_ADR4E        (0x4Eu)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B7_ADR4F        (0x4Fu)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B7_ADR50        (0x50u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B7_ADR51        (0x51u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B7_ADR52        (0x52u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B7_ADR53        (0x53u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B7_ADR54        (0x54u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B7_ADR55        (0x55u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B7_ADR56        (0x56u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B7_ADR57        (0x57u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B7_ADR58        (0x58u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B7_ADR59        (0x59u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B7_ADR5A        (0x5Au)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B7_ADR5B        (0x5Bu)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B7_ADR5C        (0x5Cu)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B7_ADR5D        (0x5Du)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B7_ADR5E        (0x5Eu)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B7_ADR5F        (0x5Fu)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B7_ADR60        (0x60u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B7_ADR61        (0x61u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B7_ADR62        (0x62u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B7_ADR63        (0x63u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B7_ADR64        (0x64u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B7_ADR65        (0x65u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B7_ADR66        (0x66u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B7_ADR67        (0x67u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B7_ADR68        (0x68u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B7_ADR69        (0x69u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B7_ADR6A        (0x6Au)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B7_ADR6B        (0x6Bu)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B7_ADR6C        (0x6Cu)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B7_ADR6D        (0x6Du)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B7_ADR6E        (0x6Eu)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B7_ADR6F        (0x6Fu)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B7_ADR70        (0x70u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B7_ADR71        (0x71u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B7_ADR72        (0x72u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B7_ADR73        (0x73u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B7_ADR74        (0x74u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B7_ADR75        (0x75u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B7_ADR76        (0x76u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B7_ADR77        (0x77u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B7_ADR78        (0x78u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B7_ADR79        (0x79u)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B7_ADR7A        (0x7Au)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B7_ADR7B        (0x7Bu)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B7_ADR7C        (0x7Cu)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B7_ADR7D        (0x7Du)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B7_ADR7E        (0x7Eu)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define RADIO_NONPUBLIC_B7_ADR7F        (0x7Fu)     /*!< �m�b<in-house>*TODO*�p��b����J�n */

#define BANK_DSSS_CTRL_ADR             (7)     /*!< �m�b<in-house>*TODO*�p��bDSSS����ݒ�(@ref RADIO_DSSS_CTRL_T �^�ŃA�N�Z�X)�n */
#define BANK_DSSS_MODE_ADR             (7)     /*!< �m�b<in-house>*TODO*�p��bDSSS���[�h�ݒ�(@ref RADIO_DSSS_MODE_T �^�ŃA�N�Z�X)�n */
#define BANK_FEC_ENC_CTRL_ADR          (7)     /*!< �m�b<in-house>*TODO*�p��bFEC�G���R�[�_�ݒ�(@ref RADIO_FEC_ENC_CTRL_T �^�ŃA�N�Z�X)�n */
#define BANK_FEC_INIT_STATE_ADR        (7)     /*!< �m�b<in-house>*TODO*�p��bFEC�̏��������(@ref RADIO_FEC_INIT_STATE_T �^�ŃA�N�Z�X)�n */
#define BANK_FEC_DEC_CTRL_ADR          (7)     /*!< �m�b<in-house>*TODO*�p��bFEC�f�R�[�_�ݒ�(@ref RADIO_FEC_DEC_CTRL_T �^�ŃA�N�Z�X)�n */
#define BANK_SF_CTRL_ADR               (7)     /*!< �m�b<in-house>*TODO*�p��b�g�U���ݒ�(@ref RADIO_SF_CTRL_T �^�ŃA�N�Z�X)�n */
#define BANK_SHR_GOLD_SEED3_ADR        (7)     /*!< �m�b<in-house>*TODO*�p��bSHR�S�[���h�����V�[�h�ݒ�3(@ref RADIO_SHR_GOLD_SEED3_T �^�ŃA�N�Z�X)�n */
#define BANK_SHR_GOLD_SEED2_ADR        (7)     /*!< �m�b<in-house>*TODO*�p��bSHR�S�[���h�����V�[�h�ݒ�2(@ref RADIO_SHR_GOLD_SEED2_T �^�ŃA�N�Z�X)�n */
#define BANK_SHR_GOLD_SEED1_ADR        (7)     /*!< �m�b<in-house>*TODO*�p��bSHR�S�[���h�����V�[�h�ݒ�1(@ref RADIO_SHR_GOLD_SEED1_T �^�ŃA�N�Z�X)�n */
#define BANK_SHR_GOLD_SEED0_ADR        (7)     /*!< �m�b<in-house>*TODO*�p��bSHR�S�[���h�����V�[�h�ݒ�0(@ref RADIO_SHR_GOLD_SEED0_T �^�ŃA�N�Z�X)�n */
#define BANK_PSDU_GOLD_SEED3_ADR       (7)     /*!< �m�b<in-house>*TODO*�p��bPSDU�S�[���h�����V�[�h�ݒ�3(@ref RADIO_PSDU_GOLD_SEED3_T �^�ŃA�N�Z�X)�n */
#define BANK_PSDU_GOLD_SEED2_ADR       (7)     /*!< �m�b<in-house>*TODO*�p��bPSDU�S�[���h�����V�[�h�ݒ�2(@ref RADIO_PSDU_GOLD_SEED2_T �^�ŃA�N�Z�X)�n */
#define BANK_PSDU_GOLD_SEED1_ADR       (7)     /*!< �m�b<in-house>*TODO*�p��bPSDU�S�[���h�����V�[�h�ݒ�1(@ref RADIO_PSDU_GOLD_SEED1_T �^�ŃA�N�Z�X)�n */
#define BANK_PSDU_GOLD_SEED0_ADR       (7)     /*!< �m�b<in-house>*TODO*�p��bPSDU�S�[���h�����V�[�h�ݒ�0(@ref RADIO_PSDU_GOLD_SEED0_T �^�ŃA�N�Z�X)�n */
#define BANK_DSSS_PREAMBLE3_ADR        (7)     /*!< �m�b<in-house>*TODO*�p��bDSSS�v���A���u���p�^�[���ݒ�3(@ref RADIO_DSSS_PREAMBLE3_T �^�ŃA�N�Z�X)�n */
#define BANK_DSSS_PREAMBLE2_ADR        (7)     /*!< �m�b<in-house>*TODO*�p��bDSSS�v���A���u���p�^�[���ݒ�2(@ref RADIO_DSSS_PREAMBLE2_T �^�ŃA�N�Z�X)�n */
#define BANK_DSSS_PREAMBLE1_ADR        (7)     /*!< �m�b<in-house>*TODO*�p��bDSSS�v���A���u���p�^�[���ݒ�1(@ref RADIO_DSSS_PREAMBLE1_T �^�ŃA�N�Z�X)�n */
#define BANK_DSSS_PREAMBLE0_ADR        (7)     /*!< �m�b<in-house>*TODO*�p��bDSSS�v���A���u���p�^�[���ݒ�0(@ref RADIO_DSSS_PREAMBLE0_T �^�ŃA�N�Z�X)�n */
#define BANK_SS_DOWN_SIZE_ADR          (7)     /*!< �m�b<in-house>*TODO*�p��bDSSS�_�E���T���v���ݒ�(@ref RADIO_SS_DOWN_SIZE_T �^�ŃA�N�Z�X)�n */
#define BANK_SS_AFC_RANGE_SYNC_ADR     (7)     /*!< �m�b<in-house>*TODO*�p��bDSSS(@ref RADIO_SS_AFC_RANGE_SYNC_T �^�ŃA�N�Z�X)�n */
#define BANK_SS_AFC_RANGE_ADR          (7)     /*!< �m�b<in-house>*TODO*�p��bDSSS(@ref RADIO_SS_AFC_RANGE_T �^�ŃA�N�Z�X)�n */
#define BANK_NONPUBLIC_B7_ADR16        (7)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_DSSS_RATE_SYNC_H_ADR      (7)     /*!< �m�b<in-house>*TODO*�p��bDSSS��������M�`�b�v���[�g�ݒ�(���4�r�b�g)(@ref RADIO_DSSS_RATE_SYNC_H_T �^�ŃA�N�Z�X)�n */
#define BANK_DSSS_RATE_SYNC_L_ADR      (7)     /*!< �m�b<in-house>*TODO*�p��bDSSS��������M�`�b�v���[�g�ݒ�(���ʃo�C�g)(@ref RADIO_DSSS_RATE_SYNC_L_T �^�ŃA�N�Z�X)�n */
#define BANK_DSSS_RATE_H_ADR           (7)     /*!< �m�b<in-house>*TODO*�p��bDSSS�f�[�^��M����M�`�b�v���[�g�ݒ�(���4�r�b�g)(@ref RADIO_DSSS_RATE_H_T �^�ŃA�N�Z�X)�n */
#define BANK_DSSS_RATE_L_ADR           (7)     /*!< �m�b<in-house>*TODO*�p��bDSSS�f�[�^��M����M�f�[�^���[�g�ݒ�(���ʃo�C�g)(@ref RADIO_DSSS_RATE_L_T �^�ŃA�N�Z�X)�n */
#define BANK_SS_SYNC_BIT8_GATE_H_ADR   (7)     /*!< �m�b<in-house>*TODO*�p��bDSSS�����m��������臒l�ݒ�(���3�r�b�g)(@ref RADIO_SS_SYNC_BIT8_GATE_H_T �^�ŃA�N�Z�X)�n */
#define BANK_SS_SYNC_BIT8_GATE_L_ADR   (7)     /*!< �m�b<in-house>*TODO*�p��bDSSS�����m��������臒l�ݒ�(���ʃo�C�g)(@ref RADIO_SS_SYNC_BIT8_GATE_L_T �^�ŃA�N�Z�X)�n */
#define BANK_SS_SYNC_BIT8_GATE2_H_ADR  (7)     /*!< �m�b<in-house>*TODO*�p��bDSSS�����m��������臒l�ݒ�2(���3�r�b�g)(@ref RADIO_SS_SYNC_BIT8_GATE2_H_T �^�ŃA�N�Z�X)�n */
#define BANK_SS_SYNC_BIT8_GATE2_L_ADR  (7)     /*!< �m�b<in-house>*TODO*�p��bDSSS�����m��������臒l�ݒ�2(���ʃo�C�g)(@ref RADIO_SS_SYNC_BIT8_GATE2_L_T �^�ŃA�N�Z�X)�n */
#define BANK_SS_SYNC_BIT_GATE_H_ADR    (7)     /*!< �m�b<in-house>*TODO*�p��bDSSS�����m���㑊��臒l�ݒ�(���3�r�b�g(@ref RADIO_SS_SYNC_BIT_GATE_H_T �^�ŃA�N�Z�X)�n */
#define BANK_SS_SYNC_BIT_GATE_L_ADR    (7)     /*!< �m�b<in-house>*TODO*�p��bDSSS�����m���㑊��臒l�ݒ�(���ʃo�C�g)(@ref RADIO_SS_SYNC_BIT_GATE_L_T �^�ŃA�N�Z�X)�n */
#define BANK_SS_SYNC_BIT4_GATE_H_ADR   (7)     /*!< �m�b<in-house>*TODO*�p��b*TODO*TBD(@ref RADIO_SS_SYNC_BIT4_GATE_H_T �^�ŃA�N�Z�X)�n */
#define BANK_SS_SYNC_BIT4_GATE_L_ADR   (7)     /*!< �m�b<in-house>*TODO*�p��b*TODO*TBD(@ref RADIO_SS_SYNC_BIT4_GATE_L_T �^�ŃA�N�Z�X)�n */
#define BANK_SS_SYNC_LOST_GATE_ADR     (7)     /*!< �m�b<in-house>*TODO*�p��b*TODO*TBD(@ref RADIO_SS_SYNC_LOST_GATE_T �^�ŃA�N�Z�X)�n */
#define BANK_SS_BIT8_MAX_ACC_H_ADR     (7)     /*!< �m�b<in-house>*TODO*�p��b*TODO*TBD(@ref RADIO_SS_BIT8_MAX_ACC_H_T �^�ŃA�N�Z�X)�n */
#define BANK_SS_BIT8_MAX_ACC_L_ADR     (7)     /*!< �m�b<in-house>*TODO*�p��b*TODO*TBD(@ref RADIO_SS_BIT8_MAX_ACC_L_T �^�ŃA�N�Z�X)�n */
#define BANK_SS_SYNC_GATE2_PLUS_ADR    (7)     /*!< �m�b<in-house>*TODO*�p��b*TODO*TBD(@ref RADIO_SS_SYNC_GATE2_PLUS_T �^�ŃA�N�Z�X)�n */
#define BANK_AGC_AVE_OFST_SYNC_ADR     (7)     /*!< �m�b<in-house>*TODO*�p��b*TODO*TBD(@ref RADIO_AGC_AVE_OFST_SYNC_T �^�ŃA�N�Z�X)�n */
#define BANK_AGC_AVE_OFST_ADR          (7)     /*!< �m�b<in-house>*TODO*�p��b*TODO*TBD(@ref RADIO_AGC_AVE_OFST_T �^�ŃA�N�Z�X)�n */
#define BANK_AGC_IIR_SET0_ADR          (7)     /*!< �m�b<in-house>*TODO*�p��b*TODO*TBD(@ref RADIO_AGC_IIR_SET0_T �^�ŃA�N�Z�X)�n */
#define BANK_AGC_IIR_SET1_ADR          (7)     /*!< �m�b<in-house>*TODO*�p��b*TODO*TBD(@ref RADIO_AGC_IIR_SET1_T �^�ŃA�N�Z�X)�n */
#define BANK_NONPUBLIC_B7_ADR2B        (7)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_DSSS_SET1_ADR             (7)     /*!< �m�b<in-house>*TODO*�p��b*TODO*TBD(@ref RADIO_DSSS_SET1_T �^�ŃA�N�Z�X)�n */
#define BANK_DSSS_SET2_ADR             (7)     /*!< �m�b<in-house>*TODO*�p��b*TODO*TBD(@ref RADIO_DSSS_SET2_T �^�ŃA�N�Z�X)�n */
#define BANK_DSSS_SET3_ADR             (7)     /*!< �m�b<in-house>*TODO*�p��b*TODO*TBD(@ref RADIO_DSSS_SET3_T �^�ŃA�N�Z�X)�n */
#define BANK_DSSS_SET4_ADR             (7)     /*!< �m�b<in-house>*TODO*�p��b*TODO*TBD(@ref RADIO_DSSS_SET4_T �^�ŃA�N�Z�X)�n */
#define BANK_DSSS_SET5_ADR             (7)     /*!< �m�b<in-house>*TODO*�p��b*TODO*TBD(@ref RADIO_DSSS_SET5_T �^�ŃA�N�Z�X)�n */
#define BANK_SS_AFC_OUT_ADR            (7)     /*!< �m�b<in-house>*TODO*�p��b*TODO*TBD(@ref RADIO_SS_AFC_OUT_T �^�ŃA�N�Z�X)�n */
#define BANK_SS_AFC_FIX_EN_ADR         (7)     /*!< �m�b<in-house>*TODO*�p��b*TODO*TBD(@ref RADIO_SS_AFC_FIX_EN_T �^�ŃA�N�Z�X)�n */
#define BANK_SS_AFC_FIX_ADR            (7)     /*!< �m�b<in-house>*TODO*�p��b*TODO*TBD(@ref RADIO_SS_AFC_FIX_T �^�ŃA�N�Z�X)�n */
#define BANK_DSSS_MON_SEL_ADR          (7)     /*!< �m�b<in-house>*TODO*�p��b*TODO*TBD(@ref RADIO_DSSS_MON_SEL_T �^�ŃA�N�Z�X)�n */
#define BANK_BIT8_SPDET_TH_H_ADR       (7)     /*!< �m�b<in-house>*TODO*�p��b*TODO*TBD(@ref RADIO_BIT8_SPDET_TH_H_T �^�ŃA�N�Z�X)�n */
#define BANK_BIT8_SPDET_TH_L_ADR       (7)     /*!< �m�b<in-house>*TODO*�p��b*TODO*TBD(@ref RADIO_BIT8_SPDET_TH_L_T �^�ŃA�N�Z�X)�n */
#define BANK_DSSS_SET6_ADR             (7)     /*!< �m�b<in-house>*TODO*�p��b*TODO*TBD(@ref RADIO_DSSS_SET6_T �^�ŃA�N�Z�X)�n */
#define BANK_DSSS_SET7_ADR             (7)     /*!< �m�b<in-house>*TODO*�p��b*TODO*TBD(@ref RADIO_DSSS_SET7_T �^�ŃA�N�Z�X)�n */
#define BANK_DSSS_SET8_ADR             (7)     /*!< �m�b<in-house>*TODO*�p��b*TODO*TBD(@ref RADIO_DSSS_SET8_T �^�ŃA�N�Z�X)�n */
#define BANK_DSSS_SET9_ADR             (7)     /*!< �m�b<in-house>*TODO*�p��b*TODO*TBD(@ref RADIO_DSSS_SET9_T �^�ŃA�N�Z�X)�n */
#define BANK_DSSS_SET10_ADR            (7)     /*!< �m�b<in-house>*TODO*�p��b*TODO*TBD(@ref RADIO_DSSS_SET10_T �^�ŃA�N�Z�X)�n */
#define BANK_NONPUBLIC_B7_ADR3C        (7)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B7_ADR3D        (7)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B7_ADR3E        (7)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B7_ADR3F        (7)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B7_ADR40        (7)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B7_ADR41        (7)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B7_ADR42        (7)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B7_ADR43        (7)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B7_ADR44        (7)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B7_ADR45        (7)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B7_ADR46        (7)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B7_ADR47        (7)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B7_ADR48        (7)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B7_ADR49        (7)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B7_ADR4A        (7)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B7_ADR4B        (7)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B7_ADR4C        (7)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B7_ADR4D        (7)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B7_ADR4E        (7)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B7_ADR4F        (7)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B7_ADR50        (7)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B7_ADR51        (7)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B7_ADR52        (7)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B7_ADR53        (7)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B7_ADR54        (7)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B7_ADR55        (7)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B7_ADR56        (7)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B7_ADR57        (7)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B7_ADR58        (7)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B7_ADR59        (7)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B7_ADR5A        (7)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B7_ADR5B        (7)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B7_ADR5C        (7)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B7_ADR5D        (7)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B7_ADR5E        (7)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B7_ADR5F        (7)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B7_ADR60        (7)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B7_ADR61        (7)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B7_ADR62        (7)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B7_ADR63        (7)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B7_ADR64        (7)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B7_ADR65        (7)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B7_ADR66        (7)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B7_ADR67        (7)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B7_ADR68        (7)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B7_ADR69        (7)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B7_ADR6A        (7)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B7_ADR6B        (7)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B7_ADR6C        (7)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B7_ADR6D        (7)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B7_ADR6E        (7)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B7_ADR6F        (7)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B7_ADR70        (7)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B7_ADR71        (7)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B7_ADR72        (7)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B7_ADR73        (7)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B7_ADR74        (7)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B7_ADR75        (7)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B7_ADR76        (7)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B7_ADR77        (7)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B7_ADR78        (7)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B7_ADR79        (7)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B7_ADR7A        (7)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B7_ADR7B        (7)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B7_ADR7C        (7)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B7_ADR7D        (7)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B7_ADR7E        (7)     /*!< �m�b<in-house>*TODO*�p��b����J�n */
#define BANK_NONPUBLIC_B7_ADR7F        (7)     /*!< �m�b<in-house>*TODO*�p��b����J�n */


/* �mRF register structures�bRF���W�X�^�\���́n */

/** @brief �mType definition for @ref RADIO_DSSS_CTRL_ADR access�b@ref RADIO_DSSS_CTRL_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t dsss_en:            1;      /*!<�m�b<in-house>*TODO*�p��bDSSS�C�l�[�u���ݒ� R/W�n*/
        uint8_t fec_en:             1;      /*!<�m�b<in-house>*TODO*�p��bFEC�C�l�[�u���ݒ� R/W�n*/
        uint8_t diff_enc_en:        1;      /*!<�m�b<in-house>*TODO*�p��b�����������C�l�[�u���ݒ� R/W�n*/
        uint8_t reserved0:          1;      /*!<�m�b<in-house>*TODO*�p��b�\�� R�n*/
        uint8_t psdu_size:          2;      /*!<�m�b<in-house>*TODO*�p��bDSSS����PSDU���ݒ� R/W�n*/
        uint8_t reserved1:          1;      /*!<�m�b<in-house>*TODO*�p��b�\�� R�n*/
        uint8_t sf_off:             1;      /*!<�m�b<in-house>*TODO*�p��b�g�UOFF�ݒ� R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_DSSS_CTRL_T;

/** @brief �mType definition for @ref RADIO_DSSS_MODE_ADR access�b@ref RADIO_DSSS_MODE_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t dsss_lc_sync:       2;      /*!<�m�b<in-house>*TODO*�p��bDSSS������H�N���b�N�ݒ�(������) R/W�n*/
        uint8_t dsss_lc_rcv:        2;      /*!<�m�b<in-house>*TODO*�p��bDSSS������H�N���b�N�ݒ�(�f�[�^��M��) R/W�n*/
        uint8_t sync_corr_gate:     2;      /*!<�m�b<in-house>*TODO*�p��b�\�� R/W�n*/
        uint8_t fec_clk_sel:        2;      /*!<�m�b<in-house>*TODO*�p��bFEC�f�R�[�h���̃f�R�[�_����N���b�N�ݒ� R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_DSSS_MODE_T;

/** @brief �mType definition for @ref RADIO_FEC_ENC_CTRL_ADR access�b@ref RADIO_FEC_ENC_CTRL_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t intlv_en:           1;      /*!<�m�b<in-house>*TODO*�p��b�C���^���[�u�C�l�[�u���ݒ� R/W�n*/
        uint8_t enc_init_sel:       1;      /*!<�m�b<in-house>*TODO*�p��bFEC�G���R�[�_������ԑI��ݒ� R/W�n*/
        uint8_t enc_byte_msb:       1;      /*!<�m�b<in-house>*TODO*�p��bFEC�G���R�[�_�o�C�g���o���ݒ� R/W�n*/
        uint8_t enc_bit_msb:        1;      /*!<�m�b<in-house>*TODO*�p��bFEC�G���R�[�_�r�b�g���o���ݒ� R/W�n*/
        uint8_t intlv_byte_msb:     1;      /*!<�m�b<in-house>*TODO*�p��b�C���^���[�u�o�C�g���o���ݒ� R/W�n*/
        uint8_t reserved0:          3;      /*!<�m�b<in-house>*TODO*�p��b�\�� R�n*/
    }bits;
    uint8_t byte;
}RADIO_FEC_ENC_CTRL_T;

/** @brief �mType definition for @ref RADIO_FEC_INIT_STATE_ADR access�b@ref RADIO_FEC_INIT_STATE_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t fec_init_state:     6;      /*!<�m�b<in-house>*TODO*�p��b*TODO*TBD R/W�n*/
        uint8_t reserved0:          2;      /*!<�m�b<in-house>*TODO*�p��b�\�� R�n*/
    }bits;
    uint8_t byte;
}RADIO_FEC_INIT_STATE_T;

/** @brief �mType definition for @ref RADIO_FEC_DEC_CTRL_ADR access�b@ref RADIO_FEC_DEC_CTRL_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t deintlv_en:         1;      /*!<�m�b<in-house>*TODO*�p��b�f�C���^���[�u�C�l�[�u���ݒ� R/W�n*/
        uint8_t dec_init_sel:       1;      /*!<�m�b<in-house>*TODO*�p��bFEC�f�R�[�_�����I��ݒ� R/W�n*/
        uint8_t dec_byte_msb:       1;      /*!<�m�b<in-house>*TODO*�p��bFEC�f�R�[�_�f�[�^�o�͏��ݒ� R/W�n*/
        uint8_t dec_bit_msb:        1;      /*!<�m�b<in-house>*TODO*�p��bFEC�f�R�[�_�f�[�^���͏��ݒ� R/W�n*/
        uint8_t deintlv_byte_msb:   1;      /*!<�m�b<in-house>*TODO*�p��b�f�C���^���[�u�f�[�^�o�͏��ݒ� R/W�n*/
        uint8_t fec_crc_area_sel:   1;      /*!<�m�b<in-house>*TODO*�p��bFEC��M����CRC�͈͐ݒ� R/W�n*/
        uint8_t fec_crc_lf_en:      1;      /*!<�m�b<in-house>*TODO*�p��b*TODO*TBD R/W�n*/
        uint8_t reserved0:          1;      /*!<�m�b<in-house>*TODO*�p��b�\�� R�n*/
    }bits;
    uint8_t byte;
}RADIO_FEC_DEC_CTRL_T;

/** @brief �mType definition for @ref RADIO_SF_CTRL_ADR access�b@ref RADIO_SF_CTRL_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t shr_sf:             2;      /*!<�m�b<in-house>*TODO*�p��bSHR�g�U���ݒ� R/W�n*/
        uint8_t reserved0:          2;      /*!<�m�b<in-house>*TODO*�p��b�\�� R�n*/
        uint8_t psdu_sf:            2;      /*!<�m�b<in-house>*TODO*�p��bPSDU�g�U���ݒ� R/W�n*/
        uint8_t reserved1:          2;      /*!<�m�b<in-house>*TODO*�p��b�\�� R�n*/
    }bits;
    uint8_t byte;
}RADIO_SF_CTRL_T;

/** @brief �mType definition for @ref RADIO_SHR_GOLD_SEED3_ADR access�b@ref RADIO_SHR_GOLD_SEED3_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t shr_gold_seed3:     1;      /*!<�m�b<in-house>*TODO*�p��bSHR�S�[���h�����V�[�h�ݒ�3 R/W�n*/
        uint8_t reserved0:          7;      /*!<�m�b<in-house>*TODO*�p��b�\�� R�n*/
    }bits;
    uint8_t byte;
}RADIO_SHR_GOLD_SEED3_T;

/** @brief �mType definition for @ref RADIO_SHR_GOLD_SEED2_ADR access�b@ref RADIO_SHR_GOLD_SEED2_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t shr_gold_seed2:     8;      /*!<�m�b<in-house>*TODO*�p��bSHR�S�[���h�����V�[�h�ݒ�2 R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_SHR_GOLD_SEED2_T;

/** @brief �mType definition for @ref RADIO_SHR_GOLD_SEED1_ADR access�b@ref RADIO_SHR_GOLD_SEED1_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t shr_gold_seed1:     8;      /*!<�m�b<in-house>*TODO*�p��bSHR�S�[���h�����V�[�h�ݒ�1 R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_SHR_GOLD_SEED1_T;

/** @brief �mType definition for @ref RADIO_SHR_GOLD_SEED0_ADR access�b@ref RADIO_SHR_GOLD_SEED0_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t shr_gold_seed0:     8;      /*!<�m�b<in-house>*TODO*�p��bSHR�S�[���h�����V�[�h�ݒ�0 R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_SHR_GOLD_SEED0_T;

/** @brief �mType definition for @ref RADIO_PSDU_GOLD_SEED3_ADR access�b@ref RADIO_PSDU_GOLD_SEED3_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t psdu_gold_seed3:    1;      /*!<�m�b<in-house>*TODO*�p��bPSDU�S�[���h�����V�[�h�ݒ�3 R/W�n*/
        uint8_t reserved0:          7;      /*!<�m�b<in-house>*TODO*�p��b�\�� R�n*/
    }bits;
    uint8_t byte;
}RADIO_PSDU_GOLD_SEED3_T;

/** @brief �mType definition for @ref RADIO_PSDU_GOLD_SEED2_ADR access�b@ref RADIO_PSDU_GOLD_SEED2_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t psdu_gold_seed2:    8;      /*!<�m�b<in-house>*TODO*�p��bPSDU�S�[���h�����V�[�h�ݒ�2 R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_PSDU_GOLD_SEED2_T;

/** @brief �mType definition for @ref RADIO_PSDU_GOLD_SEED1_ADR access�b@ref RADIO_PSDU_GOLD_SEED1_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t psdu_gold_seed1:    8;      /*!<�m�b<in-house>*TODO*�p��bPSDU�S�[���h�����V�[�h�ݒ�1 R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_PSDU_GOLD_SEED1_T;

/** @brief �mType definition for @ref RADIO_PSDU_GOLD_SEED0_ADR access�b@ref RADIO_PSDU_GOLD_SEED0_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t psdu_gold_seed0:    8;      /*!<�m�b<in-house>*TODO*�p��bPSDU�S�[���h�����V�[�h�ݒ�0 R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_PSDU_GOLD_SEED0_T;

/** @brief �mType definition for @ref RADIO_DSSS_PREAMBLE3_ADR access�b@ref RADIO_DSSS_PREAMBLE3_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t dsss_preamble3:     8;      /*!<�m�b<in-house>*TODO*�p��bDSSS�v���A���u���p�^�[���ݒ�3 R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_DSSS_PREAMBLE3_T;

/** @brief �mType definition for @ref RADIO_DSSS_PREAMBLE2_ADR access�b@ref RADIO_DSSS_PREAMBLE2_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t dsss_preamble2:     8;      /*!<�m�b<in-house>*TODO*�p��bDSSS�v���A���u���p�^�[���ݒ�2 R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_DSSS_PREAMBLE2_T;

/** @brief �mType definition for @ref RADIO_DSSS_PREAMBLE1_ADR access�b@ref RADIO_DSSS_PREAMBLE1_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t dsss_preamble1:     8;      /*!<�m�b<in-house>*TODO*�p��bDSSS�v���A���u���p�^�[���ݒ�1 R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_DSSS_PREAMBLE1_T;

/** @brief �mType definition for @ref RADIO_DSSS_PREAMBLE0_ADR access�b@ref RADIO_DSSS_PREAMBLE0_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t dsss_preamble0:     8;      /*!<�m�b<in-house>*TODO*�p��bDSSS�v���A���u���p�^�[���ݒ�0 R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_DSSS_PREAMBLE0_T;

/** @brief �mType definition for @ref RADIO_SS_DOWN_SIZE_ADR access�b@ref RADIO_SS_DOWN_SIZE_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t ss_down_size:       7;      /*!<�m�b<in-house>*TODO*�p��bDSSS�_�E���T���v���ݒ� R/W�n*/
        uint8_t reserved0:          1;      /*!<�m�b<in-house>*TODO*�p��b�\�� R�n*/
    }bits;
    uint8_t byte;
}RADIO_SS_DOWN_SIZE_T;

/** @brief �mType definition for @ref RADIO_SS_AFC_RANGE_SYNC_ADR access�b@ref RADIO_SS_AFC_RANGE_SYNC_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t ss_afc_range_sync:  7;      /*!<�m�b<in-house>*TODO*�p��bDSSS AFC�����W�ݒ�(������) R/W�n*/
        uint8_t reserved0:          1;      /*!<�m�b<in-house>*TODO*�p��b�\�� R�n*/
    }bits;
    uint8_t byte;
}RADIO_SS_AFC_RANGE_SYNC_T;

/** @brief �mType definition for @ref RADIO_SS_AFC_RANGE_ADR access�b@ref RADIO_SS_AFC_RANGE_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t ss_afc_range:       7;      /*!<�m�b<in-house>*TODO*�p��bDSSS AFC�����W�ݒ�(�f�[�^��M��) R/W�n*/
        uint8_t reserved0:          1;      /*!<�m�b<in-house>*TODO*�p��b�\�� R�n*/
    }bits;
    uint8_t byte;
}RADIO_SS_AFC_RANGE_T;

/** @brief �mType definition for @ref RADIO_DSSS_RATE_SYNC_H_ADR access�b@ref RADIO_DSSS_RATE_SYNC_H_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t dsss_rate_sync_h:   4;      /*!<�m�b<in-house>*TODO*�p��bDSSS��������M�`�b�v���[�g�ݒ�(���4�r�b�g) R/W�n*/
        uint8_t reserved0:          4;      /*!<�m�b<in-house>*TODO*�p��b�\�� R�n*/
    }bits;
    uint8_t byte;
}RADIO_DSSS_RATE_SYNC_H_T;

/** @brief �mType definition for @ref RADIO_DSSS_RATE_SYNC_L_ADR access�b@ref RADIO_DSSS_RATE_SYNC_L_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t dsss_rate_sync_l:   8;      /*!<�m�b<in-house>*TODO*�p��bDSSS��������M�`�b�v���[�g�ݒ�(���ʃo�C�g) R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_DSSS_RATE_SYNC_L_T;

/** @brief �mType definition for @ref RADIO_DSSS_RATE_H_ADR access�b@ref RADIO_DSSS_RATE_H_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t dsss_rate_h:        4;      /*!<�m�b<in-house>*TODO*�p��bDSSS�f�[�^��M����M�`�b�v���[�g�ݒ�(���4�r�b�g) R/W�n*/
        uint8_t reserved0:          4;      /*!<�m�b<in-house>*TODO*�p��b�\�� R�n*/
    }bits;
    uint8_t byte;
}RADIO_DSSS_RATE_H_T;

/** @brief �mType definition for @ref RADIO_DSSS_RATE_L_ADR access�b@ref RADIO_DSSS_RATE_L_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t dsss_rate_l:        8;      /*!<�m�b<in-house>*TODO*�p��bDSSS�f�[�^��M����M�`�b�v���[�g�ݒ�(���ʃo�C�g) R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_DSSS_RATE_L_T;

/** @brief �mType definition for @ref RADIO_SS_SYNC_BIT8_GATE_H_ADR access�b@ref RADIO_SS_SYNC_BIT8_GATE_H_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t ss_sync_bit8_gate_h:3;      /*!<�m�b<in-house>*TODO*�p��bDSSS�����m��������臒l�ݒ�(���3�r�b�g) R/W�n*/
        uint8_t reserved0:          5;      /*!<�m�b<in-house>*TODO*�p��b�\�� R�n*/
    }bits;
    uint8_t byte;
}RADIO_SS_SYNC_BIT8_GATE_H_T;

/** @brief �mType definition for @ref RADIO_SS_SYNC_BIT8_GATE_L_ADR access�b@ref RADIO_SS_SYNC_BIT8_GATE_L_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t ss_sync_bit8_gate_l:8;      /*!<�m�b<in-house>*TODO*�p��bDSSS�����m��������臒l�ݒ�(���ʃo�C�g) R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_SS_SYNC_BIT8_GATE_L_T;

/** @brief �mType definition for @ref RADIO_SS_SYNC_BIT8_GATE2_H_ADR access�b@ref RADIO_SS_SYNC_BIT8_GATE2_H_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t ss_sync_bit8_gate2_h:   3;  /*!<�m�b<in-house>*TODO*�p��bDSSS�����m��������臒l�ݒ�2(���3�r�b�g) R/W�n*/
        uint8_t reserved0:              5;  /*!<�m�b<in-house>*TODO*�p��b�\�� R�n*/
    }bits;
    uint8_t byte;
}RADIO_SS_SYNC_BIT8_GATE2_H_T;

/** @brief �mType definition for @ref RADIO_SS_SYNC_BIT8_GATE2_L_ADR access�b@ref RADIO_SS_SYNC_BIT8_GATE2_L_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t ss_sync_bit8_gate2_l:   8;  /*!<�m�b<in-house>*TODO*�p��bDSSS�����m��������臒l�ݒ�2(���ʃo�C�g) R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_SS_SYNC_BIT8_GATE2_L_T;

/** @brief �mType definition for @ref RADIO_SS_SYNC_BIT_GATE_H_ADR access�b@ref RADIO_SS_SYNC_BIT_GATE_H_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t ss_sync_bit_gate_h:     3;  /*!<�m�b<in-house>*TODO*�p��bDSSS�����m���㑊��臒l�ݒ�(���3�r�b�g) R/W�n*/
        uint8_t reserved0:              5;  /*!<�m�b<in-house>*TODO*�p��b�\�� R�n*/
    }bits;
    uint8_t byte;
}RADIO_SS_SYNC_BIT_GATE_H_T;

/** @brief �mType definition for @ref RADIO_SS_SYNC_BIT_GATE_L_ADR access�b@ref RADIO_SS_SYNC_BIT_GATE_L_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t ss_sync_bit_gate_l:     8;  /*!<�m�b<in-house>*TODO*�p��bDSSS�����m���㑊��臒l�ݒ�(���ʃo�C�g) R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_SS_SYNC_BIT_GATE_L_T;

/** @brief �mType definition for @ref RADIO_SS_SYNC_BIT4_GATE_H_ADR access�b@ref RADIO_SS_SYNC_BIT4_GATE_H_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t ss_sync_bit4_gate:  3;      /*!<�m�b<in-house>*TODO*�p��b*TODO*TBD R/W�n*/
        uint8_t reserved0:          5;      /*!<�m�b<in-house>*TODO*�p��b�\�� R�n*/
    }bits;
    uint8_t byte;
}RADIO_SS_SYNC_BIT4_GATE_H_T;

/** @brief �mType definition for @ref RADIO_SS_SYNC_BIT4_GATE_L_ADR access�b@ref RADIO_SS_SYNC_BIT4_GATE_L_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t ss_sync_bit4_gate:  8;      /*!<�m�b<in-house>*TODO*�p��b*TODO*TBD R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_SS_SYNC_BIT4_GATE_L_T;

/** @brief �mType definition for @ref RADIO_SS_SYNC_LOST_GATE_ADR access�b@ref RADIO_SS_SYNC_LOST_GATE_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t ss_sync_lost_gate:  5;      /*!<�m�b<in-house>*TODO*�p��b*TODO*TBD R/W�n*/
        uint8_t reserved0:          3;      /*!<�m�b<in-house>*TODO*�p��b�\�� R�n*/
    }bits;
    uint8_t byte;
}RADIO_SS_SYNC_LOST_GATE_T;

/** @brief �mType definition for @ref RADIO_SS_BIT8_MAX_ACC_H_ADR access�b@ref RADIO_SS_BIT8_MAX_ACC_H_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t ss_bit8_max_acc:    4;      /*!<�m�b<in-house>*TODO*�p��b*TODO*TBD R�n*/
        uint8_t reserved0:          4;      /*!<�m�b<in-house>*TODO*�p��b*TODO*TBD R�n*/
    }bits;
    uint8_t byte;
}RADIO_SS_BIT8_MAX_ACC_H_T;

/** @brief �mType definition for @ref RADIO_SS_BIT8_MAX_ACC_L_ADR access�b@ref RADIO_SS_BIT8_MAX_ACC_L_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t ss_bit8_max_acc:    8;      /*!<�m�b<in-house>*TODO*�p��b*TODO*TBD R�n*/
    }bits;
    uint8_t byte;
}RADIO_SS_BIT8_MAX_ACC_L_T;

/** @brief �mType definition for @ref RADIO_SS_SYNC_GATE2_PLUS_ADR access�b@ref RADIO_SS_SYNC_GATE2_PLUS_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t ss_sync_gate2_plus: 8;      /*!<�m�b<in-house>*TODO*�p��b*TODO*TBD R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_SS_SYNC_GATE2_PLUS_T;

/** @brief �mType definition for @ref RADIO_AGC_AVE_OFST_SYNC_ADR access�b@ref RADIO_AGC_AVE_OFST_SYNC_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t agc_ave_ofst_sync:  7;      /*!<�m�b<in-house>*TODO*�p��b*TODO*TBD R/W�n*/
        uint8_t reserved0:          1;      /*!<�m�b<in-house>*TODO*�p��b�\�� R�n*/
    }bits;
    uint8_t byte;
}RADIO_AGC_AVE_OFST_SYNC_T;

/** @brief �mType definition for @ref RADIO_AGC_AVE_OFST_ADR access�b@ref RADIO_AGC_AVE_OFST_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t agc_ave_ofst_:      8;      /*!<�m�b<in-house>*TODO*�p��b*TODO*TBD R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_AGC_AVE_OFST_T;

/** @brief �mType definition for @ref RADIO_AGC_IIR_SET0_ADR access�b@ref RADIO_AGC_IIR_SET0_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t agc_iir_wgt_f:      3;      /*!<�m�b<in-house>*TODO*�p��b*TODO*TBD R/W�n*/
        uint8_t reserved0:          1;      /*!<�m�b<in-house>*TODO*�p��b�\�� R�n*/
        uint8_t agc_iir_wgt_m:      3;      /*!<�m�b<in-house>*TODO*�p��b*TODO*TBD R/W�n*/
        uint8_t reserved1:          1;      /*!<�m�b<in-house>*TODO*�p��b�\�� R�n*/
    }bits;
    uint8_t byte;
}RADIO_AGC_IIR_SET0_T;

/** @brief �mType definition for @ref RADIO_AGC_IIR_SET1_ADR access�b@ref RADIO_AGC_IIR_SET1_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t agc_iir_wgt_s:      3;      /*!<�m�b<in-house>*TODO*�p��b*TODO*TBD R/W�n*/
        uint8_t reserved0:          1;      /*!<�m�b<in-house>*TODO*�p��b�\�� R�n*/
        uint8_t agc_ave_fix:        1;      /*!<�m�b<in-house>*TODO*�p��b*TODO*TBD R/W�n*/
        uint8_t afcx_len_sel:       1;      /*!<�m�b<in-house>*TODO*�p��b*TODO*TBD R/W�n*/
        uint8_t reserved1:          2;      /*!<�m�b<in-house>*TODO*�p��b�\�� R�n*/
    }bits;
    uint8_t byte;
}RADIO_AGC_IIR_SET1_T;

/** @brief �mType definition for @ref RADIO_DSSS_SET1_ADR access�b@ref RADIO_DSSS_SET1_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t ss_bit8_synch_cnt:  4;      /*!<�m�b<in-house>*TODO*�p��b*TODO*TBD R/W�n*/
        uint8_t ss_bit8_chk_len:    4;      /*!<�m�b<in-house>*TODO*�p��b*TODO*TBD R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_DSSS_SET1_T;

/** @brief �mType definition for @ref RADIO_DSSS_SET2_ADR access�b@ref RADIO_DSSS_SET2_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t ss_corr_mode:       8;      /*!<�m�b<in-house>*TODO*�p��b*TODO*TBD R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_DSSS_SET2_T;

/** @brief �mType definition for @ref RADIO_DSSS_SET3_ADR access�b@ref RADIO_DSSS_SET3_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t bit8_sp_cnt_max:    4;      /*!<�m�b<in-house>*TODO*�p��b*TODO*TBD R/W�n*/
        uint8_t reserved0:          4;      /*!<�m�b<in-house>*TODO*�p��b�\�� R�n*/
    }bits;
    uint8_t byte;
}RADIO_DSSS_SET3_T;

/** @brief �mType definition for @ref RADIO_DSSS_SET4_ADR access�b@ref RADIO_DSSS_SET4_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t ss_pb_ref_sel:      5;      /*!<�m�b<in-house>*TODO*�p��b*TODO*TBD R/W�n*/
        uint8_t reserved0:          3;      /*!<�m�b<in-house>*TODO*�p��b�\�� R�n*/
    }bits;
    uint8_t byte;
}RADIO_DSSS_SET4_T;

/** @brief �mType definition for @ref RADIO_DSSS_SET5_ADR access�b@ref RADIO_DSSS_SET5_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t ss_corr_mode2:      8;      /*!<�m�b<in-house>*TODO*�p��b*TODO*TBD R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_DSSS_SET5_T;

/** @brief �mType definition for @ref RADIO_SS_AFC_OUT_ADR access�b@ref RADIO_SS_AFC_OUT_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t ss_afc_out:         8;      /*!<�m�b<in-house>*TODO*�p��bDSSS AFC�l�\�� R�n*/
    }bits;
    uint8_t byte;
}RADIO_SS_AFC_OUT_T;

/** @brief �mType definition for @ref RADIO_SS_AFC_FIX_EN_ADR access�b@ref RADIO_SS_AFC_FIX_EN_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t ss_afc_fix_en:      1;      /*!<�m�b<in-house>*TODO*�p��bDSSS AFC�Œ�C�l�[�u�� R/W�n*/
        uint8_t reserved0:          7;      /*!<�m�b<in-house>*TODO*�p��b�\�� R�n*/
    }bits;
    uint8_t byte;
}RADIO_SS_AFC_FIX_EN_T;

/** @brief �mType definition for @ref RADIO_SS_AFC_FIX_ADR access�b@ref RADIO_SS_AFC_FIX_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t ss_afc_fix:         8;      /*!<�m�b<in-house>*TODO*�p��bDSSS AFC�Œ�ݒ� R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_SS_AFC_FIX_T;

/** @brief �mType definition for @ref RADIO_DSSS_MON_SEL_ADR access�b@ref RADIO_DSSS_MON_SEL_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t dsss_mon_sel2:      8;      /*!<�m�b<in-house>*TODO*�p��b*TODO*TBD R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_DSSS_MON_SEL_T;

/** @brief �mType definition for @ref RADIO_BIT8_SPDET_TH_H_ADR access�b@ref RADIO_BIT8_SPDET_TH_H_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t bit8_spdet_th:      3;      /*!<�m�b<in-house>*TODO*�p��b*TODO*TBD R/W�n*/
        uint8_t reserved0:          5;      /*!<�m�b<in-house>*TODO*�p��b�\�� R�n*/
    }bits;
    uint8_t byte;
}RADIO_BIT8_SPDET_TH_H_T;

/** @brief �mType definition for @ref RADIO_BIT8_SPDET_TH_L_ADR access�b@ref RADIO_BIT8_SPDET_TH_L_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t bit8_spdet_th:      8;      /*!<�m�b<in-house>*TODO*�p��b*TODO*TBD R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_BIT8_SPDET_TH_L_T;

/** @brief �mType definition for @ref RADIO_DSSS_SET6_ADR access�b@ref RADIO_DSSS_SET6_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t ss_afcx2_len_h:     4;      /*!<�m�b<in-house>*TODO*�p��b*TODO*TBD R/W�n*/
        uint8_t ss_afcx6_len_h:     4;      /*!<�m�b<in-house>*TODO*�p��b*TODO*TBD R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_DSSS_SET6_T;

/** @brief �mType definition for @ref RADIO_DSSS_SET7_ADR access�b@ref RADIO_DSSS_SET7_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t ss_afcx2_len_l:     4;      /*!<�m�b<in-house>*TODO*�p��b*TODO*TBD R/W�n*/
        uint8_t ss_afcx6_len_l:     4;      /*!<�m�b<in-house>*TODO*�p��b*TODO*TBD R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_DSSS_SET7_T;

/** @brief �mType definition for @ref RADIO_DSSS_SET8_ADR access�b@ref RADIO_DSSS_SET8_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t agc_ave_th_h:       8;      /*!<�m�b<in-house>*TODO*�p��b*TODO*TBD R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_DSSS_SET8_T;

/** @brief �mType definition for @ref RADIO_DSSS_SET9_ADR access�b@ref RADIO_DSSS_SET9_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t agc_ave_th_l:       8;      /*!<�m�b<in-house>*TODO*�p��b*TODO*TBD R/W�n*/
    }bits;
    uint8_t byte;
}RADIO_DSSS_SET9_T;

/** @brief �mType definition for @ref RADIO_DSSS_SET10_ADR access�b@ref RADIO_DSSS_SET10_ADR ���W�X�^�A�N�Z�X�p �^��`�n*/
typedef union{
    struct {
        uint8_t SS_CORR_MODE3:      4;      /*!<�m�b<in-house>*TODO*�p��b*TODO*TBD R/W�n*/
        uint8_t reserved0:          4;      /*!<�m�b<in-house>*TODO*�p��b*�\�� R�n*/
    }bits;
    uint8_t byte;
}RADIO_DSSS_SET10_T;

/** \} */ /* End of group RF_REGISTER_BANK7 */

#endif

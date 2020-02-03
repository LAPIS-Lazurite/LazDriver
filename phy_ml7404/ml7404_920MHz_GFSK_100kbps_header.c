#include "lazurite.h"
#include "ml7404.h"

const RADIO_PHY_SET_T init_920MHz_GFSK_100kbps[] = {
    {RADIO_BANK_SEL_ADR              ,0x11},   /*!< [|RADIO_BANK_SEL_ADR              :BANK0]  */
    {RADIO_CLK_SET2_ADR              ,0xC3},   /*!< [|�N���b�N����2:�N���b�N�\�[�X�̑I�� (TCXO�g�p��)]  */
    {RADIO_PKT_CTRL1_ADR             ,0x16},   /*!< [|�p�P�b�g�t�H�[�}�b�g�ݒ�1:Wi-SUN�ݒ�(Format C)]  */
    {RADIO_PKT_CTRL2_ADR             ,0x5D},   /*!< [|�p�P�b�g�t�H�[�}�b�g�ݒ�2:Wi-SUN�ݒ�(CRC16)]  */
    {RADIO_DRATE_SET_ADR             ,0xBB},   /*!< [|�f�[�^���[�g�ݒ�:]  */
    {RADIO_ED_CTRL_ADR               ,0x83},   /*!< [|ED�l���ω񐔐ݒ萔:]  */
    {RADIO_TXPR_LEN_L_ADR            ,0x3C},   /*!< [|���M�v���A���u�����ݒ�(���ʃo�C�g):Wi-SUN�ݒ�]  */
    {RADIO_MON_CTRL_ADR              ,0x00},   /*!< [|���j�^�o�͐M���I��ݒ�:]  */
    {RADIO_GPIO1_CTRL_ADR            ,0x00},   /*!< [|GPIO1�[�q(�s��#17)����ݒ�:]  */
    {RADIO_SPI_EXT_PA_CTRL_ADR       ,0x00},   /*!< [|SPI�C���^�t�F�[�XIO /�O��PA����ݒ�:SDO�o��OpenDrain�ݒ�]  */
    {RADIO_DC_FIL_ADJ_ADR            ,0x12},   /*!< [|DC�I�t�Z�b�g�����t�B���^�ݒ�:]  */
    {RADIO_DEC_GAIN_ADR              ,0x17},   /*!< [|�f�V���[�V�����Q�C���ݒ�:]  */
    {RADIO_PA_REG_ADJ_H_ADR          ,0x00},   /*!< [|PA���M�����[�^�̏o�͓d������(��ʃr�b�g):]  */
    {RADIO_PA_REG_ADJ_L_ADR          ,0x89},   /*!< [|PA���M�����[�^�̏o�͓d������(��ʃo�C�g):]  */
    {RADIO_CHFIL_BW_CCA_ADR          ,0x81},   /*!< [|CCA���`���l���t�B���^�ш敝�ݒ�:]  */
    {RADIO_DC_FIL_ADJ2_ADR           ,0x00},   /*!< [|DC�I�t�Z�b�g�����t�B���^�ݒ�2:]  */
    {RADIO_BANK_SEL_ADR              ,0x22},   /*!< [|BANK�؂�ւ�:BANK1]  */
    {RADIO_TX_RATE_L_ADR             ,0x24},   /*!< [|���M�f�[�^���[�g�ϊ��ݒ�(���ʃo�C�g):]  */
    {RADIO_RX_RATE1_L_ADR            ,0x02},   /*!< [|��M�f�[�^���[�g�ϊ��ݒ�1(���ʃo�C�g):]  */
    {RADIO_RX_RATE2_ADR              ,0x5A},   /*!< [|��M�f�[�^���[�g�ϊ��ݒ�2:]  */
    {RADIO_RSSI_STABLE_TIME_ADR      ,0x77},   /*!< [|RSSI���艻�҂����Ԑݒ�:]  */
    {RADIO_RSSI_MAG_ADJ_ADR          ,0x0D},   /*!< [|ED�ϊ��pRSSI�␳�ݒ�:]  */
    {RADIO_AFC_GC_CTRL_ADR           ,0x86},   /*!< [|AFC/�Q�C������ݒ�:]  */
    {RADIO_CRC_POLY3_ADR             ,0x00},   /*!< [|CRC����������3:Wi-SUN�ݒ�(CRC16, x16+x12+x5+1)]  */
    {RADIO_CRC_POLY2_ADR             ,0x00},   /*!< [|CRC����������2:Wi-SUN�ݒ�(CRC16, x16+x12+x5+1)]  */
    {RADIO_CRC_POLY1_ADR             ,0x08},   /*!< [|CRC����������1:Wi-SUN�ݒ�(CRC16, x16+x12+x5+1)]  */
    {RADIO_CRC_POLY0_ADR             ,0x10},   /*!< [|CRC����������0:Wi-SUN�ݒ�(CRC16, x16+x12+x5+1)]  */
    {RADIO_SYNC_WORD_LEN_ADR         ,0x10},   /*!< [|SYNC_WORD���ݒ�:]  */
    {RADIO_SYNCWORD1_SET2_ADR        ,0x90},   /*!< [|SYNC_WORD1�ݒ�3:]  */
    {RADIO_SYNCWORD1_SET3_ADR        ,0x4E},   /*!< [|SYNC_WORD1�ݒ�4:]  */
    {RADIO_SYNCWORD2_SET2_ADR        ,0x7A},   /*!< [|SYNC_WORD2�ݒ�3:Wi-SUN�ݒ�]  */
    {RADIO_SYNCWORD2_SET3_ADR        ,0x0E},   /*!< [|SYNC_WORD2�ݒ�4:Wi-SUN�ݒ�]  */
    {RADIO_FSK_CTRL_ADR              ,0x00},   /*!< [|GFSK/FSK�ϒ��^�C�~���O����\�ݒ�:]  */
    {RADIO_FSK_DEV0_H_GFIL0_ADR      ,0x24},   /*!< [|FSK���g���Έʐݒ�0/�K�E�V�A���t�B���^�W���ݒ�1:]  */
    {RADIO_FSK_DEV0_L_GFIL1_ADR      ,0xD6},   /*!< [|FSK���g���Έʐݒ�0/�K�E�V�A���t�B���^�W���ݒ�2:]  */
    {RADIO_FSK_DEV1_H_GFIL2_ADR      ,0x19},   /*!< [|FSK���g���Έʐݒ�1/�K�E�V�A���t�B���^�W���ݒ�3:]  */
    {RADIO_FSK_DEV1_L_GFIL3_ADR      ,0x29},   /*!< [|FSK���g���Έʐݒ�1/�K�E�V�A���t�B���^�W���ݒ�4:]  */
    {RADIO_FSK_DEV2_H_GFIL4_ADR      ,0x3A},   /*!< [|FSK���g���Έʐݒ�2/�K�E�V�A���t�B���^�W���ݒ�5:]  */
    {RADIO_FSK_DEV2_L_GFIL5_ADR      ,0x48},   /*!< [|FSK���g���Έʐݒ�2/�K�E�V�A���t�B���^�W���ݒ�6:]  */
    {RADIO_FSK_DEV3_H_GFIL6_ADR      ,0x4C},   /*!< [|FSK���g���Έʐݒ�3/�K�E�V�A���t�B���^�W���ݒ�7:]  */
    {RADIO_VCO_CAL_MAX_N_ADR         ,0x04},   /*!< [|VCO_CAL_Max���g���ݒ�:]  */
    {RADIO_DEMOD_SET6_ADR            ,0x15},   /*!< [|������ݒ�6:]  */
    {RADIO_DEMOD_SET8_ADR            ,0x02},   /*!< [|������ݒ�8:]  */
    {RADIO_DEMOD_SET9_ADR            ,0xCC},   /*!< [|������ݒ�9:]  */
    {RADIO_WHT_INIT_H_ADR            ,0x00},   /*!< [|Whitening������Ԑݒ�(���1�r�b�g):Wi-SUN�ݒ�]  */
    {RADIO_WHT_INIT_L_ADR            ,0xF0},   /*!< [|Whitening������Ԑݒ�(����8�r�b�g):Wi-SUN�ݒ�]  */
    {RADIO_WHT_CFG_ADR               ,0x10},   /*!< [|Whitening�����������ݒ�:Wi-SUN�ݒ�]  */
    {RADIO_BANK_SEL_ADR              ,0x44},   /*!< [|BANK�؂�ւ�:BANK2]  */
    {RADIO_NONPUBLIC_B2_ADR0E        ,0x5B},   /*!< [|�\��:]  */
    {RADIO_NONPUBLIC_B2_ADR16        ,0x55},   /*!< [|�\��:]  */
    {RADIO_NONPUBLIC_B2_ADR1A        ,0x6E},   /*!< [|�\��:]  */
    {RADIO_NONPUBLIC_B2_ADR1C        ,0x55},   /*!< [|�\��:]  */
    {RADIO_NONPUBLIC_B2_ADR29        ,0x5F},   /*!< [|�\��:]  */
    {RADIO_NONPUBLIC_B2_ADR2A        ,0x1F},   /*!< [|�\��:]  */
    {RADIO_NONPUBLIC_B2_ADR2F        ,0xA7},   /*!< [|�\��:]  */
    {RADIO_NONPUBLIC_B2_ADR32        ,0x4C},   /*!< [|�\��:]  */
    {RADIO_GAIN_HHTH_ADR             ,0x8C},   /*!< [|�����Q�C�����獂�Q�C���ւ̐؂�ւ�臒l�ݒ�:]  */
    {RADIO_GAIN_HTOM_ADR             ,0x8C},   /*!< [|���Q�C�����璆�ԃQ�C���ւ̐؂�ւ�臒l�ݒ�:]  */
    {RADIO_GAIN_MTOL_ADR             ,0x8C},   /*!< [|���Q�C�������Q�C���ւ̐؂�ւ�臒l�ݒ�:]  */
    {RADIO_RSSI_ADJ_H_ADR            ,0x2A},   /*!< [|���Q�C�����쎞��RSSI�I�t�Z�b�g�l�ݒ�:]  */
    {RADIO_RSSI_ADJ_M_ADR            ,0x52},   /*!< [|���ԃQ�C�����쎞��RSSI�I�t�Z�b�g�l�ݒ�:]  */
    {RADIO_RSSI_ADJ_L_B2_ADR         ,0x7F},   /*!< [|��Q�C�����쎞��RSSI�I�t�Z�b�g�l�ݒ�:]  */
    {RADIO_BANK_SEL_ADR              ,0x88},   /*!< [|BANK�؂�ւ�:BANK3]  */
    {RADIO_NONPUBLIC_B3_ADR26        ,0x33},   /*!< [|�\��:]  */
    {RADIO_BANK_SEL_ADR              ,0x33},   /*!< [|BANK�؂�ւ�:BANK6]  */
    {RADIO_MOD_CTRL_ADR              ,0x00},   /*!< [|�ϒ������ݒ�:]  */
    {RADIO_BANK_SEL_ADR              ,0x55},   /*!< [|BANK�؂�ւ�:BANK7]  */
    {RADIO_DSSS_CTRL_ADR             ,0x00},   /*!< [|DSSS����ݒ�:]  */
    {RADIO_FEC_ENC_CTRL_ADR          ,0x00},   /*!< [|FEC�G���R�[�_�ݒ�:]  */
    {RADIO_FEC_DEC_CTRL_ADR          ,0x00},   /*!< [|FEC�f�R�[�_�ݒ�:]  */
    {RADIO_BANK_SEL_ADR              ,0x99},   /*!< [|BANK�؂�ւ�:BANK10]  */
    {RADIO_BPSK_STEP_CTRL_ADR        ,0x00},   /*!< [|BPSK�X�e�b�v����ݒ�:]  */
    {RADIO_BPSK_STEP_SET0_ADR        ,0x24},   /*!< [|BPSK�X�e�b�v����ݒ�0:]  */
    {RADIO_BPSK_STEP_SET1_ADR        ,0xD6},   /*!< [|BPSK�X�e�b�v����ݒ�1:]  */
    {RADIO_BPSK_STEP_SET2_ADR        ,0x19},   /*!< [|BPSK�X�e�b�v����ݒ�2:]  */
    {RADIO_BPSK_STEP_SET3_ADR        ,0x29},   /*!< [|BPSK�X�e�b�v����ݒ�3:]  */
    {RADIO_BPSK_STEP_SET4_ADR        ,0x3A},   /*!< [|BPSK�X�e�b�v����ݒ�4:]  */
    {RADIO_BPSK_STEP_SET5_ADR        ,0x48},   /*!< [|BPSK�X�e�b�v����ݒ�5:]  */
    {RADIO_BPSK_STEP_SET6_ADR        ,0x4C},   /*!< [|BPSK�X�e�b�v����ݒ�6:]  */
    {RADIO_BANK_SEL_ADR              ,0x11},   /*!< [|BANK�؂�ւ�:BANK0]  */
};

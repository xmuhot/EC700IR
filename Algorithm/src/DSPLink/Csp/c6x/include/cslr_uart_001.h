#ifndef _CSLR_UART_1_H_
#define _CSLR_UART_1_H_

#include <cslr.h>

#include "tistdtypes.h"


/* Minimum unit = 1 byte */

/**************************************************************************\
* Register Overlay Structure
\**************************************************************************/
typedef struct  {
    volatile Uint32 RHR;
    volatile Uint32 IER;
    volatile Uint32 IIR;
    volatile Uint32 LCR;
    volatile Uint32 MCR;
    volatile Uint32 LSR;
    volatile Uint32 MSR;
    volatile Uint32 SPR;
    volatile Uint32 MDR1;
    volatile Uint32 MDR2;
    volatile Uint32 SFLSR;
    volatile Uint32 RESUME;
    volatile Uint32 SFREGL;
    volatile Uint32 SFREGH;
    volatile Uint32 BLR;
    volatile Uint32 ACREG;
    volatile Uint32 SCR;
    volatile Uint32 SSR;
    volatile Uint32 EBLR;
    volatile Uint8 RSVD0[4];
    volatile Uint32 MVR;
    volatile Uint32 SYSC;
    volatile Uint32 SYSS;
    volatile Uint32 WER;
    volatile Uint32 CFPS;
} CSL_UartRegs;

/**************************************************************************\
* Field Definition Macros
\**************************************************************************/

/* RHR */


#define CSL_UART_RHR_RHR_MASK            (0x000000FFu)
#define CSL_UART_RHR_RHR_SHIFT           (0x00000000u)
#define CSL_UART_RHR_RHR_RESETVAL        (0x00000000u)

#define CSL_UART_RHR_RESETVAL            (0x00000000u)

/* THR */


#define CSL_UART_THR_THR_MASK            (0x000000FFu)
#define CSL_UART_THR_THR_SHIFT           (0x00000000u)
#define CSL_UART_THR_THR_RESETVAL        (0x00000000u)

#define CSL_UART_THR_RESETVAL            (0x00000000u)

/* DLL */


#define CSL_UART_DLL_CLOCK_LSB_MASK      (0x000000FFu)
#define CSL_UART_DLL_CLOCK_LSB_SHIFT     (0x00000000u)
#define CSL_UART_DLL_CLOCK_LSB_RESETVAL  (0x00000000u)

#define CSL_UART_DLL_RESETVAL            (0x00000000u)

/* IER */


#define CSL_UART_IER_CTS_IT_MASK         (0x00000080u)
#define CSL_UART_IER_CTS_IT_SHIFT        (0x00000007u)
#define CSL_UART_IER_CTS_IT_RESETVAL     (0x00000000u)

#define CSL_UART_IER_EOF_IT_MASK         (0x00000080u)
#define CSL_UART_IER_EOF_IT_SHIFT        (0x00000007u)
#define CSL_UART_IER_EOF_IT_RESETVAL     (0x00000000u)

#define CSL_UART_IER_LINE_STS_IT_IRDA_MASK (0x00000040u)
#define CSL_UART_IER_LINE_STS_IT_IRDA_SHIFT (0x00000006u)
#define CSL_UART_IER_LINE_STS_IT_IRDA_RESETVAL (0x00000000u)

#define CSL_UART_IER_RTS_IT_MASK         (0x00000040u)
#define CSL_UART_IER_RTS_IT_SHIFT        (0x00000006u)
#define CSL_UART_IER_RTS_IT_RESETVAL     (0x00000000u)

#define CSL_UART_IER_XOFF_IT_MASK        (0x00000020u)
#define CSL_UART_IER_XOFF_IT_SHIFT       (0x00000005u)
#define CSL_UART_IER_XOFF_IT_RESETVAL    (0x00000000u)

#define CSL_UART_IER_TX_STATUS_IT_MASK   (0x00000020u)
#define CSL_UART_IER_TX_STATUS_IT_SHIFT  (0x00000005u)
#define CSL_UART_IER_TX_STATUS_IT_RESETVAL (0x00000000u)

#define CSL_UART_IER_STS_FIFO_TRIG_IT_MASK (0x00000010u)
#define CSL_UART_IER_STS_FIFO_TRIG_IT_SHIFT (0x00000004u)
#define CSL_UART_IER_STS_FIFO_TRIG_IT_RESETVAL (0x00000000u)

#define CSL_UART_IER_SLEEP_MODE_MASK     (0x00000010u)
#define CSL_UART_IER_SLEEP_MODE_SHIFT    (0x00000004u)
#define CSL_UART_IER_SLEEP_MODE_RESETVAL (0x00000000u)

#define CSL_UART_IER_MODEM_STS_IT_MASK   (0x00000008u)
#define CSL_UART_IER_MODEM_STS_IT_SHIFT  (0x00000003u)
#define CSL_UART_IER_MODEM_STS_IT_RESETVAL (0x00000000u)

#define CSL_UART_IER_RX_OVERRUN_IT_MASK  (0x00000008u)
#define CSL_UART_IER_RX_OVERRUN_IT_SHIFT (0x00000003u)
#define CSL_UART_IER_RX_OVERRUN_IT_RESETVAL (0x00000000u)

#define CSL_UART_IER_LAST_RX_BYTE_IT_MASK (0x00000004u)
#define CSL_UART_IER_LAST_RX_BYTE_IT_SHIFT (0x00000002u)
#define CSL_UART_IER_LAST_RX_BYTE_IT_RESETVAL (0x00000000u)

#define CSL_UART_IER_LINE_STS_IT_UART_MASK (0x00000004u)
#define CSL_UART_IER_LINE_STS_IT_UART_SHIFT (0x00000002u)
#define CSL_UART_IER_LINE_STS_IT_UART_RESETVAL (0x00000000u)

#define CSL_UART_IER_RX_STOP_IT_MASK     (0x00000004u)
#define CSL_UART_IER_RX_STOP_IT_SHIFT    (0x00000002u)
#define CSL_UART_IER_RX_STOP_IT_RESETVAL (0x00000000u)

#define CSL_UART_IER_THR_IT_MASK         (0x00000002u)
#define CSL_UART_IER_THR_IT_SHIFT        (0x00000001u)
#define CSL_UART_IER_THR_IT_RESETVAL     (0x00000000u)

#define CSL_UART_IER_RHR_IT_MASK         (0x00000001u)
#define CSL_UART_IER_RHR_IT_SHIFT        (0x00000000u)
#define CSL_UART_IER_RHR_IT_RESETVAL     (0x00000000u)

#define CSL_UART_IER_RESETVAL            (0x00000000u)

/* DLH */


#define CSL_UART_DLH_CLOCK_MSB_MASK      (0x0000003Fu)
#define CSL_UART_DLH_CLOCK_MSB_SHIFT     (0x00000000u)
#define CSL_UART_DLH_CLOCK_MSB_RESETVAL  (0x00000000u)

#define CSL_UART_DLH_RESETVAL            (0x00000000u)

/* IIR */


#define CSL_UART_IIR_FCR_MIRROR_MASK     (0x000000C0u)
#define CSL_UART_IIR_FCR_MIRROR_SHIFT    (0x00000006u)
#define CSL_UART_IIR_FCR_MIRROR_RESETVAL (0x00000000u)

#define CSL_UART_IIR_EOF_IT_MASK         (0x00000080u)
#define CSL_UART_IIR_EOF_IT_SHIFT        (0x00000007u)
#define CSL_UART_IIR_EOF_IT_RESETVAL     (0x00000000u)

#define CSL_UART_IIR_LINE_STS_IT_MASK    (0x00000040u)
#define CSL_UART_IIR_LINE_STS_IT_SHIFT   (0x00000006u)
#define CSL_UART_IIR_LINE_STS_IT_RESETVAL (0x00000000u)

#define CSL_UART_IIR_IT_TYPE_MASK        (0x0000003Eu)
#define CSL_UART_IIR_IT_TYPE_SHIFT       (0x00000001u)
#define CSL_UART_IIR_IT_TYPE_RESETVAL    (0x00000000u)

#define CSL_UART_IIR_TX_STATUS_IT_MASK   (0x00000020u)
#define CSL_UART_IIR_TX_STATUS_IT_SHIFT  (0x00000005u)
#define CSL_UART_IIR_TX_STATUS_IT_RESETVAL (0x00000000u)

#define CSL_UART_IIR_STS_FIFO_IT_MASK    (0x00000010u)
#define CSL_UART_IIR_STS_FIFO_IT_SHIFT   (0x00000004u)
#define CSL_UART_IIR_STS_FIFO_IT_RESETVAL (0x00000000u)

#define CSL_UART_IIR_RX_OE_IT_MASK       (0x00000008u)
#define CSL_UART_IIR_RX_OE_IT_SHIFT      (0x00000003u)
#define CSL_UART_IIR_RX_OE_IT_RESETVAL   (0x00000000u)

#define CSL_UART_IIR_RX_FIFO_LAST_BYTE_IT_MASK (0x00000004u)
#define CSL_UART_IIR_RX_FIFO_LAST_BYTE_IT_SHIFT (0x00000002u)
#define CSL_UART_IIR_RX_FIFO_LAST_BYTE_IT_RESETVAL (0x00000000u)

#define CSL_UART_IIR_RX_STOP_IT_MASK     (0x00000004u)
#define CSL_UART_IIR_RX_STOP_IT_SHIFT    (0x00000002u)
#define CSL_UART_IIR_RX_STOP_IT_RESETVAL (0x00000000u)

#define CSL_UART_IIR_THR_IT_MASK         (0x00000002u)
#define CSL_UART_IIR_THR_IT_SHIFT        (0x00000001u)
#define CSL_UART_IIR_THR_IT_RESETVAL     (0x00000000u)

#define CSL_UART_IIR_IT_PENDING_MASK     (0x00000001u)
#define CSL_UART_IIR_IT_PENDING_SHIFT    (0x00000000u)
#define CSL_UART_IIR_IT_PENDING_RESETVAL (0x00000001u)

#define CSL_UART_IIR_RHR_IT_MASK         (0x00000001u)
#define CSL_UART_IIR_RHR_IT_SHIFT        (0x00000000u)
#define CSL_UART_IIR_RHR_IT_RESETVAL     (0x00000000u)

#define CSL_UART_IIR_RESETVAL            (0x00000001u)

/* FCR */


#define CSL_UART_FCR_RX_FIFO_TRIG_MASK   (0x000000C0u)
#define CSL_UART_FCR_RX_FIFO_TRIG_SHIFT  (0x00000006u)
#define CSL_UART_FCR_RX_FIFO_TRIG_RESETVAL (0x00000000u)

#define CSL_UART_FCR_TX_FIFO_TRIG_MASK   (0x00000030u)
#define CSL_UART_FCR_TX_FIFO_TRIG_SHIFT  (0x00000004u)
#define CSL_UART_FCR_TX_FIFO_TRIG_RESETVAL (0x00000000u)

#define CSL_UART_FCR_DMA_MODE_MASK       (0x00000008u)
#define CSL_UART_FCR_DMA_MODE_SHIFT      (0x00000003u)
#define CSL_UART_FCR_DMA_MODE_RESETVAL   (0x00000000u)

#define CSL_UART_FCR_TX_FIFO_CLEAR_MASK  (0x00000004u)
#define CSL_UART_FCR_TX_FIFO_CLEAR_SHIFT (0x00000002u)
#define CSL_UART_FCR_TX_FIFO_CLEAR_RESETVAL (0x00000000u)

#define CSL_UART_FCR_RX_FIFO_CLEAR_MASK  (0x00000002u)
#define CSL_UART_FCR_RX_FIFO_CLEAR_SHIFT (0x00000001u)
#define CSL_UART_FCR_RX_FIFO_CLEAR_RESETVAL (0x00000000u)

#define CSL_UART_FCR_FIFO_EN_MASK        (0x00000001u)
#define CSL_UART_FCR_FIFO_EN_SHIFT       (0x00000000u)
#define CSL_UART_FCR_FIFO_EN_RESETVAL    (0x00000000u)

#define CSL_UART_FCR_RESETVAL            (0x00000000u)

/* EFR */


#define CSL_UART_EFR_AUTO_CTS_EN_MASK    (0x00000080u)
#define CSL_UART_EFR_AUTO_CTS_EN_SHIFT   (0x00000007u)
#define CSL_UART_EFR_AUTO_CTS_EN_RESETVAL (0x00000000u)

#define CSL_UART_EFR_AUTO_RTS_EN_MASK    (0x00000040u)
#define CSL_UART_EFR_AUTO_RTS_EN_SHIFT   (0x00000006u)
#define CSL_UART_EFR_AUTO_RTS_EN_RESETVAL (0x00000000u)

#define CSL_UART_EFR_SPECIAL_CHAR_DETECT_MASK (0x00000020u)
#define CSL_UART_EFR_SPECIAL_CHAR_DETECT_SHIFT (0x00000005u)
#define CSL_UART_EFR_SPECIAL_CHAR_DETECT_RESETVAL (0x00000000u)

#define CSL_UART_EFR_ENHANCED_EN_MASK    (0x00000010u)
#define CSL_UART_EFR_ENHANCED_EN_SHIFT   (0x00000004u)
#define CSL_UART_EFR_ENHANCED_EN_RESETVAL (0x00000000u)

#define CSL_UART_EFR_SW_FLOW_CONTROL_MASK (0x0000000Fu)
#define CSL_UART_EFR_SW_FLOW_CONTROL_SHIFT (0x00000000u)
#define CSL_UART_EFR_SW_FLOW_CONTROL_RESETVAL (0x00000000u)

#define CSL_UART_EFR_RESETVAL            (0x00000000u)

/* LCR */


#define CSL_UART_LCR_DIV_EN_MASK         (0x00000080u)
#define CSL_UART_LCR_DIV_EN_SHIFT        (0x00000007u)
#define CSL_UART_LCR_DIV_EN_RESETVAL     (0x00000000u)

#define CSL_UART_LCR_BREAK_EN_MASK       (0x00000040u)
#define CSL_UART_LCR_BREAK_EN_SHIFT      (0x00000006u)
#define CSL_UART_LCR_BREAK_EN_RESETVAL   (0x00000000u)

#define CSL_UART_LCR_PARITY_TYPE2_MASK   (0x00000020u)
#define CSL_UART_LCR_PARITY_TYPE2_SHIFT  (0x00000005u)
#define CSL_UART_LCR_PARITY_TYPE2_RESETVAL (0x00000000u)

#define CSL_UART_LCR_PARITY_TYPE1_MASK   (0x00000010u)
#define CSL_UART_LCR_PARITY_TYPE1_SHIFT  (0x00000004u)
#define CSL_UART_LCR_PARITY_TYPE1_RESETVAL (0x00000000u)

#define CSL_UART_LCR_PARITY_EN_MASK      (0x00000008u)
#define CSL_UART_LCR_PARITY_EN_SHIFT     (0x00000003u)
#define CSL_UART_LCR_PARITY_EN_RESETVAL  (0x00000000u)

#define CSL_UART_LCR_NB_STOP_MASK        (0x00000004u)
#define CSL_UART_LCR_NB_STOP_SHIFT       (0x00000002u)
#define CSL_UART_LCR_NB_STOP_RESETVAL    (0x00000000u)

#define CSL_UART_LCR_CHAR_LENGTH_MASK    (0x00000003u)
#define CSL_UART_LCR_CHAR_LENGTH_SHIFT   (0x00000000u)
#define CSL_UART_LCR_CHAR_LENGTH_RESETVAL (0x00000000u)

#define CSL_UART_LCR_RESETVAL            (0x00000000u)

/* MCR */


#define CSL_UART_MCR_TCR_TLR_MASK        (0x00000040u)
#define CSL_UART_MCR_TCR_TLR_SHIFT       (0x00000006u)
#define CSL_UART_MCR_TCR_TLR_RESETVAL    (0x00000000u)

#define CSL_UART_MCR_XON_EN_MASK         (0x00000020u)
#define CSL_UART_MCR_XON_EN_SHIFT        (0x00000005u)
#define CSL_UART_MCR_XON_EN_RESETVAL     (0x00000000u)

#define CSL_UART_MCR_LOOPBACK_EN_MASK    (0x00000010u)
#define CSL_UART_MCR_LOOPBACK_EN_SHIFT   (0x00000004u)
#define CSL_UART_MCR_LOOPBACK_EN_RESETVAL (0x00000000u)

#define CSL_UART_MCR_CD_STS_CH_MASK      (0x00000008u)
#define CSL_UART_MCR_CD_STS_CH_SHIFT     (0x00000003u)
#define CSL_UART_MCR_CD_STS_CH_RESETVAL  (0x00000000u)

#define CSL_UART_MCR_RI_STS_CH_MASK      (0x00000004u)
#define CSL_UART_MCR_RI_STS_CH_SHIFT     (0x00000002u)
#define CSL_UART_MCR_RI_STS_CH_RESETVAL  (0x00000000u)

#define CSL_UART_MCR_RTS_MASK            (0x00000002u)
#define CSL_UART_MCR_RTS_SHIFT           (0x00000001u)
#define CSL_UART_MCR_RTS_RESETVAL        (0x00000000u)

#define CSL_UART_MCR_DTR_MASK            (0x00000001u)
#define CSL_UART_MCR_DTR_SHIFT           (0x00000000u)
#define CSL_UART_MCR_DTR_RESETVAL        (0x00000000u)

#define CSL_UART_MCR_RESETVAL            (0x00000000u)

/* XON1_ADDR1 */


#define CSL_UART_XON1_ADDR1_XON_WORD1_MASK (0x000000FFu)
#define CSL_UART_XON1_ADDR1_XON_WORD1_SHIFT (0x00000000u)
#define CSL_UART_XON1_ADDR1_XON_WORD1_RESETVAL (0x00000000u)

#define CSL_UART_XON1_ADDR1_RESETVAL     (0x00000000u)

/* LSR */


#define CSL_UART_LSR_RX_FIFO_STS_MASK    (0x00000080u)
#define CSL_UART_LSR_RX_FIFO_STS_SHIFT   (0x00000007u)
#define CSL_UART_LSR_RX_FIFO_STS_RESETVAL (0x00000000u)

#define CSL_UART_LSR_THR_EMPTY_MASK      (0x00000080u)
#define CSL_UART_LSR_THR_EMPTY_SHIFT     (0x00000007u)
#define CSL_UART_LSR_THR_EMPTY_RESETVAL  (0x00000001u)

#define CSL_UART_LSR_STS_FIFO_FULL_MASK  (0x00000040u)
#define CSL_UART_LSR_STS_FIFO_FULL_SHIFT (0x00000006u)
#define CSL_UART_LSR_STS_FIFO_FULL_RESETVAL (0x00000000u)

#define CSL_UART_LSR_TX_SR_E_MASK        (0x00000040u)
#define CSL_UART_LSR_TX_SR_E_SHIFT       (0x00000006u)
#define CSL_UART_LSR_TX_SR_E_RESETVAL    (0x00000001u)

#define CSL_UART_LSR_TX_FIFO_E_MASK      (0x00000020u)
#define CSL_UART_LSR_TX_FIFO_E_SHIFT     (0x00000005u)
#define CSL_UART_LSR_TX_FIFO_E_RESETVAL  (0x00000001u)

#define CSL_UART_LSR_RX_LAST_BYTE_MASK   (0x00000020u)
#define CSL_UART_LSR_RX_LAST_BYTE_SHIFT  (0x00000005u)
#define CSL_UART_LSR_RX_LAST_BYTE_RESETVAL (0x00000000u)

#define CSL_UART_LSR_RX_STOP_MASK        (0x00000020u)
#define CSL_UART_LSR_RX_STOP_SHIFT       (0x00000005u)
#define CSL_UART_LSR_RX_STOP_RESETVAL    (0x00000000u)

#define CSL_UART_LSR_RX_BI_MASK          (0x00000010u)
#define CSL_UART_LSR_RX_BI_SHIFT         (0x00000004u)
#define CSL_UART_LSR_RX_BI_RESETVAL      (0x00000000u)

#define CSL_UART_LSR_FRAME_TOO_LONG_MASK (0x00000010u)
#define CSL_UART_LSR_FRAME_TOO_LONG_SHIFT (0x00000004u)
#define CSL_UART_LSR_FRAME_TOO_LONG_RESETVAL (0x00000000u)

#define CSL_UART_LSR_ABORT_MASK          (0x00000008u)
#define CSL_UART_LSR_ABORT_SHIFT         (0x00000003u)
#define CSL_UART_LSR_ABORT_RESETVAL      (0x00000000u)

#define CSL_UART_LSR_RX_FE_MASK          (0x00000008u)
#define CSL_UART_LSR_RX_FE_SHIFT         (0x00000003u)
#define CSL_UART_LSR_RX_FE_RESETVAL      (0x00000000u)

#define CSL_UART_LSR_RX_PE_MASK          (0x00000004u)
#define CSL_UART_LSR_RX_PE_SHIFT         (0x00000002u)
#define CSL_UART_LSR_RX_PE_RESETVAL      (0x00000000u)

#define CSL_UART_LSR_CRC_MASK            (0x00000004u)
#define CSL_UART_LSR_CRC_SHIFT           (0x00000002u)
#define CSL_UART_LSR_CRC_RESETVAL        (0x00000000u)

#define CSL_UART_LSR_STS_FIFO_E_MASK     (0x00000002u)
#define CSL_UART_LSR_STS_FIFO_E_SHIFT    (0x00000001u)
#define CSL_UART_LSR_STS_FIFO_E_RESETVAL (0x00000001u)

#define CSL_UART_LSR_RX_OE_MASK          (0x00000002u)
#define CSL_UART_LSR_RX_OE_SHIFT         (0x00000001u)
#define CSL_UART_LSR_RX_OE_RESETVAL      (0x00000000u)

#define CSL_UART_LSR_RX_FIFO_E_MASK      (0x00000001u)
#define CSL_UART_LSR_RX_FIFO_E_SHIFT     (0x00000000u)
#define CSL_UART_LSR_RX_FIFO_E_RESETVAL  (0x00000000u)

#define CSL_UART_LSR_RESETVAL            (0x000000E2u)

/* XON2_ADDR2 */


#define CSL_UART_XON2_ADDR2_XON_WORD2_MASK (0x000000FFu)
#define CSL_UART_XON2_ADDR2_XON_WORD2_SHIFT (0x00000000u)
#define CSL_UART_XON2_ADDR2_XON_WORD2_RESETVAL (0x00000000u)

#define CSL_UART_XON2_ADDR2_RESETVAL     (0x00000000u)

/* MSR */


#define CSL_UART_MSR_NCD_STS_MASK        (0x00000080u)
#define CSL_UART_MSR_NCD_STS_SHIFT       (0x00000007u)
#define CSL_UART_MSR_NCD_STS_RESETVAL    (0x00000000u)
/*----NCD_STS Tokens----*/
#define CSL_UART_MSR_NCD_STS_DCTS        (0x00000001u)

#define CSL_UART_MSR_NRI_STS_MASK        (0x00000040u)
#define CSL_UART_MSR_NRI_STS_SHIFT       (0x00000006u)
#define CSL_UART_MSR_NRI_STS_RESETVAL    (0x00000000u)
/*----NRI_STS Tokens----*/
#define CSL_UART_MSR_NRI_STS_DDSR        (0x00000001u)
#define CSL_UART_MSR_NRI_STS_NODDSR      (0x00000000u)

#define CSL_UART_MSR_NDSR_STS_MASK       (0x00000020u)
#define CSL_UART_MSR_NDSR_STS_SHIFT      (0x00000005u)
#define CSL_UART_MSR_NDSR_STS_RESETVAL   (0x00000000u)
/*----NDSR_STS Tokens----*/
#define CSL_UART_MSR_NDSR_STS_TERI       (0x00000001u)
#define CSL_UART_MSR_NDSR_STS_NOTERI     (0x00000000u)

#define CSL_UART_MSR_NCTS_STS_MASK       (0x00000010u)
#define CSL_UART_MSR_NCTS_STS_SHIFT      (0x00000004u)
#define CSL_UART_MSR_NCTS_STS_RESETVAL   (0x00000000u)
/*----NCTS_STS Tokens----*/
#define CSL_UART_MSR_NCTS_STS_DCD        (0x00000001u)
#define CSL_UART_MSR_NCTS_STS_NODCD      (0x00000000u)

#define CSL_UART_MSR_DCD_STS_MASK        (0x00000008u)
#define CSL_UART_MSR_DCD_STS_SHIFT       (0x00000003u)
#define CSL_UART_MSR_DCD_STS_RESETVAL    (0x00000000u)
/*----DCD_STS Tokens----*/
#define CSL_UART_MSR_DCD_STS_CTS         (0x00000001u)
#define CSL_UART_MSR_DCD_STS_NOCTS       (0x00000000u)

#define CSL_UART_MSR_RI_STS_MASK         (0x00000004u)
#define CSL_UART_MSR_RI_STS_SHIFT        (0x00000002u)
#define CSL_UART_MSR_RI_STS_RESETVAL     (0x00000000u)
/*----RI_STS Tokens----*/
#define CSL_UART_MSR_RI_STS_DSR          (0x00000001u)
#define CSL_UART_MSR_RI_STS_NODSR        (0x00000000u)

#define CSL_UART_MSR_DSR_STS_MASK        (0x00000002u)
#define CSL_UART_MSR_DSR_STS_SHIFT       (0x00000001u)
#define CSL_UART_MSR_DSR_STS_RESETVAL    (0x00000000u)
/*----DSR_STS Tokens----*/
#define CSL_UART_MSR_DSR_STS_RI          (0x00000001u)
#define CSL_UART_MSR_DSR_STS_NORI        (0x00000000u)

#define CSL_UART_MSR_CTS_STS_MASK        (0x00000001u)
#define CSL_UART_MSR_CTS_STS_SHIFT       (0x00000000u)
#define CSL_UART_MSR_CTS_STS_RESETVAL    (0x00000000u)
/*----CTS_STS Tokens----*/
#define CSL_UART_MSR_CTS_STS_CD          (0x00000001u)
#define CSL_UART_MSR_CTS_STS_NOCD        (0x00000000u)

#define CSL_UART_MSR_RESETVAL            (0x00000000u)

/* TCR */


#define CSL_UART_TCR_RX_FIFO_TRIG_START_MASK (0x000000F0u)
#define CSL_UART_TCR_RX_FIFO_TRIG_START_SHIFT (0x00000004u)
#define CSL_UART_TCR_RX_FIFO_TRIG_START_RESETVAL (0x00000000u)

#define CSL_UART_TCR_RX_FIFO_TRIG_HALT_MASK (0x0000000Fu)
#define CSL_UART_TCR_RX_FIFO_TRIG_HALT_SHIFT (0x00000000u)
#define CSL_UART_TCR_RX_FIFO_TRIG_HALT_RESETVAL (0x0000000Fu)

#define CSL_UART_TCR_RESETVAL            (0x0000000Fu)

/* XOFF1 */


#define CSL_UART_XOFF1_XOFF_WORD1_MASK   (0x000000FFu)
#define CSL_UART_XOFF1_XOFF_WORD1_SHIFT  (0x00000000u)
#define CSL_UART_XOFF1_XOFF_WORD1_RESETVAL (0x00000000u)

#define CSL_UART_XOFF1_RESETVAL          (0x00000000u)

/* SPR */


#define CSL_UART_SPR_SPR_WORD_MASK       (0x000000FFu)
#define CSL_UART_SPR_SPR_WORD_SHIFT      (0x00000000u)
#define CSL_UART_SPR_SPR_WORD_RESETVAL   (0x00000000u)

#define CSL_UART_SPR_RESETVAL            (0x00000000u)

/* TLR */


#define CSL_UART_TLR_RX_FIFO_TRIG_DMA_MASK (0x000000F0u)
#define CSL_UART_TLR_RX_FIFO_TRIG_DMA_SHIFT (0x00000004u)
#define CSL_UART_TLR_RX_FIFO_TRIG_DMA_RESETVAL (0x00000000u)

#define CSL_UART_TLR_TX_FIFO_TRIG_DMA_MASK (0x0000000Fu)
#define CSL_UART_TLR_TX_FIFO_TRIG_DMA_SHIFT (0x00000000u)
#define CSL_UART_TLR_TX_FIFO_TRIG_DMA_RESETVAL (0x00000000u)

#define CSL_UART_TLR_RESETVAL            (0x00000000u)

/* XOFF2 */


#define CSL_UART_XOFF2_XOFF_WORD2_MASK   (0x000000FFu)
#define CSL_UART_XOFF2_XOFF_WORD2_SHIFT  (0x00000000u)
#define CSL_UART_XOFF2_XOFF_WORD2_RESETVAL (0x00000000u)

#define CSL_UART_XOFF2_RESETVAL          (0x00000000u)

/* MDR1 */


#define CSL_UART_MDR1_FRAME_END_MODE_MASK (0x00000080u)
#define CSL_UART_MDR1_FRAME_END_MODE_SHIFT (0x00000007u)
#define CSL_UART_MDR1_FRAME_END_MODE_RESETVAL (0x00000000u)

#define CSL_UART_MDR1_SIP_MODE_MASK      (0x00000040u)
#define CSL_UART_MDR1_SIP_MODE_SHIFT     (0x00000006u)
#define CSL_UART_MDR1_SIP_MODE_RESETVAL  (0x00000000u)

#define CSL_UART_MDR1_SCT_MASK           (0x00000020u)
#define CSL_UART_MDR1_SCT_SHIFT          (0x00000005u)
#define CSL_UART_MDR1_SCT_RESETVAL       (0x00000000u)

#define CSL_UART_MDR1_SET_TXIR_MASK      (0x00000010u)
#define CSL_UART_MDR1_SET_TXIR_SHIFT     (0x00000004u)
#define CSL_UART_MDR1_SET_TXIR_RESETVAL  (0x00000000u)

#define CSL_UART_MDR1_IR_SLEEP_MASK      (0x00000008u)
#define CSL_UART_MDR1_IR_SLEEP_SHIFT     (0x00000003u)
#define CSL_UART_MDR1_IR_SLEEP_RESETVAL  (0x00000000u)

#define CSL_UART_MDR1_MODE_SELECT_MASK   (0x00000007u)
#define CSL_UART_MDR1_MODE_SELECT_SHIFT  (0x00000000u)
#define CSL_UART_MDR1_MODE_SELECT_RESETVAL (0x00000007u)

#define CSL_UART_MDR1_RESETVAL           (0x00000007u)

/* MDR2 */


#define CSL_UART_MDR2_IRRXINVERT_MASK    (0x00000040u)
#define CSL_UART_MDR2_IRRXINVERT_SHIFT   (0x00000006u)
#define CSL_UART_MDR2_IRRXINVERT_RESETVAL (0x00000000u)

#define CSL_UART_MDR2_CIR_PULSE_MODE_MASK (0x00000030u)
#define CSL_UART_MDR2_CIR_PULSE_MODE_SHIFT (0x00000004u)
#define CSL_UART_MDR2_CIR_PULSE_MODE_RESETVAL (0x00000000u)

#define CSL_UART_MDR2_UART_PULSE_MASK    (0x00000008u)
#define CSL_UART_MDR2_UART_PULSE_SHIFT   (0x00000003u)
#define CSL_UART_MDR2_UART_PULSE_RESETVAL (0x00000000u)

#define CSL_UART_MDR2_STS_FIFO_TRIG_MASK (0x00000006u)
#define CSL_UART_MDR2_STS_FIFO_TRIG_SHIFT (0x00000001u)
#define CSL_UART_MDR2_STS_FIFO_TRIG_RESETVAL (0x00000000u)

#define CSL_UART_MDR2_IRTX_UNDERRUN_MASK (0x00000001u)
#define CSL_UART_MDR2_IRTX_UNDERRUN_SHIFT (0x00000000u)
#define CSL_UART_MDR2_IRTX_UNDERRUN_RESETVAL (0x00000000u)

#define CSL_UART_MDR2_RESETVAL           (0x00000000u)

/* SFLSR */


#define CSL_UART_SFLSR_OE_ERROR_MASK     (0x00000010u)
#define CSL_UART_SFLSR_OE_ERROR_SHIFT    (0x00000004u)
#define CSL_UART_SFLSR_OE_ERROR_RESETVAL (0x00000000u)

#define CSL_UART_SFLSR_FRAME_TOO_LONG_ERROR_MASK (0x00000008u)
#define CSL_UART_SFLSR_FRAME_TOO_LONG_ERROR_SHIFT (0x00000003u)
#define CSL_UART_SFLSR_FRAME_TOO_LONG_ERROR_RESETVAL (0x00000000u)

#define CSL_UART_SFLSR_ABORT_DETECT_MASK (0x00000004u)
#define CSL_UART_SFLSR_ABORT_DETECT_SHIFT (0x00000002u)
#define CSL_UART_SFLSR_ABORT_DETECT_RESETVAL (0x00000000u)

#define CSL_UART_SFLSR_CRC_ERROR_MASK    (0x00000002u)
#define CSL_UART_SFLSR_CRC_ERROR_SHIFT   (0x00000001u)
#define CSL_UART_SFLSR_CRC_ERROR_RESETVAL (0x00000000u)


#define CSL_UART_SFLSR_RESETVAL          (0x00000000u)

/* TXFLL */


#define CSL_UART_TXFLL_TXFLL_MASK        (0x000000FFu)
#define CSL_UART_TXFLL_TXFLL_SHIFT       (0x00000000u)
#define CSL_UART_TXFLL_TXFLL_RESETVAL    (0x00000000u)

#define CSL_UART_TXFLL_RESETVAL          (0x00000000u)

/* RESUME */


#define CSL_UART_RESUME_RESUME_MASK      (0x000000FFu)
#define CSL_UART_RESUME_RESUME_SHIFT     (0x00000000u)
#define CSL_UART_RESUME_RESUME_RESETVAL  (0x00000000u)

#define CSL_UART_RESUME_RESETVAL         (0x00000000u)

/* TXFLH */


#define CSL_UART_TXFLH_TXFLL_MASK        (0x0000001Fu)
#define CSL_UART_TXFLH_TXFLL_SHIFT       (0x00000000u)
#define CSL_UART_TXFLH_TXFLL_RESETVAL    (0x00000000u)

#define CSL_UART_TXFLH_RESETVAL          (0x00000000u)

/* SFREGL */


#define CSL_UART_SFREGL_SFREGL_MASK      (0x000000FFu)
#define CSL_UART_SFREGL_SFREGL_SHIFT     (0x00000000u)
#define CSL_UART_SFREGL_SFREGL_RESETVAL  (0x00000000u)

#define CSL_UART_SFREGL_RESETVAL         (0x00000000u)

/* RXFLL */


#define CSL_UART_RXFLL_RXFLL_MASK        (0x000000FFu)
#define CSL_UART_RXFLL_RXFLL_SHIFT       (0x00000000u)
#define CSL_UART_RXFLL_RXFLL_RESETVAL    (0x00000000u)

#define CSL_UART_RXFLL_RESETVAL          (0x00000000u)

/* SFREGH */


#define CSL_UART_SFREGH_SFREGH_MASK      (0x0000000Fu)
#define CSL_UART_SFREGH_SFREGH_SHIFT     (0x00000000u)
#define CSL_UART_SFREGH_SFREGH_RESETVAL  (0x00000000u)

#define CSL_UART_SFREGH_RESETVAL         (0x00000000u)

/* RXFLH */


#define CSL_UART_RXFLH_RXFLH_MASK        (0x0000000Fu)
#define CSL_UART_RXFLH_RXFLH_SHIFT       (0x00000000u)
#define CSL_UART_RXFLH_RXFLH_RESETVAL    (0x00000000u)

#define CSL_UART_RXFLH_RESETVAL          (0x00000000u)

/* BLR */


#define CSL_UART_BLR_STS_FIFO_RESET_MASK (0x00000080u)
#define CSL_UART_BLR_STS_FIFO_RESET_SHIFT (0x00000007u)
#define CSL_UART_BLR_STS_FIFO_RESET_RESETVAL (0x00000000u)

#define CSL_UART_BLR_XBOF_TYPE_MASK      (0x00000040u)
#define CSL_UART_BLR_XBOF_TYPE_SHIFT     (0x00000006u)
#define CSL_UART_BLR_XBOF_TYPE_RESETVAL  (0x00000001u)


#define CSL_UART_BLR_RESETVAL            (0x00000040u)

/* UASR */


#define CSL_UART_UASR_PARITY_TYPE_MASK   (0x000000C0u)
#define CSL_UART_UASR_PARITY_TYPE_SHIFT  (0x00000006u)
#define CSL_UART_UASR_PARITY_TYPE_RESETVAL (0x00000000u)

#define CSL_UART_UASR_BIT_BY_CHAR_MASK   (0x00000020u)
#define CSL_UART_UASR_BIT_BY_CHAR_SHIFT  (0x00000005u)
#define CSL_UART_UASR_BIT_BY_CHAR_RESETVAL (0x00000000u)

#define CSL_UART_UASR_SPEED_MASK         (0x0000001Fu)
#define CSL_UART_UASR_SPEED_SHIFT        (0x00000000u)
#define CSL_UART_UASR_SPEED_RESETVAL     (0x00000000u)

#define CSL_UART_UASR_RESETVAL           (0x00000000u)

/* ACREG */


#define CSL_UART_ACREG_PULSE_TYPE_MASK   (0x00000080u)
#define CSL_UART_ACREG_PULSE_TYPE_SHIFT  (0x00000007u)
#define CSL_UART_ACREG_PULSE_TYPE_RESETVAL (0x00000000u)

#define CSL_UART_ACREG_SD_MOD_MASK       (0x00000040u)
#define CSL_UART_ACREG_SD_MOD_SHIFT      (0x00000006u)
#define CSL_UART_ACREG_SD_MOD_RESETVAL   (0x00000000u)

#define CSL_UART_ACREG_DIS_IR_RX_MASK    (0x00000020u)
#define CSL_UART_ACREG_DIS_IR_RX_SHIFT   (0x00000005u)
#define CSL_UART_ACREG_DIS_IR_RX_RESETVAL (0x00000000u)

#define CSL_UART_ACREG_DIS_TX_UNDERRUN_MASK (0x00000010u)
#define CSL_UART_ACREG_DIS_TX_UNDERRUN_SHIFT (0x00000004u)
#define CSL_UART_ACREG_DIS_TX_UNDERRUN_RESETVAL (0x00000000u)

#define CSL_UART_ACREG_SEND_SIP_MASK     (0x00000008u)
#define CSL_UART_ACREG_SEND_SIP_SHIFT    (0x00000003u)
#define CSL_UART_ACREG_SEND_SIP_RESETVAL (0x00000000u)

#define CSL_UART_ACREG_SCTX_EN_MASK      (0x00000004u)
#define CSL_UART_ACREG_SCTX_EN_SHIFT     (0x00000002u)
#define CSL_UART_ACREG_SCTX_EN_RESETVAL  (0x00000000u)

#define CSL_UART_ACREG_ABORT_EN_MASK     (0x00000002u)
#define CSL_UART_ACREG_ABORT_EN_SHIFT    (0x00000001u)
#define CSL_UART_ACREG_ABORT_EN_RESETVAL (0x00000000u)

#define CSL_UART_ACREG_EOT_EN_MASK       (0x00000001u)
#define CSL_UART_ACREG_EOT_EN_SHIFT      (0x00000000u)
#define CSL_UART_ACREG_EOT_EN_RESETVAL   (0x00000000u)

#define CSL_UART_ACREG_RESETVAL          (0x00000000u)

/* SCR */


#define CSL_UART_SCR_RX_TRIG_GRANU1_MASK (0x00000080u)
#define CSL_UART_SCR_RX_TRIG_GRANU1_SHIFT (0x00000007u)
#define CSL_UART_SCR_RX_TRIG_GRANU1_RESETVAL (0x00000000u)

#define CSL_UART_SCR_TX_TRIG_GRANU1_MASK (0x00000040u)
#define CSL_UART_SCR_TX_TRIG_GRANU1_SHIFT (0x00000006u)
#define CSL_UART_SCR_TX_TRIG_GRANU1_RESETVAL (0x00000000u)

#define CSL_UART_SCR_DSR_IT_MASK         (0x00000020u)
#define CSL_UART_SCR_DSR_IT_SHIFT        (0x00000005u)
#define CSL_UART_SCR_DSR_IT_RESETVAL     (0x00000000u)

#define CSL_UART_SCR_TX_CTS_DSR_WAKE_UP_ENABLE_MASK (0x00000010u)
#define CSL_UART_SCR_TX_CTS_DSR_WAKE_UP_ENABLE_SHIFT (0x00000004u)
#define CSL_UART_SCR_TX_CTS_DSR_WAKE_UP_ENABLE_RESETVAL (0x00000000u)

#define CSL_UART_SCR_TX_EMPTY_CTL_IT_MASK (0x00000008u)
#define CSL_UART_SCR_TX_EMPTY_CTL_IT_SHIFT (0x00000003u)
#define CSL_UART_SCR_TX_EMPTY_CTL_IT_RESETVAL (0x00000000u)

#define CSL_UART_SCR_DMA_MODE_2_MASK     (0x00000006u)
#define CSL_UART_SCR_DMA_MODE_2_SHIFT    (0x00000001u)
#define CSL_UART_SCR_DMA_MODE_2_RESETVAL (0x00000000u)

#define CSL_UART_SCR_DMA_MODE_CTL_MASK   (0x00000001u)
#define CSL_UART_SCR_DMA_MODE_CTL_SHIFT  (0x00000000u)
#define CSL_UART_SCR_DMA_MODE_CTL_RESETVAL (0x00000000u)

#define CSL_UART_SCR_RESETVAL            (0x00000000u)

/* SSR */


#define CSL_UART_SSR_RX_CTS_DSR_WAKE_UP_STS_MASK (0x00000002u)
#define CSL_UART_SSR_RX_CTS_DSR_WAKE_UP_STS_SHIFT (0x00000001u)
#define CSL_UART_SSR_RX_CTS_DSR_WAKE_UP_STS_RESETVAL (0x00000000u)

#define CSL_UART_SSR_TX_FIFO_FULL_MASK   (0x00000001u)
#define CSL_UART_SSR_TX_FIFO_FULL_SHIFT  (0x00000000u)
#define CSL_UART_SSR_TX_FIFO_FULL_RESETVAL (0x00000000u)

#define CSL_UART_SSR_RESETVAL            (0x00000000u)

/* EBLR */


#define CSL_UART_EBLR_EBLR_MASK          (0x000000FFu)
#define CSL_UART_EBLR_EBLR_SHIFT         (0x00000000u)
#define CSL_UART_EBLR_EBLR_RESETVAL      (0x00000000u)

#define CSL_UART_EBLR_RESETVAL           (0x00000000u)

/* MVR */


#define CSL_UART_MVR_MAJOR_REV_MASK      (0x000000F0u)
#define CSL_UART_MVR_MAJOR_REV_SHIFT     (0x00000004u)
#define CSL_UART_MVR_MAJOR_REV_RESETVAL  (0x00000000u)

#define CSL_UART_MVR_MINOR_REV_MASK      (0x0000000Fu)
#define CSL_UART_MVR_MINOR_REV_SHIFT     (0x00000000u)
#define CSL_UART_MVR_MINOR_REV_RESETVAL  (0x00000000u)

#define CSL_UART_MVR_RESETVAL            (0x00000000u)

/* SYSC */


#define CSL_UART_SYSC_IDLEMODE_MASK      (0x00000018u)
#define CSL_UART_SYSC_IDLEMODE_SHIFT     (0x00000003u)
#define CSL_UART_SYSC_IDLEMODE_RESETVAL  (0x00000000u)

#define CSL_UART_SYSC_ENAWAKEUP_MASK     (0x00000004u)
#define CSL_UART_SYSC_ENAWAKEUP_SHIFT    (0x00000002u)
#define CSL_UART_SYSC_ENAWAKEUP_RESETVAL (0x00000000u)

#define CSL_UART_SYSC_SOFTRESET_MASK     (0x00000002u)
#define CSL_UART_SYSC_SOFTRESET_SHIFT    (0x00000001u)
#define CSL_UART_SYSC_SOFTRESET_RESETVAL (0x00000000u)

#define CSL_UART_SYSC_AUTOIDLE_MASK      (0x00000001u)
#define CSL_UART_SYSC_AUTOIDLE_SHIFT     (0x00000000u)
#define CSL_UART_SYSC_AUTOIDLE_RESETVAL  (0x00000000u)

#define CSL_UART_SYSC_RESETVAL           (0x00000000u)

/* SYSS */


#define CSL_UART_SYSS_RESETDONE_MASK     (0x00000001u)
#define CSL_UART_SYSS_RESETDONE_SHIFT    (0x00000000u)
#define CSL_UART_SYSS_RESETDONE_RESETVAL (0x00000000u)

#define CSL_UART_SYSS_RESETVAL           (0x00000000u)

/* WER */


#define CSL_UART_WER_RLS_MASK            (0x00000040u)
#define CSL_UART_WER_RLS_SHIFT           (0x00000006u)
#define CSL_UART_WER_RLS_RESETVAL        (0x00000001u)

#define CSL_UART_WER_RHR_MASK            (0x00000020u)
#define CSL_UART_WER_RHR_SHIFT           (0x00000005u)
#define CSL_UART_WER_RHR_RESETVAL        (0x00000001u)

#define CSL_UART_WER_RX_MASK             (0x00000010u)
#define CSL_UART_WER_RX_SHIFT            (0x00000004u)
#define CSL_UART_WER_RX_RESETVAL         (0x00000001u)

#define CSL_UART_WER_DCD_MASK            (0x00000008u)
#define CSL_UART_WER_DCD_SHIFT           (0x00000003u)
#define CSL_UART_WER_DCD_RESETVAL        (0x00000001u)

#define CSL_UART_WER_RI_MASK             (0x00000004u)
#define CSL_UART_WER_RI_SHIFT            (0x00000002u)
#define CSL_UART_WER_RI_RESETVAL         (0x00000001u)

#define CSL_UART_WER_DSR_MASK            (0x00000002u)
#define CSL_UART_WER_DSR_SHIFT           (0x00000001u)
#define CSL_UART_WER_DSR_RESETVAL        (0x00000001u)

#define CSL_UART_WER_CTS_MASK            (0x00000001u)
#define CSL_UART_WER_CTS_SHIFT           (0x00000000u)
#define CSL_UART_WER_CTS_RESETVAL        (0x00000001u)

#define CSL_UART_WER_RESETVAL            (0x0000007Fu)

/* CFPS */


#define CSL_UART_CFPS_CFPS_MASK          (0x000000FFu)
#define CSL_UART_CFPS_CFPS_SHIFT         (0x00000000u)
#define CSL_UART_CFPS_CFPS_RESETVAL      (0x00000069u)

#define CSL_UART_CFPS_RESETVAL           (0x00000069u)

#endif

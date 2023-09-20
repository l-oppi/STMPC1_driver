#ifndef STPMC1_H
#define STPMC1_H

/* IC Datasheet:
    https://www.st.com/content/ccc/resource/technical/document/datasheet/df/07/5e/81/99/48/4c/57/CD00235593.pdf/files/CD00235593.pdf/jcr:content/translations/en.CD00235593.pdf
    at 20/09/2023 11:49 GMT-3
*/

/* STATUS BIT MAPS */ // * Page 53
/* 3-phase status bits */
#define STPMC1_STATUSBM_3P_BIL  0x00
#define STPMC1_STATUSBM_3P_BCF  0x01
#define STPMC1_STATUSBM_3P_BFF  0x02
#define STPMC1_STATUSBM_3P_SIGN 0x03
#define STPMC1_STATUSBM_3P_PHR  0x04
#define STPMC1_STATUSBM_3P_PHS  0x05
#define STPMC1_STATUSBM_3P_PHT  0x06
#define STPMC1_STATUSBM_3P_HLT  0x07
#define STPMC1_STATUSBM_3P_PIN  0x08
#define STPMC1_STATUSBM_3P_BCS  0x09
#define STPMC1_STATUSBM_3P_BSF  0x0A
#define STPMC1_STATUSBM_3P_BIF  0x0B

/* X-phase status bits */
#define STPMC1_STATUSBM_XP_BIL  0x00
#define STPMC1_STATUSBM_XP_BCF  0x01
#define STPMC1_STATUSBM_XP_BFR  0x02
#define STPMC1_STATUSBM_XP_SIGN 0x03
#define STPMC1_STATUSBM_XP_LIN  0x04
#define STPMC1_STATUSBM_XP_ZRC  0x05
#define STPMC1_STATUSBM_XP_LOW  0x06
#define STPMC1_STATUSBM_XP_NAH  0x07

/* CONFIG BIT MAP */ // * Page 55
#define STPMC1_CONFIGBM_TSTD    0x00 // Enable/Disable Test Mode and OTP
#define STPMC1_CONFIGBM_MDIV    0x01 // Selection of measurement clock option
#define STPMC1_CONFIGBM_HSA     0x02 // High speed analog clock selection
#define STPMC1_CONFIGBM_APL     0x03 // Application type selection
#define STPMC1_CONFIGBM_TCS     0x05 // Type of current sensor selection
#define STPMC1_CONFIGBM_FRS     0x06 // Nominal base frequency
#define STPMC1_CONFIGBM_FUND    0x07 // Fundamental active and reactive energy
#define STPMC1_CONFIGBM_ART     0x08 // Reactive energy computation algorithm
#define STPMC1_CONFIGBM_ABS     0x0A // Bit sequence output during record data reading selection
#define STPMC1_CONFIGBM_LTCH    0x0C // Negative power accumulation type
#define STPMC1_CONFIGBM_KMOT    0x0E // No-load condition threshold
#define STPMC1_CONFIGBM_LVS     0x0F
#define STPMC1_CONFIGBM_SYS     0x10 // Measurement system selection
#define STPMC1_CONFIGBM_SCLP    0x13 // Polarity of SCLNLC idle state selection
#define STPMC1_CONFIGBM_PM      0x14 // Precision meter
#define STPMC1_CONFIGBM_FR1     0x15 // Measurement clock value selection
#define STPMC1_CONFIGBM_CCA     0x16
#define STPMC1_CONFIGBM_CIN     0x20 // Calibration data for current channel of neutral conductor
#define STPMC1_CONFIGBM_CIR     0x28 // Calibration data for current channel of phase R
#define STPMC1_CONFIGBM_CIS     0x30 // Calibration data for current channel of phase S
#define STPMC1_CONFIGBM_CIT     0x38 // Calibration data for current channel of phase T
#define STPMC1_CONFIGBM_CVR     0x40 // Calibration data for voltage channel of phase R
#define STPMC1_CONFIGBM_CVS     0x48 // Calibration data for voltage channel of phase S
#define STPMC1_CONFIGBM_CVT     0x50 // Calibration data for voltage channel of phase T
#define STPMC1_CONFIGBM_CPR     0x58 // Compensation of phase error of phase R
#define STPMC1_CONFIGBM_CPS     0x5C // Compensation of phase error of phase S
#define STPMC1_CONFIGBM_CPT     0x60 // Compensation of phase error of phase T
#define STPMC1_CONFIGBM_CCB     0x64
#define STPMC1_CONFIGBM_CPC     0x6C // Common sign and coarse phase error compensation
#define STPMC1_CONFIGBM_ENH     0x6E // Fifth data input enable
// #define STPMC1_CONFIGBM_CHK     0x6F // Reserved – Must be always set to 1

















#endif /* STPMC1_H */
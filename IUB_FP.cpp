#Frame Protocol of UMTS Iub interface,which encapsulate different logic channels
/* Channel types */
#define CHANNEL_UNKNOWN           0
#define CHANNEL_RACH_FDD          1
#define CHANNEL_RACH_TDD          2
#define CHANNEL_FACH_FDD          3
#define CHANNEL_FACH_TDD          4
#define CHANNEL_DSCH_FDD          5         /* DSCH Downlink Shared Channel */
#define CHANNEL_DSCH_TDD          6
#define CHANNEL_USCH_TDD_384      8
#define CHANNEL_USCH_TDD_128     24
#define CHANNEL_PCH               9
#define CHANNEL_CPCH             10
#define CHANNEL_BCH              11
#define CHANNEL_DCH              12        /* DCH Dedicated Transport Channel */
#define CHANNEL_HSDSCH           13        /* HS-DSCH - High Speed Downlink Shared Channel */
#define CHANNEL_IUR_CPCHF        14
#define CHANNEL_IUR_FACH         15
#define CHANNEL_IUR_DSCH         16
#define CHANNEL_EDCH             17        /* E-DCH Enhanced DCH */
#define CHANNEL_RACH_TDD_128     18
#define CHANNEL_HSDSCH_COMMON    19        /* HS-DSCH - High Speed Downlink Shared Channel */
#define CHANNEL_HSDSCH_COMMON_T3 20
#define CHANNEL_EDCH_COMMON      21
#TODO
FP_xxxCH() APIs

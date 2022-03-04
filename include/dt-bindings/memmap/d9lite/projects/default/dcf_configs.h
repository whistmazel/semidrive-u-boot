
//*****************************************************************************
//
// WARNING: Automatically generated file, don't modify anymore!!!
//
// Copyright (c) 2019-2029 Semidrive Incorporated.  All rights reserved.
// Software License Agreement
//
//*****************************************************************************

#ifndef __DCF_CONFIGS_H__
#define __DCF_CONFIGS_H__

typedef struct dcf_config {
    uint32_t res_id;
    addr_t paddr;
    uint32_t size;
    uint8_t mid_src;
    uint8_t mid_dst;
    uint8_t mid_master;
    uint8_t channel;
}dcf_config_t;

typedef struct dcf_configs {
    uint32_t config_num;
    dcf_config_t dcf_config[];
} dcf_configs_t;

const dcf_configs_t dcf_configs_list = {
	.dcf_config[0].res_id = RES_DDR_DDR_MEM_SAF_SEC,
	.dcf_config[0].paddr = 0x35A00000,
	.dcf_config[0].size = 0x200000,
	.dcf_config[0].mid_src = 0,
	.dcf_config[0].mid_dst = 1,
	.dcf_config[0].mid_master = 1,
	.dcf_config[0].channel = 0,
	.dcf_config[1].res_id = RES_DDR_DDR_MEM_SAF_AP2,
	.dcf_config[1].paddr = 0x35C00000,
	.dcf_config[1].size = 0x200000,
	.dcf_config[1].mid_src = 0,
	.dcf_config[1].mid_dst = 4,
	.dcf_config[1].mid_master = 4,
	.dcf_config[1].channel = 1,
	.dcf_config[2].res_id = RES_DDR_DDR_MEM_SEC_AP2,
	.dcf_config[2].paddr = 0x35E00000,
	.dcf_config[2].size = 0x200000,
	.dcf_config[2].mid_src = 1,
	.dcf_config[2].mid_dst = 4,
	.dcf_config[2].mid_master = 4,
	.dcf_config[2].channel = 2,
	.config_num = 3,
};

#endif /* __DCF_CONFIGS_H__*/

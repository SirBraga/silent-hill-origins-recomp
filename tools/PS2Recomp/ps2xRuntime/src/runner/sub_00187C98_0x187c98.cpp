#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00187C98
// Address: 0x187c98 - 0x187df0
void sub_00187C98_0x187c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00187C98_0x187c98");
#endif

    switch (ctx->pc) {
        case 0x187cf8u: goto label_187cf8;
        case 0x187d00u: goto label_187d00;
        case 0x187d08u: goto label_187d08;
        case 0x187d1cu: goto label_187d1c;
        case 0x187d30u: goto label_187d30;
        case 0x187d44u: goto label_187d44;
        case 0x187d4cu: goto label_187d4c;
        case 0x187d54u: goto label_187d54;
        case 0x187d60u: goto label_187d60;
        case 0x187d6cu: goto label_187d6c;
        case 0x187d74u: goto label_187d74;
        case 0x187d84u: goto label_187d84;
        case 0x187d98u: goto label_187d98;
        case 0x187da8u: goto label_187da8;
        case 0x187db4u: goto label_187db4;
        case 0x187dc0u: goto label_187dc0;
        default: break;
    }

    ctx->pc = 0x187c98u;

    // 0x187c98: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x187c98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x187c9c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x187c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x187ca0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x187ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x187ca4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x187ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x187ca8: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x187ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x187cac: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x187cacu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187cb0: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x187cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x187cb4: 0x24638978  addiu       $v1, $v1, -0x7688
    ctx->pc = 0x187cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936952));
    // 0x187cb8: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x187cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x187cbc: 0x24428930  addiu       $v0, $v0, -0x76D0
    ctx->pc = 0x187cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936880));
    // 0x187cc0: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x187cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x187cc4: 0x26930038  addiu       $s3, $s4, 0x38
    ctx->pc = 0x187cc4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 56));
    // 0x187cc8: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x187cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x187ccc: 0x26950044  addiu       $s5, $s4, 0x44
    ctx->pc = 0x187cccu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 68));
    // 0x187cd0: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x187cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x187cd4: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x187cd4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187cd8: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x187cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x187cdc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x187cdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187ce0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x187ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x187ce4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x187ce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187ce8: 0xae83003c  sw          $v1, 0x3C($s4)
    ctx->pc = 0x187ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 60), GPR_U32(ctx, 3));
    // 0x187cec: 0x2696004c  addiu       $s6, $s4, 0x4C
    ctx->pc = 0x187cecu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 76));
    // 0x187cf0: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x187CF0u;
    SET_GPR_U32(ctx, 31, 0x187CF8u);
    ctx->pc = 0x187CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187CF0u;
    // 0x187cf4: 0xae820034  sw          $v0, 0x34($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 52), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x187CF0u, 0x187CF8u)) {
        return;
    }
    ctx->pc = 0x187CF8u;
label_187cf8:
    // 0x187cf8: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x187CF8u;
    SET_GPR_U32(ctx, 31, 0x187D00u);
    ctx->pc = 0x187CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187CF8u;
    // 0x187cfc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x187CF8u, 0x187D00u)) {
        return;
    }
    ctx->pc = 0x187D00u;
label_187d00:
    // 0x187d00: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x187D00u;
    SET_GPR_U32(ctx, 31, 0x187D08u);
    ctx->pc = 0x187D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187D00u;
    // 0x187d04: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x187D00u, 0x187D08u)) {
        return;
    }
    ctx->pc = 0x187D08u;
label_187d08:
    // 0x187d08: 0x3c11006d  lui         $s1, 0x6D
    ctx->pc = 0x187d08u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)109 << 16));
    // 0x187d0c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x187d0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187d10: 0x2631bd10  addiu       $s1, $s1, -0x42F0
    ctx->pc = 0x187d10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294950160));
    // 0x187d14: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x187D14u;
    SET_GPR_U32(ctx, 31, 0x187D1Cu);
    ctx->pc = 0x187D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187D14u;
    // 0x187d18: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x187D14u, 0x187D1Cu)) {
        return;
    }
    ctx->pc = 0x187D1Cu;
label_187d1c:
    // 0x187d1c: 0x3c10006d  lui         $s0, 0x6D
    ctx->pc = 0x187d1cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)109 << 16));
    // 0x187d20: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x187d20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187d24: 0x2610bd08  addiu       $s0, $s0, -0x42F8
    ctx->pc = 0x187d24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294950152));
    // 0x187d28: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x187D28u;
    SET_GPR_U32(ctx, 31, 0x187D30u);
    ctx->pc = 0x187D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187D28u;
    // 0x187d2c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x187D28u, 0x187D30u)) {
        return;
    }
    ctx->pc = 0x187D30u;
label_187d30:
    // 0x187d30: 0x3c12006d  lui         $s2, 0x6D
    ctx->pc = 0x187d30u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)109 << 16));
    // 0x187d34: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x187d34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187d38: 0x2652bcf8  addiu       $s2, $s2, -0x4308
    ctx->pc = 0x187d38u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294950136));
    // 0x187d3c: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x187D3Cu;
    SET_GPR_U32(ctx, 31, 0x187D44u);
    ctx->pc = 0x187D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187D3Cu;
    // 0x187d40: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x187D3Cu, 0x187D44u)) {
        return;
    }
    ctx->pc = 0x187D44u;
label_187d44:
    // 0x187d44: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x187D44u;
    SET_GPR_U32(ctx, 31, 0x187D4Cu);
    ctx->pc = 0x187D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187D44u;
    // 0x187d48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x187D44u, 0x187D4Cu)) {
        return;
    }
    ctx->pc = 0x187D4Cu;
label_187d4c:
    // 0x187d4c: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x187D4Cu;
    SET_GPR_U32(ctx, 31, 0x187D54u);
    ctx->pc = 0x187D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187D4Cu;
    // 0x187d50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x187D4Cu, 0x187D54u)) {
        return;
    }
    ctx->pc = 0x187D54u;
label_187d54:
    // 0x187d54: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x187d54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
    // 0x187d58: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x187D58u;
    SET_GPR_U32(ctx, 31, 0x187D60u);
    ctx->pc = 0x187D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187D58u;
    // 0x187d5c: 0x2484bd00  addiu       $a0, $a0, -0x4300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x187D58u, 0x187D60u)) {
        return;
    }
    ctx->pc = 0x187D60u;
label_187d60:
    // 0x187d60: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x187d60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
    // 0x187d64: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x187D64u;
    SET_GPR_U32(ctx, 31, 0x187D6Cu);
    ctx->pc = 0x187D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187D64u;
    // 0x187d68: 0x2484bcf0  addiu       $a0, $a0, -0x4310 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x187D64u, 0x187D6Cu)) {
        return;
    }
    ctx->pc = 0x187D6Cu;
label_187d6c:
    // 0x187d6c: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x187D6Cu;
    SET_GPR_U32(ctx, 31, 0x187D74u);
    ctx->pc = 0x187D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187D6Cu;
    // 0x187d70: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x187D6Cu, 0x187D74u)) {
        return;
    }
    ctx->pc = 0x187D74u;
label_187d74:
    // 0x187d74: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x187d74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x187d78: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x187d78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187d7c: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x187D7Cu;
    SET_GPR_U32(ctx, 31, 0x187D84u);
    ctx->pc = 0x187D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187D7Cu;
    // 0x187d80: 0x24a58878  addiu       $a1, $a1, -0x7788 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x187D7Cu, 0x187D84u)) {
        return;
    }
    ctx->pc = 0x187D84u;
label_187d84:
    // 0x187d84: 0x8e840094  lw          $a0, 0x94($s4)
    ctx->pc = 0x187d84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 148)));
    // 0x187d88: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x187D88u;
    {
        const bool branch_taken_0x187d88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x187d88) {
            ctx->pc = 0x187D8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x187D88u;
            // 0x187d8c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x187DA0u;
            goto label_187da0;
        }
    }
    ctx->pc = 0x187D90u;
    // 0x187d90: 0xc0616e6  jal         func_185B98
    ctx->pc = 0x187D90u;
    SET_GPR_U32(ctx, 31, 0x187D98u);
    ctx->pc = 0x185B98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x185B98u, 0x187D90u, 0x187D98u)) {
        return;
    }
    ctx->pc = 0x187D98u;
label_187d98:
    // 0x187d98: 0xae800094  sw          $zero, 0x94($s4)
    ctx->pc = 0x187d98u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 148), GPR_U32(ctx, 0));
    // 0x187d9c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x187d9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_187da0:
    // 0x187da0: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x187DA0u;
    SET_GPR_U32(ctx, 31, 0x187DA8u);
    ctx->pc = 0x187DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187DA0u;
    // 0x187da4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x187DA0u, 0x187DA8u)) {
        return;
    }
    ctx->pc = 0x187DA8u;
label_187da8:
    // 0x187da8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x187da8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187dac: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x187DACu;
    SET_GPR_U32(ctx, 31, 0x187DB4u);
    ctx->pc = 0x187DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187DACu;
    // 0x187db0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x187DACu, 0x187DB4u)) {
        return;
    }
    ctx->pc = 0x187DB4u;
label_187db4:
    // 0x187db4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x187db4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187db8: 0xc04f084  jal         func_13C210
    ctx->pc = 0x187DB8u;
    SET_GPR_U32(ctx, 31, 0x187DC0u);
    ctx->pc = 0x187DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187DB8u;
    // 0x187dbc: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C210u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C210u, 0x187DB8u, 0x187DC0u)) {
        return;
    }
    ctx->pc = 0x187DC0u;
label_187dc0:
    // 0x187dc0: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x187dc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x187dc4: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x187dc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x187dc8: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x187dc8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x187dcc: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x187dccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x187dd0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x187dd0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x187dd4: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x187dd4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x187dd8: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x187dd8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x187ddc: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x187ddcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x187de0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x187de0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x187de4: 0x3e00008  jr          $ra
    ctx->pc = 0x187DE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187DE4u;
        // 0x187de8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187DE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x187DECu;
    // 0x187dec: 0x0  nop
    ctx->pc = 0x187decu;
    // NOP
    ctx->pc = 0x187df0u;
}

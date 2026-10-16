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

// Function: sub_00201CB0
// Address: 0x201cb0 - 0x201f58
void sub_00201CB0_0x201cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00201CB0_0x201cb0");
#endif

    switch (ctx->pc) {
        case 0x201d00u: goto label_201d00;
        case 0x201d20u: goto label_201d20;
        case 0x201d48u: goto label_201d48;
        case 0x201d74u: goto label_201d74;
        case 0x201d88u: goto label_201d88;
        case 0x201d90u: goto label_201d90;
        case 0x201d98u: goto label_201d98;
        case 0x201db8u: goto label_201db8;
        case 0x201dd4u: goto label_201dd4;
        case 0x201de0u: goto label_201de0;
        case 0x201e00u: goto label_201e00;
        case 0x201e20u: goto label_201e20;
        case 0x201e48u: goto label_201e48;
        case 0x201e70u: goto label_201e70;
        case 0x201e84u: goto label_201e84;
        case 0x201e8cu: goto label_201e8c;
        case 0x201e94u: goto label_201e94;
        case 0x201eb4u: goto label_201eb4;
        case 0x201ed8u: goto label_201ed8;
        case 0x201ee4u: goto label_201ee4;
        case 0x201efcu: goto label_201efc;
        case 0x201f04u: goto label_201f04;
        case 0x201f10u: goto label_201f10;
        case 0x201f20u: goto label_201f20;
        default: break;
    }

    ctx->pc = 0x201cb0u;

    // 0x201cb0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x201cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x201cb4: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x201cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x201cb8: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x201cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x201cbc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x201cbcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201cc0: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x201cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x201cc4: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x201cc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x201cc8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x201cc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201ccc: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x201cccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x201cd0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x201cd0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201cd4: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x201cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x201cd8: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x201cd8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201cdc: 0x8c440270  lw          $a0, 0x270($v0)
    ctx->pc = 0x201cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5C0270u));
    // 0x201ce0: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x201ce0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201ce4: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x201ce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x201ce8: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x201ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x201cec: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x201cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x201cf0: 0x1080003d  beqz        $a0, . + 4 + (0x3D << 2)
    ctx->pc = 0x201CF0u;
    {
        const bool branch_taken_0x201cf0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x201CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201CF0u;
        // 0x201cf4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201cf0) {
            ctx->pc = 0x201DE8u;
            goto label_201de8;
        }
    }
    ctx->pc = 0x201CF8u;
    // 0x201cf8: 0xc080b0c  jal         func_202C30
    ctx->pc = 0x201CF8u;
    SET_GPR_U32(ctx, 31, 0x201D00u);
    ctx->pc = 0x201CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201CF8u;
    // 0x201cfc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202C30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202C30u, 0x201CF8u, 0x201D00u)) {
        return;
    }
    ctx->pc = 0x201D00u;
label_201d00:
    // 0x201d00: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x201d00u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201d04: 0x12600039  beqz        $s3, . + 4 + (0x39 << 2)
    ctx->pc = 0x201D04u;
    {
        const bool branch_taken_0x201d04 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x201D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201D04u;
        // 0x201d08: 0x3c02005c  lui         $v0, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201d04) {
            ctx->pc = 0x201DECu;
            goto label_201dec;
        }
    }
    ctx->pc = 0x201D0Cu;
    // 0x201d0c: 0x16200006  bnez        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x201D0Cu;
    {
        const bool branch_taken_0x201d0c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x201D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201D0Cu;
        // 0x201d10: 0x271102a  slt         $v0, $s3, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x201d0c) {
            ctx->pc = 0x201D28u;
            goto label_201d28;
        }
    }
    ctx->pc = 0x201D14u;
    // 0x201d14: 0x8ea40270  lw          $a0, 0x270($s5)
    ctx->pc = 0x201d14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 624)));
    // 0x201d18: 0xc080ad8  jal         func_202B60
    ctx->pc = 0x201D18u;
    SET_GPR_U32(ctx, 31, 0x201D20u);
    ctx->pc = 0x201D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201D18u;
    // 0x201d1c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202B60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202B60u, 0x201D18u, 0x201D20u)) {
        return;
    }
    ctx->pc = 0x201D20u;
label_201d20:
    // 0x201d20: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x201D20u;
    {
        const bool branch_taken_0x201d20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201D20u;
        // 0x201d24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201d20) {
            ctx->pc = 0x201F20u;
            goto label_201f20;
        }
    }
    ctx->pc = 0x201D28u;
label_201d28:
    // 0x201d28: 0x10400064  beqz        $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x201D28u;
    {
        const bool branch_taken_0x201d28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x201D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201D28u;
        // 0x201d2c: 0x8ea40270  lw          $a0, 0x270($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 624)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201d28) {
            ctx->pc = 0x201EBCu;
            goto label_201ebc;
        }
    }
    ctx->pc = 0x201D30u;
    // 0x201d30: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x201D30u;
    {
        const bool branch_taken_0x201d30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x201D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201D30u;
        // 0x201d34: 0x2e220041  sltiu       $v0, $s1, 0x41 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)65) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x201d30) {
            ctx->pc = 0x201D54u;
            goto label_201d54;
        }
    }
    ctx->pc = 0x201D38u;
    // 0x201d38: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x201D38u;
    {
        const bool branch_taken_0x201d38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x201D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201D38u;
        // 0x201d3c: 0x3c02005c  lui         $v0, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201d38) {
            ctx->pc = 0x201D58u;
            goto label_201d58;
        }
    }
    ctx->pc = 0x201D40u;
    // 0x201d40: 0xc080aac  jal         func_202AB0
    ctx->pc = 0x201D40u;
    SET_GPR_U32(ctx, 31, 0x201D48u);
    ctx->pc = 0x201D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201D40u;
    // 0x201d44: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202AB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202AB0u, 0x201D40u, 0x201D48u)) {
        return;
    }
    ctx->pc = 0x201D48u;
label_201d48:
    // 0x201d48: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x201d48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201d4c: 0x1600001a  bnez        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x201D4Cu;
    {
        const bool branch_taken_0x201d4c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x201d4c) {
            ctx->pc = 0x201DB8u;
            goto label_201db8;
        }
    }
    ctx->pc = 0x201D54u;
label_201d54:
    // 0x201d54: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x201d54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
label_201d58:
    // 0x201d58: 0x8c440274  lw          $a0, 0x274($v0)
    ctx->pc = 0x201d58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 628)));
    // 0x201d5c: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x201D5Cu;
    {
        const bool branch_taken_0x201d5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x201D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201D5Cu;
        // 0x201d60: 0x2e220401  sltiu       $v0, $s1, 0x401 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x201d5c) {
            ctx->pc = 0x201D80u;
            goto label_201d80;
        }
    }
    ctx->pc = 0x201D64u;
    // 0x201d64: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x201D64u;
    {
        const bool branch_taken_0x201d64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x201d64) {
            ctx->pc = 0x201D80u;
            goto label_201d80;
        }
    }
    ctx->pc = 0x201D6Cu;
    // 0x201d6c: 0xc080b60  jal         func_202D80
    ctx->pc = 0x201D6Cu;
    SET_GPR_U32(ctx, 31, 0x201D74u);
    ctx->pc = 0x201D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201D6Cu;
    // 0x201d70: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202D80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202D80u, 0x201D6Cu, 0x201D74u)) {
        return;
    }
    ctx->pc = 0x201D74u;
label_201d74:
    // 0x201d74: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x201d74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201d78: 0x1600000f  bnez        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x201D78u;
    {
        const bool branch_taken_0x201d78 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x201d78) {
            ctx->pc = 0x201DB8u;
            goto label_201db8;
        }
    }
    ctx->pc = 0x201D80u;
label_201d80:
    // 0x201d80: 0xc0807e4  jal         func_201F90
    ctx->pc = 0x201D80u;
    SET_GPR_U32(ctx, 31, 0x201D88u);
    ctx->pc = 0x201F90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x201F90u, 0x201D80u, 0x201D88u)) {
        return;
    }
    ctx->pc = 0x201D88u;
label_201d88:
    // 0x201d88: 0xc08083a  jal         func_2020E8
    ctx->pc = 0x201D88u;
    SET_GPR_U32(ctx, 31, 0x201D90u);
    ctx->pc = 0x2020E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2020E8u, 0x201D88u, 0x201D90u)) {
        return;
    }
    ctx->pc = 0x201D90u;
label_201d90:
    // 0x201d90: 0xc0c5472  jal         func_3151C8
    ctx->pc = 0x201D90u;
    SET_GPR_U32(ctx, 31, 0x201D98u);
    ctx->pc = 0x201D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201D90u;
    // 0x201d94: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3151C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3151C8u, 0x201D90u, 0x201D98u)) {
        return;
    }
    ctx->pc = 0x201D98u;
label_201d98:
    // 0x201d98: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x201d98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201d9c: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x201D9Cu;
    {
        const bool branch_taken_0x201d9c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x201DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201D9Cu;
        // 0x201da0: 0x3c04006a  lui         $a0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201d9c) {
            ctx->pc = 0x201DB8u;
            goto label_201db8;
        }
    }
    ctx->pc = 0x201DA4u;
    // 0x201da4: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x201da4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201da8: 0x24843c18  addiu       $a0, $a0, 0x3C18
    ctx->pc = 0x201da8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15384));
    // 0x201dac: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x201dacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201db0: 0xc0c4f0a  jal         func_313C28
    ctx->pc = 0x201DB0u;
    SET_GPR_U32(ctx, 31, 0x201DB8u);
    ctx->pc = 0x201DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201DB0u;
    // 0x201db4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313C28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313C28u, 0x201DB0u, 0x201DB8u)) {
        return;
    }
    ctx->pc = 0x201DB8u;
label_201db8:
    // 0x201db8: 0x12000040  beqz        $s0, . + 4 + (0x40 << 2)
    ctx->pc = 0x201DB8u;
    {
        const bool branch_taken_0x201db8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x201DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201DB8u;
        // 0x201dbc: 0x233102a  slt         $v0, $s1, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x201db8) {
            ctx->pc = 0x201EBCu;
            goto label_201ebc;
        }
    }
    ctx->pc = 0x201DC0u;
    // 0x201dc0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x201dc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201dc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x201dc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201dc8: 0x262300a  movz        $a2, $s3, $v0
    ctx->pc = 0x201dc8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19));
    // 0x201dcc: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x201DCCu;
    SET_GPR_U32(ctx, 31, 0x201DD4u);
    ctx->pc = 0x201DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201DCCu;
    // 0x201dd0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x201DCCu, 0x201DD4u)) {
        return;
    }
    ctx->pc = 0x201DD4u;
label_201dd4:
    // 0x201dd4: 0x8ea40270  lw          $a0, 0x270($s5)
    ctx->pc = 0x201dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 624)));
    // 0x201dd8: 0xc080ad8  jal         func_202B60
    ctx->pc = 0x201DD8u;
    SET_GPR_U32(ctx, 31, 0x201DE0u);
    ctx->pc = 0x201DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201DD8u;
    // 0x201ddc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202B60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202B60u, 0x201DD8u, 0x201DE0u)) {
        return;
    }
    ctx->pc = 0x201DE0u;
label_201de0:
    // 0x201de0: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x201DE0u;
    {
        const bool branch_taken_0x201de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201DE0u;
        // 0x201de4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201de0) {
            ctx->pc = 0x201F20u;
            goto label_201f20;
        }
    }
    ctx->pc = 0x201DE8u;
label_201de8:
    // 0x201de8: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x201de8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
label_201dec:
    // 0x201dec: 0x8c440274  lw          $a0, 0x274($v0)
    ctx->pc = 0x201decu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 628)));
    // 0x201df0: 0x1080003e  beqz        $a0, . + 4 + (0x3E << 2)
    ctx->pc = 0x201DF0u;
    {
        const bool branch_taken_0x201df0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x201DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201DF0u;
        // 0x201df4: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201df0) {
            ctx->pc = 0x201EECu;
            goto label_201eec;
        }
    }
    ctx->pc = 0x201DF8u;
    // 0x201df8: 0xc080c9e  jal         func_203278
    ctx->pc = 0x201DF8u;
    SET_GPR_U32(ctx, 31, 0x201E00u);
    ctx->pc = 0x201DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201DF8u;
    // 0x201dfc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203278u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x203278u, 0x201DF8u, 0x201E00u)) {
        return;
    }
    ctx->pc = 0x201E00u;
label_201e00:
    // 0x201e00: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x201e00u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201e04: 0x12600039  beqz        $s3, . + 4 + (0x39 << 2)
    ctx->pc = 0x201E04u;
    {
        const bool branch_taken_0x201e04 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x201e04) {
            ctx->pc = 0x201EECu;
            goto label_201eec;
        }
    }
    ctx->pc = 0x201E0Cu;
    // 0x201e0c: 0x16200006  bnez        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x201E0Cu;
    {
        const bool branch_taken_0x201e0c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x201E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201E0Cu;
        // 0x201e10: 0x271102a  slt         $v0, $s3, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x201e0c) {
            ctx->pc = 0x201E28u;
            goto label_201e28;
        }
    }
    ctx->pc = 0x201E14u;
    // 0x201e14: 0x8e840274  lw          $a0, 0x274($s4)
    ctx->pc = 0x201e14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 628)));
    // 0x201e18: 0xc080c5c  jal         func_203170
    ctx->pc = 0x201E18u;
    SET_GPR_U32(ctx, 31, 0x201E20u);
    ctx->pc = 0x201E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201E18u;
    // 0x201e1c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203170u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x203170u, 0x201E18u, 0x201E20u)) {
        return;
    }
    ctx->pc = 0x201E20u;
label_201e20:
    // 0x201e20: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x201E20u;
    {
        const bool branch_taken_0x201e20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201E20u;
        // 0x201e24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201e20) {
            ctx->pc = 0x201F20u;
            goto label_201f20;
        }
    }
    ctx->pc = 0x201E28u;
label_201e28:
    // 0x201e28: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x201E28u;
    {
        const bool branch_taken_0x201e28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x201E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201E28u;
        // 0x201e2c: 0x8ea40270  lw          $a0, 0x270($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 624)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201e28) {
            ctx->pc = 0x201EBCu;
            goto label_201ebc;
        }
    }
    ctx->pc = 0x201E30u;
    // 0x201e30: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x201E30u;
    {
        const bool branch_taken_0x201e30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x201E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201E30u;
        // 0x201e34: 0x2e220041  sltiu       $v0, $s1, 0x41 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)65) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x201e30) {
            ctx->pc = 0x201E54u;
            goto label_201e54;
        }
    }
    ctx->pc = 0x201E38u;
    // 0x201e38: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x201E38u;
    {
        const bool branch_taken_0x201e38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x201e38) {
            ctx->pc = 0x201E3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x201E38u;
            // 0x201e3c: 0x8e840274  lw          $a0, 0x274($s4) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 628)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x201E58u;
            goto label_201e58;
        }
    }
    ctx->pc = 0x201E40u;
    // 0x201e40: 0xc080aac  jal         func_202AB0
    ctx->pc = 0x201E40u;
    SET_GPR_U32(ctx, 31, 0x201E48u);
    ctx->pc = 0x201E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201E40u;
    // 0x201e44: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202AB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202AB0u, 0x201E40u, 0x201E48u)) {
        return;
    }
    ctx->pc = 0x201E48u;
label_201e48:
    // 0x201e48: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x201e48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201e4c: 0x1600001d  bnez        $s0, . + 4 + (0x1D << 2)
    ctx->pc = 0x201E4Cu;
    {
        const bool branch_taken_0x201e4c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x201E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201E4Cu;
        // 0x201e50: 0x233102a  slt         $v0, $s1, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x201e4c) {
            ctx->pc = 0x201EC4u;
            goto label_201ec4;
        }
    }
    ctx->pc = 0x201E54u;
label_201e54:
    // 0x201e54: 0x8e840274  lw          $a0, 0x274($s4)
    ctx->pc = 0x201e54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 628)));
label_201e58:
    // 0x201e58: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x201E58u;
    {
        const bool branch_taken_0x201e58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x201E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201E58u;
        // 0x201e5c: 0x2e220401  sltiu       $v0, $s1, 0x401 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x201e58) {
            ctx->pc = 0x201E7Cu;
            goto label_201e7c;
        }
    }
    ctx->pc = 0x201E60u;
    // 0x201e60: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x201E60u;
    {
        const bool branch_taken_0x201e60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x201e60) {
            ctx->pc = 0x201E7Cu;
            goto label_201e7c;
        }
    }
    ctx->pc = 0x201E68u;
    // 0x201e68: 0xc080b60  jal         func_202D80
    ctx->pc = 0x201E68u;
    SET_GPR_U32(ctx, 31, 0x201E70u);
    ctx->pc = 0x201E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201E68u;
    // 0x201e6c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202D80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202D80u, 0x201E68u, 0x201E70u)) {
        return;
    }
    ctx->pc = 0x201E70u;
label_201e70:
    // 0x201e70: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x201e70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201e74: 0x16000013  bnez        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x201E74u;
    {
        const bool branch_taken_0x201e74 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x201E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201E74u;
        // 0x201e78: 0x233102a  slt         $v0, $s1, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x201e74) {
            ctx->pc = 0x201EC4u;
            goto label_201ec4;
        }
    }
    ctx->pc = 0x201E7Cu;
label_201e7c:
    // 0x201e7c: 0xc0807e4  jal         func_201F90
    ctx->pc = 0x201E7Cu;
    SET_GPR_U32(ctx, 31, 0x201E84u);
    ctx->pc = 0x201F90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x201F90u, 0x201E7Cu, 0x201E84u)) {
        return;
    }
    ctx->pc = 0x201E84u;
label_201e84:
    // 0x201e84: 0xc08083a  jal         func_2020E8
    ctx->pc = 0x201E84u;
    SET_GPR_U32(ctx, 31, 0x201E8Cu);
    ctx->pc = 0x2020E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2020E8u, 0x201E84u, 0x201E8Cu)) {
        return;
    }
    ctx->pc = 0x201E8Cu;
label_201e8c:
    // 0x201e8c: 0xc0c5472  jal         func_3151C8
    ctx->pc = 0x201E8Cu;
    SET_GPR_U32(ctx, 31, 0x201E94u);
    ctx->pc = 0x201E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201E8Cu;
    // 0x201e90: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3151C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3151C8u, 0x201E8Cu, 0x201E94u)) {
        return;
    }
    ctx->pc = 0x201E94u;
label_201e94:
    // 0x201e94: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x201e94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201e98: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x201E98u;
    {
        const bool branch_taken_0x201e98 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x201E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201E98u;
        // 0x201e9c: 0x3c04006a  lui         $a0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201e98) {
            ctx->pc = 0x201EB4u;
            goto label_201eb4;
        }
    }
    ctx->pc = 0x201EA0u;
    // 0x201ea0: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x201ea0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201ea4: 0x24843c18  addiu       $a0, $a0, 0x3C18
    ctx->pc = 0x201ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15384));
    // 0x201ea8: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x201ea8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201eac: 0xc0c4f0a  jal         func_313C28
    ctx->pc = 0x201EACu;
    SET_GPR_U32(ctx, 31, 0x201EB4u);
    ctx->pc = 0x201EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201EACu;
    // 0x201eb0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313C28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313C28u, 0x201EACu, 0x201EB4u)) {
        return;
    }
    ctx->pc = 0x201EB4u;
label_201eb4:
    // 0x201eb4: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x201EB4u;
    {
        const bool branch_taken_0x201eb4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x201EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201EB4u;
        // 0x201eb8: 0x233102a  slt         $v0, $s1, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x201eb4) {
            ctx->pc = 0x201EC4u;
            goto label_201ec4;
        }
    }
    ctx->pc = 0x201EBCu;
label_201ebc:
    // 0x201ebc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x201EBCu;
    {
        const bool branch_taken_0x201ebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201EBCu;
        // 0x201ec0: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201ebc) {
            ctx->pc = 0x201F20u;
            goto label_201f20;
        }
    }
    ctx->pc = 0x201EC4u;
label_201ec4:
    // 0x201ec4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x201ec4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201ec8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x201ec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201ecc: 0x262300a  movz        $a2, $s3, $v0
    ctx->pc = 0x201eccu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19));
    // 0x201ed0: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x201ED0u;
    SET_GPR_U32(ctx, 31, 0x201ED8u);
    ctx->pc = 0x201ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201ED0u;
    // 0x201ed4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x201ED0u, 0x201ED8u)) {
        return;
    }
    ctx->pc = 0x201ED8u;
label_201ed8:
    // 0x201ed8: 0x8e840274  lw          $a0, 0x274($s4)
    ctx->pc = 0x201ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 628)));
    // 0x201edc: 0xc080c5c  jal         func_203170
    ctx->pc = 0x201EDCu;
    SET_GPR_U32(ctx, 31, 0x201EE4u);
    ctx->pc = 0x201EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201EDCu;
    // 0x201ee0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203170u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x203170u, 0x201EDCu, 0x201EE4u)) {
        return;
    }
    ctx->pc = 0x201EE4u;
label_201ee4:
    // 0x201ee4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x201EE4u;
    {
        const bool branch_taken_0x201ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201EE4u;
        // 0x201ee8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201ee4) {
            ctx->pc = 0x201F20u;
            goto label_201f20;
        }
    }
    ctx->pc = 0x201EECu;
label_201eec:
    // 0x201eec: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x201EECu;
    {
        const bool branch_taken_0x201eec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x201EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201EECu;
        // 0x201ef0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201eec) {
            ctx->pc = 0x201F18u;
            goto label_201f18;
        }
    }
    ctx->pc = 0x201EF4u;
    // 0x201ef4: 0xc0807e4  jal         func_201F90
    ctx->pc = 0x201EF4u;
    SET_GPR_U32(ctx, 31, 0x201EFCu);
    ctx->pc = 0x201EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201EF4u;
    // 0x201ef8: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201F90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x201F90u, 0x201EF4u, 0x201EFCu)) {
        return;
    }
    ctx->pc = 0x201EFCu;
label_201efc:
    // 0x201efc: 0xc08083a  jal         func_2020E8
    ctx->pc = 0x201EFCu;
    SET_GPR_U32(ctx, 31, 0x201F04u);
    ctx->pc = 0x2020E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2020E8u, 0x201EFCu, 0x201F04u)) {
        return;
    }
    ctx->pc = 0x201F04u;
label_201f04:
    // 0x201f04: 0x2222821  addu        $a1, $s1, $v0
    ctx->pc = 0x201f04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x201f08: 0xc0c5818  jal         func_316060
    ctx->pc = 0x201F08u;
    SET_GPR_U32(ctx, 31, 0x201F10u);
    ctx->pc = 0x201F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201F08u;
    // 0x201f0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x316060u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x316060u, 0x201F08u, 0x201F10u)) {
        return;
    }
    ctx->pc = 0x201F10u;
label_201f10:
    // 0x201f10: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x201F10u;
    {
        const bool branch_taken_0x201f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201F10u;
        // 0x201f14: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201f10) {
            ctx->pc = 0x201F24u;
            goto label_201f24;
        }
    }
    ctx->pc = 0x201F18u;
label_201f18:
    // 0x201f18: 0xc0c5818  jal         func_316060
    ctx->pc = 0x201F18u;
    SET_GPR_U32(ctx, 31, 0x201F20u);
    ctx->pc = 0x201F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201F18u;
    // 0x201f1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x316060u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x316060u, 0x201F18u, 0x201F20u)) {
        return;
    }
    ctx->pc = 0x201F20u;
label_201f20:
    // 0x201f20: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x201f20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_201f24:
    // 0x201f24: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x201f24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x201f28: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x201f28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x201f2c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x201f2cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x201f30: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x201f30u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x201f34: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x201f34u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x201f38: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x201f38u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x201f3c: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x201f3cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x201f40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x201f40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201f44: 0x3e00008  jr          $ra
    ctx->pc = 0x201F44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201F44u;
        // 0x201f48: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201F44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201F4Cu;
    // 0x201f4c: 0x0  nop
    ctx->pc = 0x201f4cu;
    // NOP
    // 0x201f50: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x201f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x201f54: 0x0  nop
    ctx->pc = 0x201f54u;
    // NOP
    ctx->pc = 0x201f58u;
}

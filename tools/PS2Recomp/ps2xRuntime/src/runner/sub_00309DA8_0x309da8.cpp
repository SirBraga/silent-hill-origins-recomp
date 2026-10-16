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

// Function: sub_00309DA8
// Address: 0x309da8 - 0x30a428
void sub_00309DA8_0x309da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00309DA8_0x309da8");
#endif

    switch (ctx->pc) {
        case 0x309de0u: goto label_309de0;
        case 0x309e3cu: goto label_309e3c;
        case 0x309e58u: goto label_309e58;
        case 0x309e98u: goto label_309e98;
        case 0x309ec8u: goto label_309ec8;
        case 0x309ee4u: goto label_309ee4;
        case 0x309f20u: goto label_309f20;
        case 0x309f50u: goto label_309f50;
        case 0x309f6cu: goto label_309f6c;
        case 0x309fa8u: goto label_309fa8;
        case 0x309fd8u: goto label_309fd8;
        case 0x309ff4u: goto label_309ff4;
        case 0x30a030u: goto label_30a030;
        case 0x30a060u: goto label_30a060;
        case 0x30a07cu: goto label_30a07c;
        case 0x30a0b8u: goto label_30a0b8;
        case 0x30a0e8u: goto label_30a0e8;
        case 0x30a104u: goto label_30a104;
        case 0x30a140u: goto label_30a140;
        case 0x30a170u: goto label_30a170;
        case 0x30a18cu: goto label_30a18c;
        case 0x30a1c8u: goto label_30a1c8;
        case 0x30a1f8u: goto label_30a1f8;
        case 0x30a214u: goto label_30a214;
        case 0x30a250u: goto label_30a250;
        case 0x30a280u: goto label_30a280;
        case 0x30a29cu: goto label_30a29c;
        case 0x30a2d8u: goto label_30a2d8;
        case 0x30a308u: goto label_30a308;
        case 0x30a324u: goto label_30a324;
        case 0x30a360u: goto label_30a360;
        case 0x30a390u: goto label_30a390;
        case 0x30a3acu: goto label_30a3ac;
        case 0x30a3e8u: goto label_30a3e8;
        default: break;
    }

    ctx->pc = 0x309da8u;

    // 0x309da8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x309da8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x309dac: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x309dacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x309db0: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x309db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x309db4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x309db4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309db8: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x309db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x309dbc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x309dbcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309dc0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x309dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x309dc4: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x309dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x309dc8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x309dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x309dcc: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x309DCCu;
    {
        const bool branch_taken_0x309dcc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x309DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309DCCu;
        // 0x309dd0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309dcc) {
            ctx->pc = 0x309DE8u;
            goto label_309de8;
        }
    }
    ctx->pc = 0x309DD4u;
    // 0x309dd4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x309dd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309dd8: 0xc092782  jal         func_249E08
    ctx->pc = 0x309DD8u;
    SET_GPR_U32(ctx, 31, 0x309DE0u);
    ctx->pc = 0x309DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309DD8u;
    // 0x309ddc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x309DD8u, 0x309DE0u)) {
        return;
    }
    ctx->pc = 0x309DE0u;
label_309de0:
    // 0x309de0: 0x1040018b  beqz        $v0, . + 4 + (0x18B << 2)
    ctx->pc = 0x309DE0u;
    {
        const bool branch_taken_0x309de0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x309DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309DE0u;
        // 0x309de4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309de0) {
            ctx->pc = 0x30A410u;
            goto label_30a410;
        }
    }
    ctx->pc = 0x309DE8u;
label_309de8:
    // 0x309de8: 0x8e42005c  lw          $v0, 0x5C($s2)
    ctx->pc = 0x309de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x309dec: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x309decu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x309df0: 0x2c83000b  sltiu       $v1, $a0, 0xB
    ctx->pc = 0x309df0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x309df4: 0x1060015c  beqz        $v1, . + 4 + (0x15C << 2)
    ctx->pc = 0x309DF4u;
    {
        const bool branch_taken_0x309df4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x309DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309DF4u;
        // 0x309df8: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309df4) {
            ctx->pc = 0x30A368u;
            goto label_30a368;
        }
    }
    ctx->pc = 0x309DFCu;
    // 0x309dfc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x309dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x309e00: 0x24420ec0  addiu       $v0, $v0, 0xEC0
    ctx->pc = 0x309e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3776));
    // 0x309e04: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x309e04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x309e08: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x309e08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x309e0c: 0x800008  jr          $a0
    ctx->pc = 0x309E0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x309E14u: goto label_309e14;
            case 0x309EA0u: goto label_309ea0;
            case 0x309F28u: goto label_309f28;
            case 0x309FB0u: goto label_309fb0;
            case 0x30A038u: goto label_30a038;
            case 0x30A0C0u: goto label_30a0c0;
            case 0x30A148u: goto label_30a148;
            case 0x30A1D0u: goto label_30a1d0;
            case 0x30A258u: goto label_30a258;
            case 0x30A2E0u: goto label_30a2e0;
            case 0x30A368u: goto label_30a368;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x309E0Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x309E14u;
label_309e14:
    // 0x309e14: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x309e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x309e18: 0x27b10004  addiu       $s1, $sp, 0x4
    ctx->pc = 0x309e18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x309e1c: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x309e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x309e20: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x309e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x309e24: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x309e24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x309e28: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x309E28u;
    {
        const bool branch_taken_0x309e28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x309E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309E28u;
        // 0x309e2c: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309e28) {
            ctx->pc = 0x309E70u;
            goto label_309e70;
        }
    }
    ctx->pc = 0x309E30u;
    // 0x309e30: 0x37a50008  ori         $a1, $sp, 0x8
    ctx->pc = 0x309e30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    // 0x309e34: 0xc092782  jal         func_249E08
    ctx->pc = 0x309E34u;
    SET_GPR_U32(ctx, 31, 0x309E3Cu);
    ctx->pc = 0x309E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309E34u;
    // 0x309e38: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x309E34u, 0x309E3Cu)) {
        return;
    }
    ctx->pc = 0x309E3Cu;
label_309e3c:
    // 0x309e3c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x309E3Cu;
    {
        const bool branch_taken_0x309e3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x309E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309E3Cu;
        // 0x309e40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309e3c) {
            ctx->pc = 0x309E88u;
            goto label_309e88;
        }
    }
    ctx->pc = 0x309E44u;
    // 0x309e44: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x309e44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x309e48: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x309E48u;
    {
        const bool branch_taken_0x309e48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x309E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309E48u;
        // 0x309e4c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309e48) {
            ctx->pc = 0x309E70u;
            goto label_309e70;
        }
    }
    ctx->pc = 0x309E50u;
    // 0x309e50: 0xc092782  jal         func_249E08
    ctx->pc = 0x309E50u;
    SET_GPR_U32(ctx, 31, 0x309E58u);
    ctx->pc = 0x309E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309E50u;
    // 0x309e54: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x309E50u, 0x309E58u)) {
        return;
    }
    ctx->pc = 0x309E58u;
label_309e58:
    // 0x309e58: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x309E58u;
    {
        const bool branch_taken_0x309e58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x309e58) {
            ctx->pc = 0x309E70u;
            goto label_309e70;
        }
    }
    ctx->pc = 0x309E60u;
    // 0x309e60: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x309e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x309e64: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x309E64u;
    {
        const bool branch_taken_0x309e64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x309E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309E64u;
        // 0x309e68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309e64) {
            ctx->pc = 0x309E88u;
            goto label_309e88;
        }
    }
    ctx->pc = 0x309E6Cu;
    // 0x309e6c: 0x0  nop
    ctx->pc = 0x309e6cu;
    // NOP
label_309e70:
    // 0x309e70: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x309E70u;
    {
        const bool branch_taken_0x309e70 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x309E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309E70u;
        // 0x309e74: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309e70) {
            ctx->pc = 0x309E88u;
            goto label_309e88;
        }
    }
    ctx->pc = 0x309E78u;
    // 0x309e78: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x309e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x309e7c: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x309e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x309e80: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x309e80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x309e84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x309e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_309e88:
    // 0x309e88: 0x10400159  beqz        $v0, . + 4 + (0x159 << 2)
    ctx->pc = 0x309E88u;
    {
        const bool branch_taken_0x309e88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x309E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309E88u;
        // 0x309e8c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309e88) {
            ctx->pc = 0x30A3F0u;
            goto label_30a3f0;
        }
    }
    ctx->pc = 0x309E90u;
    // 0x309e90: 0xc0c34e6  jal         func_30D398
    ctx->pc = 0x309E90u;
    SET_GPR_U32(ctx, 31, 0x309E98u);
    ctx->pc = 0x309E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309E90u;
    // 0x309e94: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D398u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x30D398u, 0x309E90u, 0x309E98u)) {
        return;
    }
    ctx->pc = 0x309E98u;
label_309e98:
    // 0x309e98: 0x10000153  b           . + 4 + (0x153 << 2)
    ctx->pc = 0x309E98u;
    {
        const bool branch_taken_0x309e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x309e98) {
            ctx->pc = 0x30A3E8u;
            goto label_30a3e8;
        }
    }
    ctx->pc = 0x309EA0u;
label_309ea0:
    // 0x309ea0: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x309ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x309ea4: 0x27b10004  addiu       $s1, $sp, 0x4
    ctx->pc = 0x309ea4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x309ea8: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x309ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x309eac: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x309eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x309eb0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x309eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x309eb4: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x309EB4u;
    {
        const bool branch_taken_0x309eb4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x309EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309EB4u;
        // 0x309eb8: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309eb4) {
            ctx->pc = 0x309EF8u;
            goto label_309ef8;
        }
    }
    ctx->pc = 0x309EBCu;
    // 0x309ebc: 0x37a5000c  ori         $a1, $sp, 0xC
    ctx->pc = 0x309ebcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)12);
    // 0x309ec0: 0xc092782  jal         func_249E08
    ctx->pc = 0x309EC0u;
    SET_GPR_U32(ctx, 31, 0x309EC8u);
    ctx->pc = 0x309EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309EC0u;
    // 0x309ec4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x309EC0u, 0x309EC8u)) {
        return;
    }
    ctx->pc = 0x309EC8u;
label_309ec8:
    // 0x309ec8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x309EC8u;
    {
        const bool branch_taken_0x309ec8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x309ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309EC8u;
        // 0x309ecc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309ec8) {
            ctx->pc = 0x309F10u;
            goto label_309f10;
        }
    }
    ctx->pc = 0x309ED0u;
    // 0x309ed0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x309ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x309ed4: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x309ED4u;
    {
        const bool branch_taken_0x309ed4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x309ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309ED4u;
        // 0x309ed8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309ed4) {
            ctx->pc = 0x309EF8u;
            goto label_309ef8;
        }
    }
    ctx->pc = 0x309EDCu;
    // 0x309edc: 0xc092782  jal         func_249E08
    ctx->pc = 0x309EDCu;
    SET_GPR_U32(ctx, 31, 0x309EE4u);
    ctx->pc = 0x309EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309EDCu;
    // 0x309ee0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x309EDCu, 0x309EE4u)) {
        return;
    }
    ctx->pc = 0x309EE4u;
label_309ee4:
    // 0x309ee4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x309EE4u;
    {
        const bool branch_taken_0x309ee4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x309ee4) {
            ctx->pc = 0x309EF8u;
            goto label_309ef8;
        }
    }
    ctx->pc = 0x309EECu;
    // 0x309eec: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x309eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x309ef0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x309EF0u;
    {
        const bool branch_taken_0x309ef0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x309EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309EF0u;
        // 0x309ef4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309ef0) {
            ctx->pc = 0x309F10u;
            goto label_309f10;
        }
    }
    ctx->pc = 0x309EF8u;
label_309ef8:
    // 0x309ef8: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x309EF8u;
    {
        const bool branch_taken_0x309ef8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x309EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309EF8u;
        // 0x309efc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309ef8) {
            ctx->pc = 0x309F10u;
            goto label_309f10;
        }
    }
    ctx->pc = 0x309F00u;
    // 0x309f00: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x309f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x309f04: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x309f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x309f08: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x309f08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x309f0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x309f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_309f10:
    // 0x309f10: 0x10400137  beqz        $v0, . + 4 + (0x137 << 2)
    ctx->pc = 0x309F10u;
    {
        const bool branch_taken_0x309f10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x309F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309F10u;
        // 0x309f14: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309f10) {
            ctx->pc = 0x30A3F0u;
            goto label_30a3f0;
        }
    }
    ctx->pc = 0x309F18u;
    // 0x309f18: 0xc0c34fe  jal         func_30D3F8
    ctx->pc = 0x309F18u;
    SET_GPR_U32(ctx, 31, 0x309F20u);
    ctx->pc = 0x309F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309F18u;
    // 0x309f1c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D3F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x30D3F8u, 0x309F18u, 0x309F20u)) {
        return;
    }
    ctx->pc = 0x309F20u;
label_309f20:
    // 0x309f20: 0x10000131  b           . + 4 + (0x131 << 2)
    ctx->pc = 0x309F20u;
    {
        const bool branch_taken_0x309f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x309f20) {
            ctx->pc = 0x30A3E8u;
            goto label_30a3e8;
        }
    }
    ctx->pc = 0x309F28u;
label_309f28:
    // 0x309f28: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x309f28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x309f2c: 0x27b10004  addiu       $s1, $sp, 0x4
    ctx->pc = 0x309f2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x309f30: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x309f30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x309f34: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x309f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x309f38: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x309f38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x309f3c: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x309F3Cu;
    {
        const bool branch_taken_0x309f3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x309F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309F3Cu;
        // 0x309f40: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309f3c) {
            ctx->pc = 0x309F80u;
            goto label_309f80;
        }
    }
    ctx->pc = 0x309F44u;
    // 0x309f44: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x309f44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x309f48: 0xc092782  jal         func_249E08
    ctx->pc = 0x309F48u;
    SET_GPR_U32(ctx, 31, 0x309F50u);
    ctx->pc = 0x309F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309F48u;
    // 0x309f4c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x309F48u, 0x309F50u)) {
        return;
    }
    ctx->pc = 0x309F50u;
label_309f50:
    // 0x309f50: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x309F50u;
    {
        const bool branch_taken_0x309f50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x309F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309F50u;
        // 0x309f54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309f50) {
            ctx->pc = 0x309F98u;
            goto label_309f98;
        }
    }
    ctx->pc = 0x309F58u;
    // 0x309f58: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x309f58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x309f5c: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x309F5Cu;
    {
        const bool branch_taken_0x309f5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x309F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309F5Cu;
        // 0x309f60: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309f5c) {
            ctx->pc = 0x309F80u;
            goto label_309f80;
        }
    }
    ctx->pc = 0x309F64u;
    // 0x309f64: 0xc092782  jal         func_249E08
    ctx->pc = 0x309F64u;
    SET_GPR_U32(ctx, 31, 0x309F6Cu);
    ctx->pc = 0x309F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309F64u;
    // 0x309f68: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x309F64u, 0x309F6Cu)) {
        return;
    }
    ctx->pc = 0x309F6Cu;
label_309f6c:
    // 0x309f6c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x309F6Cu;
    {
        const bool branch_taken_0x309f6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x309f6c) {
            ctx->pc = 0x309F80u;
            goto label_309f80;
        }
    }
    ctx->pc = 0x309F74u;
    // 0x309f74: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x309f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x309f78: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x309F78u;
    {
        const bool branch_taken_0x309f78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x309F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309F78u;
        // 0x309f7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309f78) {
            ctx->pc = 0x309F98u;
            goto label_309f98;
        }
    }
    ctx->pc = 0x309F80u;
label_309f80:
    // 0x309f80: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x309F80u;
    {
        const bool branch_taken_0x309f80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x309F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309F80u;
        // 0x309f84: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309f80) {
            ctx->pc = 0x309F98u;
            goto label_309f98;
        }
    }
    ctx->pc = 0x309F88u;
    // 0x309f88: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x309f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x309f8c: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x309f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x309f90: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x309f90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x309f94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x309f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_309f98:
    // 0x309f98: 0x10400115  beqz        $v0, . + 4 + (0x115 << 2)
    ctx->pc = 0x309F98u;
    {
        const bool branch_taken_0x309f98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x309F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309F98u;
        // 0x309f9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309f98) {
            ctx->pc = 0x30A3F0u;
            goto label_30a3f0;
        }
    }
    ctx->pc = 0x309FA0u;
    // 0x309fa0: 0xc0c3516  jal         func_30D458
    ctx->pc = 0x309FA0u;
    SET_GPR_U32(ctx, 31, 0x309FA8u);
    ctx->pc = 0x309FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309FA0u;
    // 0x309fa4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D458u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x30D458u, 0x309FA0u, 0x309FA8u)) {
        return;
    }
    ctx->pc = 0x309FA8u;
label_309fa8:
    // 0x309fa8: 0x1000010f  b           . + 4 + (0x10F << 2)
    ctx->pc = 0x309FA8u;
    {
        const bool branch_taken_0x309fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x309fa8) {
            ctx->pc = 0x30A3E8u;
            goto label_30a3e8;
        }
    }
    ctx->pc = 0x309FB0u;
label_309fb0:
    // 0x309fb0: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x309fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x309fb4: 0x27b10004  addiu       $s1, $sp, 0x4
    ctx->pc = 0x309fb4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x309fb8: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x309fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x309fbc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x309fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x309fc0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x309fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x309fc4: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x309FC4u;
    {
        const bool branch_taken_0x309fc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x309FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309FC4u;
        // 0x309fc8: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309fc4) {
            ctx->pc = 0x30A008u;
            goto label_30a008;
        }
    }
    ctx->pc = 0x309FCCu;
    // 0x309fcc: 0x27a50014  addiu       $a1, $sp, 0x14
    ctx->pc = 0x309fccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x309fd0: 0xc092782  jal         func_249E08
    ctx->pc = 0x309FD0u;
    SET_GPR_U32(ctx, 31, 0x309FD8u);
    ctx->pc = 0x309FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309FD0u;
    // 0x309fd4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x309FD0u, 0x309FD8u)) {
        return;
    }
    ctx->pc = 0x309FD8u;
label_309fd8:
    // 0x309fd8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x309FD8u;
    {
        const bool branch_taken_0x309fd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x309FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309FD8u;
        // 0x309fdc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309fd8) {
            ctx->pc = 0x30A020u;
            goto label_30a020;
        }
    }
    ctx->pc = 0x309FE0u;
    // 0x309fe0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x309fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x309fe4: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x309FE4u;
    {
        const bool branch_taken_0x309fe4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x309FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309FE4u;
        // 0x309fe8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309fe4) {
            ctx->pc = 0x30A008u;
            goto label_30a008;
        }
    }
    ctx->pc = 0x309FECu;
    // 0x309fec: 0xc092782  jal         func_249E08
    ctx->pc = 0x309FECu;
    SET_GPR_U32(ctx, 31, 0x309FF4u);
    ctx->pc = 0x309FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309FECu;
    // 0x309ff0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x309FECu, 0x309FF4u)) {
        return;
    }
    ctx->pc = 0x309FF4u;
label_309ff4:
    // 0x309ff4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x309FF4u;
    {
        const bool branch_taken_0x309ff4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x309ff4) {
            ctx->pc = 0x30A008u;
            goto label_30a008;
        }
    }
    ctx->pc = 0x309FFCu;
    // 0x309ffc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x309ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30a000: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30A000u;
    {
        const bool branch_taken_0x30a000 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30A004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A000u;
        // 0x30a004: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a000) {
            ctx->pc = 0x30A020u;
            goto label_30a020;
        }
    }
    ctx->pc = 0x30A008u;
label_30a008:
    // 0x30a008: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30A008u;
    {
        const bool branch_taken_0x30a008 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A008u;
        // 0x30a00c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a008) {
            ctx->pc = 0x30A020u;
            goto label_30a020;
        }
    }
    ctx->pc = 0x30A010u;
    // 0x30a010: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x30a010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30a014: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x30a014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x30a018: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x30a018u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x30a01c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30a01cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30a020:
    // 0x30a020: 0x104000f3  beqz        $v0, . + 4 + (0xF3 << 2)
    ctx->pc = 0x30A020u;
    {
        const bool branch_taken_0x30a020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A020u;
        // 0x30a024: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a020) {
            ctx->pc = 0x30A3F0u;
            goto label_30a3f0;
        }
    }
    ctx->pc = 0x30A028u;
    // 0x30a028: 0xc0c352e  jal         func_30D4B8
    ctx->pc = 0x30A028u;
    SET_GPR_U32(ctx, 31, 0x30A030u);
    ctx->pc = 0x30A02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A028u;
    // 0x30a02c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D4B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x30D4B8u, 0x30A028u, 0x30A030u)) {
        return;
    }
    ctx->pc = 0x30A030u;
label_30a030:
    // 0x30a030: 0x100000ed  b           . + 4 + (0xED << 2)
    ctx->pc = 0x30A030u;
    {
        const bool branch_taken_0x30a030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30a030) {
            ctx->pc = 0x30A3E8u;
            goto label_30a3e8;
        }
    }
    ctx->pc = 0x30A038u;
label_30a038:
    // 0x30a038: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x30a038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x30a03c: 0x27b10004  addiu       $s1, $sp, 0x4
    ctx->pc = 0x30a03cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x30a040: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x30a040u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x30a044: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x30a044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x30a048: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30a048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30a04c: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x30A04Cu;
    {
        const bool branch_taken_0x30a04c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A04Cu;
        // 0x30a050: 0xafa20018  sw          $v0, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a04c) {
            ctx->pc = 0x30A090u;
            goto label_30a090;
        }
    }
    ctx->pc = 0x30A054u;
    // 0x30a054: 0x27a50018  addiu       $a1, $sp, 0x18
    ctx->pc = 0x30a054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x30a058: 0xc092782  jal         func_249E08
    ctx->pc = 0x30A058u;
    SET_GPR_U32(ctx, 31, 0x30A060u);
    ctx->pc = 0x30A05Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A058u;
    // 0x30a05c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x30A058u, 0x30A060u)) {
        return;
    }
    ctx->pc = 0x30A060u;
label_30a060:
    // 0x30a060: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x30A060u;
    {
        const bool branch_taken_0x30a060 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A060u;
        // 0x30a064: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a060) {
            ctx->pc = 0x30A0A8u;
            goto label_30a0a8;
        }
    }
    ctx->pc = 0x30A068u;
    // 0x30a068: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30a068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30a06c: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x30A06Cu;
    {
        const bool branch_taken_0x30a06c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A06Cu;
        // 0x30a070: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a06c) {
            ctx->pc = 0x30A090u;
            goto label_30a090;
        }
    }
    ctx->pc = 0x30A074u;
    // 0x30a074: 0xc092782  jal         func_249E08
    ctx->pc = 0x30A074u;
    SET_GPR_U32(ctx, 31, 0x30A07Cu);
    ctx->pc = 0x30A078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A074u;
    // 0x30a078: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x30A074u, 0x30A07Cu)) {
        return;
    }
    ctx->pc = 0x30A07Cu;
label_30a07c:
    // 0x30a07c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30A07Cu;
    {
        const bool branch_taken_0x30a07c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30a07c) {
            ctx->pc = 0x30A090u;
            goto label_30a090;
        }
    }
    ctx->pc = 0x30A084u;
    // 0x30a084: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x30a084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30a088: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30A088u;
    {
        const bool branch_taken_0x30a088 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30A08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A088u;
        // 0x30a08c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a088) {
            ctx->pc = 0x30A0A8u;
            goto label_30a0a8;
        }
    }
    ctx->pc = 0x30A090u;
label_30a090:
    // 0x30a090: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30A090u;
    {
        const bool branch_taken_0x30a090 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A090u;
        // 0x30a094: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a090) {
            ctx->pc = 0x30A0A8u;
            goto label_30a0a8;
        }
    }
    ctx->pc = 0x30A098u;
    // 0x30a098: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x30a098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30a09c: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x30a09cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x30a0a0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x30a0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x30a0a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30a0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30a0a8:
    // 0x30a0a8: 0x104000d1  beqz        $v0, . + 4 + (0xD1 << 2)
    ctx->pc = 0x30A0A8u;
    {
        const bool branch_taken_0x30a0a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A0A8u;
        // 0x30a0ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a0a8) {
            ctx->pc = 0x30A3F0u;
            goto label_30a3f0;
        }
    }
    ctx->pc = 0x30A0B0u;
    // 0x30a0b0: 0xc0c3566  jal         func_30D598
    ctx->pc = 0x30A0B0u;
    SET_GPR_U32(ctx, 31, 0x30A0B8u);
    ctx->pc = 0x30A0B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A0B0u;
    // 0x30a0b4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D598u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x30D598u, 0x30A0B0u, 0x30A0B8u)) {
        return;
    }
    ctx->pc = 0x30A0B8u;
label_30a0b8:
    // 0x30a0b8: 0x100000cb  b           . + 4 + (0xCB << 2)
    ctx->pc = 0x30A0B8u;
    {
        const bool branch_taken_0x30a0b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30a0b8) {
            ctx->pc = 0x30A3E8u;
            goto label_30a3e8;
        }
    }
    ctx->pc = 0x30A0C0u;
label_30a0c0:
    // 0x30a0c0: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x30a0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x30a0c4: 0x27b10004  addiu       $s1, $sp, 0x4
    ctx->pc = 0x30a0c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x30a0c8: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x30a0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x30a0cc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x30a0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x30a0d0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30a0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30a0d4: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x30A0D4u;
    {
        const bool branch_taken_0x30a0d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A0D4u;
        // 0x30a0d8: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a0d4) {
            ctx->pc = 0x30A118u;
            goto label_30a118;
        }
    }
    ctx->pc = 0x30A0DCu;
    // 0x30a0dc: 0x27a5001c  addiu       $a1, $sp, 0x1C
    ctx->pc = 0x30a0dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x30a0e0: 0xc092782  jal         func_249E08
    ctx->pc = 0x30A0E0u;
    SET_GPR_U32(ctx, 31, 0x30A0E8u);
    ctx->pc = 0x30A0E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A0E0u;
    // 0x30a0e4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x30A0E0u, 0x30A0E8u)) {
        return;
    }
    ctx->pc = 0x30A0E8u;
label_30a0e8:
    // 0x30a0e8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x30A0E8u;
    {
        const bool branch_taken_0x30a0e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A0E8u;
        // 0x30a0ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a0e8) {
            ctx->pc = 0x30A130u;
            goto label_30a130;
        }
    }
    ctx->pc = 0x30A0F0u;
    // 0x30a0f0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30a0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30a0f4: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x30A0F4u;
    {
        const bool branch_taken_0x30a0f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A0F4u;
        // 0x30a0f8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a0f4) {
            ctx->pc = 0x30A118u;
            goto label_30a118;
        }
    }
    ctx->pc = 0x30A0FCu;
    // 0x30a0fc: 0xc092782  jal         func_249E08
    ctx->pc = 0x30A0FCu;
    SET_GPR_U32(ctx, 31, 0x30A104u);
    ctx->pc = 0x30A100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A0FCu;
    // 0x30a100: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x30A0FCu, 0x30A104u)) {
        return;
    }
    ctx->pc = 0x30A104u;
label_30a104:
    // 0x30a104: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30A104u;
    {
        const bool branch_taken_0x30a104 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30a104) {
            ctx->pc = 0x30A118u;
            goto label_30a118;
        }
    }
    ctx->pc = 0x30A10Cu;
    // 0x30a10c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x30a10cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30a110: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30A110u;
    {
        const bool branch_taken_0x30a110 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30A114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A110u;
        // 0x30a114: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a110) {
            ctx->pc = 0x30A130u;
            goto label_30a130;
        }
    }
    ctx->pc = 0x30A118u;
label_30a118:
    // 0x30a118: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30A118u;
    {
        const bool branch_taken_0x30a118 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A118u;
        // 0x30a11c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a118) {
            ctx->pc = 0x30A130u;
            goto label_30a130;
        }
    }
    ctx->pc = 0x30A120u;
    // 0x30a120: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x30a120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30a124: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x30a124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x30a128: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x30a128u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x30a12c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30a12cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30a130:
    // 0x30a130: 0x104000af  beqz        $v0, . + 4 + (0xAF << 2)
    ctx->pc = 0x30A130u;
    {
        const bool branch_taken_0x30a130 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A130u;
        // 0x30a134: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a130) {
            ctx->pc = 0x30A3F0u;
            goto label_30a3f0;
        }
    }
    ctx->pc = 0x30A138u;
    // 0x30a138: 0xc0c29c8  jal         func_30A720
    ctx->pc = 0x30A138u;
    SET_GPR_U32(ctx, 31, 0x30A140u);
    ctx->pc = 0x30A13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A138u;
    // 0x30a13c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A720u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x30A720u, 0x30A138u, 0x30A140u)) {
        return;
    }
    ctx->pc = 0x30A140u;
label_30a140:
    // 0x30a140: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x30A140u;
    {
        const bool branch_taken_0x30a140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30a140) {
            ctx->pc = 0x30A3E8u;
            goto label_30a3e8;
        }
    }
    ctx->pc = 0x30A148u;
label_30a148:
    // 0x30a148: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x30a148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x30a14c: 0x27b10004  addiu       $s1, $sp, 0x4
    ctx->pc = 0x30a14cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x30a150: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x30a150u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x30a154: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x30a154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x30a158: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30a158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30a15c: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x30A15Cu;
    {
        const bool branch_taken_0x30a15c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A15Cu;
        // 0x30a160: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a15c) {
            ctx->pc = 0x30A1A0u;
            goto label_30a1a0;
        }
    }
    ctx->pc = 0x30A164u;
    // 0x30a164: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x30a164u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30a168: 0xc092782  jal         func_249E08
    ctx->pc = 0x30A168u;
    SET_GPR_U32(ctx, 31, 0x30A170u);
    ctx->pc = 0x30A16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A168u;
    // 0x30a16c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x30A168u, 0x30A170u)) {
        return;
    }
    ctx->pc = 0x30A170u;
label_30a170:
    // 0x30a170: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x30A170u;
    {
        const bool branch_taken_0x30a170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A170u;
        // 0x30a174: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a170) {
            ctx->pc = 0x30A1B8u;
            goto label_30a1b8;
        }
    }
    ctx->pc = 0x30A178u;
    // 0x30a178: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30a178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30a17c: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x30A17Cu;
    {
        const bool branch_taken_0x30a17c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A17Cu;
        // 0x30a180: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a17c) {
            ctx->pc = 0x30A1A0u;
            goto label_30a1a0;
        }
    }
    ctx->pc = 0x30A184u;
    // 0x30a184: 0xc092782  jal         func_249E08
    ctx->pc = 0x30A184u;
    SET_GPR_U32(ctx, 31, 0x30A18Cu);
    ctx->pc = 0x30A188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A184u;
    // 0x30a188: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x30A184u, 0x30A18Cu)) {
        return;
    }
    ctx->pc = 0x30A18Cu;
label_30a18c:
    // 0x30a18c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30A18Cu;
    {
        const bool branch_taken_0x30a18c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30a18c) {
            ctx->pc = 0x30A1A0u;
            goto label_30a1a0;
        }
    }
    ctx->pc = 0x30A194u;
    // 0x30a194: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x30a194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30a198: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30A198u;
    {
        const bool branch_taken_0x30a198 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30A19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A198u;
        // 0x30a19c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a198) {
            ctx->pc = 0x30A1B8u;
            goto label_30a1b8;
        }
    }
    ctx->pc = 0x30A1A0u;
label_30a1a0:
    // 0x30a1a0: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30A1A0u;
    {
        const bool branch_taken_0x30a1a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A1A0u;
        // 0x30a1a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a1a0) {
            ctx->pc = 0x30A1B8u;
            goto label_30a1b8;
        }
    }
    ctx->pc = 0x30A1A8u;
    // 0x30a1a8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x30a1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30a1ac: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x30a1acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x30a1b0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x30a1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x30a1b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30a1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30a1b8:
    // 0x30a1b8: 0x1040008d  beqz        $v0, . + 4 + (0x8D << 2)
    ctx->pc = 0x30A1B8u;
    {
        const bool branch_taken_0x30a1b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A1B8u;
        // 0x30a1bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a1b8) {
            ctx->pc = 0x30A3F0u;
            goto label_30a3f0;
        }
    }
    ctx->pc = 0x30A1C0u;
    // 0x30a1c0: 0xc0c35a4  jal         func_30D690
    ctx->pc = 0x30A1C0u;
    SET_GPR_U32(ctx, 31, 0x30A1C8u);
    ctx->pc = 0x30A1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A1C0u;
    // 0x30a1c4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x30D690u, 0x30A1C0u, 0x30A1C8u)) {
        return;
    }
    ctx->pc = 0x30A1C8u;
label_30a1c8:
    // 0x30a1c8: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x30A1C8u;
    {
        const bool branch_taken_0x30a1c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30a1c8) {
            ctx->pc = 0x30A3E8u;
            goto label_30a3e8;
        }
    }
    ctx->pc = 0x30A1D0u;
label_30a1d0:
    // 0x30a1d0: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x30a1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x30a1d4: 0x27b10004  addiu       $s1, $sp, 0x4
    ctx->pc = 0x30a1d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x30a1d8: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x30a1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x30a1dc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x30a1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x30a1e0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30a1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30a1e4: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x30A1E4u;
    {
        const bool branch_taken_0x30a1e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A1E4u;
        // 0x30a1e8: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a1e4) {
            ctx->pc = 0x30A228u;
            goto label_30a228;
        }
    }
    ctx->pc = 0x30A1ECu;
    // 0x30a1ec: 0x27a50024  addiu       $a1, $sp, 0x24
    ctx->pc = 0x30a1ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x30a1f0: 0xc092782  jal         func_249E08
    ctx->pc = 0x30A1F0u;
    SET_GPR_U32(ctx, 31, 0x30A1F8u);
    ctx->pc = 0x30A1F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A1F0u;
    // 0x30a1f4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x30A1F0u, 0x30A1F8u)) {
        return;
    }
    ctx->pc = 0x30A1F8u;
label_30a1f8:
    // 0x30a1f8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x30A1F8u;
    {
        const bool branch_taken_0x30a1f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A1F8u;
        // 0x30a1fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a1f8) {
            ctx->pc = 0x30A240u;
            goto label_30a240;
        }
    }
    ctx->pc = 0x30A200u;
    // 0x30a200: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30a200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30a204: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x30A204u;
    {
        const bool branch_taken_0x30a204 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A204u;
        // 0x30a208: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a204) {
            ctx->pc = 0x30A228u;
            goto label_30a228;
        }
    }
    ctx->pc = 0x30A20Cu;
    // 0x30a20c: 0xc092782  jal         func_249E08
    ctx->pc = 0x30A20Cu;
    SET_GPR_U32(ctx, 31, 0x30A214u);
    ctx->pc = 0x30A210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A20Cu;
    // 0x30a210: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x30A20Cu, 0x30A214u)) {
        return;
    }
    ctx->pc = 0x30A214u;
label_30a214:
    // 0x30a214: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30A214u;
    {
        const bool branch_taken_0x30a214 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30a214) {
            ctx->pc = 0x30A228u;
            goto label_30a228;
        }
    }
    ctx->pc = 0x30A21Cu;
    // 0x30a21c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x30a21cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30a220: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30A220u;
    {
        const bool branch_taken_0x30a220 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30A224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A220u;
        // 0x30a224: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a220) {
            ctx->pc = 0x30A240u;
            goto label_30a240;
        }
    }
    ctx->pc = 0x30A228u;
label_30a228:
    // 0x30a228: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30A228u;
    {
        const bool branch_taken_0x30a228 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A228u;
        // 0x30a22c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a228) {
            ctx->pc = 0x30A240u;
            goto label_30a240;
        }
    }
    ctx->pc = 0x30A230u;
    // 0x30a230: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x30a230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30a234: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x30a234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x30a238: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x30a238u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x30a23c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30a23cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30a240:
    // 0x30a240: 0x1040006b  beqz        $v0, . + 4 + (0x6B << 2)
    ctx->pc = 0x30A240u;
    {
        const bool branch_taken_0x30a240 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A240u;
        // 0x30a244: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a240) {
            ctx->pc = 0x30A3F0u;
            goto label_30a3f0;
        }
    }
    ctx->pc = 0x30A248u;
    // 0x30a248: 0xc0c35c6  jal         func_30D718
    ctx->pc = 0x30A248u;
    SET_GPR_U32(ctx, 31, 0x30A250u);
    ctx->pc = 0x30A24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A248u;
    // 0x30a24c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D718u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x30D718u, 0x30A248u, 0x30A250u)) {
        return;
    }
    ctx->pc = 0x30A250u;
label_30a250:
    // 0x30a250: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x30A250u;
    {
        const bool branch_taken_0x30a250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30a250) {
            ctx->pc = 0x30A3E8u;
            goto label_30a3e8;
        }
    }
    ctx->pc = 0x30A258u;
label_30a258:
    // 0x30a258: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x30a258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x30a25c: 0x27b10004  addiu       $s1, $sp, 0x4
    ctx->pc = 0x30a25cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x30a260: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x30a260u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x30a264: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x30a264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x30a268: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30a268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30a26c: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x30A26Cu;
    {
        const bool branch_taken_0x30a26c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A26Cu;
        // 0x30a270: 0xafa20028  sw          $v0, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a26c) {
            ctx->pc = 0x30A2B0u;
            goto label_30a2b0;
        }
    }
    ctx->pc = 0x30A274u;
    // 0x30a274: 0x27a50028  addiu       $a1, $sp, 0x28
    ctx->pc = 0x30a274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x30a278: 0xc092782  jal         func_249E08
    ctx->pc = 0x30A278u;
    SET_GPR_U32(ctx, 31, 0x30A280u);
    ctx->pc = 0x30A27Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A278u;
    // 0x30a27c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x30A278u, 0x30A280u)) {
        return;
    }
    ctx->pc = 0x30A280u;
label_30a280:
    // 0x30a280: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x30A280u;
    {
        const bool branch_taken_0x30a280 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A280u;
        // 0x30a284: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a280) {
            ctx->pc = 0x30A2C8u;
            goto label_30a2c8;
        }
    }
    ctx->pc = 0x30A288u;
    // 0x30a288: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30a288u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30a28c: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x30A28Cu;
    {
        const bool branch_taken_0x30a28c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A28Cu;
        // 0x30a290: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a28c) {
            ctx->pc = 0x30A2B0u;
            goto label_30a2b0;
        }
    }
    ctx->pc = 0x30A294u;
    // 0x30a294: 0xc092782  jal         func_249E08
    ctx->pc = 0x30A294u;
    SET_GPR_U32(ctx, 31, 0x30A29Cu);
    ctx->pc = 0x30A298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A294u;
    // 0x30a298: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x30A294u, 0x30A29Cu)) {
        return;
    }
    ctx->pc = 0x30A29Cu;
label_30a29c:
    // 0x30a29c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30A29Cu;
    {
        const bool branch_taken_0x30a29c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30a29c) {
            ctx->pc = 0x30A2B0u;
            goto label_30a2b0;
        }
    }
    ctx->pc = 0x30A2A4u;
    // 0x30a2a4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x30a2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30a2a8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30A2A8u;
    {
        const bool branch_taken_0x30a2a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30A2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A2A8u;
        // 0x30a2ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a2a8) {
            ctx->pc = 0x30A2C8u;
            goto label_30a2c8;
        }
    }
    ctx->pc = 0x30A2B0u;
label_30a2b0:
    // 0x30a2b0: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30A2B0u;
    {
        const bool branch_taken_0x30a2b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A2B0u;
        // 0x30a2b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a2b0) {
            ctx->pc = 0x30A2C8u;
            goto label_30a2c8;
        }
    }
    ctx->pc = 0x30A2B8u;
    // 0x30a2b8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x30a2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30a2bc: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x30a2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x30a2c0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x30a2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x30a2c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30a2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30a2c8:
    // 0x30a2c8: 0x10400049  beqz        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x30A2C8u;
    {
        const bool branch_taken_0x30a2c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A2C8u;
        // 0x30a2cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a2c8) {
            ctx->pc = 0x30A3F0u;
            goto label_30a3f0;
        }
    }
    ctx->pc = 0x30A2D0u;
    // 0x30a2d0: 0xc0c35e8  jal         func_30D7A0
    ctx->pc = 0x30A2D0u;
    SET_GPR_U32(ctx, 31, 0x30A2D8u);
    ctx->pc = 0x30A2D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A2D0u;
    // 0x30a2d4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D7A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x30D7A0u, 0x30A2D0u, 0x30A2D8u)) {
        return;
    }
    ctx->pc = 0x30A2D8u;
label_30a2d8:
    // 0x30a2d8: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x30A2D8u;
    {
        const bool branch_taken_0x30a2d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30a2d8) {
            ctx->pc = 0x30A3E8u;
            goto label_30a3e8;
        }
    }
    ctx->pc = 0x30A2E0u;
label_30a2e0:
    // 0x30a2e0: 0x2403001d  addiu       $v1, $zero, 0x1D
    ctx->pc = 0x30a2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x30a2e4: 0x27b10004  addiu       $s1, $sp, 0x4
    ctx->pc = 0x30a2e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x30a2e8: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x30a2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x30a2ec: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x30a2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x30a2f0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30a2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30a2f4: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x30A2F4u;
    {
        const bool branch_taken_0x30a2f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A2F4u;
        // 0x30a2f8: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a2f4) {
            ctx->pc = 0x30A338u;
            goto label_30a338;
        }
    }
    ctx->pc = 0x30A2FCu;
    // 0x30a2fc: 0x27a5002c  addiu       $a1, $sp, 0x2C
    ctx->pc = 0x30a2fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x30a300: 0xc092782  jal         func_249E08
    ctx->pc = 0x30A300u;
    SET_GPR_U32(ctx, 31, 0x30A308u);
    ctx->pc = 0x30A304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A300u;
    // 0x30a304: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x30A300u, 0x30A308u)) {
        return;
    }
    ctx->pc = 0x30A308u;
label_30a308:
    // 0x30a308: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x30A308u;
    {
        const bool branch_taken_0x30a308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A308u;
        // 0x30a30c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a308) {
            ctx->pc = 0x30A350u;
            goto label_30a350;
        }
    }
    ctx->pc = 0x30A310u;
    // 0x30a310: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30a310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30a314: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x30A314u;
    {
        const bool branch_taken_0x30a314 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A314u;
        // 0x30a318: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a314) {
            ctx->pc = 0x30A338u;
            goto label_30a338;
        }
    }
    ctx->pc = 0x30A31Cu;
    // 0x30a31c: 0xc092782  jal         func_249E08
    ctx->pc = 0x30A31Cu;
    SET_GPR_U32(ctx, 31, 0x30A324u);
    ctx->pc = 0x30A320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A31Cu;
    // 0x30a320: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x30A31Cu, 0x30A324u)) {
        return;
    }
    ctx->pc = 0x30A324u;
label_30a324:
    // 0x30a324: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30A324u;
    {
        const bool branch_taken_0x30a324 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30a324) {
            ctx->pc = 0x30A338u;
            goto label_30a338;
        }
    }
    ctx->pc = 0x30A32Cu;
    // 0x30a32c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x30a32cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30a330: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30A330u;
    {
        const bool branch_taken_0x30a330 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30A334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A330u;
        // 0x30a334: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a330) {
            ctx->pc = 0x30A350u;
            goto label_30a350;
        }
    }
    ctx->pc = 0x30A338u;
label_30a338:
    // 0x30a338: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30A338u;
    {
        const bool branch_taken_0x30a338 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A338u;
        // 0x30a33c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a338) {
            ctx->pc = 0x30A350u;
            goto label_30a350;
        }
    }
    ctx->pc = 0x30A340u;
    // 0x30a340: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x30a340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30a344: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x30a344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x30a348: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x30a348u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x30a34c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30a34cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30a350:
    // 0x30a350: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x30A350u;
    {
        const bool branch_taken_0x30a350 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A350u;
        // 0x30a354: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a350) {
            ctx->pc = 0x30A3F0u;
            goto label_30a3f0;
        }
    }
    ctx->pc = 0x30A358u;
    // 0x30a358: 0xc0c2c7c  jal         func_30B1F0
    ctx->pc = 0x30A358u;
    SET_GPR_U32(ctx, 31, 0x30A360u);
    ctx->pc = 0x30A35Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A358u;
    // 0x30a35c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30B1F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x30B1F0u, 0x30A358u, 0x30A360u)) {
        return;
    }
    ctx->pc = 0x30A360u;
label_30a360:
    // 0x30a360: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x30A360u;
    {
        const bool branch_taken_0x30a360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30a360) {
            ctx->pc = 0x30A3E8u;
            goto label_30a3e8;
        }
    }
    ctx->pc = 0x30A368u;
label_30a368:
    // 0x30a368: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x30a368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x30a36c: 0x27b10004  addiu       $s1, $sp, 0x4
    ctx->pc = 0x30a36cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x30a370: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x30a370u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x30a374: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x30a374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x30a378: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30a378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30a37c: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x30A37Cu;
    {
        const bool branch_taken_0x30a37c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A37Cu;
        // 0x30a380: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a37c) {
            ctx->pc = 0x30A3C0u;
            goto label_30a3c0;
        }
    }
    ctx->pc = 0x30A384u;
    // 0x30a384: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x30a384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x30a388: 0xc092782  jal         func_249E08
    ctx->pc = 0x30A388u;
    SET_GPR_U32(ctx, 31, 0x30A390u);
    ctx->pc = 0x30A38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A388u;
    // 0x30a38c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x30A388u, 0x30A390u)) {
        return;
    }
    ctx->pc = 0x30A390u;
label_30a390:
    // 0x30a390: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x30A390u;
    {
        const bool branch_taken_0x30a390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A390u;
        // 0x30a394: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a390) {
            ctx->pc = 0x30A3D8u;
            goto label_30a3d8;
        }
    }
    ctx->pc = 0x30A398u;
    // 0x30a398: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30a398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30a39c: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x30A39Cu;
    {
        const bool branch_taken_0x30a39c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A39Cu;
        // 0x30a3a0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a39c) {
            ctx->pc = 0x30A3C0u;
            goto label_30a3c0;
        }
    }
    ctx->pc = 0x30A3A4u;
    // 0x30a3a4: 0xc092782  jal         func_249E08
    ctx->pc = 0x30A3A4u;
    SET_GPR_U32(ctx, 31, 0x30A3ACu);
    ctx->pc = 0x30A3A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A3A4u;
    // 0x30a3a8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x30A3A4u, 0x30A3ACu)) {
        return;
    }
    ctx->pc = 0x30A3ACu;
label_30a3ac:
    // 0x30a3ac: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30A3ACu;
    {
        const bool branch_taken_0x30a3ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30a3ac) {
            ctx->pc = 0x30A3C0u;
            goto label_30a3c0;
        }
    }
    ctx->pc = 0x30A3B4u;
    // 0x30a3b4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x30a3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30a3b8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30A3B8u;
    {
        const bool branch_taken_0x30a3b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30A3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A3B8u;
        // 0x30a3bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a3b8) {
            ctx->pc = 0x30A3D8u;
            goto label_30a3d8;
        }
    }
    ctx->pc = 0x30A3C0u;
label_30a3c0:
    // 0x30a3c0: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30A3C0u;
    {
        const bool branch_taken_0x30a3c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A3C0u;
        // 0x30a3c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a3c0) {
            ctx->pc = 0x30A3D8u;
            goto label_30a3d8;
        }
    }
    ctx->pc = 0x30A3C8u;
    // 0x30a3c8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x30a3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30a3cc: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x30a3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x30a3d0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x30a3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x30a3d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30a3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30a3d8:
    // 0x30a3d8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30A3D8u;
    {
        const bool branch_taken_0x30a3d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A3D8u;
        // 0x30a3dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a3d8) {
            ctx->pc = 0x30A3F0u;
            goto label_30a3f0;
        }
    }
    ctx->pc = 0x30A3E0u;
    // 0x30a3e0: 0xc0c3622  jal         func_30D888
    ctx->pc = 0x30A3E0u;
    SET_GPR_U32(ctx, 31, 0x30A3E8u);
    ctx->pc = 0x30A3E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A3E0u;
    // 0x30a3e4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D888u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x30D888u, 0x30A3E0u, 0x30A3E8u)) {
        return;
    }
    ctx->pc = 0x30A3E8u;
label_30a3e8:
    // 0x30a3e8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30A3E8u;
    {
        const bool branch_taken_0x30a3e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30a3e8) {
            ctx->pc = 0x30A3F8u;
            goto label_30a3f8;
        }
    }
    ctx->pc = 0x30A3F0u;
label_30a3f0:
    // 0x30a3f0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30A3F0u;
    {
        const bool branch_taken_0x30a3f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A3F0u;
        // 0x30a3f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a3f0) {
            ctx->pc = 0x30A410u;
            goto label_30a410;
        }
    }
    ctx->pc = 0x30A3F8u;
label_30a3f8:
    // 0x30a3f8: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30A3F8u;
    {
        const bool branch_taken_0x30a3f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A3F8u;
        // 0x30a3fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a3f8) {
            ctx->pc = 0x30A410u;
            goto label_30a410;
        }
    }
    ctx->pc = 0x30A400u;
    // 0x30a400: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x30a400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30a404: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x30a404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x30a408: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x30a408u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x30a40c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30a40cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30a410:
    // 0x30a410: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x30a410u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x30a414: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x30a414u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x30a418: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x30a418u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x30a41c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x30a41cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30a420: 0x3e00008  jr          $ra
    ctx->pc = 0x30A420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30A424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A420u;
        // 0x30a424: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30A420u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30A428u;
}

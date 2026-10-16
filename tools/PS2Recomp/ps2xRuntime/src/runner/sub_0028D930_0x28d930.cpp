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

// Function: sub_0028D930
// Address: 0x28d930 - 0x28dba0
void sub_0028D930_0x28d930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028D930_0x28d930");
#endif

    switch (ctx->pc) {
        case 0x28d96cu: goto label_28d96c;
        case 0x28d97cu: goto label_28d97c;
        case 0x28d99cu: goto label_28d99c;
        case 0x28d9e4u: goto label_28d9e4;
        case 0x28da04u: goto label_28da04;
        case 0x28da10u: goto label_28da10;
        case 0x28da2cu: goto label_28da2c;
        case 0x28da60u: goto label_28da60;
        case 0x28da84u: goto label_28da84;
        case 0x28daa4u: goto label_28daa4;
        case 0x28dab0u: goto label_28dab0;
        case 0x28daccu: goto label_28dacc;
        case 0x28dafcu: goto label_28dafc;
        case 0x28db1cu: goto label_28db1c;
        case 0x28db28u: goto label_28db28;
        case 0x28db44u: goto label_28db44;
        default: break;
    }

    ctx->pc = 0x28d930u;

    // 0x28d930: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x28d930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x28d934: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x28d934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x28d938: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x28d938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x28d93c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x28d93cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d940: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x28d940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x28d944: 0xafa40014  sw          $a0, 0x14($sp)
    ctx->pc = 0x28d944u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 4));
    // 0x28d948: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x28d948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x28d94c: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x28d94cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x28d950: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x28d950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x28d954: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x28d954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x28d958: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x28d958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x28d95c: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x28d95cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x28d960: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x28d960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x28d964: 0xc09294c  jal         func_24A530
    ctx->pc = 0x28D964u;
    SET_GPR_U32(ctx, 31, 0x28D96Cu);
    ctx->pc = 0x28D968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D964u;
    // 0x28d968: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A530u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A530u, 0x28D964u, 0x28D96Cu)) {
        return;
    }
    ctx->pc = 0x28D96Cu;
label_28d96c:
    // 0x28d96c: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x28d96cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d970: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x28d970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x28d974: 0xc09292a  jal         func_24A4A8
    ctx->pc = 0x28D974u;
    SET_GPR_U32(ctx, 31, 0x28D97Cu);
    ctx->pc = 0x28D978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D974u;
    // 0x28d978: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A4A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A4A8u, 0x28D974u, 0x28D97Cu)) {
        return;
    }
    ctx->pc = 0x28D97Cu;
label_28d97c:
    // 0x28d97c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x28d97cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28d980: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x28d980u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d984: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x28d984u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x28d988: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28d988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d98c: 0xafbe0004  sw          $fp, 0x4($sp)
    ctx->pc = 0x28d98cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 30));
    // 0x28d990: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x28d990u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d994: 0xc0935aa  jal         func_24D6A8
    ctx->pc = 0x28D994u;
    SET_GPR_U32(ctx, 31, 0x28D99Cu);
    ctx->pc = 0x28D998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D994u;
    // 0x28d998: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D6A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D6A8u, 0x28D994u, 0x28D99Cu)) {
        return;
    }
    ctx->pc = 0x28D99Cu;
label_28d99c:
    // 0x28d99c: 0x10400074  beqz        $v0, . + 4 + (0x74 << 2)
    ctx->pc = 0x28D99Cu;
    {
        const bool branch_taken_0x28d99c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D99Cu;
        // 0x28d9a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d99c) {
            ctx->pc = 0x28DB70u;
            goto label_28db70;
        }
    }
    ctx->pc = 0x28D9A4u;
    // 0x28d9a4: 0x1bc00071  blez        $fp, . + 4 + (0x71 << 2)
    ctx->pc = 0x28D9A4u;
    {
        const bool branch_taken_0x28d9a4 = (GPR_S64(ctx, 30) <= 0);
        ctx->pc = 0x28D9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D9A4u;
        // 0x28d9a8: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d9a4) {
            ctx->pc = 0x28DB6Cu;
            goto label_28db6c;
        }
    }
    ctx->pc = 0x28D9ACu;
    // 0x28d9ac: 0x26710008  addiu       $s1, $s3, 0x8
    ctx->pc = 0x28d9acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x28d9b0: 0x1bc00003  blez        $fp, . + 4 + (0x3 << 2)
    ctx->pc = 0x28D9B0u;
    {
        const bool branch_taken_0x28d9b0 = (GPR_S64(ctx, 30) <= 0);
        ctx->pc = 0x28D9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D9B0u;
        // 0x28d9b4: 0x33c20001  andi        $v0, $fp, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d9b0) {
            ctx->pc = 0x28D9C0u;
            goto label_28d9c0;
        }
    }
    ctx->pc = 0x28D9B8u;
    // 0x28d9b8: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x28D9B8u;
    {
        const bool branch_taken_0x28d9b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D9B8u;
        // 0x28d9bc: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d9b8) {
            ctx->pc = 0x28DA4Cu;
            goto label_28da4c;
        }
    }
    ctx->pc = 0x28D9C0u;
label_28d9c0:
    // 0x28d9c0: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x28d9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x28d9c4: 0x8e22fffc  lw          $v0, -0x4($s1)
    ctx->pc = 0x28d9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967292)));
    // 0x28d9c8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x28D9C8u;
    {
        const bool branch_taken_0x28d9c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D9C8u;
        // 0x28d9cc: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d9c8) {
            ctx->pc = 0x28D9D4u;
            goto label_28d9d4;
        }
    }
    ctx->pc = 0x28D9D0u;
    // 0x28d9d0: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x28d9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_28d9d4:
    // 0x28d9d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28d9d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d9d8: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x28d9d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x28d9dc: 0xc0935aa  jal         func_24D6A8
    ctx->pc = 0x28D9DCu;
    SET_GPR_U32(ctx, 31, 0x28D9E4u);
    ctx->pc = 0x28D9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D9DCu;
    // 0x28d9e0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D6A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D6A8u, 0x28D9DCu, 0x28D9E4u)) {
        return;
    }
    ctx->pc = 0x28D9E4u;
label_28d9e4:
    // 0x28d9e4: 0x10400062  beqz        $v0, . + 4 + (0x62 << 2)
    ctx->pc = 0x28D9E4u;
    {
        const bool branch_taken_0x28d9e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D9E4u;
        // 0x28d9e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d9e4) {
            ctx->pc = 0x28DB70u;
            goto label_28db70;
        }
    }
    ctx->pc = 0x28D9ECu;
    // 0x28d9ec: 0x8e22fffc  lw          $v0, -0x4($s1)
    ctx->pc = 0x28d9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967292)));
    // 0x28d9f0: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x28D9F0u;
    {
        const bool branch_taken_0x28d9f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D9F0u;
        // 0x28d9f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d9f0) {
            ctx->pc = 0x28DA34u;
            goto label_28da34;
        }
    }
    ctx->pc = 0x28D9F8u;
    // 0x28d9f8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x28d9f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d9fc: 0xc092782  jal         func_249E08
    ctx->pc = 0x28D9FCu;
    SET_GPR_U32(ctx, 31, 0x28DA04u);
    ctx->pc = 0x28DA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D9FCu;
    // 0x28da00: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x28D9FCu, 0x28DA04u)) {
        return;
    }
    ctx->pc = 0x28DA04u;
label_28da04:
    // 0x28da04: 0x8e24fffc  lw          $a0, -0x4($s1)
    ctx->pc = 0x28da04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967292)));
    // 0x28da08: 0xc0a20fa  jal         func_2883E8
    ctx->pc = 0x28DA08u;
    SET_GPR_U32(ctx, 31, 0x28DA10u);
    ctx->pc = 0x28DA0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DA08u;
    // 0x28da0c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2883E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2883E8u, 0x28DA08u, 0x28DA10u)) {
        return;
    }
    ctx->pc = 0x28DA10u;
label_28da10:
    // 0x28da10: 0x10400057  beqz        $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x28DA10u;
    {
        const bool branch_taken_0x28da10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DA10u;
        // 0x28da14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28da10) {
            ctx->pc = 0x28DB70u;
            goto label_28db70;
        }
    }
    ctx->pc = 0x28DA18u;
    // 0x28da18: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x28da18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x28da1c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x28DA1Cu;
    {
        const bool branch_taken_0x28da1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28da1c) {
            ctx->pc = 0x28DA20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28DA1Cu;
            // 0x28da20: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28DA38u;
            goto label_28da38;
        }
    }
    ctx->pc = 0x28DA24u;
    // 0x28da24: 0xc0a3afc  jal         func_28EBF0
    ctx->pc = 0x28DA24u;
    SET_GPR_U32(ctx, 31, 0x28DA2Cu);
    ctx->pc = 0x28DA28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DA24u;
    // 0x28da28: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28EBF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x28EBF0u, 0x28DA24u, 0x28DA2Cu)) {
        return;
    }
    ctx->pc = 0x28DA2Cu;
label_28da2c:
    // 0x28da2c: 0x10400050  beqz        $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x28DA2Cu;
    {
        const bool branch_taken_0x28da2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DA2Cu;
        // 0x28da30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28da2c) {
            ctx->pc = 0x28DB70u;
            goto label_28db70;
        }
    }
    ctx->pc = 0x28DA34u;
label_28da34:
    // 0x28da34: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x28da34u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_28da38:
    // 0x28da38: 0x2631000c  addiu       $s1, $s1, 0xC
    ctx->pc = 0x28da38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x28da3c: 0x2fe102a  slt         $v0, $s7, $fp
    ctx->pc = 0x28da3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x28da40: 0x1040004a  beqz        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x28DA40u;
    {
        const bool branch_taken_0x28da40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DA40u;
        // 0x28da44: 0x2673000c  addiu       $s3, $s3, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28da40) {
            ctx->pc = 0x28DB6Cu;
            goto label_28db6c;
        }
    }
    ctx->pc = 0x28DA48u;
    // 0x28da48: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x28da48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28da4c:
    // 0x28da4c: 0x260b02d  daddu       $s6, $s3, $zero
    ctx->pc = 0x28da4cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28da50: 0x240a82d  daddu       $s5, $s2, $zero
    ctx->pc = 0x28da50u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28da54: 0x240a02d  daddu       $s4, $s2, $zero
    ctx->pc = 0x28da54u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28da58: 0x240982d  daddu       $s3, $s2, $zero
    ctx->pc = 0x28da58u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28da5c: 0x0  nop
    ctx->pc = 0x28da5cu;
    // NOP
label_28da60:
    // 0x28da60: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x28da60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x28da64: 0x8e62fffc  lw          $v0, -0x4($s3)
    ctx->pc = 0x28da64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967292)));
    // 0x28da68: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x28DA68u;
    {
        const bool branch_taken_0x28da68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DA68u;
        // 0x28da6c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28da68) {
            ctx->pc = 0x28DA74u;
            goto label_28da74;
        }
    }
    ctx->pc = 0x28DA70u;
    // 0x28da70: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x28da70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_28da74:
    // 0x28da74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28da74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28da78: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x28da78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x28da7c: 0xc0935aa  jal         func_24D6A8
    ctx->pc = 0x28DA7Cu;
    SET_GPR_U32(ctx, 31, 0x28DA84u);
    ctx->pc = 0x28DA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DA7Cu;
    // 0x28da80: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D6A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D6A8u, 0x28DA7Cu, 0x28DA84u)) {
        return;
    }
    ctx->pc = 0x28DA84u;
label_28da84:
    // 0x28da84: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x28DA84u;
    {
        const bool branch_taken_0x28da84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DA84u;
        // 0x28da88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28da84) {
            ctx->pc = 0x28DB70u;
            goto label_28db70;
        }
    }
    ctx->pc = 0x28DA8Cu;
    // 0x28da8c: 0x8e82fffc  lw          $v0, -0x4($s4)
    ctx->pc = 0x28da8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294967292)));
    // 0x28da90: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x28DA90u;
    {
        const bool branch_taken_0x28da90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DA90u;
        // 0x28da94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28da90) {
            ctx->pc = 0x28DAD4u;
            goto label_28dad4;
        }
    }
    ctx->pc = 0x28DA98u;
    // 0x28da98: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x28da98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28da9c: 0xc092782  jal         func_249E08
    ctx->pc = 0x28DA9Cu;
    SET_GPR_U32(ctx, 31, 0x28DAA4u);
    ctx->pc = 0x28DAA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DA9Cu;
    // 0x28daa0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x28DA9Cu, 0x28DAA4u)) {
        return;
    }
    ctx->pc = 0x28DAA4u;
label_28daa4:
    // 0x28daa4: 0x8ea4fffc  lw          $a0, -0x4($s5)
    ctx->pc = 0x28daa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294967292)));
    // 0x28daa8: 0xc0a20fa  jal         func_2883E8
    ctx->pc = 0x28DAA8u;
    SET_GPR_U32(ctx, 31, 0x28DAB0u);
    ctx->pc = 0x28DAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DAA8u;
    // 0x28daac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2883E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2883E8u, 0x28DAA8u, 0x28DAB0u)) {
        return;
    }
    ctx->pc = 0x28DAB0u;
label_28dab0:
    // 0x28dab0: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x28DAB0u;
    {
        const bool branch_taken_0x28dab0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DAB0u;
        // 0x28dab4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28dab0) {
            ctx->pc = 0x28DB70u;
            goto label_28db70;
        }
    }
    ctx->pc = 0x28DAB8u;
    // 0x28dab8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x28dab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x28dabc: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x28DABCu;
    {
        const bool branch_taken_0x28dabc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28dabc) {
            ctx->pc = 0x28DAC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28DABCu;
            // 0x28dac0: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28DAD8u;
            goto label_28dad8;
        }
    }
    ctx->pc = 0x28DAC4u;
    // 0x28dac4: 0xc0a3afc  jal         func_28EBF0
    ctx->pc = 0x28DAC4u;
    SET_GPR_U32(ctx, 31, 0x28DACCu);
    ctx->pc = 0x28DAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DAC4u;
    // 0x28dac8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28EBF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x28EBF0u, 0x28DAC4u, 0x28DACCu)) {
        return;
    }
    ctx->pc = 0x28DACCu;
label_28dacc:
    // 0x28dacc: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x28DACCu;
    {
        const bool branch_taken_0x28dacc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DACCu;
        // 0x28dad0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28dacc) {
            ctx->pc = 0x28DB70u;
            goto label_28db70;
        }
    }
    ctx->pc = 0x28DAD4u;
label_28dad4:
    // 0x28dad4: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x28dad4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_28dad8:
    // 0x28dad8: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x28dad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x28dadc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28DADCu;
    {
        const bool branch_taken_0x28dadc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DADCu;
        // 0x28dae0: 0x26d1000c  addiu       $s1, $s6, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28dadc) {
            ctx->pc = 0x28DAECu;
            goto label_28daec;
        }
    }
    ctx->pc = 0x28DAE4u;
    // 0x28dae4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x28dae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x28dae8: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x28dae8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_28daec:
    // 0x28daec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28daecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28daf0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x28daf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x28daf4: 0xc0935aa  jal         func_24D6A8
    ctx->pc = 0x28DAF4u;
    SET_GPR_U32(ctx, 31, 0x28DAFCu);
    ctx->pc = 0x28DAF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DAF4u;
    // 0x28daf8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D6A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D6A8u, 0x28DAF4u, 0x28DAFCu)) {
        return;
    }
    ctx->pc = 0x28DAFCu;
label_28dafc:
    // 0x28dafc: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x28DAFCu;
    {
        const bool branch_taken_0x28dafc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DAFCu;
        // 0x28db00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28dafc) {
            ctx->pc = 0x28DB70u;
            goto label_28db70;
        }
    }
    ctx->pc = 0x28DB04u;
    // 0x28db04: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x28db04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x28db08: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x28DB08u;
    {
        const bool branch_taken_0x28db08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DB08u;
        // 0x28db0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28db08) {
            ctx->pc = 0x28DB4Cu;
            goto label_28db4c;
        }
    }
    ctx->pc = 0x28DB10u;
    // 0x28db10: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x28db10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28db14: 0xc092782  jal         func_249E08
    ctx->pc = 0x28DB14u;
    SET_GPR_U32(ctx, 31, 0x28DB1Cu);
    ctx->pc = 0x28DB18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DB14u;
    // 0x28db18: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x28DB14u, 0x28DB1Cu)) {
        return;
    }
    ctx->pc = 0x28DB1Cu;
label_28db1c:
    // 0x28db1c: 0x8ea40008  lw          $a0, 0x8($s5)
    ctx->pc = 0x28db1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x28db20: 0xc0a20fa  jal         func_2883E8
    ctx->pc = 0x28DB20u;
    SET_GPR_U32(ctx, 31, 0x28DB28u);
    ctx->pc = 0x28DB24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DB20u;
    // 0x28db24: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2883E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2883E8u, 0x28DB20u, 0x28DB28u)) {
        return;
    }
    ctx->pc = 0x28DB28u;
label_28db28:
    // 0x28db28: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x28DB28u;
    {
        const bool branch_taken_0x28db28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DB28u;
        // 0x28db2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28db28) {
            ctx->pc = 0x28DB70u;
            goto label_28db70;
        }
    }
    ctx->pc = 0x28DB30u;
    // 0x28db30: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x28db30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x28db34: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x28DB34u;
    {
        const bool branch_taken_0x28db34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28db34) {
            ctx->pc = 0x28DB38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28DB34u;
            // 0x28db38: 0x26f70002  addiu       $s7, $s7, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28DB50u;
            goto label_28db50;
        }
    }
    ctx->pc = 0x28DB3Cu;
    // 0x28db3c: 0xc0a3afc  jal         func_28EBF0
    ctx->pc = 0x28DB3Cu;
    SET_GPR_U32(ctx, 31, 0x28DB44u);
    ctx->pc = 0x28DB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DB3Cu;
    // 0x28db40: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28EBF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x28EBF0u, 0x28DB3Cu, 0x28DB44u)) {
        return;
    }
    ctx->pc = 0x28DB44u;
label_28db44:
    // 0x28db44: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x28DB44u;
    {
        const bool branch_taken_0x28db44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DB44u;
        // 0x28db48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28db44) {
            ctx->pc = 0x28DB70u;
            goto label_28db70;
        }
    }
    ctx->pc = 0x28DB4Cu;
label_28db4c:
    // 0x28db4c: 0x26f70002  addiu       $s7, $s7, 0x2
    ctx->pc = 0x28db4cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 2));
label_28db50:
    // 0x28db50: 0x26520018  addiu       $s2, $s2, 0x18
    ctx->pc = 0x28db50u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    // 0x28db54: 0x26b50018  addiu       $s5, $s5, 0x18
    ctx->pc = 0x28db54u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 24));
    // 0x28db58: 0x26940018  addiu       $s4, $s4, 0x18
    ctx->pc = 0x28db58u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
    // 0x28db5c: 0x26730018  addiu       $s3, $s3, 0x18
    ctx->pc = 0x28db5cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
    // 0x28db60: 0x2fe102a  slt         $v0, $s7, $fp
    ctx->pc = 0x28db60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x28db64: 0x1440ffbe  bnez        $v0, . + 4 + (-0x42 << 2)
    ctx->pc = 0x28DB64u;
    {
        const bool branch_taken_0x28db64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28DB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DB64u;
        // 0x28db68: 0x26d60018  addiu       $s6, $s6, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28db64) {
            ctx->pc = 0x28DA60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28da60;
        }
    }
    ctx->pc = 0x28DB6Cu;
label_28db6c:
    // 0x28db6c: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x28db6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_28db70:
    // 0x28db70: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x28db70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x28db74: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x28db74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x28db78: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x28db78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x28db7c: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x28db7cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x28db80: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x28db80u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x28db84: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x28db84u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28db88: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x28db88u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28db8c: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x28db8cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28db90: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x28db90u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28db94: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x28db94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28db98: 0x3e00008  jr          $ra
    ctx->pc = 0x28DB98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28DB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DB98u;
        // 0x28db9c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28DB98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28DBA0u;
}

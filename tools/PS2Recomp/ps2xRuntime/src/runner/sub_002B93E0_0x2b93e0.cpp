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

// Function: sub_002B93E0
// Address: 0x2b93e0 - 0x2b9620
void sub_002B93E0_0x2b93e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B93E0_0x2b93e0");
#endif

    switch (ctx->pc) {
        case 0x2b9458u: goto label_2b9458;
        case 0x2b9468u: goto label_2b9468;
        case 0x2b9478u: goto label_2b9478;
        case 0x2b948cu: goto label_2b948c;
        case 0x2b9494u: goto label_2b9494;
        case 0x2b94a4u: goto label_2b94a4;
        case 0x2b94b0u: goto label_2b94b0;
        case 0x2b94bcu: goto label_2b94bc;
        default: break;
    }

    ctx->pc = 0x2b93e0u;

    // 0x2b93e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2b93e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2b93e4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2b93e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x2b93e8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2b93e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2b93ec: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2b93ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x2b93f0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2b93f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b93f4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2b93f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2b93f8: 0x2404fffc  addiu       $a0, $zero, -0x4
    ctx->pc = 0x2b93f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x2b93fc: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x2b93fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x2b9400: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b9400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b9404: 0x8e4200f8  lw          $v0, 0xF8($s2)
    ctx->pc = 0x2b9404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 248)));
    // 0x2b9408: 0x8e4300b8  lw          $v1, 0xB8($s2)
    ctx->pc = 0x2b9408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
    // 0x2b940c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2b940cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2b9410: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b9410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b9414: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x2b9414u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b9418: 0x26830003  addiu       $v1, $s4, 0x3
    ctx->pc = 0x2b9418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 3));
    // 0x2b941c: 0x649824  and         $s3, $v1, $a0
    ctx->pc = 0x2b941cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2b9420: 0x12930028  beq         $s4, $s3, . + 4 + (0x28 << 2)
    ctx->pc = 0x2B9420u;
    {
        const bool branch_taken_0x2b9420 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 19));
        ctx->pc = 0x2B9424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9420u;
        // 0x2b9424: 0x280802d  daddu       $s0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9420) {
            ctx->pc = 0x2B94C4u;
            goto label_2b94c4;
        }
    }
    ctx->pc = 0x2B9428u;
    // 0x2b9428: 0x2741023  subu        $v0, $s3, $s4
    ctx->pc = 0x2b9428u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x2b942c: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x2b942cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2b9430: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2B9430u;
    {
        const bool branch_taken_0x2b9430 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9430u;
        // 0x2b9434: 0x3c11006b  lui         $s1, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9430) {
            ctx->pc = 0x2B9488u;
            goto label_2b9488;
        }
    }
    ctx->pc = 0x2B9438u;
    // 0x2b9438: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x2b9438u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2b943c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2B943Cu;
    {
        const bool branch_taken_0x2b943c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B9440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B943Cu;
        // 0x2b9440: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b943c) {
            ctx->pc = 0x2B9470u;
            goto label_2b9470;
        }
    }
    ctx->pc = 0x2B9444u;
    // 0x2b9444: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x2b9444u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2b9448: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B9448u;
    {
        const bool branch_taken_0x2b9448 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b9448) {
            ctx->pc = 0x2B9460u;
            goto label_2b9460;
        }
    }
    ctx->pc = 0x2B9450u;
    // 0x2b9450: 0xc0ae476  jal         func_2B91D8
    ctx->pc = 0x2B9450u;
    SET_GPR_U32(ctx, 31, 0x2B9458u);
    ctx->pc = 0x2B9454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9450u;
    // 0x2b9454: 0x2625e668  addiu       $a1, $s1, -0x1998 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294960744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B91D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B91D8u, 0x2B9450u, 0x2B9458u)) {
        return;
    }
    ctx->pc = 0x2B9458u;
label_2b9458:
    // 0x2b9458: 0x26900001  addiu       $s0, $s4, 0x1
    ctx->pc = 0x2b9458u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2b945c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b945cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2b9460:
    // 0x2b9460: 0xc0ae476  jal         func_2B91D8
    ctx->pc = 0x2B9460u;
    SET_GPR_U32(ctx, 31, 0x2B9468u);
    ctx->pc = 0x2B9464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9460u;
    // 0x2b9464: 0x2625e668  addiu       $a1, $s1, -0x1998 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294960744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B91D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B91D8u, 0x2B9460u, 0x2B9468u)) {
        return;
    }
    ctx->pc = 0x2B9468u;
label_2b9468:
    // 0x2b9468: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2b9468u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2b946c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b946cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2b9470:
    // 0x2b9470: 0xc0ae476  jal         func_2B91D8
    ctx->pc = 0x2B9470u;
    SET_GPR_U32(ctx, 31, 0x2B9478u);
    ctx->pc = 0x2B9474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9470u;
    // 0x2b9474: 0x2625e668  addiu       $a1, $s1, -0x1998 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294960744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B91D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B91D8u, 0x2B9470u, 0x2B9478u)) {
        return;
    }
    ctx->pc = 0x2B9478u;
label_2b9478:
    // 0x2b9478: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2b9478u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2b947c: 0x52130012  beql        $s0, $s3, . + 4 + (0x12 << 2)
    ctx->pc = 0x2B947Cu;
    {
        const bool branch_taken_0x2b947c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 19));
        if (branch_taken_0x2b947c) {
            ctx->pc = 0x2B9480u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B947Cu;
            // 0x2b9480: 0x8e4300f8  lw          $v1, 0xF8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 248)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B94C8u;
            goto label_2b94c8;
        }
    }
    ctx->pc = 0x2B9484u;
    // 0x2b9484: 0x0  nop
    ctx->pc = 0x2b9484u;
    // NOP
label_2b9488:
    // 0x2b9488: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b9488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2b948c:
    // 0x2b948c: 0xc0ae476  jal         func_2B91D8
    ctx->pc = 0x2B948Cu;
    SET_GPR_U32(ctx, 31, 0x2B9494u);
    ctx->pc = 0x2B9490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B948Cu;
    // 0x2b9490: 0x2625e668  addiu       $a1, $s1, -0x1998 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294960744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B91D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B91D8u, 0x2B948Cu, 0x2B9494u)) {
        return;
    }
    ctx->pc = 0x2B9494u;
label_2b9494:
    // 0x2b9494: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2b9494u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2b9498: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b9498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b949c: 0xc0ae476  jal         func_2B91D8
    ctx->pc = 0x2B949Cu;
    SET_GPR_U32(ctx, 31, 0x2B94A4u);
    ctx->pc = 0x2B94A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B949Cu;
    // 0x2b94a0: 0x2625e668  addiu       $a1, $s1, -0x1998 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294960744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B91D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B91D8u, 0x2B949Cu, 0x2B94A4u)) {
        return;
    }
    ctx->pc = 0x2B94A4u;
label_2b94a4:
    // 0x2b94a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b94a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b94a8: 0xc0ae476  jal         func_2B91D8
    ctx->pc = 0x2B94A8u;
    SET_GPR_U32(ctx, 31, 0x2B94B0u);
    ctx->pc = 0x2B94ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B94A8u;
    // 0x2b94ac: 0x2625e668  addiu       $a1, $s1, -0x1998 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294960744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B91D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B91D8u, 0x2B94A8u, 0x2B94B0u)) {
        return;
    }
    ctx->pc = 0x2B94B0u;
label_2b94b0:
    // 0x2b94b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b94b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b94b4: 0xc0ae476  jal         func_2B91D8
    ctx->pc = 0x2B94B4u;
    SET_GPR_U32(ctx, 31, 0x2B94BCu);
    ctx->pc = 0x2B94B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B94B4u;
    // 0x2b94b8: 0x2625e668  addiu       $a1, $s1, -0x1998 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294960744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B91D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B91D8u, 0x2B94B4u, 0x2B94BCu)) {
        return;
    }
    ctx->pc = 0x2B94BCu;
label_2b94bc:
    // 0x2b94bc: 0x1613fff3  bne         $s0, $s3, . + 4 + (-0xD << 2)
    ctx->pc = 0x2B94BCu;
    {
        const bool branch_taken_0x2b94bc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 19));
        ctx->pc = 0x2B94C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B94BCu;
        // 0x2b94c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b94bc) {
            ctx->pc = 0x2B948Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b948c;
        }
    }
    ctx->pc = 0x2B94C4u;
label_2b94c4:
    // 0x2b94c4: 0x8e4300f8  lw          $v1, 0xF8($s2)
    ctx->pc = 0x2b94c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 248)));
label_2b94c8:
    // 0x2b94c8: 0x2742823  subu        $a1, $s3, $s4
    ctx->pc = 0x2b94c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x2b94cc: 0x8e4200b8  lw          $v0, 0xB8($s2)
    ctx->pc = 0x2b94ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
    // 0x2b94d0: 0x132083  sra         $a0, $s3, 2
    ctx->pc = 0x2b94d0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 19), 2));
    // 0x2b94d4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2b94d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b94d8: 0x8e5000dc  lw          $s0, 0xDC($s2)
    ctx->pc = 0x2b94d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
    // 0x2b94dc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2b94dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2b94e0: 0x8e5100d0  lw          $s1, 0xD0($s2)
    ctx->pc = 0x2b94e0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
    // 0x2b94e4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2b94e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b94e8: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x2b94e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2b94ec: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2b94ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2b94f0: 0x8e4b0004  lw          $t3, 0x4($s2)
    ctx->pc = 0x2b94f0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2b94f4: 0x8e4c0014  lw          $t4, 0x14($s2)
    ctx->pc = 0x2b94f4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x2b94f8: 0x8e4e0020  lw          $t6, 0x20($s2)
    ctx->pc = 0x2b94f8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x2b94fc: 0x1735821  addu        $t3, $t3, $s3
    ctx->pc = 0x2b94fcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 19)));
    // 0x2b9500: 0x8e4f002c  lw          $t7, 0x2C($s2)
    ctx->pc = 0x2b9500u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x2b9504: 0x1846021  addu        $t4, $t4, $a0
    ctx->pc = 0x2b9504u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
    // 0x2b9508: 0x8e4d0038  lw          $t5, 0x38($s2)
    ctx->pc = 0x2b9508u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x2b950c: 0x1c47021  addu        $t6, $t6, $a0
    ctx->pc = 0x2b950cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 4)));
    // 0x2b9510: 0x8e4a0044  lw          $t2, 0x44($s2)
    ctx->pc = 0x2b9510u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
    // 0x2b9514: 0x1e47821  addu        $t7, $t7, $a0
    ctx->pc = 0x2b9514u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 4)));
    // 0x2b9518: 0x8e490050  lw          $t1, 0x50($s2)
    ctx->pc = 0x2b9518u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x2b951c: 0x1a46821  addu        $t5, $t5, $a0
    ctx->pc = 0x2b951cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 4)));
    // 0x2b9520: 0x8e48005c  lw          $t0, 0x5C($s2)
    ctx->pc = 0x2b9520u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x2b9524: 0x1445021  addu        $t2, $t2, $a0
    ctx->pc = 0x2b9524u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x2b9528: 0x8e470068  lw          $a3, 0x68($s2)
    ctx->pc = 0x2b9528u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
    // 0x2b952c: 0x1244821  addu        $t1, $t1, $a0
    ctx->pc = 0x2b952cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x2b9530: 0x8e46008c  lw          $a2, 0x8C($s2)
    ctx->pc = 0x2b9530u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
    // 0x2b9534: 0x1044021  addu        $t0, $t0, $a0
    ctx->pc = 0x2b9534u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x2b9538: 0x8e420098  lw          $v0, 0x98($s2)
    ctx->pc = 0x2b9538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x2b953c: 0xe43821  addu        $a3, $a3, $a0
    ctx->pc = 0x2b953cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x2b9540: 0x8e4300b0  lw          $v1, 0xB0($s2)
    ctx->pc = 0x2b9540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
    // 0x2b9544: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x2b9544u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x2b9548: 0x8e4500e0  lw          $a1, 0xE0($s2)
    ctx->pc = 0x2b9548u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 224)));
    // 0x2b954c: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x2b954cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2b9550: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2b9550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2b9554: 0xae4b0004  sw          $t3, 0x4($s2)
    ctx->pc = 0x2b9554u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 11));
    // 0x2b9558: 0xae4c0014  sw          $t4, 0x14($s2)
    ctx->pc = 0x2b9558u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 12));
    // 0x2b955c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x2b955cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2b9560: 0xae4e0020  sw          $t6, 0x20($s2)
    ctx->pc = 0x2b9560u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 14));
    // 0x2b9564: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x2b9564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x2b9568: 0xae4f002c  sw          $t7, 0x2C($s2)
    ctx->pc = 0x2b9568u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 15));
    // 0x2b956c: 0xae4d0038  sw          $t5, 0x38($s2)
    ctx->pc = 0x2b956cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 13));
    // 0x2b9570: 0xae4a0044  sw          $t2, 0x44($s2)
    ctx->pc = 0x2b9570u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 10));
    // 0x2b9574: 0xae490050  sw          $t1, 0x50($s2)
    ctx->pc = 0x2b9574u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 9));
    // 0x2b9578: 0xae48005c  sw          $t0, 0x5C($s2)
    ctx->pc = 0x2b9578u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 8));
    // 0x2b957c: 0xae470068  sw          $a3, 0x68($s2)
    ctx->pc = 0x2b957cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 7));
    // 0x2b9580: 0xae46008c  sw          $a2, 0x8C($s2)
    ctx->pc = 0x2b9580u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 6));
    // 0x2b9584: 0xae4300b0  sw          $v1, 0xB0($s2)
    ctx->pc = 0x2b9584u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 3));
    // 0x2b9588: 0xae420098  sw          $v0, 0x98($s2)
    ctx->pc = 0x2b9588u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 152), GPR_U32(ctx, 2));
    // 0x2b958c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2b958cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2b9590: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x2b9590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2b9594: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x2b9594u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x2b9598: 0x8e4300d4  lw          $v1, 0xD4($s2)
    ctx->pc = 0x2b9598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
    // 0x2b959c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2b959cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b95a0: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x2b95a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2b95a4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2b95a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b95a8: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x2b95a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2b95ac: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2b95acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2b95b0: 0x8e4400d4  lw          $a0, 0xD4($s2)
    ctx->pc = 0x2b95b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
    // 0x2b95b4: 0x8e4300c4  lw          $v1, 0xC4($s2)
    ctx->pc = 0x2b95b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
    // 0x2b95b8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2b95b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b95bc: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2b95bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b95c0: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2b95c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2b95c4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2b95c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b95c8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2b95c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b95cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b95ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b95d0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2b95d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2b95d4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2b95d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2b95d8: 0x8e430100  lw          $v1, 0x100($s2)
    ctx->pc = 0x2b95d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 256)));
    // 0x2b95dc: 0x8e440104  lw          $a0, 0x104($s2)
    ctx->pc = 0x2b95dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
    // 0x2b95e0: 0x8e450108  lw          $a1, 0x108($s2)
    ctx->pc = 0x2b95e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 264)));
    // 0x2b95e4: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x2b95e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x2b95e8: 0x8e4200f8  lw          $v0, 0xF8($s2)
    ctx->pc = 0x2b95e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 248)));
    // 0x2b95ec: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x2b95ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x2b95f0: 0xb32821  addu        $a1, $a1, $s3
    ctx->pc = 0x2b95f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x2b95f4: 0xae430100  sw          $v1, 0x100($s2)
    ctx->pc = 0x2b95f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 256), GPR_U32(ctx, 3));
    // 0x2b95f8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2b95f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2b95fc: 0xae440104  sw          $a0, 0x104($s2)
    ctx->pc = 0x2b95fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 260), GPR_U32(ctx, 4));
    // 0x2b9600: 0xae4200f8  sw          $v0, 0xF8($s2)
    ctx->pc = 0x2b9600u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 248), GPR_U32(ctx, 2));
    // 0x2b9604: 0xae450108  sw          $a1, 0x108($s2)
    ctx->pc = 0x2b9604u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 264), GPR_U32(ctx, 5));
    // 0x2b9608: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2b9608u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b960c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2b960cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b9610: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x2b9610u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b9614: 0x3e00008  jr          $ra
    ctx->pc = 0x2B9614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B9618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9614u;
        // 0x2b9618: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9614u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B961Cu;
    // 0x2b961c: 0x0  nop
    ctx->pc = 0x2b961cu;
    // NOP
    ctx->pc = 0x2b9620u;
}

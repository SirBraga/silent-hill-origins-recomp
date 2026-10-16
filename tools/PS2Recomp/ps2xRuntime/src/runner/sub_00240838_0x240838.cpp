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

// Function: sub_00240838
// Address: 0x240838 - 0x2408b8
void sub_00240838_0x240838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00240838_0x240838");
#endif

    switch (ctx->pc) {
        case 0x240850u: goto label_240850;
        case 0x240858u: goto label_240858;
        case 0x240864u: goto label_240864;
        default: break;
    }

    ctx->pc = 0x240838u;

    // 0x240838: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x240838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x24083c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x24083cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x240840: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x240840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x240844: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x240844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x240848: 0xc093dec  jal         func_24F7B0
    ctx->pc = 0x240848u;
    SET_GPR_U32(ctx, 31, 0x240850u);
    ctx->pc = 0x24084Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240848u;
    // 0x24084c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24F7B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24F7B0u, 0x240848u, 0x240850u)) {
        return;
    }
    ctx->pc = 0x240850u;
label_240850:
    // 0x240850: 0xc089654  jal         func_225950
    ctx->pc = 0x240850u;
    SET_GPR_U32(ctx, 31, 0x240858u);
    ctx->pc = 0x240854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240850u;
    // 0x240854: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225950u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x225950u, 0x240850u, 0x240858u)) {
        return;
    }
    ctx->pc = 0x240858u;
label_240858:
    // 0x240858: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x240858u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24085c: 0xc089642  jal         func_225908
    ctx->pc = 0x24085Cu;
    SET_GPR_U32(ctx, 31, 0x240864u);
    ctx->pc = 0x240860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24085Cu;
    // 0x240860: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225908u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x225908u, 0x24085Cu, 0x240864u)) {
        return;
    }
    ctx->pc = 0x240864u;
label_240864:
    // 0x240864: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x240864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x240868: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x240868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x24086c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24086Cu;
    {
        const bool branch_taken_0x24086c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x240870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24086Cu;
        // 0x240870: 0x24050500  addiu       $a1, $zero, 0x500 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24086c) {
            ctx->pc = 0x240880u;
            goto label_240880;
        }
    }
    ctx->pc = 0x240874u;
    // 0x240874: 0x3a030003  xori        $v1, $s0, 0x3
    ctx->pc = 0x240874u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)3);
    // 0x240878: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x240878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x24087c: 0x43280b  movn        $a1, $v0, $v1
    ctx->pc = 0x24087cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2));
label_240880:
    // 0x240880: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x240880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x240884: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x240884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x240888: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x240888u;
    {
        const bool branch_taken_0x240888 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x24088Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240888u;
        // 0x24088c: 0x38630008  xori        $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x240888) {
            ctx->pc = 0x240898u;
            goto label_240898;
        }
    }
    ctx->pc = 0x240890u;
    // 0x240890: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x240890u;
    {
        const bool branch_taken_0x240890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240890u;
        // 0x240894: 0x34a54000  ori         $a1, $a1, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        if (branch_taken_0x240890) {
            ctx->pc = 0x2408A0u;
            goto label_2408a0;
        }
    }
    ctx->pc = 0x240898u;
label_240898:
    // 0x240898: 0x34a22000  ori         $v0, $a1, 0x2000
    ctx->pc = 0x240898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8192);
    // 0x24089c: 0x43280a  movz        $a1, $v0, $v1
    ctx->pc = 0x24089cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2));
label_2408a0:
    // 0x2408a0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2408a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2408a4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2408a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2408a8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2408a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2408ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2408acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2408b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2408B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2408B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2408B0u;
        // 0x2408b4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2408B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2408B8u;
}

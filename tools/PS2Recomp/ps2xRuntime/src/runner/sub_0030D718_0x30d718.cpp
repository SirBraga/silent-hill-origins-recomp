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

// Function: sub_0030D718
// Address: 0x30d718 - 0x30d7a0
void sub_0030D718_0x30d718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030D718_0x30d718");
#endif

    switch (ctx->pc) {
        case 0x30d74cu: goto label_30d74c;
        case 0x30d760u: goto label_30d760;
        case 0x30d76cu: goto label_30d76c;
        default: break;
    }

    ctx->pc = 0x30d718u;

    // 0x30d718: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x30d718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x30d71c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x30d71cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x30d720: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x30d720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x30d724: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x30d724u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d728: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x30d728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x30d72c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x30d72cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d730: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x30d730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x30d734: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30d734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30d738: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30D738u;
    {
        const bool branch_taken_0x30d738 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D738u;
        // 0x30d73c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d738) {
            ctx->pc = 0x30D758u;
            goto label_30d758;
        }
    }
    ctx->pc = 0x30D740u;
    // 0x30d740: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x30d740u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d744: 0xc092782  jal         func_249E08
    ctx->pc = 0x30D744u;
    SET_GPR_U32(ctx, 31, 0x30D74Cu);
    ctx->pc = 0x30D748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D744u;
    // 0x30d748: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x30D744u, 0x30D74Cu)) {
        return;
    }
    ctx->pc = 0x30D74Cu;
label_30d74c:
    // 0x30d74c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x30D74Cu;
    {
        const bool branch_taken_0x30d74c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D74Cu;
        // 0x30d750: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d74c) {
            ctx->pc = 0x30D78Cu;
            goto label_30d78c;
        }
    }
    ctx->pc = 0x30D754u;
    // 0x30d754: 0x0  nop
    ctx->pc = 0x30d754u;
    // NOP
label_30d758:
    // 0x30d758: 0xc0b5848  jal         func_2D6120
    ctx->pc = 0x30D758u;
    SET_GPR_U32(ctx, 31, 0x30D760u);
    ctx->pc = 0x30D75Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D758u;
    // 0x30d75c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D6120u, 0x30D758u, 0x30D760u)) {
        return;
    }
    ctx->pc = 0x30D760u;
label_30d760:
    // 0x30d760: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x30d760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d764: 0xc0c2b6a  jal         func_30ADA8
    ctx->pc = 0x30D764u;
    SET_GPR_U32(ctx, 31, 0x30D76Cu);
    ctx->pc = 0x30D768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D764u;
    // 0x30d768: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30ADA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x30ADA8u, 0x30D764u, 0x30D76Cu)) {
        return;
    }
    ctx->pc = 0x30D76Cu;
label_30d76c:
    // 0x30d76c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30D76Cu;
    {
        const bool branch_taken_0x30d76c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D76Cu;
        // 0x30d770: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d76c) {
            ctx->pc = 0x30D78Cu;
            goto label_30d78c;
        }
    }
    ctx->pc = 0x30D774u;
    // 0x30d774: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30D774u;
    {
        const bool branch_taken_0x30d774 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D774u;
        // 0x30d778: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d774) {
            ctx->pc = 0x30D78Cu;
            goto label_30d78c;
        }
    }
    ctx->pc = 0x30D77Cu;
    // 0x30d77c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x30d77cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30d780: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x30d780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x30d784: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x30d784u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x30d788: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30d788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30d78c:
    // 0x30d78c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x30d78cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30d790: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x30d790u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30d794: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x30d794u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30d798: 0x3e00008  jr          $ra
    ctx->pc = 0x30D798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30D79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D798u;
        // 0x30d79c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30D798u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30D7A0u;
}

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

// Function: sub_00281840
// Address: 0x281840 - 0x281898
void sub_00281840_0x281840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00281840_0x281840");
#endif

    switch (ctx->pc) {
        case 0x28186cu: goto label_28186c;
        case 0x28187cu: goto label_28187c;
        default: break;
    }

    ctx->pc = 0x281840u;

    // 0x281840: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x281840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x281844: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x281844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x281848: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x281848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28184c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28184cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281850: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x281850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x281854: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x281854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x281858: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x281858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x28185c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28185Cu;
    {
        const bool branch_taken_0x28185c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x281860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28185Cu;
        // 0x281860: 0x3c040001  lui         $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28185c) {
            ctx->pc = 0x281874u;
            goto label_281874;
        }
    }
    ctx->pc = 0x281864u;
    // 0x281864: 0xc09945a  jal         func_265168
    ctx->pc = 0x281864u;
    SET_GPR_U32(ctx, 31, 0x28186Cu);
    ctx->pc = 0x281868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281864u;
    // 0x281868: 0x3484100e  ori         $a0, $a0, 0x100E (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4110);
    ctx->in_delay_slot = false;
    ctx->pc = 0x265168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x265168u, 0x281864u, 0x28186Cu)) {
        return;
    }
    ctx->pc = 0x28186Cu;
label_28186c:
    // 0x28186c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x28186Cu;
    {
        const bool branch_taken_0x28186c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x281870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28186Cu;
        // 0x281870: 0xae02006c  sw          $v0, 0x6C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28186c) {
            ctx->pc = 0x281880u;
            goto label_281880;
        }
    }
    ctx->pc = 0x281874u;
label_281874:
    // 0x281874: 0xc09945a  jal         func_265168
    ctx->pc = 0x281874u;
    SET_GPR_U32(ctx, 31, 0x28187Cu);
    ctx->pc = 0x281878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281874u;
    // 0x281878: 0x3484100d  ori         $a0, $a0, 0x100D (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4109);
    ctx->in_delay_slot = false;
    ctx->pc = 0x265168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x265168u, 0x281874u, 0x28187Cu)) {
        return;
    }
    ctx->pc = 0x28187Cu;
label_28187c:
    // 0x28187c: 0xae02006c  sw          $v0, 0x6C($s0)
    ctx->pc = 0x28187cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 2));
label_281880:
    // 0x281880: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x281880u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281884: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x281884u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x281888: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x281888u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28188c: 0x3e00008  jr          $ra
    ctx->pc = 0x28188Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x281890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28188Cu;
        // 0x281890: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28188Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x281894u;
    // 0x281894: 0x0  nop
    ctx->pc = 0x281894u;
    // NOP
    ctx->pc = 0x281898u;
}

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

// Function: sub_0029B348
// Address: 0x29b348 - 0x29b3c8
void sub_0029B348_0x29b348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029B348_0x29b348");
#endif

    switch (ctx->pc) {
        case 0x29b364u: goto label_29b364;
        case 0x29b390u: goto label_29b390;
        case 0x29b3bcu: goto label_29b3bc;
        default: break;
    }

    ctx->pc = 0x29b348u;

    // 0x29b348: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x29b348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x29b34c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x29b34cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x29b350: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x29b350u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b354: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x29b354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x29b358: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x29b358u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x29b35c: 0xc0a75b4  jal         func_29D6D0
    ctx->pc = 0x29B35Cu;
    SET_GPR_U32(ctx, 31, 0x29B364u);
    ctx->pc = 0x29B360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B35Cu;
    // 0x29b360: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D6D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29D6D0u, 0x29B35Cu, 0x29B364u)) {
        return;
    }
    ctx->pc = 0x29B364u;
label_29b364:
    // 0x29b364: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29B364u;
    {
        const bool branch_taken_0x29b364 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B364u;
        // 0x29b368: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b364) {
            ctx->pc = 0x29B37Cu;
            goto label_29b37c;
        }
    }
    ctx->pc = 0x29B36Cu;
    // 0x29b36c: 0x9202001a  lbu         $v0, 0x1A($s0)
    ctx->pc = 0x29b36cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26)));
    // 0x29b370: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x29b370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29b374: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x29b374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x29b378: 0xa202001a  sb          $v0, 0x1A($s0)
    ctx->pc = 0x29b378u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26), (uint8_t)GPR_U32(ctx, 2));
label_29b37c:
    // 0x29b37c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x29b37cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29b380: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x29b380u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b384: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x29b384u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29b388: 0x3e00008  jr          $ra
    ctx->pc = 0x29B388u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29B38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B388u;
        // 0x29b38c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29B388u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29B390u;
label_29b390:
    // 0x29b390: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x29b390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x29b394: 0xffa60050  sd          $a2, 0x50($sp)
    ctx->pc = 0x29b394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 6));
    // 0x29b398: 0xffa70058  sd          $a3, 0x58($sp)
    ctx->pc = 0x29b398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 7));
    // 0x29b39c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x29b39cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x29b3a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29b3a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29b3a4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x29b3a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b3a8: 0xffa80060  sd          $t0, 0x60($sp)
    ctx->pc = 0x29b3a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 8));
    // 0x29b3ac: 0xffa90068  sd          $t1, 0x68($sp)
    ctx->pc = 0x29b3acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 9));
    // 0x29b3b0: 0xffaa0070  sd          $t2, 0x70($sp)
    ctx->pc = 0x29b3b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 10));
    // 0x29b3b4: 0xc0a75b4  jal         func_29D6D0
    ctx->pc = 0x29B3B4u;
    SET_GPR_U32(ctx, 31, 0x29B3BCu);
    ctx->pc = 0x29B3B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B3B4u;
    // 0x29b3b8: 0xffab0078  sd          $t3, 0x78($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D6D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29D6D0u, 0x29B3B4u, 0x29B3BCu)) {
        return;
    }
    ctx->pc = 0x29B3BCu;
label_29b3bc:
    // 0x29b3bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29b3bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29b3c0: 0x3e00008  jr          $ra
    ctx->pc = 0x29B3C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29B3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B3C0u;
        // 0x29b3c4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29B3C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29B3C8u;
}

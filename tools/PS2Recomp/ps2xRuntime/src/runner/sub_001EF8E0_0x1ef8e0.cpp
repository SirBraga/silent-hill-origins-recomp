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

// Function: sub_001EF8E0
// Address: 0x1ef8e0 - 0x1ef940
void sub_001EF8E0_0x1ef8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EF8E0_0x1ef8e0");
#endif

    switch (ctx->pc) {
        case 0x1ef8f0u: goto label_1ef8f0;
        default: break;
    }

    ctx->pc = 0x1ef8e0u;

    // 0x1ef8e0: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1ef8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1ef8e4: 0x8c43e850  lw          $v1, -0x17B0($v0)
    ctx->pc = 0x1ef8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x33E850u));
    // 0x1ef8e8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EF8E8u;
    {
        const bool branch_taken_0x1ef8e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF8E8u;
        // 0x1ef8ec: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef8e8) {
            ctx->pc = 0x1EF8F8u;
            goto label_1ef8f8;
        }
    }
    ctx->pc = 0x1EF8F0u;
label_1ef8f0:
    // 0x1ef8f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1EF8F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EF8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF8F0u;
        // 0x1ef8f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EF8F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EF8F8u;
label_1ef8f8:
    // 0x1ef8f8: 0x8c454120  lw          $a1, 0x4120($v0)
    ctx->pc = 0x1ef8f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16672)));
    // 0x1ef8fc: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x1EF8FCu;
    {
        const bool branch_taken_0x1ef8fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF8FCu;
        // 0x1ef900: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef8fc) {
            ctx->pc = 0x1EF930u;
            goto label_1ef930;
        }
    }
    ctx->pc = 0x1EF904u;
    // 0x1ef904: 0x8c43830c  lw          $v1, -0x7CF4($v0)
    ctx->pc = 0x1ef904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294935308)));
    // 0x1ef908: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x1ef908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1ef90c: 0x1080fff8  beqz        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1EF90Cu;
    {
        const bool branch_taken_0x1ef90c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef90c) {
            ctx->pc = 0x1EF8F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ef8f0;
        }
    }
    ctx->pc = 0x1EF914u;
    // 0x1ef914: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x1ef914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ef918: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ef918u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ef91c: 0x0  nop
    ctx->pc = 0x1ef91cu;
    // NOP
    // 0x1ef920: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1ef920u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ef924: 0x0  nop
    ctx->pc = 0x1ef924u;
    // NOP
    // 0x1ef928: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1EF928u;
    {
        const bool branch_taken_0x1ef928 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1EF92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF928u;
        // 0x1ef92c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef928) {
            ctx->pc = 0x1EF934u;
            goto label_1ef934;
        }
    }
    ctx->pc = 0x1EF930u;
label_1ef930:
    // 0x1ef930: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ef930u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ef934:
    // 0x1ef934: 0x3e00008  jr          $ra
    ctx->pc = 0x1EF934u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EF934u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EF93Cu;
    // 0x1ef93c: 0x0  nop
    ctx->pc = 0x1ef93cu;
    // NOP
    ctx->pc = 0x1ef940u;
}

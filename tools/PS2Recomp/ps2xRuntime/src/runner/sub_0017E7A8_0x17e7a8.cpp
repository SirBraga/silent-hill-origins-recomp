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

// Function: sub_0017E7A8
// Address: 0x17e7a8 - 0x17e808
void sub_0017E7A8_0x17e7a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017E7A8_0x17e7a8");
#endif

    ctx->pc = 0x17e7a8u;

    // 0x17e7a8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x17e7a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e7ac: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x17e7acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x17e7b0: 0x8ca30038  lw          $v1, 0x38($a1)
    ctx->pc = 0x17e7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x17e7b4: 0x2442f9a0  addiu       $v0, $v0, -0x660
    ctx->pc = 0x17e7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965664));
    // 0x17e7b8: 0x8ca4003c  lw          $a0, 0x3C($a1)
    ctx->pc = 0x17e7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
    // 0x17e7bc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x17e7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x17e7c0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x17e7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17e7c4: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x17E7C4u;
    {
        const bool branch_taken_0x17e7c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E7C4u;
        // 0x17e7c8: 0xc4610000  lwc1        $f1, 0x0($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e7c4) {
            ctx->pc = 0x17E7E8u;
            goto label_17e7e8;
        }
    }
    ctx->pc = 0x17E7CCu;
    // 0x17e7cc: 0xc4a00040  lwc1        $f0, 0x40($a1)
    ctx->pc = 0x17e7ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17e7d0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x17e7d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17e7d4: 0x0  nop
    ctx->pc = 0x17e7d4u;
    // NOP
    // 0x17e7d8: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x17E7D8u;
    {
        const bool branch_taken_0x17e7d8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x17E7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E7D8u;
        // 0x17e7dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e7d8) {
            ctx->pc = 0x17E800u;
            goto label_17e800;
        }
    }
    ctx->pc = 0x17E7E0u;
    // 0x17e7e0: 0x3e00008  jr          $ra
    ctx->pc = 0x17E7E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E7E0u;
        // 0x17e7e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17E7E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17E7E8u;
label_17e7e8:
    // 0x17e7e8: 0xc4a00040  lwc1        $f0, 0x40($a1)
    ctx->pc = 0x17e7e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17e7ec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x17e7ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17e7f0: 0x0  nop
    ctx->pc = 0x17e7f0u;
    // NOP
    // 0x17e7f4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x17E7F4u;
    {
        const bool branch_taken_0x17e7f4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x17E7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E7F4u;
        // 0x17e7f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e7f4) {
            ctx->pc = 0x17E800u;
            goto label_17e800;
        }
    }
    ctx->pc = 0x17E7FCu;
    // 0x17e7fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17e7fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17e800:
    // 0x17e800: 0x3e00008  jr          $ra
    ctx->pc = 0x17E800u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17E800u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17E808u;
}

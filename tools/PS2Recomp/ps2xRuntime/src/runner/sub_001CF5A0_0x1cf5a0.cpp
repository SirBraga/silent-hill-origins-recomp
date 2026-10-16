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

// Function: sub_001CF5A0
// Address: 0x1cf5a0 - 0x1cf608
void sub_001CF5A0_0x1cf5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CF5A0_0x1cf5a0");
#endif

    switch (ctx->pc) {
        case 0x1cf5f8u: goto label_1cf5f8;
        default: break;
    }

    ctx->pc = 0x1cf5a0u;

    // 0x1cf5a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cf5a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cf5a4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1cf5a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf5a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cf5a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cf5ac: 0x8c62027c  lw          $v0, 0x27C($v1)
    ctx->pc = 0x1cf5acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 636)));
    // 0x1cf5b0: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1CF5B0u;
    {
        const bool branch_taken_0x1cf5b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF5B0u;
        // 0x1cf5b4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf5b0) {
            ctx->pc = 0x1CF5FCu;
            goto label_1cf5fc;
        }
    }
    ctx->pc = 0x1CF5B8u;
    // 0x1cf5b8: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x1cf5b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf5bc: 0xc4610288  lwc1        $f1, 0x288($v1)
    ctx->pc = 0x1cf5bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cf5c0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1cf5c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1cf5c4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1cf5c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1cf5c8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1cf5c8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1cf5cc: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x1cf5ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cf5d0: 0x0  nop
    ctx->pc = 0x1cf5d0u;
    // NOP
    // 0x1cf5d4: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x1CF5D4u;
    {
        const bool branch_taken_0x1cf5d4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CF5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF5D4u;
        // 0x1cf5d8: 0xe4610288  swc1        $f1, 0x288($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 648), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf5d4) {
            ctx->pc = 0x1CF5FCu;
            goto label_1cf5fc;
        }
    }
    ctx->pc = 0x1CF5DCu;
    // 0x1cf5dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cf5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cf5e0: 0x8c640044  lw          $a0, 0x44($v1)
    ctx->pc = 0x1cf5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x1cf5e4: 0xac620278  sw          $v0, 0x278($v1)
    ctx->pc = 0x1cf5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 632), GPR_U32(ctx, 2));
    // 0x1cf5e8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1cf5e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cf5ec: 0xac60027c  sw          $zero, 0x27C($v1)
    ctx->pc = 0x1cf5ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 636), GPR_U32(ctx, 0));
    // 0x1cf5f0: 0xc06bede  jal         func_1AFB78
    ctx->pc = 0x1CF5F0u;
    SET_GPR_U32(ctx, 31, 0x1CF5F8u);
    ctx->pc = 0x1CF5F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF5F0u;
    // 0x1cf5f4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFB78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AFB78u, 0x1CF5F0u, 0x1CF5F8u)) {
        return;
    }
    ctx->pc = 0x1CF5F8u;
label_1cf5f8:
    // 0x1cf5f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cf5f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cf5fc:
    // 0x1cf5fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1CF5FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CF600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF5FCu;
        // 0x1cf600: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF5FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CF604u;
    // 0x1cf604: 0x0  nop
    ctx->pc = 0x1cf604u;
    // NOP
    ctx->pc = 0x1cf608u;
}

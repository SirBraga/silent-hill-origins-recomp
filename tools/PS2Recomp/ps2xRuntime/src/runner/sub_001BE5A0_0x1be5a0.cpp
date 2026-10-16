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

// Function: sub_001BE5A0
// Address: 0x1be5a0 - 0x1be628
void sub_001BE5A0_0x1be5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BE5A0_0x1be5a0");
#endif

    switch (ctx->pc) {
        case 0x1be5d0u: goto label_1be5d0;
        case 0x1be5e8u: goto label_1be5e8;
        default: break;
    }

    ctx->pc = 0x1be5a0u;

    // 0x1be5a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1be5a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1be5a4: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1be5a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1be5a8: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x1be5a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1be5ac: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1be5acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be5b0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1be5b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1be5b4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1be5b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1be5b8: 0x2650003c  addiu       $s0, $s2, 0x3C
    ctx->pc = 0x1be5b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 60));
    // 0x1be5bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1be5bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1be5c0: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x1be5c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1be5c4: 0x3c01c61c  lui         $at, 0xC61C
    ctx->pc = 0x1be5c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50716 << 16));
    // 0x1be5c8: 0x34213c00  ori         $at, $at, 0x3C00
    ctx->pc = 0x1be5c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)15360);
    // 0x1be5cc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1be5ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1be5d0:
    // 0x1be5d0: 0x8e440068  lw          $a0, 0x68($s2)
    ctx->pc = 0x1be5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
    // 0x1be5d4: 0x3c014140  lui         $at, 0x4140
    ctx->pc = 0x1be5d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16704 << 16));
    // 0x1be5d8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1be5d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1be5dc: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1be5dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1be5e0: 0xc085d2a  jal         func_2174A8
    ctx->pc = 0x1BE5E0u;
    SET_GPR_U32(ctx, 31, 0x1BE5E8u);
    ctx->pc = 0x1BE5E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE5E0u;
    // 0x1be5e4: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2174A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2174A8u, 0x1BE5E0u, 0x1BE5E8u)) {
        return;
    }
    ctx->pc = 0x1BE5E8u;
label_1be5e8:
    // 0x1be5e8: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1be5e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1be5ec: 0x0  nop
    ctx->pc = 0x1be5ecu;
    // NOP
    // 0x1be5f0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1BE5F0u;
    {
        const bool branch_taken_0x1be5f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1be5f0) {
            ctx->pc = 0x1BE5F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BE5F0u;
            // 0x1be5f4: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
            ctx->f[20] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BE5F8u;
            goto label_1be5f8;
        }
    }
    ctx->pc = 0x1BE5F8u;
label_1be5f8:
    // 0x1be5f8: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1be5f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1be5fc: 0x621fff4  bgez        $s1, . + 4 + (-0xC << 2)
    ctx->pc = 0x1BE5FCu;
    {
        const bool branch_taken_0x1be5fc = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x1BE600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE5FCu;
        // 0x1be600: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be5fc) {
            ctx->pc = 0x1BE5D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1be5d0;
        }
    }
    ctx->pc = 0x1BE604u;
    // 0x1be604: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x1be604u;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
    // 0x1be608: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1be608u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1be60c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1be60cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1be610: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1be610u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1be614: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1be614u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1be618: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x1be618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1be61c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE61Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE61Cu;
        // 0x1be620: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BE61Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BE624u;
    // 0x1be624: 0x0  nop
    ctx->pc = 0x1be624u;
    // NOP
    ctx->pc = 0x1be628u;
}

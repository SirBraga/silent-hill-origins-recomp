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

// Function: sub_001EFAA8
// Address: 0x1efaa8 - 0x1efb30
void sub_001EFAA8_0x1efaa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EFAA8_0x1efaa8");
#endif

    switch (ctx->pc) {
        case 0x1efb20u: goto label_1efb20;
        default: break;
    }

    ctx->pc = 0x1efaa8u;

    // 0x1efaa8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1efaa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1efaac: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1efaacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x1efab0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1efab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1efab4: 0x8c438918  lw          $v1, -0x76E8($v0)
    ctx->pc = 0x1efab4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6F8918u));
    // 0x1efab8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1efab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1efabc: 0x14430019  bne         $v0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1EFABCu;
    {
        const bool branch_taken_0x1efabc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1EFAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFABCu;
        // 0x1efac0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efabc) {
            ctx->pc = 0x1EFB24u;
            goto label_1efb24;
        }
    }
    ctx->pc = 0x1EFAC4u;
    // 0x1efac4: 0xc481001c  lwc1        $f1, 0x1C($a0)
    ctx->pc = 0x1efac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1efac8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1efac8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1efacc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1efaccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1efad0: 0x0  nop
    ctx->pc = 0x1efad0u;
    // NOP
    // 0x1efad4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1efad4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1efad8: 0x0  nop
    ctx->pc = 0x1efad8u;
    // NOP
    // 0x1efadc: 0x45030009  bc1tl       . + 4 + (0x9 << 2)
    ctx->pc = 0x1EFADCu;
    {
        const bool branch_taken_0x1efadc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1efadc) {
            ctx->pc = 0x1EFAE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EFADCu;
            // 0x1efae0: 0x8ca20004  lw          $v0, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EFB04u;
            goto label_1efb04;
        }
    }
    ctx->pc = 0x1EFAE4u;
    // 0x1efae4: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x1efae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1efae8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1efae8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1efaec: 0x0  nop
    ctx->pc = 0x1efaecu;
    // NOP
    // 0x1efaf0: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1efaf0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1efaf4: 0x0  nop
    ctx->pc = 0x1efaf4u;
    // NOP
    // 0x1efaf8: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x1EFAF8u;
    {
        const bool branch_taken_0x1efaf8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1efaf8) {
            ctx->pc = 0x1EFB24u;
            goto label_1efb24;
        }
    }
    ctx->pc = 0x1EFB00u;
    // 0x1efb00: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1efb00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1efb04:
    // 0x1efb04: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x1efb04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
    // 0x1efb08: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1efb08u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1efb0c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1efb0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1efb10: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1EFB10u;
    {
        const bool branch_taken_0x1efb10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1efb10) {
            ctx->pc = 0x1EFB14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EFB10u;
            // 0x1efb14: 0xc44c0004  lwc1        $f12, 0x4($v0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EFB18u;
            goto label_1efb18;
        }
    }
    ctx->pc = 0x1EFB18u;
label_1efb18:
    // 0x1efb18: 0xc07bcf4  jal         func_1EF3D0
    ctx->pc = 0x1EFB18u;
    SET_GPR_U32(ctx, 31, 0x1EFB20u);
    ctx->pc = 0x1EFB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFB18u;
    // 0x1efb1c: 0x8c45000c  lw          $a1, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EF3D0u, 0x1EFB18u, 0x1EFB20u)) {
        return;
    }
    ctx->pc = 0x1EFB20u;
label_1efb20:
    // 0x1efb20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1efb20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1efb24:
    // 0x1efb24: 0x3e00008  jr          $ra
    ctx->pc = 0x1EFB24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EFB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFB24u;
        // 0x1efb28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EFB24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EFB2Cu;
    // 0x1efb2c: 0x0  nop
    ctx->pc = 0x1efb2cu;
    // NOP
    ctx->pc = 0x1efb30u;
}

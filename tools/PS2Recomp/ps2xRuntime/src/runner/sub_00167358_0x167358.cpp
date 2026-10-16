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

// Function: sub_00167358
// Address: 0x167358 - 0x1673f0
void sub_00167358_0x167358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00167358_0x167358");
#endif

    switch (ctx->pc) {
        case 0x167380u: goto label_167380;
        case 0x1673a8u: goto label_1673a8;
        case 0x1673dcu: goto label_1673dc;
        default: break;
    }

    ctx->pc = 0x167358u;

    // 0x167358: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x167358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16735c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x16735cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x167360: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x167360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x167364: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x167364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x167368: 0x8c43870c  lw          $v1, -0x78F4($v0)
    ctx->pc = 0x167368u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x33870Cu));
    // 0x16736c: 0x8c640028  lw          $a0, 0x28($v1)
    ctx->pc = 0x16736cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x167370: 0x1080001c  beqz        $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x167370u;
    {
        const bool branch_taken_0x167370 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x167374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167370u;
        // 0x167374: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167370) {
            ctx->pc = 0x1673E4u;
            goto label_1673e4;
        }
    }
    ctx->pc = 0x167378u;
    // 0x167378: 0xc076200  jal         func_1D8800
    ctx->pc = 0x167378u;
    SET_GPR_U32(ctx, 31, 0x167380u);
    ctx->pc = 0x1D8800u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D8800u, 0x167378u, 0x167380u)) {
        return;
    }
    ctx->pc = 0x167380u;
label_167380:
    // 0x167380: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x167380u;
    {
        const bool branch_taken_0x167380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x167384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167380u;
        // 0x167384: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167380) {
            ctx->pc = 0x1673E0u;
            goto label_1673e0;
        }
    }
    ctx->pc = 0x167388u;
    // 0x167388: 0x8c428670  lw          $v0, -0x7990($v0)
    ctx->pc = 0x167388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936176)));
    // 0x16738c: 0x3c013d8f  lui         $at, 0x3D8F
    ctx->pc = 0x16738cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15759 << 16));
    // 0x167390: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x167390u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
    // 0x167394: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x167394u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x167398: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x167398u;
    {
        const bool branch_taken_0x167398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16739Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167398u;
        // 0x16739c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167398) {
            ctx->pc = 0x1673CCu;
            goto label_1673cc;
        }
    }
    ctx->pc = 0x1673A0u;
    // 0x1673a0: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x1673a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1673a4: 0x0  nop
    ctx->pc = 0x1673a4u;
    // NOP
label_1673a8:
    // 0x1673a8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1673a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1673ac: 0x0  nop
    ctx->pc = 0x1673acu;
    // NOP
    // 0x1673b0: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x1673B0u;
    {
        const bool branch_taken_0x1673b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1673b0) {
            ctx->pc = 0x1673B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1673B0u;
            // 0x1673b4: 0x8c42006c  lw          $v0, 0x6C($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1673C4u;
            goto label_1673c4;
        }
    }
    ctx->pc = 0x1673B8u;
    // 0x1673b8: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x1673b8u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x1673bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1673bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1673c0: 0x8c42006c  lw          $v0, 0x6C($v0)
    ctx->pc = 0x1673c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_1673c4:
    // 0x1673c4: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1673C4u;
    {
        const bool branch_taken_0x1673c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1673c4) {
            ctx->pc = 0x1673C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1673C4u;
            // 0x1673c8: 0xc4400010  lwc1        $f0, 0x10($v0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1673A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1673a8;
        }
    }
    ctx->pc = 0x1673CCu;
label_1673cc:
    // 0x1673cc: 0x52000005  beql        $s0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1673CCu;
    {
        const bool branch_taken_0x1673cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1673cc) {
            ctx->pc = 0x1673D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1673CCu;
            // 0x1673d0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1673E4u;
            goto label_1673e4;
        }
    }
    ctx->pc = 0x1673D4u;
    // 0x1673d4: 0xc059cfc  jal         func_1673F0
    ctx->pc = 0x1673D4u;
    SET_GPR_U32(ctx, 31, 0x1673DCu);
    ctx->pc = 0x1673D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1673D4u;
    // 0x1673d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1673F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1673F0u, 0x1673D4u, 0x1673DCu)) {
        return;
    }
    ctx->pc = 0x1673DCu;
label_1673dc:
    // 0x1673dc: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1673dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_1673e0:
    // 0x1673e0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1673e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1673e4:
    // 0x1673e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1673e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1673e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1673E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1673ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1673E8u;
        // 0x1673ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1673E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1673F0u;
}

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

// Function: sub_0026C2C8
// Address: 0x26c2c8 - 0x26c3a0
void sub_0026C2C8_0x26c2c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026C2C8_0x26c2c8");
#endif

    switch (ctx->pc) {
        case 0x26c33cu: goto label_26c33c;
        default: break;
    }

    ctx->pc = 0x26c2c8u;

    // 0x26c2c8: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x26c2c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x26c2cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26c2ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c2d0: 0x415c3  sra         $v0, $a0, 23
    ctx->pc = 0x26c2d0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 23));
    // 0x26c2d4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x26c2d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x26c2d8: 0x2445ff81  addiu       $a1, $v0, -0x7F
    ctx->pc = 0x26c2d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967169));
    // 0x26c2dc: 0x28a30017  slti        $v1, $a1, 0x17
    ctx->pc = 0x26c2dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)23) ? 1 : 0);
    // 0x26c2e0: 0x50600027  beql        $v1, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x26C2E0u;
    {
        const bool branch_taken_0x26c2e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c2e0) {
            ctx->pc = 0x26C2E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26C2E0u;
            // 0x26c2e4: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26C380u;
            goto label_26c380;
        }
    }
    ctx->pc = 0x26C2E8u;
    // 0x26c2e8: 0x4a3000f  bgezl       $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x26C2E8u;
    {
        const bool branch_taken_0x26c2e8 = (GPR_S64(ctx, 5) >= 0);
        if (branch_taken_0x26c2e8) {
            ctx->pc = 0x26C2ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26C2E8u;
            // 0x26c2ec: 0x3c02007f  lui         $v0, 0x7F (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26C328u;
            goto label_26c328;
        }
    }
    ctx->pc = 0x26C2F0u;
    // 0x26c2f0: 0x3c017149  lui         $at, 0x7149
    ctx->pc = 0x26c2f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29001 << 16));
    // 0x26c2f4: 0x3421f2ca  ori         $at, $at, 0xF2CA
    ctx->pc = 0x26c2f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62154);
    // 0x26c2f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26c2f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26c2fc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x26c2fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26c300: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x26c300u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x26c304: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x26c304u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26c308: 0x45000021  bc1f        . + 4 + (0x21 << 2)
    ctx->pc = 0x26C308u;
    {
        const bool branch_taken_0x26c308 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26c308) {
            ctx->pc = 0x26C390u;
            goto label_26c390;
        }
    }
    ctx->pc = 0x26C310u;
    // 0x26c310: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26C310u;
    {
        const bool branch_taken_0x26c310 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x26C314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C310u;
        // 0x26c314: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c310) {
            ctx->pc = 0x26C320u;
            goto label_26c320;
        }
    }
    ctx->pc = 0x26C318u;
    // 0x26c318: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x26C318u;
    {
        const bool branch_taken_0x26c318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C318u;
        // 0x26c31c: 0x3c048000  lui         $a0, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c318) {
            ctx->pc = 0x26C390u;
            goto label_26c390;
        }
    }
    ctx->pc = 0x26C320u;
label_26c320:
    // 0x26c320: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x26C320u;
    {
        const bool branch_taken_0x26c320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C320u;
        // 0x26c324: 0x44200b  movn        $a0, $v0, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c320) {
            ctx->pc = 0x26C390u;
            goto label_26c390;
        }
    }
    ctx->pc = 0x26C328u;
label_26c328:
    // 0x26c328: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x26c328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x26c32c: 0xa23007  srav        $a2, $v0, $a1
    ctx->pc = 0x26c32cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x26c330: 0x861824  and         $v1, $a0, $a2
    ctx->pc = 0x26c330u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x26c334: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x26C334u;
    {
        const bool branch_taken_0x26c334 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26c334) {
            ctx->pc = 0x26C344u;
            goto label_26c344;
        }
    }
    ctx->pc = 0x26C33Cu;
label_26c33c:
    // 0x26c33c: 0x3e00008  jr          $ra
    ctx->pc = 0x26C33Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26C340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C33Cu;
        // 0x26c340: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26C33Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26C344u;
label_26c344:
    // 0x26c344: 0x3c017149  lui         $at, 0x7149
    ctx->pc = 0x26c344u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29001 << 16));
    // 0x26c348: 0x3421f2ca  ori         $at, $at, 0xF2CA
    ctx->pc = 0x26c348u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62154);
    // 0x26c34c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26c34cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26c350: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x26c350u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26c354: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x26c354u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x26c358: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x26c358u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26c35c: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x26C35Cu;
    {
        const bool branch_taken_0x26c35c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26c35c) {
            ctx->pc = 0x26C390u;
            goto label_26c390;
        }
    }
    ctx->pc = 0x26C364u;
    // 0x26c364: 0x18800003  blez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26C364u;
    {
        const bool branch_taken_0x26c364 = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x26C368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C364u;
        // 0x26c368: 0x3c020080  lui         $v0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c364) {
            ctx->pc = 0x26C374u;
            goto label_26c374;
        }
    }
    ctx->pc = 0x26C36Cu;
    // 0x26c36c: 0xa21007  srav        $v0, $v0, $a1
    ctx->pc = 0x26c36cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x26c370: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x26c370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_26c374:
    // 0x26c374: 0x61027  nor         $v0, $zero, $a2
    ctx->pc = 0x26c374u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 6)));
    // 0x26c378: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x26C378u;
    {
        const bool branch_taken_0x26c378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C378u;
        // 0x26c37c: 0x822024  and         $a0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c378) {
            ctx->pc = 0x26C390u;
            goto label_26c390;
        }
    }
    ctx->pc = 0x26C380u;
label_26c380:
    // 0x26c380: 0x14a2ffee  bne         $a1, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x26C380u;
    {
        const bool branch_taken_0x26c380 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x26c380) {
            ctx->pc = 0x26C33Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26c33c;
        }
    }
    ctx->pc = 0x26C388u;
    // 0x26c388: 0x3e00008  jr          $ra
    ctx->pc = 0x26C388u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26C38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C388u;
        // 0x26c38c: 0x460c6000  add.s       $f0, $f12, $f12 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26C388u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26C390u;
label_26c390:
    // 0x26c390: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x26c390u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26c394: 0x3e00008  jr          $ra
    ctx->pc = 0x26C394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26C398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C394u;
        // 0x26c398: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26C394u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26C39Cu;
    // 0x26c39c: 0x0  nop
    ctx->pc = 0x26c39cu;
    // NOP
    ctx->pc = 0x26c3a0u;
}

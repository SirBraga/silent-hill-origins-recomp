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

// Function: sub_0026C4A8
// Address: 0x26c4a8 - 0x26c590
void sub_0026C4A8_0x26c4a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026C4A8_0x26c4a8");
#endif

    switch (ctx->pc) {
        case 0x26c528u: goto label_26c528;
        default: break;
    }

    ctx->pc = 0x26c4a8u;

    // 0x26c4a8: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x26c4a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x26c4ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26c4acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c4b0: 0x415c3  sra         $v0, $a0, 23
    ctx->pc = 0x26c4b0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 23));
    // 0x26c4b4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x26c4b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x26c4b8: 0x2445ff81  addiu       $a1, $v0, -0x7F
    ctx->pc = 0x26c4b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967169));
    // 0x26c4bc: 0x28a30017  slti        $v1, $a1, 0x17
    ctx->pc = 0x26c4bcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)23) ? 1 : 0);
    // 0x26c4c0: 0x5060002b  beql        $v1, $zero, . + 4 + (0x2B << 2)
    ctx->pc = 0x26C4C0u;
    {
        const bool branch_taken_0x26c4c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c4c0) {
            ctx->pc = 0x26C4C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26C4C0u;
            // 0x26c4c4: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26C570u;
            goto label_26c570;
        }
    }
    ctx->pc = 0x26C4C8u;
    // 0x26c4c8: 0x4a30012  bgezl       $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x26C4C8u;
    {
        const bool branch_taken_0x26c4c8 = (GPR_S64(ctx, 5) >= 0);
        if (branch_taken_0x26c4c8) {
            ctx->pc = 0x26C4CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26C4C8u;
            // 0x26c4cc: 0x3c02007f  lui         $v0, 0x7F (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26C514u;
            goto label_26c514;
        }
    }
    ctx->pc = 0x26C4D0u;
    // 0x26c4d0: 0x3c017149  lui         $at, 0x7149
    ctx->pc = 0x26c4d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29001 << 16));
    // 0x26c4d4: 0x3421f2ca  ori         $at, $at, 0xF2CA
    ctx->pc = 0x26c4d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62154);
    // 0x26c4d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26c4d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26c4dc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x26c4dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26c4e0: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x26c4e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x26c4e4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x26c4e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26c4e8: 0x45000025  bc1f        . + 4 + (0x25 << 2)
    ctx->pc = 0x26C4E8u;
    {
        const bool branch_taken_0x26c4e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26c4e8) {
            ctx->pc = 0x26C580u;
            goto label_26c580;
        }
    }
    ctx->pc = 0x26C4F0u;
    // 0x26c4f0: 0x4800003  bltz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26C4F0u;
    {
        const bool branch_taken_0x26c4f0 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x26C4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C4F0u;
        // 0x26c4f4: 0x3c027fff  lui         $v0, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c4f0) {
            ctx->pc = 0x26C500u;
            goto label_26c500;
        }
    }
    ctx->pc = 0x26C4F8u;
    // 0x26c4f8: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x26C4F8u;
    {
        const bool branch_taken_0x26c4f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C4F8u;
        // 0x26c4fc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c4f8) {
            ctx->pc = 0x26C580u;
            goto label_26c580;
        }
    }
    ctx->pc = 0x26C500u;
label_26c500:
    // 0x26c500: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x26c500u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x26c504: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x26c504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x26c508: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x26c508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x26c50c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x26C50Cu;
    {
        const bool branch_taken_0x26c50c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C50Cu;
        // 0x26c510: 0x62200b  movn        $a0, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c50c) {
            ctx->pc = 0x26C580u;
            goto label_26c580;
        }
    }
    ctx->pc = 0x26C514u;
label_26c514:
    // 0x26c514: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x26c514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x26c518: 0xa23007  srav        $a2, $v0, $a1
    ctx->pc = 0x26c518u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x26c51c: 0x861824  and         $v1, $a0, $a2
    ctx->pc = 0x26c51cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x26c520: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x26C520u;
    {
        const bool branch_taken_0x26c520 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26c520) {
            ctx->pc = 0x26C530u;
            goto label_26c530;
        }
    }
    ctx->pc = 0x26C528u;
label_26c528:
    // 0x26c528: 0x3e00008  jr          $ra
    ctx->pc = 0x26C528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26C52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C528u;
        // 0x26c52c: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26C528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26C530u;
label_26c530:
    // 0x26c530: 0x3c017149  lui         $at, 0x7149
    ctx->pc = 0x26c530u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29001 << 16));
    // 0x26c534: 0x3421f2ca  ori         $at, $at, 0xF2CA
    ctx->pc = 0x26c534u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62154);
    // 0x26c538: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26c538u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26c53c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x26c53cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26c540: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x26c540u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x26c544: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x26c544u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26c548: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x26C548u;
    {
        const bool branch_taken_0x26c548 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26c548) {
            ctx->pc = 0x26C580u;
            goto label_26c580;
        }
    }
    ctx->pc = 0x26C550u;
    // 0x26c550: 0x4810005  bgez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26C550u;
    {
        const bool branch_taken_0x26c550 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x26C554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C550u;
        // 0x26c554: 0x61027  nor         $v0, $zero, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c550) {
            ctx->pc = 0x26C568u;
            goto label_26c568;
        }
    }
    ctx->pc = 0x26C558u;
    // 0x26c558: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x26c558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x26c55c: 0xa21007  srav        $v0, $v0, $a1
    ctx->pc = 0x26c55cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x26c560: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x26c560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x26c564: 0x61027  nor         $v0, $zero, $a2
    ctx->pc = 0x26c564u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 6)));
label_26c568:
    // 0x26c568: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x26C568u;
    {
        const bool branch_taken_0x26c568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C568u;
        // 0x26c56c: 0x822024  and         $a0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c568) {
            ctx->pc = 0x26C580u;
            goto label_26c580;
        }
    }
    ctx->pc = 0x26C570u;
label_26c570:
    // 0x26c570: 0x14a2ffed  bne         $a1, $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x26C570u;
    {
        const bool branch_taken_0x26c570 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x26c570) {
            ctx->pc = 0x26C528u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26c528;
        }
    }
    ctx->pc = 0x26C578u;
    // 0x26c578: 0x3e00008  jr          $ra
    ctx->pc = 0x26C578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26C57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C578u;
        // 0x26c57c: 0x460c6000  add.s       $f0, $f12, $f12 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26C578u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26C580u;
label_26c580:
    // 0x26c580: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x26c580u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26c584: 0x3e00008  jr          $ra
    ctx->pc = 0x26C584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26C588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C584u;
        // 0x26c588: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26C584u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26C58Cu;
    // 0x26c58c: 0x0  nop
    ctx->pc = 0x26c58cu;
    // NOP
    ctx->pc = 0x26c590u;
}

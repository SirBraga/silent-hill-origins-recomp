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

// Function: sub_001C38A8
// Address: 0x1c38a8 - 0x1c3930
void sub_001C38A8_0x1c38a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C38A8_0x1c38a8");
#endif

    switch (ctx->pc) {
        case 0x1c38d0u: goto label_1c38d0;
        default: break;
    }

    ctx->pc = 0x1c38a8u;

    // 0x1c38a8: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x1c38a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c38ac: 0x28a2001b  slti        $v0, $a1, 0x1B
    ctx->pc = 0x1c38acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)27) ? 1 : 0);
    // 0x1c38b0: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1C38B0u;
    {
        const bool branch_taken_0x1c38b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C38B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C38B0u;
        // 0x1c38b4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c38b0) {
            ctx->pc = 0x1C3908u;
            goto label_1c3908;
        }
    }
    ctx->pc = 0x1C38B8u;
    // 0x1c38b8: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x1c38b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x1c38bc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c38bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c38c0: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x1c38c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1c38c4: 0x244202c0  addiu       $v0, $v0, 0x2C0
    ctx->pc = 0x1c38c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 704));
    // 0x1c38c8: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x1c38c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1c38cc: 0x0  nop
    ctx->pc = 0x1c38ccu;
    // NOP
label_1c38d0:
    // 0x1c38d0: 0x8c62ffd4  lw          $v0, -0x2C($v1)
    ctx->pc = 0x1c38d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967252)));
    // 0x1c38d4: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C38D4u;
    {
        const bool branch_taken_0x1c38d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c38d4) {
            ctx->pc = 0x1C38D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C38D4u;
            // 0x1c38d8: 0xc4800284  lwc1        $f0, 0x284($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C38F4u;
            goto label_1c38f4;
        }
    }
    ctx->pc = 0x1C38DCu;
    // 0x1c38dc: 0x54460007  bnel        $v0, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C38DCu;
    {
        const bool branch_taken_0x1c38dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x1c38dc) {
            ctx->pc = 0x1C38E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C38DCu;
            // 0x1c38e0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C38FCu;
            goto label_1c38fc;
        }
    }
    ctx->pc = 0x1C38E4u;
    // 0x1c38e4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1c38e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c38e8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C38E8u;
    {
        const bool branch_taken_0x1c38e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c38e8) {
            ctx->pc = 0x1C38ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C38E8u;
            // 0x1c38ec: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C38FCu;
            goto label_1c38fc;
        }
    }
    ctx->pc = 0x1C38F0u;
    // 0x1c38f0: 0xc4800284  lwc1        $f0, 0x284($a0)
    ctx->pc = 0x1c38f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c38f4:
    // 0x1c38f4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1c38f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c38f8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1c38f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1c38fc:
    // 0x1c38fc: 0x28a2001b  slti        $v0, $a1, 0x1B
    ctx->pc = 0x1c38fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)27) ? 1 : 0);
    // 0x1c3900: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x1C3900u;
    {
        const bool branch_taken_0x1c3900 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C3904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3900u;
        // 0x1c3904: 0x24630034  addiu       $v1, $v1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3900) {
            ctx->pc = 0x1C38D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c38d0;
        }
    }
    ctx->pc = 0x1C3908u;
label_1c3908:
    // 0x1c3908: 0x3c01437a  lui         $at, 0x437A
    ctx->pc = 0x1c3908u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17274 << 16));
    // 0x1c390c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c390cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c3910: 0x0  nop
    ctx->pc = 0x1c3910u;
    // NOP
    // 0x1c3914: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c3914u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c3918: 0x0  nop
    ctx->pc = 0x1c3918u;
    // NOP
    // 0x1c391c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1C391Cu;
    {
        const bool branch_taken_0x1c391c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c391c) {
            ctx->pc = 0x1C3920u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C391Cu;
            // 0x1c3920: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C3924u;
            goto label_1c3924;
        }
    }
    ctx->pc = 0x1C3924u;
label_1c3924:
    // 0x1c3924: 0x3e00008  jr          $ra
    ctx->pc = 0x1C3924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C3928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3924u;
        // 0x1c3928: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C3924u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C392Cu;
    // 0x1c392c: 0x0  nop
    ctx->pc = 0x1c392cu;
    // NOP
    ctx->pc = 0x1c3930u;
}

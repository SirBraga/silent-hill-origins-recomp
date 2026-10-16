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

// Function: sub_001A0A00
// Address: 0x1a0a00 - 0x1a0ab8
void sub_001A0A00_0x1a0a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A0A00_0x1a0a00");
#endif

    switch (ctx->pc) {
        case 0x1a0a38u: goto label_1a0a38;
        default: break;
    }

    ctx->pc = 0x1a0a00u;

    // 0x1a0a00: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x1a0a00u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0a04: 0x24030098  addiu       $v1, $zero, 0x98
    ctx->pc = 0x1a0a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
    // 0x1a0a08: 0x8d05080c  lw          $a1, 0x80C($t0)
    ctx->pc = 0x1a0a08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 2060)));
    // 0x1a0a0c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1a0a0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0a10: 0x8d060804  lw          $a2, 0x804($t0)
    ctx->pc = 0x1a0a10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 2052)));
    // 0x1a0a14: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x1a0a14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1a0a18: 0xc5000814  lwc1        $f0, 0x814($t0)
    ctx->pc = 0x1a0a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 2068)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a0a1c: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x1a0a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1a0a20: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a0a20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a0a24: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x1a0a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
    // 0x1a0a28: 0x18400021  blez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1A0A28u;
    {
        const bool branch_taken_0x1a0a28 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1A0A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0A28u;
        // 0x1a0a2c: 0x46006040  add.s       $f1, $f12, $f0 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0a28) {
            ctx->pc = 0x1A0AB0u;
            goto label_1a0ab0;
        }
    }
    ctx->pc = 0x1A0A30u;
    // 0x1a0a30: 0x240a0098  addiu       $t2, $zero, 0x98
    ctx->pc = 0x1a0a30u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
    // 0x1a0a34: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1a0a34u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a0a38:
    // 0x1a0a38: 0xaa2018  mult        $a0, $a1, $t2
    ctx->pc = 0x1a0a38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1a0a3c: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x1a0a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1a0a40: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1a0a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1a0a44: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x1a0a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x1a0a48: 0x1231021  addu        $v0, $t1, $v1
    ctx->pc = 0x1a0a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x1a0a4c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1a0a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a0a50: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1a0a50u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a0a54: 0x0  nop
    ctx->pc = 0x1a0a54u;
    // NOP
    // 0x1a0a58: 0x4502000c  bc1fl       . + 4 + (0xC << 2)
    ctx->pc = 0x1A0A58u;
    {
        const bool branch_taken_0x1a0a58 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a0a58) {
            ctx->pc = 0x1A0A5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A0A58u;
            // 0x1a0a5c: 0x8d05080c  lw          $a1, 0x80C($t0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 2060)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A0A8Cu;
            goto label_1a0a8c;
        }
    }
    ctx->pc = 0x1A0A60u;
    // 0x1a0a60: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1a0a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a0a64: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x1a0a64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a0a68: 0x0  nop
    ctx->pc = 0x1a0a68u;
    // NOP
    // 0x1a0a6c: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x1A0A6Cu;
    {
        const bool branch_taken_0x1a0a6c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a0a6c) {
            ctx->pc = 0x1A0A70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A0A6Cu;
            // 0x1a0a70: 0x8d05080c  lw          $a1, 0x80C($t0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 2060)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A0A8Cu;
            goto label_1a0a8c;
        }
    }
    ctx->pc = 0x1A0A74u;
    // 0x1a0a74: 0xad070830  sw          $a3, 0x830($t0)
    ctx->pc = 0x1a0a74u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 2096), GPR_U32(ctx, 7));
    // 0x1a0a78: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x1a0a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1a0a7c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1a0a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1a0a80: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x1a0a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
    // 0x1a0a84: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0A84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0A84u;
        // 0x1a0a88: 0x491021  addu        $v0, $v0, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0A84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A0A8Cu;
label_1a0a8c:
    // 0x1a0a8c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1a0a8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1a0a90: 0x8d060804  lw          $a2, 0x804($t0)
    ctx->pc = 0x1a0a90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 2052)));
    // 0x1a0a94: 0xaa1018  mult        $v0, $a1, $t2
    ctx->pc = 0x1a0a94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1a0a98: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x1a0a98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1a0a9c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1a0a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1a0aa0: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x1a0aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x1a0aa4: 0xe3182a  slt         $v1, $a3, $v1
    ctx->pc = 0x1a0aa4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1a0aa8: 0x1460ffe3  bnez        $v1, . + 4 + (-0x1D << 2)
    ctx->pc = 0x1A0AA8u;
    {
        const bool branch_taken_0x1a0aa8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A0AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0AA8u;
        // 0x1a0aac: 0x2529000c  addiu       $t1, $t1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0aa8) {
            ctx->pc = 0x1A0A38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a0a38;
        }
    }
    ctx->pc = 0x1A0AB0u;
label_1a0ab0:
    // 0x1a0ab0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0AB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0AB0u;
        // 0x1a0ab4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0AB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A0AB8u;
}

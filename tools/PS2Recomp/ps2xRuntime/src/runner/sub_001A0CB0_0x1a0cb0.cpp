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

// Function: sub_001A0CB0
// Address: 0x1a0cb0 - 0x1a0dd8
void sub_001A0CB0_0x1a0cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A0CB0_0x1a0cb0");
#endif

    ctx->pc = 0x1a0cb0u;

    // 0x1a0cb0: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x1a0cb0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a0cb4: 0x24023d3c  addiu       $v0, $zero, 0x3D3C
    ctx->pc = 0x1a0cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15676));
    // 0x1a0cb8: 0x10620037  beq         $v1, $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x1A0CB8u;
    {
        const bool branch_taken_0x1a0cb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A0CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0CB8u;
        // 0x1a0cbc: 0x28623d3d  slti        $v0, $v1, 0x3D3D (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)15677) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0cb8) {
            ctx->pc = 0x1A0D98u;
            goto label_1a0d98;
        }
    }
    ctx->pc = 0x1A0CC0u;
    // 0x1a0cc0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1A0CC0u;
    {
        const bool branch_taken_0x1a0cc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0CC0u;
        // 0x1a0cc4: 0x2402003e  addiu       $v0, $zero, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0cc0) {
            ctx->pc = 0x1A0CFCu;
            goto label_1a0cfc;
        }
    }
    ctx->pc = 0x1A0CC8u;
    // 0x1a0cc8: 0x10620021  beq         $v1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1A0CC8u;
    {
        const bool branch_taken_0x1a0cc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A0CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0CC8u;
        // 0x1a0ccc: 0x2862003f  slti        $v0, $v1, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)63) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0cc8) {
            ctx->pc = 0x1A0D50u;
            goto label_1a0d50;
        }
    }
    ctx->pc = 0x1A0CD0u;
    // 0x1a0cd0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A0CD0u;
    {
        const bool branch_taken_0x1a0cd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0CD0u;
        // 0x1a0cd4: 0x2402003c  addiu       $v0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0cd0) {
            ctx->pc = 0x1A0CE8u;
            goto label_1a0ce8;
        }
    }
    ctx->pc = 0x1A0CD8u;
    // 0x1a0cd8: 0x10620023  beq         $v1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1A0CD8u;
    {
        const bool branch_taken_0x1a0cd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A0CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0CD8u;
        // 0x1a0cdc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0cd8) {
            ctx->pc = 0x1A0D68u;
            goto label_1a0d68;
        }
    }
    ctx->pc = 0x1A0CE0u;
    // 0x1a0ce0: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x1A0CE0u;
    {
        const bool branch_taken_0x1a0ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0ce0) {
            ctx->pc = 0x1A0DD0u;
            goto label_1a0dd0;
        }
    }
    ctx->pc = 0x1A0CE8u;
label_1a0ce8:
    // 0x1a0ce8: 0x24023d21  addiu       $v0, $zero, 0x3D21
    ctx->pc = 0x1a0ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15649));
    // 0x1a0cec: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1A0CECu;
    {
        const bool branch_taken_0x1a0cec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A0CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0CECu;
        // 0x1a0cf0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0cec) {
            ctx->pc = 0x1A0D38u;
            goto label_1a0d38;
        }
    }
    ctx->pc = 0x1A0CF4u;
    // 0x1a0cf4: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x1A0CF4u;
    {
        const bool branch_taken_0x1a0cf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0cf4) {
            ctx->pc = 0x1A0DD0u;
            goto label_1a0dd0;
        }
    }
    ctx->pc = 0x1A0CFCu;
label_1a0cfc:
    // 0x1a0cfc: 0x24023d3e  addiu       $v0, $zero, 0x3D3E
    ctx->pc = 0x1a0cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15678));
    // 0x1a0d00: 0x1062001f  beq         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1A0D00u;
    {
        const bool branch_taken_0x1a0d00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A0D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0D00u;
        // 0x1a0d04: 0x28623d3e  slti        $v0, $v1, 0x3D3E (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)15678) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0d00) {
            ctx->pc = 0x1A0D80u;
            goto label_1a0d80;
        }
    }
    ctx->pc = 0x1A0D08u;
    // 0x1a0d08: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A0D08u;
    {
        const bool branch_taken_0x1a0d08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A0D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0D08u;
        // 0x1a0d0c: 0x24023e3c  addiu       $v0, $zero, 0x3E3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15932));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0d08) {
            ctx->pc = 0x1A0D20u;
            goto label_1a0d20;
        }
    }
    ctx->pc = 0x1A0D10u;
    // 0x1a0d10: 0x10620027  beq         $v1, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1A0D10u;
    {
        const bool branch_taken_0x1a0d10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A0D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0D10u;
        // 0x1a0d14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0d10) {
            ctx->pc = 0x1A0DB0u;
            goto label_1a0db0;
        }
    }
    ctx->pc = 0x1A0D18u;
    // 0x1a0d18: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x1A0D18u;
    {
        const bool branch_taken_0x1a0d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0d18) {
            ctx->pc = 0x1A0DD0u;
            goto label_1a0dd0;
        }
    }
    ctx->pc = 0x1A0D20u;
label_1a0d20:
    // 0x1a0d20: 0x460c7032  c.eq.s      $f14, $f12
    ctx->pc = 0x1a0d20u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[14], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a0d24: 0x0  nop
    ctx->pc = 0x1a0d24u;
    // NOP
    // 0x1a0d28: 0x45010029  bc1t        . + 4 + (0x29 << 2)
    ctx->pc = 0x1A0D28u;
    {
        const bool branch_taken_0x1a0d28 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A0D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0D28u;
        // 0x1a0d2c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0d28) {
            ctx->pc = 0x1A0DD0u;
            goto label_1a0dd0;
        }
    }
    ctx->pc = 0x1A0D30u;
    // 0x1a0d30: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0D30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0D30u;
        // 0x1a0d34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0D30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A0D38u;
label_1a0d38:
    // 0x1a0d38: 0x460c7032  c.eq.s      $f14, $f12
    ctx->pc = 0x1a0d38u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[14], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a0d3c: 0x0  nop
    ctx->pc = 0x1a0d3cu;
    // NOP
    // 0x1a0d40: 0x45000023  bc1f        . + 4 + (0x23 << 2)
    ctx->pc = 0x1A0D40u;
    {
        const bool branch_taken_0x1a0d40 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A0D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0D40u;
        // 0x1a0d44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0d40) {
            ctx->pc = 0x1A0DD0u;
            goto label_1a0dd0;
        }
    }
    ctx->pc = 0x1A0D48u;
    // 0x1a0d48: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0D48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0D48u;
        // 0x1a0d4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0D48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A0D50u;
label_1a0d50:
    // 0x1a0d50: 0x460e6034  c.lt.s      $f12, $f14
    ctx->pc = 0x1a0d50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[14])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a0d54: 0x0  nop
    ctx->pc = 0x1a0d54u;
    // NOP
    // 0x1a0d58: 0x4501001d  bc1t        . + 4 + (0x1D << 2)
    ctx->pc = 0x1A0D58u;
    {
        const bool branch_taken_0x1a0d58 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A0D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0D58u;
        // 0x1a0d5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0d58) {
            ctx->pc = 0x1A0DD0u;
            goto label_1a0dd0;
        }
    }
    ctx->pc = 0x1A0D60u;
    // 0x1a0d60: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0D60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0D60u;
        // 0x1a0d64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0D60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A0D68u;
label_1a0d68:
    // 0x1a0d68: 0x460c7034  c.lt.s      $f14, $f12
    ctx->pc = 0x1a0d68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[14], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a0d6c: 0x0  nop
    ctx->pc = 0x1a0d6cu;
    // NOP
    // 0x1a0d70: 0x45010017  bc1t        . + 4 + (0x17 << 2)
    ctx->pc = 0x1A0D70u;
    {
        const bool branch_taken_0x1a0d70 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A0D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0D70u;
        // 0x1a0d74: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0d70) {
            ctx->pc = 0x1A0DD0u;
            goto label_1a0dd0;
        }
    }
    ctx->pc = 0x1A0D78u;
    // 0x1a0d78: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0D78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0D78u;
        // 0x1a0d7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0D78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A0D80u;
label_1a0d80:
    // 0x1a0d80: 0x460e6036  c.le.s      $f12, $f14
    ctx->pc = 0x1a0d80u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[14])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a0d84: 0x0  nop
    ctx->pc = 0x1a0d84u;
    // NOP
    // 0x1a0d88: 0x45010011  bc1t        . + 4 + (0x11 << 2)
    ctx->pc = 0x1A0D88u;
    {
        const bool branch_taken_0x1a0d88 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A0D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0D88u;
        // 0x1a0d8c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0d88) {
            ctx->pc = 0x1A0DD0u;
            goto label_1a0dd0;
        }
    }
    ctx->pc = 0x1A0D90u;
    // 0x1a0d90: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0D90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0D90u;
        // 0x1a0d94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0D90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A0D98u;
label_1a0d98:
    // 0x1a0d98: 0x460c7036  c.le.s      $f14, $f12
    ctx->pc = 0x1a0d98u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[14], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a0d9c: 0x0  nop
    ctx->pc = 0x1a0d9cu;
    // NOP
    // 0x1a0da0: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x1A0DA0u;
    {
        const bool branch_taken_0x1a0da0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A0DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0DA0u;
        // 0x1a0da4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0da0) {
            ctx->pc = 0x1A0DD0u;
            goto label_1a0dd0;
        }
    }
    ctx->pc = 0x1A0DA8u;
    // 0x1a0da8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0DA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0DA8u;
        // 0x1a0dac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0DA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A0DB0u;
label_1a0db0:
    // 0x1a0db0: 0x460e6036  c.le.s      $f12, $f14
    ctx->pc = 0x1a0db0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[14])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a0db4: 0x0  nop
    ctx->pc = 0x1a0db4u;
    // NOP
    // 0x1a0db8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1A0DB8u;
    {
        const bool branch_taken_0x1a0db8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a0db8) {
            ctx->pc = 0x1A0DD0u;
            goto label_1a0dd0;
        }
    }
    ctx->pc = 0x1A0DC0u;
    // 0x1a0dc0: 0x460d7036  c.le.s      $f14, $f13
    ctx->pc = 0x1a0dc0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[14], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a0dc4: 0x0  nop
    ctx->pc = 0x1a0dc4u;
    // NOP
    // 0x1a0dc8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1A0DC8u;
    {
        const bool branch_taken_0x1a0dc8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a0dc8) {
            ctx->pc = 0x1A0DCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A0DC8u;
            // 0x1a0dcc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A0DD0u;
            goto label_1a0dd0;
        }
    }
    ctx->pc = 0x1A0DD0u;
label_1a0dd0:
    // 0x1a0dd0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0DD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0DD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A0DD8u;
}

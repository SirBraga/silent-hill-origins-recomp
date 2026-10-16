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

// Function: sub_002C6990
// Address: 0x2c6990 - 0x2c6aa0
void sub_002C6990_0x2c6990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C6990_0x2c6990");
#endif

    switch (ctx->pc) {
        case 0x2c6a00u: goto label_2c6a00;
        default: break;
    }

    ctx->pc = 0x2c6990u;

    // 0x2c6990: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2c6990u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6994: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2c6994u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6998: 0x8cc400ac  lw          $a0, 0xAC($a2)
    ctx->pc = 0x2c6998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 172)));
    // 0x2c699c: 0x1080002f  beqz        $a0, . + 4 + (0x2F << 2)
    ctx->pc = 0x2C699Cu;
    {
        const bool branch_taken_0x2c699c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C69A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C699Cu;
        // 0x2c69a0: 0x24030028  addiu       $v1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c699c) {
            ctx->pc = 0x2C6A5Cu;
            goto label_2c6a5c;
        }
    }
    ctx->pc = 0x2C69A4u;
    // 0x2c69a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c69a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c69a8: 0x460d0036  c.le.s      $f0, $f13
    ctx->pc = 0x2c69a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c69ac: 0x0  nop
    ctx->pc = 0x2c69acu;
    // NOP
    // 0x2c69b0: 0x4500002b  bc1f        . + 4 + (0x2B << 2)
    ctx->pc = 0x2C69B0u;
    {
        const bool branch_taken_0x2c69b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C69B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C69B0u;
        // 0x2c69b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c69b0) {
            ctx->pc = 0x2C6A60u;
            goto label_2c6a60;
        }
    }
    ctx->pc = 0x2C69B8u;
    // 0x2c69b8: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x2c69b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c69bc: 0xc4e40000  lwc1        $f4, 0x0($a3)
    ctx->pc = 0x2c69bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c69c0: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x2c69c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x2c69c4: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x2c69c4u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x2c69c8: 0xc4e50004  lwc1        $f5, 0x4($a3)
    ctx->pc = 0x2c69c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2c69cc: 0xc4c20010  lwc1        $f2, 0x10($a2)
    ctx->pc = 0x2c69ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c69d0: 0x46051081  sub.s       $f2, $f2, $f5
    ctx->pc = 0x2c69d0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
    // 0x2c69d4: 0x46001085  abs.s       $f2, $f2
    ctx->pc = 0x2c69d4u;
    ctx->f[2] = FPU_ABS_S(ctx->f[2]);
    // 0x2c69d8: 0xc4e30008  lwc1        $f3, 0x8($a3)
    ctx->pc = 0x2c69d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c69dc: 0xc4c10014  lwc1        $f1, 0x14($a2)
    ctx->pc = 0x2c69dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c69e0: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x2c69e0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x2c69e4: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x2c69e4u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x2c69e8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2c69e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2c69ec: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c69ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c69f0: 0x460d0036  c.le.s      $f0, $f13
    ctx->pc = 0x2c69f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c69f4: 0x0  nop
    ctx->pc = 0x2c69f4u;
    // NOP
    // 0x2c69f8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2C69F8u;
    {
        const bool branch_taken_0x2c69f8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C69FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C69F8u;
        // 0x2c69fc: 0x2c820002  sltiu       $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c69f8) {
            ctx->pc = 0x2C6A08u;
            goto label_2c6a08;
        }
    }
    ctx->pc = 0x2C6A00u;
label_2c6a00:
    // 0x2c6a00: 0x3e00008  jr          $ra
    ctx->pc = 0x2C6A00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C6A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6A00u;
        // 0x2c6a04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C6A00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C6A08u;
label_2c6a08:
    // 0x2c6a08: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2C6A08u;
    {
        const bool branch_taken_0x2c6a08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C6A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6A08u;
        // 0x2c6a0c: 0x24030028  addiu       $v1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6a08) {
            ctx->pc = 0x2C6A5Cu;
            goto label_2c6a5c;
        }
    }
    ctx->pc = 0x2C6A10u;
    // 0x2c6a10: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x2c6a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2c6a14: 0x821818  mult        $v1, $a0, $v0
    ctx->pc = 0x2c6a14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2c6a18: 0x661021  addu        $v0, $v1, $a2
    ctx->pc = 0x2c6a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2c6a1c: 0xc441ffe4  lwc1        $f1, -0x1C($v0)
    ctx->pc = 0x2c6a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c6a20: 0x2442ffe4  addiu       $v0, $v0, -0x1C
    ctx->pc = 0x2c6a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967268));
    // 0x2c6a24: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x2c6a24u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x2c6a28: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x2c6a28u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x2c6a2c: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x2c6a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c6a30: 0x46051081  sub.s       $f2, $f2, $f5
    ctx->pc = 0x2c6a30u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
    // 0x2c6a34: 0x46001085  abs.s       $f2, $f2
    ctx->pc = 0x2c6a34u;
    ctx->f[2] = FPU_ABS_S(ctx->f[2]);
    // 0x2c6a38: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2c6a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6a3c: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x2c6a3cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x2c6a40: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x2c6a40u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x2c6a44: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2c6a44u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2c6a48: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2c6a48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c6a4c: 0x460d0036  c.le.s      $f0, $f13
    ctx->pc = 0x2c6a4cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c6a50: 0x0  nop
    ctx->pc = 0x2c6a50u;
    // NOP
    // 0x2c6a54: 0x4501ffea  bc1t        . + 4 + (-0x16 << 2)
    ctx->pc = 0x2C6A54u;
    {
        const bool branch_taken_0x2c6a54 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C6A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6A54u;
        // 0x2c6a58: 0x24030028  addiu       $v1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6a54) {
            ctx->pc = 0x2C6A00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c6a00;
        }
    }
    ctx->pc = 0x2C6A5Cu;
label_2c6a5c:
    // 0x2c6a5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c6a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c6a60:
    // 0x2c6a60: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x2c6a60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2c6a64: 0xc32021  addu        $a0, $a2, $v1
    ctx->pc = 0x2c6a64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2c6a68: 0x68e80007  ldl         $t0, 0x7($a3)
    ctx->pc = 0x2c6a68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x2c6a6c: 0x6ce80000  ldr         $t0, 0x0($a3)
    ctx->pc = 0x2c6a6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x2c6a70: 0x8ce90008  lw          $t1, 0x8($a3)
    ctx->pc = 0x2c6a70u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2c6a74: 0xb0880013  sdl         $t0, 0x13($a0)
    ctx->pc = 0x2c6a74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c6a78: 0xb488000c  sdr         $t0, 0xC($a0)
    ctx->pc = 0x2c6a78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c6a7c: 0xac890014  sw          $t1, 0x14($a0)
    ctx->pc = 0x2c6a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 9));
    // 0x2c6a80: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2c6a80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6a84: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2c6a84u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6a88: 0xaca0001c  sw          $zero, 0x1C($a1)
    ctx->pc = 0x2c6a88u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 0));
    // 0x2c6a8c: 0x8cc400ac  lw          $a0, 0xAC($a2)
    ctx->pc = 0x2c6a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 172)));
    // 0x2c6a90: 0xe46c0018  swc1        $f12, 0x18($v1)
    ctx->pc = 0x2c6a90u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x2c6a94: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2c6a94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2c6a98: 0x3e00008  jr          $ra
    ctx->pc = 0x2C6A98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C6A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6A98u;
        // 0x2c6a9c: 0xacc400ac  sw          $a0, 0xAC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 172), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C6A98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C6AA0u;
}

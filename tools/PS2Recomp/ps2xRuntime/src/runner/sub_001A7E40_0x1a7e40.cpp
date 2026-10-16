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

// Function: sub_001A7E40
// Address: 0x1a7e40 - 0x1a7fb8
void sub_001A7E40_0x1a7e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A7E40_0x1a7e40");
#endif

    switch (ctx->pc) {
        case 0x1a7edcu: goto label_1a7edc;
        case 0x1a7f38u: goto label_1a7f38;
        default: break;
    }

    ctx->pc = 0x1a7e40u;

    // 0x1a7e40: 0x24a70001  addiu       $a3, $a1, 0x1
    ctx->pc = 0x1a7e40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1a7e44: 0x2408000c  addiu       $t0, $zero, 0xC
    ctx->pc = 0x1a7e44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1a7e48: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1a7e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a7e4c: 0xa82818  mult        $a1, $a1, $t0
    ctx->pc = 0x1a7e4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1a7e50: 0x67182b  sltu        $v1, $v1, $a3
    ctx->pc = 0x1a7e50u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1a7e54: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1a7e54u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1a7e58: 0x3380b  movn        $a3, $zero, $v1
    ctx->pc = 0x1a7e58u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0));
    // 0x1a7e5c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1a7e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1a7e60: 0xe83818  mult        $a3, $a3, $t0
    ctx->pc = 0x1a7e60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x1a7e64: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1a7e64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7e68: 0x2443000c  addiu       $v1, $v0, 0xC
    ctx->pc = 0x1a7e68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x1a7e6c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1a7e6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7e70: 0x653021  addu        $a2, $v1, $a1
    ctx->pc = 0x1a7e70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1a7e74: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a7e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a7e78: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x1a7e78u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1a7e7c: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x1a7e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1a7e80: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1a7e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1a7e84: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x1a7e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1a7e88: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1a7e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1a7e8c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1a7e8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7e90: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x1a7e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a7e94: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x1a7e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a7e98: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a7e98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7e9c: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x1a7e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a7ea0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1a7ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a7ea4: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x1a7ea4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1a7ea8: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x1a7ea8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1a7eac: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x1a7eacu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1a7eb0: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1a7eb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1a7eb4: 0x6ba20027  ldl         $v0, 0x27($sp)
    ctx->pc = 0x1a7eb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1a7eb8: 0x6fa20020  ldr         $v0, 0x20($sp)
    ctx->pc = 0x1a7eb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1a7ebc: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x1a7ebcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a7ec0: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x1a7ec0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a7ec4: 0x6ba20037  ldl         $v0, 0x37($sp)
    ctx->pc = 0x1a7ec4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1a7ec8: 0x6fa20030  ldr         $v0, 0x30($sp)
    ctx->pc = 0x1a7ec8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1a7ecc: 0xb3a2000f  sdl         $v0, 0xF($sp)
    ctx->pc = 0x1a7eccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a7ed0: 0xb7a20008  sdr         $v0, 0x8($sp)
    ctx->pc = 0x1a7ed0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a7ed4: 0xc06960a  jal         func_1A5828
    ctx->pc = 0x1A7ED4u;
    SET_GPR_U32(ctx, 31, 0x1A7EDCu);
    ctx->pc = 0x1A7ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7ED4u;
    // 0x1a7ed8: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5828u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A5828u, 0x1A7ED4u, 0x1A7EDCu)) {
        return;
    }
    ctx->pc = 0x1A7EDCu;
label_1a7edc:
    // 0x1a7edc: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1a7edcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1a7ee0: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1a7ee0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1a7ee4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a7ee4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a7ee8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1a7ee8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1a7eec: 0x4601a036  c.le.s      $f20, $f1
    ctx->pc = 0x1a7eecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a7ef0: 0x0  nop
    ctx->pc = 0x1a7ef0u;
    // NOP
    // 0x1a7ef4: 0x4500002b  bc1f        . + 4 + (0x2B << 2)
    ctx->pc = 0x1A7EF4u;
    {
        const bool branch_taken_0x1a7ef4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A7EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7EF4u;
        // 0x1a7ef8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7ef4) {
            ctx->pc = 0x1A7FA4u;
            goto label_1a7fa4;
        }
    }
    ctx->pc = 0x1A7EFCu;
    // 0x1a7efc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a7efcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a7f00: 0x0  nop
    ctx->pc = 0x1a7f00u;
    // NOP
    // 0x1a7f04: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x1a7f04u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a7f08: 0x0  nop
    ctx->pc = 0x1a7f08u;
    // NOP
    // 0x1a7f0c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1A7F0Cu;
    {
        const bool branch_taken_0x1a7f0c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a7f0c) {
            ctx->pc = 0x1A7F10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A7F0Cu;
            // 0x1a7f10: 0x4601a501  sub.s       $f20, $f20, $f1 (Delay Slot)
            ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A7F14u;
            goto label_1a7f14;
        }
    }
    ctx->pc = 0x1A7F14u;
label_1a7f14:
    // 0x1a7f14: 0x4600a505  abs.s       $f20, $f20
    ctx->pc = 0x1a7f14u;
    ctx->f[20] = FPU_ABS_S(ctx->f[20]);
    // 0x1a7f18: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x1a7f18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a7f1c: 0x0  nop
    ctx->pc = 0x1a7f1cu;
    // NOP
    // 0x1a7f20: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1A7F20u;
    {
        const bool branch_taken_0x1a7f20 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A7F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7F20u;
        // 0x1a7f24: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7f20) {
            ctx->pc = 0x1A7F2Cu;
            goto label_1a7f2c;
        }
    }
    ctx->pc = 0x1A7F28u;
    // 0x1a7f28: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x1a7f28u;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
label_1a7f2c:
    // 0x1a7f2c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1a7f2cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1a7f30: 0xc0695fc  jal         func_1A57F0
    ctx->pc = 0x1A7F30u;
    SET_GPR_U32(ctx, 31, 0x1A7F38u);
    ctx->pc = 0x1A7F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7F30u;
    // 0x1a7f34: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A57F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A57F0u, 0x1A7F30u, 0x1A7F38u)) {
        return;
    }
    ctx->pc = 0x1A7F38u;
label_1a7f38:
    // 0x1a7f38: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x1a7f38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1a7f3c: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x1a7f3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1a7f40: 0xb3a30027  sdl         $v1, 0x27($sp)
    ctx->pc = 0x1a7f40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a7f44: 0xb7a30020  sdr         $v1, 0x20($sp)
    ctx->pc = 0x1a7f44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a7f48: 0x6ba70027  ldl         $a3, 0x27($sp)
    ctx->pc = 0x1a7f48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1a7f4c: 0x6fa70020  ldr         $a3, 0x20($sp)
    ctx->pc = 0x1a7f4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1a7f50: 0xb3a70047  sdl         $a3, 0x47($sp)
    ctx->pc = 0x1a7f50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a7f54: 0xb7a70040  sdr         $a3, 0x40($sp)
    ctx->pc = 0x1a7f54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a7f58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a7f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a7f5c: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x1a7f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a7f60: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x1a7f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a7f64: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1a7f64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1a7f68: 0xc6030000  lwc1        $f3, 0x0($s0)
    ctx->pc = 0x1a7f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a7f6c: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x1a7f6cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x1a7f70: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x1a7f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a7f74: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x1a7f74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1a7f78: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x1a7f78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1a7f7c: 0x6ba50047  ldl         $a1, 0x47($sp)
    ctx->pc = 0x1a7f7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1a7f80: 0x6fa50040  ldr         $a1, 0x40($sp)
    ctx->pc = 0x1a7f80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1a7f84: 0xb3a50037  sdl         $a1, 0x37($sp)
    ctx->pc = 0x1a7f84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a7f88: 0xb7a50030  sdr         $a1, 0x30($sp)
    ctx->pc = 0x1a7f88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a7f8c: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x1a7f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a7f90: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x1a7f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a7f94: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x1a7f94u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x1a7f98: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x1a7f98u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1a7f9c: 0xe6030000  swc1        $f3, 0x0($s0)
    ctx->pc = 0x1a7f9cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1a7fa0: 0xe6020004  swc1        $f2, 0x4($s0)
    ctx->pc = 0x1a7fa0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_1a7fa4:
    // 0x1a7fa4: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1a7fa4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a7fa8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1a7fa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a7fac: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x1a7facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a7fb0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A7FB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A7FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7FB0u;
        // 0x1a7fb4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A7FB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A7FB8u;
}

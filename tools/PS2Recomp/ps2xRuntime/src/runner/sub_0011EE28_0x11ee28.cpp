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

// Function: sub_0011EE28
// Address: 0x11ee28 - 0x11eef8
void sub_0011EE28_0x11ee28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011EE28_0x11ee28");
#endif

    switch (ctx->pc) {
        case 0x11ee94u: goto label_11ee94;
        default: break;
    }

    ctx->pc = 0x11ee28u;

    // 0x11ee28: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x11ee28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x11ee2c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x11ee2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x11ee30: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x11ee30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x11ee34: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x11ee34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ee38: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x11ee38u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x11ee3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11ee3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ee40: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x11ee40u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x11ee44: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x11ee44u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x11ee48: 0x8c43870c  lw          $v1, -0x78F4($v0)
    ctx->pc = 0x11ee48u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x33870Cu));
    // 0x11ee4c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x11ee4cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x11ee50: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11ee50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x11ee54: 0x4600a307  neg.s       $f12, $f20
    ctx->pc = 0x11ee54u;
    ctx->f[12] = FPU_NEG_S(ctx->f[20]);
    // 0x11ee58: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x11ee58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x11ee5c: 0x6a0200f7  ldl         $v0, 0xF7($s0)
    ctx->pc = 0x11ee5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 247); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x11ee60: 0x6e0200f0  ldr         $v0, 0xF0($s0)
    ctx->pc = 0x11ee60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 240); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x11ee64: 0x8e0300f8  lw          $v1, 0xF8($s0)
    ctx->pc = 0x11ee64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 248)));
    // 0x11ee68: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x11ee68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11ee6c: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x11ee6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11ee70: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x11ee70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x11ee74: 0x6a080107  ldl         $t0, 0x107($s0)
    ctx->pc = 0x11ee74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 263); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x11ee78: 0x6e080100  ldr         $t0, 0x100($s0)
    ctx->pc = 0x11ee78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 256); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x11ee7c: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x11ee7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x11ee80: 0xb3a80017  sdl         $t0, 0x17($sp)
    ctx->pc = 0x11ee80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11ee84: 0xb7a80010  sdr         $t0, 0x10($sp)
    ctx->pc = 0x11ee84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11ee88: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x11ee88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x11ee8c: 0xc05eb1a  jal         func_17AC68
    ctx->pc = 0x11EE8Cu;
    SET_GPR_U32(ctx, 31, 0x11EE94u);
    ctx->pc = 0x11EE90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11EE8Cu;
    // 0x11ee90: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17AC68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17AC68u, 0x11EE8Cu, 0x11EE94u)) {
        return;
    }
    ctx->pc = 0x11EE94u;
label_11ee94:
    // 0x11ee94: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x11ee94u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x11ee98: 0x260200a4  addiu       $v0, $s0, 0xA4
    ctx->pc = 0x11ee98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 164));
    // 0x11ee9c: 0xc60000a4  lwc1        $f0, 0xA4($s0)
    ctx->pc = 0x11ee9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11eea0: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x11eea0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11eea4: 0x0  nop
    ctx->pc = 0x11eea4u;
    // NOP
    // 0x11eea8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x11EEA8u;
    {
        const bool branch_taken_0x11eea8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11EEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EEA8u;
        // 0x11eeac: 0xc4410004  lwc1        $f1, 0x4($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11eea8) {
            ctx->pc = 0x11EEC4u;
            goto label_11eec4;
        }
    }
    ctx->pc = 0x11EEB0u;
    // 0x11eeb0: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x11eeb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11eeb4: 0x4600a832  c.eq.s      $f21, $f0
    ctx->pc = 0x11eeb4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11eeb8: 0x0  nop
    ctx->pc = 0x11eeb8u;
    // NOP
    // 0x11eebc: 0x45030008  bc1tl       . + 4 + (0x8 << 2)
    ctx->pc = 0x11EEBCu;
    {
        const bool branch_taken_0x11eebc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x11eebc) {
            ctx->pc = 0x11EEC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11EEBCu;
            // 0x11eec0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11EEE0u;
            goto label_11eee0;
        }
    }
    ctx->pc = 0x11EEC4u;
label_11eec4:
    // 0x11eec4: 0xe61400a4  swc1        $f20, 0xA4($s0)
    ctx->pc = 0x11eec4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 164), bits); }
    // 0x11eec8: 0xe4420008  swc1        $f2, 0x8($v0)
    ctx->pc = 0x11eec8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x11eecc: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x11eeccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x11eed0: 0xe4550010  swc1        $f21, 0x10($v0)
    ctx->pc = 0x11eed0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x11eed4: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x11eed4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x11eed8: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x11eed8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x11eedc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x11eedcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_11eee0:
    // 0x11eee0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11eee0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11eee4: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x11eee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x11eee8: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x11eee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11eeec: 0x3e00008  jr          $ra
    ctx->pc = 0x11EEECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11EEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EEECu;
        // 0x11eef0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11EEECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11EEF4u;
    // 0x11eef4: 0x0  nop
    ctx->pc = 0x11eef4u;
    // NOP
    ctx->pc = 0x11eef8u;
}

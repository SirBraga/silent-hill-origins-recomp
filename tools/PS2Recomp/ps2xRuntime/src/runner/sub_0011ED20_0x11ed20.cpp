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

// Function: sub_0011ED20
// Address: 0x11ed20 - 0x11ee28
void sub_0011ED20_0x11ed20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011ED20_0x11ed20");
#endif

    switch (ctx->pc) {
        case 0x11ed74u: goto label_11ed74;
        case 0x11edc0u: goto label_11edc0;
        default: break;
    }

    ctx->pc = 0x11ed20u;

    // 0x11ed20: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x11ed20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x11ed24: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x11ed24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x11ed28: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x11ed28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x11ed2c: 0x3421fa35  ori         $at, $at, 0xFA35
    ctx->pc = 0x11ed2cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64053);
    // 0x11ed30: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11ed30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11ed34: 0x8c43870c  lw          $v1, -0x78F4($v0)
    ctx->pc = 0x11ed34u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x33870Cu));
    // 0x11ed38: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x11ed38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x11ed3c: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x11ed3cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x11ed40: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x11ed40u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x11ed44: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11ed44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ed48: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x11ed48u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x11ed4c: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x11ed4cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x11ed50: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x11ed50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x11ed54: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x11ed54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x11ed58: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11ed58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11ed5c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11ed5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11ed60: 0x8c70000c  lw          $s0, 0xC($v1)
    ctx->pc = 0x11ed60u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x11ed64: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x11ed64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x11ed68: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x11ed68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x11ed6c: 0xc09b164  jal         func_26C590
    ctx->pc = 0x11ED6Cu;
    SET_GPR_U32(ctx, 31, 0x11ED74u);
    ctx->pc = 0x11ED70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11ED6Cu;
    // 0x11ed70: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C590u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C590u, 0x11ED6Cu, 0x11ED74u)) {
        return;
    }
    ctx->pc = 0x11ED74u;
label_11ed74:
    // 0x11ed74: 0xc62100d8  lwc1        $f1, 0xD8($s1)
    ctx->pc = 0x11ed74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11ed78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11ed78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ed7c: 0x6a2200f7  ldl         $v0, 0xF7($s1)
    ctx->pc = 0x11ed7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 247); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x11ed80: 0x6e2200f0  ldr         $v0, 0xF0($s1)
    ctx->pc = 0x11ed80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 240); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x11ed84: 0x8e2300f8  lw          $v1, 0xF8($s1)
    ctx->pc = 0x11ed84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 248)));
    // 0x11ed88: 0xb3a20017  sdl         $v0, 0x17($sp)
    ctx->pc = 0x11ed88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11ed8c: 0xb7a20010  sdr         $v0, 0x10($sp)
    ctx->pc = 0x11ed8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11ed90: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x11ed90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x11ed94: 0x46000d02  mul.s       $f20, $f1, $f0
    ctx->pc = 0x11ed94u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x11ed98: 0x6ba70007  ldl         $a3, 0x7($sp)
    ctx->pc = 0x11ed98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x11ed9c: 0x6fa70000  ldr         $a3, 0x0($sp)
    ctx->pc = 0x11ed9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x11eda0: 0x8fa80008  lw          $t0, 0x8($sp)
    ctx->pc = 0x11eda0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11eda4: 0xb3a70027  sdl         $a3, 0x27($sp)
    ctx->pc = 0x11eda4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11eda8: 0xb7a70020  sdr         $a3, 0x20($sp)
    ctx->pc = 0x11eda8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11edac: 0xafa80028  sw          $t0, 0x28($sp)
    ctx->pc = 0x11edacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 8));
    // 0x11edb0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x11edb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x11edb4: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x11edb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x11edb8: 0xc05eb1a  jal         func_17AC68
    ctx->pc = 0x11EDB8u;
    SET_GPR_U32(ctx, 31, 0x11EDC0u);
    ctx->pc = 0x11EDBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11EDB8u;
    // 0x11edbc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x17AC68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17AC68u, 0x11EDB8u, 0x11EDC0u)) {
        return;
    }
    ctx->pc = 0x11EDC0u;
label_11edc0:
    // 0x11edc0: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x11edc0u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x11edc4: 0x2622008c  addiu       $v0, $s1, 0x8C
    ctx->pc = 0x11edc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 140));
    // 0x11edc8: 0xc620008c  lwc1        $f0, 0x8C($s1)
    ctx->pc = 0x11edc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11edcc: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x11edccu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11edd0: 0x0  nop
    ctx->pc = 0x11edd0u;
    // NOP
    // 0x11edd4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x11EDD4u;
    {
        const bool branch_taken_0x11edd4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11EDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EDD4u;
        // 0x11edd8: 0xc4410004  lwc1        $f1, 0x4($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11edd4) {
            ctx->pc = 0x11EDF0u;
            goto label_11edf0;
        }
    }
    ctx->pc = 0x11EDDCu;
    // 0x11eddc: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x11eddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11ede0: 0x4600a832  c.eq.s      $f21, $f0
    ctx->pc = 0x11ede0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11ede4: 0x0  nop
    ctx->pc = 0x11ede4u;
    // NOP
    // 0x11ede8: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x11EDE8u;
    {
        const bool branch_taken_0x11ede8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x11EDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EDE8u;
        // 0x11edec: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ede8) {
            ctx->pc = 0x11EE0Cu;
            goto label_11ee0c;
        }
    }
    ctx->pc = 0x11EDF0u;
label_11edf0:
    // 0x11edf0: 0xe634008c  swc1        $f20, 0x8C($s1)
    ctx->pc = 0x11edf0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 140), bits); }
    // 0x11edf4: 0xe4420008  swc1        $f2, 0x8($v0)
    ctx->pc = 0x11edf4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x11edf8: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x11edf8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x11edfc: 0xe4550010  swc1        $f21, 0x10($v0)
    ctx->pc = 0x11edfcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x11ee00: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x11ee00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x11ee04: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x11ee04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x11ee08: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x11ee08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_11ee0c:
    // 0x11ee0c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x11ee0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11ee10: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x11ee10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11ee14: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x11ee14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x11ee18: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x11ee18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11ee1c: 0x3e00008  jr          $ra
    ctx->pc = 0x11EE1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11EE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EE1Cu;
        // 0x11ee20: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11EE1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11EE24u;
    // 0x11ee24: 0x0  nop
    ctx->pc = 0x11ee24u;
    // NOP
    ctx->pc = 0x11ee28u;
}

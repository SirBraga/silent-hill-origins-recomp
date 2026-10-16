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

// Function: sub_001A5828
// Address: 0x1a5828 - 0x1a58d8
void sub_001A5828_0x1a5828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A5828_0x1a5828");
#endif

    switch (ctx->pc) {
        case 0x1a5850u: goto label_1a5850;
        default: break;
    }

    ctx->pc = 0x1a5828u;

    // 0x1a5828: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a5828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a582c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1a582cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1a5830: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1a5830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1a5834: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a5834u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5838: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a5838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a583c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1a583cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1a5840: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A5840u;
    {
        const bool branch_taken_0x1a5840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A5844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5840u;
        // 0x1a5844: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5840) {
            ctx->pc = 0x1A5850u;
            goto label_1a5850;
        }
    }
    ctx->pc = 0x1A5848u;
    // 0x1a5848: 0xc06952e  jal         func_1A54B8
    ctx->pc = 0x1A5848u;
    SET_GPR_U32(ctx, 31, 0x1A5850u);
    ctx->pc = 0x1A54B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A54B8u, 0x1A5848u, 0x1A5850u)) {
        return;
    }
    ctx->pc = 0x1A5850u;
label_1a5850:
    // 0x1a5850: 0x6a220007  ldl         $v0, 0x7($s1)
    ctx->pc = 0x1a5850u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1a5854: 0x6e220000  ldr         $v0, 0x0($s1)
    ctx->pc = 0x1a5854u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1a5858: 0xb3a20017  sdl         $v0, 0x17($sp)
    ctx->pc = 0x1a5858u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a585c: 0xb7a20010  sdr         $v0, 0x10($sp)
    ctx->pc = 0x1a585cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a5860: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1a5860u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a5864: 0xc6030000  lwc1        $f3, 0x0($s0)
    ctx->pc = 0x1a5864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a5868: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x1a5868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a586c: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1a586cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a5870: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1a5870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a5874: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1a5874u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x1a5878: 0xc6040014  lwc1        $f4, 0x14($s0)
    ctx->pc = 0x1a5878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1a587c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x1a587cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x1a5880: 0xc6030010  lwc1        $f3, 0x10($s0)
    ctx->pc = 0x1a5880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a5884: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1a5884u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a5888: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1a5888u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1a588c: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x1a588cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1a5890: 0x6ba20017  ldl         $v0, 0x17($sp)
    ctx->pc = 0x1a5890u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1a5894: 0x6fa20010  ldr         $v0, 0x10($sp)
    ctx->pc = 0x1a5894u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1a5898: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x1a5898u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a589c: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x1a589cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a58a0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a58a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a58a4: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x1a58a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a58a8: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x1a58a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a58ac: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x1a58acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x1a58b0: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x1a58b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x1a58b4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1a58b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1a58b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A58B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A58BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A58B8u;
        // 0x1a58bc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A58B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A58C0u;
    // 0x1a58c0: 0x46026000  add.s       $f0, $f12, $f2
    ctx->pc = 0x1a58c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
    // 0x1a58c4: 0x0  nop
    ctx->pc = 0x1a58c4u;
    // NOP
    // 0x1a58c8: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x1a58c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x1a58cc: 0x0  nop
    ctx->pc = 0x1a58ccu;
    // NOP
    // 0x1a58d0: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x1a58d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1a58d4: 0x0  nop
    ctx->pc = 0x1a58d4u;
    // NOP
    ctx->pc = 0x1a58d8u;
}

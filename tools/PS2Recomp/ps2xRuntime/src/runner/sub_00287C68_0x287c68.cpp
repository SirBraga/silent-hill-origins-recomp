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

// Function: sub_00287C68
// Address: 0x287c68 - 0x287d88
void sub_00287C68_0x287c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00287C68_0x287c68");
#endif

    ctx->pc = 0x287c68u;

    // 0x287c68: 0xc4830008  lwc1        $f3, 0x8($a0)
    ctx->pc = 0x287c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x287c6c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x287c6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x287c70: 0xc4860010  lwc1        $f6, 0x10($a0)
    ctx->pc = 0x287c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x287c74: 0xc482000c  lwc1        $f2, 0xC($a0)
    ctx->pc = 0x287c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x287c78: 0xc4850014  lwc1        $f5, 0x14($a0)
    ctx->pc = 0x287c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x287c7c: 0x46061980  add.s       $f6, $f3, $f6
    ctx->pc = 0x287c7cu;
    ctx->f[6] = FPU_ADD_S(ctx->f[3], ctx->f[6]);
    // 0x287c80: 0x46051140  add.s       $f5, $f2, $f5
    ctx->pc = 0x287c80u;
    ctx->f[5] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x287c84: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x287c84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x287c88: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x287c88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x287c8c: 0x46043182  mul.s       $f6, $f6, $f4
    ctx->pc = 0x287c8cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[4]);
    // 0x287c90: 0x46042942  mul.s       $f5, $f5, $f4
    ctx->pc = 0x287c90u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x287c94: 0xe7a60010  swc1        $f6, 0x10($sp)
    ctx->pc = 0x287c94u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x287c98: 0xe7a50014  swc1        $f5, 0x14($sp)
    ctx->pc = 0x287c98u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x287c9c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x287c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x287ca0: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x287ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x287ca4: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x287ca4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x287ca8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x287ca8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x287cac: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x287cacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x287cb0: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x287cb0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x287cb4: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x287cb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x287cb8: 0xe4a1000c  swc1        $f1, 0xC($a1)
    ctx->pc = 0x287cb8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x287cbc: 0xc4800018  lwc1        $f0, 0x18($a0)
    ctx->pc = 0x287cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x287cc0: 0xc4830010  lwc1        $f3, 0x10($a0)
    ctx->pc = 0x287cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x287cc4: 0xc481001c  lwc1        $f1, 0x1C($a0)
    ctx->pc = 0x287cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x287cc8: 0xc4820014  lwc1        $f2, 0x14($a0)
    ctx->pc = 0x287cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x287ccc: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x287cccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x287cd0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x287cd0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x287cd4: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x287cd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x287cd8: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x287cd8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x287cdc: 0xe4c00010  swc1        $f0, 0x10($a2)
    ctx->pc = 0x287cdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 16), bits); }
    // 0x287ce0: 0xe4c10014  swc1        $f1, 0x14($a2)
    ctx->pc = 0x287ce0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
    // 0x287ce4: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x287ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x287ce8: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x287ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x287cec: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x287cecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x287cf0: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x287cf0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x287cf4: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x287cf4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x287cf8: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x287cf8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x287cfc: 0xe4a00010  swc1        $f0, 0x10($a1)
    ctx->pc = 0x287cfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
    // 0x287d00: 0xe4a10014  swc1        $f1, 0x14($a1)
    ctx->pc = 0x287d00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
    // 0x287d04: 0xc4c20010  lwc1        $f2, 0x10($a2)
    ctx->pc = 0x287d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x287d08: 0xc4c30014  lwc1        $f3, 0x14($a2)
    ctx->pc = 0x287d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x287d0c: 0x46061080  add.s       $f2, $f2, $f6
    ctx->pc = 0x287d0cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[6]);
    // 0x287d10: 0x460518c0  add.s       $f3, $f3, $f5
    ctx->pc = 0x287d10u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x287d14: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x287d14u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x287d18: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x287d18u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x287d1c: 0xe4c20008  swc1        $f2, 0x8($a2)
    ctx->pc = 0x287d1cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x287d20: 0xe4c3000c  swc1        $f3, 0xC($a2)
    ctx->pc = 0x287d20u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    // 0x287d24: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x287d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x287d28: 0xc4a10014  lwc1        $f1, 0x14($a1)
    ctx->pc = 0x287d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x287d2c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x287d2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x287d30: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x287d30u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x287d34: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x287d34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x287d38: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x287d38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x287d3c: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x287d3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x287d40: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x287d40u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x287d44: 0xe4a00018  swc1        $f0, 0x18($a1)
    ctx->pc = 0x287d44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
    // 0x287d48: 0xe4a1001c  swc1        $f1, 0x1C($a1)
    ctx->pc = 0x287d48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
    // 0x287d4c: 0x68820007  ldl         $v0, 0x7($a0)
    ctx->pc = 0x287d4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x287d50: 0x6c820000  ldr         $v0, 0x0($a0)
    ctx->pc = 0x287d50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x287d54: 0xb0a20007  sdl         $v0, 0x7($a1)
    ctx->pc = 0x287d54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x287d58: 0xb4a20000  sdr         $v0, 0x0($a1)
    ctx->pc = 0x287d58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x287d5c: 0x68a2001f  ldl         $v0, 0x1F($a1)
    ctx->pc = 0x287d5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x287d60: 0x6ca20018  ldr         $v0, 0x18($a1)
    ctx->pc = 0x287d60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x287d64: 0xb0c20007  sdl         $v0, 0x7($a2)
    ctx->pc = 0x287d64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x287d68: 0xb4c20000  sdr         $v0, 0x0($a2)
    ctx->pc = 0x287d68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x287d6c: 0x6882001f  ldl         $v0, 0x1F($a0)
    ctx->pc = 0x287d6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x287d70: 0x6c820018  ldr         $v0, 0x18($a0)
    ctx->pc = 0x287d70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x287d74: 0xb0c2001f  sdl         $v0, 0x1F($a2)
    ctx->pc = 0x287d74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x287d78: 0xb4c20018  sdr         $v0, 0x18($a2)
    ctx->pc = 0x287d78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x287d7c: 0x3e00008  jr          $ra
    ctx->pc = 0x287D7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x287D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287D7Cu;
        // 0x287d80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x287D7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x287D84u;
    // 0x287d84: 0x0  nop
    ctx->pc = 0x287d84u;
    // NOP
    ctx->pc = 0x287d88u;
}

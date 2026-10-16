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

// Function: sub_00139D28
// Address: 0x139d28 - 0x139ff0
void sub_00139D28_0x139d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00139D28_0x139d28");
#endif

    switch (ctx->pc) {
        case 0x139d74u: goto label_139d74;
        case 0x139de8u: goto label_139de8;
        case 0x139e5cu: goto label_139e5c;
        case 0x139eccu: goto label_139ecc;
        case 0x139facu: goto label_139fac;
        default: break;
    }

    ctx->pc = 0x139d28u;

    // 0x139d28: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x139d28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x139d2c: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x139d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
    // 0x139d30: 0x7fb10100  sq          $s1, 0x100($sp)
    ctx->pc = 0x139d30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 17));
    // 0x139d34: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x139d34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139d38: 0x7fb400d0  sq          $s4, 0xD0($sp)
    ctx->pc = 0x139d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 20));
    // 0x139d3c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x139d3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139d40: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x139d40u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139d44: 0x7fb200f0  sq          $s2, 0xF0($sp)
    ctx->pc = 0x139d44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 18));
    // 0x139d48: 0x7fb300e0  sq          $s3, 0xE0($sp)
    ctx->pc = 0x139d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 19));
    // 0x139d4c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x139d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x139d50: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x139d50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x139d54: 0x6a020037  ldl         $v0, 0x37($s0)
    ctx->pc = 0x139d54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x139d58: 0x6e020030  ldr         $v0, 0x30($s0)
    ctx->pc = 0x139d58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x139d5c: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x139d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x139d60: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x139d60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x139d64: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x139d64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x139d68: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x139d68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x139d6c: 0xc04e69a  jal         func_139A68
    ctx->pc = 0x139D6Cu;
    SET_GPR_U32(ctx, 31, 0x139D74u);
    ctx->pc = 0x139D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139D6Cu;
    // 0x139d70: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139A68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x139A68u, 0x139D6Cu, 0x139D74u)) {
        return;
    }
    ctx->pc = 0x139D74u;
label_139d74:
    // 0x139d74: 0x6a020027  ldl         $v0, 0x27($s0)
    ctx->pc = 0x139d74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x139d78: 0x6e020020  ldr         $v0, 0x20($s0)
    ctx->pc = 0x139d78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x139d7c: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x139d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x139d80: 0xb3a20047  sdl         $v0, 0x47($sp)
    ctx->pc = 0x139d80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x139d84: 0xb7a20040  sdr         $v0, 0x40($sp)
    ctx->pc = 0x139d84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x139d88: 0xafa30048  sw          $v1, 0x48($sp)
    ctx->pc = 0x139d88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 3));
    // 0x139d8c: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x139d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x139d90: 0xc7a30040  lwc1        $f3, 0x40($sp)
    ctx->pc = 0x139d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x139d94: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x139d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x139d98: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x139d98u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x139d9c: 0xc7a40044  lwc1        $f4, 0x44($sp)
    ctx->pc = 0x139d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x139da0: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x139da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x139da4: 0xc7a30048  lwc1        $f3, 0x48($sp)
    ctx->pc = 0x139da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x139da8: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x139da8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x139dac: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x139dacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x139db0: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x139db0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x139db4: 0xe7a20054  swc1        $f2, 0x54($sp)
    ctx->pc = 0x139db4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x139db8: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x139db8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x139dbc: 0x6ba60057  ldl         $a2, 0x57($sp)
    ctx->pc = 0x139dbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x139dc0: 0x6fa60050  ldr         $a2, 0x50($sp)
    ctx->pc = 0x139dc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x139dc4: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x139dc4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x139dc8: 0xb3a60037  sdl         $a2, 0x37($sp)
    ctx->pc = 0x139dc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x139dcc: 0xb7a60030  sdr         $a2, 0x30($sp)
    ctx->pc = 0x139dccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x139dd0: 0xafa70038  sw          $a3, 0x38($sp)
    ctx->pc = 0x139dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 7));
    // 0x139dd4: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x139dd4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x139dd8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x139dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x139ddc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x139ddcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139de0: 0xc04e69a  jal         func_139A68
    ctx->pc = 0x139DE0u;
    SET_GPR_U32(ctx, 31, 0x139DE8u);
    ctx->pc = 0x139DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139DE0u;
    // 0x139de4: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139A68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x139A68u, 0x139DE0u, 0x139DE8u)) {
        return;
    }
    ctx->pc = 0x139DE8u;
label_139de8:
    // 0x139de8: 0x6a030017  ldl         $v1, 0x17($s0)
    ctx->pc = 0x139de8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x139dec: 0x6e030010  ldr         $v1, 0x10($s0)
    ctx->pc = 0x139decu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x139df0: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x139df0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x139df4: 0xb3a30057  sdl         $v1, 0x57($sp)
    ctx->pc = 0x139df4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x139df8: 0xb7a30050  sdr         $v1, 0x50($sp)
    ctx->pc = 0x139df8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x139dfc: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x139dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
    // 0x139e00: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x139e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x139e04: 0xc7a30050  lwc1        $f3, 0x50($sp)
    ctx->pc = 0x139e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x139e08: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x139e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x139e0c: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x139e0cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x139e10: 0xc7a40054  lwc1        $f4, 0x54($sp)
    ctx->pc = 0x139e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x139e14: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x139e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x139e18: 0xc7a30058  lwc1        $f3, 0x58($sp)
    ctx->pc = 0x139e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x139e1c: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x139e1cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x139e20: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x139e20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x139e24: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x139e24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x139e28: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x139e28u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x139e2c: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x139e2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x139e30: 0x6ba70067  ldl         $a3, 0x67($sp)
    ctx->pc = 0x139e30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x139e34: 0x6fa70060  ldr         $a3, 0x60($sp)
    ctx->pc = 0x139e34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x139e38: 0x8fa80068  lw          $t0, 0x68($sp)
    ctx->pc = 0x139e38u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x139e3c: 0xb3a70047  sdl         $a3, 0x47($sp)
    ctx->pc = 0x139e3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x139e40: 0xb7a70040  sdr         $a3, 0x40($sp)
    ctx->pc = 0x139e40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x139e44: 0xafa80048  sw          $t0, 0x48($sp)
    ctx->pc = 0x139e44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 8));
    // 0x139e48: 0x27b20040  addiu       $s2, $sp, 0x40
    ctx->pc = 0x139e48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x139e4c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x139e4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139e50: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x139e50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139e54: 0xc04e69a  jal         func_139A68
    ctx->pc = 0x139E54u;
    SET_GPR_U32(ctx, 31, 0x139E5Cu);
    ctx->pc = 0x139E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139E54u;
    // 0x139e58: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139A68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x139A68u, 0x139E54u, 0x139E5Cu)) {
        return;
    }
    ctx->pc = 0x139E5Cu;
label_139e5c:
    // 0x139e5c: 0x6a040007  ldl         $a0, 0x7($s0)
    ctx->pc = 0x139e5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x139e60: 0x6e040000  ldr         $a0, 0x0($s0)
    ctx->pc = 0x139e60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x139e64: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x139e64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x139e68: 0xb3a40067  sdl         $a0, 0x67($sp)
    ctx->pc = 0x139e68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x139e6c: 0xb7a40060  sdr         $a0, 0x60($sp)
    ctx->pc = 0x139e6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x139e70: 0xafa50068  sw          $a1, 0x68($sp)
    ctx->pc = 0x139e70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 5));
    // 0x139e74: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x139e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x139e78: 0xc7a30060  lwc1        $f3, 0x60($sp)
    ctx->pc = 0x139e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x139e7c: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x139e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x139e80: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x139e80u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x139e84: 0xc7a40064  lwc1        $f4, 0x64($sp)
    ctx->pc = 0x139e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x139e88: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x139e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x139e8c: 0xc7a30068  lwc1        $f3, 0x68($sp)
    ctx->pc = 0x139e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x139e90: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x139e90u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x139e94: 0xe7a10070  swc1        $f1, 0x70($sp)
    ctx->pc = 0x139e94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x139e98: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x139e98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x139e9c: 0xe7a20074  swc1        $f2, 0x74($sp)
    ctx->pc = 0x139e9cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x139ea0: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x139ea0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x139ea4: 0x6ba80077  ldl         $t0, 0x77($sp)
    ctx->pc = 0x139ea4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x139ea8: 0x6fa80070  ldr         $t0, 0x70($sp)
    ctx->pc = 0x139ea8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x139eac: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x139eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x139eb0: 0xb3a80057  sdl         $t0, 0x57($sp)
    ctx->pc = 0x139eb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x139eb4: 0xb7a80050  sdr         $t0, 0x50($sp)
    ctx->pc = 0x139eb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x139eb8: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x139eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    // 0x139ebc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x139ebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139ec0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x139ec0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139ec4: 0xc04e69a  jal         func_139A68
    ctx->pc = 0x139EC4u;
    SET_GPR_U32(ctx, 31, 0x139ECCu);
    ctx->pc = 0x139EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139EC4u;
    // 0x139ec8: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139A68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x139A68u, 0x139EC4u, 0x139ECCu)) {
        return;
    }
    ctx->pc = 0x139ECCu;
label_139ecc:
    // 0x139ecc: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x139eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x139ed0: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x139ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x139ed4: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x139ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x139ed8: 0xc7a30010  lwc1        $f3, 0x10($sp)
    ctx->pc = 0x139ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x139edc: 0xc7a40014  lwc1        $f4, 0x14($sp)
    ctx->pc = 0x139edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x139ee0: 0xc7a50018  lwc1        $f5, 0x18($sp)
    ctx->pc = 0x139ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x139ee4: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x139ee4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x139ee8: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x139ee8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x139eec: 0x46051081  sub.s       $f2, $f2, $f5
    ctx->pc = 0x139eecu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
    // 0x139ef0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x139ef0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x139ef4: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x139ef4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x139ef8: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x139ef8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x139efc: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x139efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x139f00: 0xc7a20034  lwc1        $f2, 0x34($sp)
    ctx->pc = 0x139f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x139f04: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x139f04u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x139f08: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x139f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x139f0c: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x139f0cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x139f10: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x139f10u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x139f14: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x139f14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x139f18: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x139f18u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x139f1c: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x139f1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x139f20: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x139f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x139f24: 0xc7a20044  lwc1        $f2, 0x44($sp)
    ctx->pc = 0x139f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x139f28: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x139f28u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x139f2c: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x139f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x139f30: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x139f30u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x139f34: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x139f34u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x139f38: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x139f38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x139f3c: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x139f3cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x139f40: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x139f40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x139f44: 0x6ba50017  ldl         $a1, 0x17($sp)
    ctx->pc = 0x139f44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x139f48: 0x6fa50010  ldr         $a1, 0x10($sp)
    ctx->pc = 0x139f48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x139f4c: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x139f4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x139f50: 0xb3a500b7  sdl         $a1, 0xB7($sp)
    ctx->pc = 0x139f50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 183); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x139f54: 0xb7a500b0  sdr         $a1, 0xB0($sp)
    ctx->pc = 0x139f54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 176); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x139f58: 0xafa600b8  sw          $a2, 0xB8($sp)
    ctx->pc = 0x139f58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 6));
    // 0x139f5c: 0x6ba20027  ldl         $v0, 0x27($sp)
    ctx->pc = 0x139f5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x139f60: 0x6fa20020  ldr         $v0, 0x20($sp)
    ctx->pc = 0x139f60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x139f64: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x139f64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x139f68: 0xb3a200a7  sdl         $v0, 0xA7($sp)
    ctx->pc = 0x139f68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 167); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x139f6c: 0xb7a200a0  sdr         $v0, 0xA0($sp)
    ctx->pc = 0x139f6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 160); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x139f70: 0xafa300a8  sw          $v1, 0xA8($sp)
    ctx->pc = 0x139f70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 3));
    // 0x139f74: 0x6ba60037  ldl         $a2, 0x37($sp)
    ctx->pc = 0x139f74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x139f78: 0x6fa60030  ldr         $a2, 0x30($sp)
    ctx->pc = 0x139f78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x139f7c: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x139f7cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x139f80: 0xb3a60097  sdl         $a2, 0x97($sp)
    ctx->pc = 0x139f80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x139f84: 0xb7a60090  sdr         $a2, 0x90($sp)
    ctx->pc = 0x139f84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x139f88: 0xafa70098  sw          $a3, 0x98($sp)
    ctx->pc = 0x139f88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 7));
    // 0x139f8c: 0x6ba30047  ldl         $v1, 0x47($sp)
    ctx->pc = 0x139f8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x139f90: 0x6fa30040  ldr         $v1, 0x40($sp)
    ctx->pc = 0x139f90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x139f94: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x139f94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x139f98: 0xb3a30087  sdl         $v1, 0x87($sp)
    ctx->pc = 0x139f98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x139f9c: 0xb7a30080  sdr         $v1, 0x80($sp)
    ctx->pc = 0x139f9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x139fa0: 0xafa50088  sw          $a1, 0x88($sp)
    ctx->pc = 0x139fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 5));
    // 0x139fa4: 0xc092d94  jal         func_24B650
    ctx->pc = 0x139FA4u;
    SET_GPR_U32(ctx, 31, 0x139FACu);
    ctx->pc = 0x139FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139FA4u;
    // 0x139fa8: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B650u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B650u, 0x139FA4u, 0x139FACu)) {
        return;
    }
    ctx->pc = 0x139FACu;
label_139fac:
    // 0x139fac: 0x7ba60080  lq          $a2, 0x80($sp)
    ctx->pc = 0x139facu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x139fb0: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x139fb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139fb4: 0x7ba30090  lq          $v1, 0x90($sp)
    ctx->pc = 0x139fb4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x139fb8: 0x7ba400a0  lq          $a0, 0xA0($sp)
    ctx->pc = 0x139fb8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x139fbc: 0x7ba500b0  lq          $a1, 0xB0($sp)
    ctx->pc = 0x139fbcu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x139fc0: 0x7e860000  sq          $a2, 0x0($s4)
    ctx->pc = 0x139fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 6));
    // 0x139fc4: 0x7e830010  sq          $v1, 0x10($s4)
    ctx->pc = 0x139fc4u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 16), GPR_VEC(ctx, 3));
    // 0x139fc8: 0x7e840020  sq          $a0, 0x20($s4)
    ctx->pc = 0x139fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 32), GPR_VEC(ctx, 4));
    // 0x139fcc: 0x7e850030  sq          $a1, 0x30($s4)
    ctx->pc = 0x139fccu;
    WRITE128(ADD32(GPR_U32(ctx, 20), 48), GPR_VEC(ctx, 5));
    // 0x139fd0: 0x7bb00110  lq          $s0, 0x110($sp)
    ctx->pc = 0x139fd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x139fd4: 0x7bb10100  lq          $s1, 0x100($sp)
    ctx->pc = 0x139fd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x139fd8: 0x7bb200f0  lq          $s2, 0xF0($sp)
    ctx->pc = 0x139fd8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x139fdc: 0x7bb300e0  lq          $s3, 0xE0($sp)
    ctx->pc = 0x139fdcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x139fe0: 0x7bb400d0  lq          $s4, 0xD0($sp)
    ctx->pc = 0x139fe0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x139fe4: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x139fe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x139fe8: 0x3e00008  jr          $ra
    ctx->pc = 0x139FE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x139FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139FE8u;
        // 0x139fec: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x139FE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x139FF0u;
}

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

// Function: sub_00139A68
// Address: 0x139a68 - 0x139d28
void sub_00139A68_0x139a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00139A68_0x139a68");
#endif

    switch (ctx->pc) {
        case 0x139a90u: goto label_139a90;
        case 0x139ab0u: goto label_139ab0;
        case 0x139ad0u: goto label_139ad0;
        case 0x139af0u: goto label_139af0;
        default: break;
    }

    ctx->pc = 0x139a68u;

    // 0x139a68: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x139a68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x139a6c: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x139a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x139a70: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x139a70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x139a74: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x139a74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139a78: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x139a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x139a7c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x139a7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139a80: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x139a80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139a84: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x139a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x139a88: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x139A88u;
    SET_GPR_U32(ctx, 31, 0x139A90u);
    ctx->pc = 0x139A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139A88u;
    // 0x139a8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x139A88u, 0x139A90u)) {
        return;
    }
    ctx->pc = 0x139A90u;
label_139a90:
    // 0x139a90: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x139a90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x139a94: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x139a94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x139a98: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x139a98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x139a9c: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x139a9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x139aa0: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x139aa0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x139aa4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x139aa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139aa8: 0xc04f0f0  jal         func_13C3C0
    ctx->pc = 0x139AA8u;
    SET_GPR_U32(ctx, 31, 0x139AB0u);
    ctx->pc = 0x139AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139AA8u;
    // 0x139aac: 0xafa50008  sw          $a1, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C3C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C3C0u, 0x139AA8u, 0x139AB0u)) {
        return;
    }
    ctx->pc = 0x139AB0u;
label_139ab0:
    // 0x139ab0: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x139ab0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x139ab4: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x139ab4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x139ab8: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x139ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x139abc: 0xb3a30017  sdl         $v1, 0x17($sp)
    ctx->pc = 0x139abcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x139ac0: 0xb7a30010  sdr         $v1, 0x10($sp)
    ctx->pc = 0x139ac0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x139ac4: 0xafa50018  sw          $a1, 0x18($sp)
    ctx->pc = 0x139ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 5));
    // 0x139ac8: 0xc04f0e2  jal         func_13C388
    ctx->pc = 0x139AC8u;
    SET_GPR_U32(ctx, 31, 0x139AD0u);
    ctx->pc = 0x139ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139AC8u;
    // 0x139acc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C388u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C388u, 0x139AC8u, 0x139AD0u)) {
        return;
    }
    ctx->pc = 0x139AD0u;
label_139ad0:
    // 0x139ad0: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x139ad0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x139ad4: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x139ad4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x139ad8: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x139ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x139adc: 0xb3a30027  sdl         $v1, 0x27($sp)
    ctx->pc = 0x139adcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x139ae0: 0xb7a30020  sdr         $v1, 0x20($sp)
    ctx->pc = 0x139ae0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x139ae4: 0xafa50028  sw          $a1, 0x28($sp)
    ctx->pc = 0x139ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 5));
    // 0x139ae8: 0xc04f0d4  jal         func_13C350
    ctx->pc = 0x139AE8u;
    SET_GPR_U32(ctx, 31, 0x139AF0u);
    ctx->pc = 0x139AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139AE8u;
    // 0x139aec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C350u, 0x139AE8u, 0x139AF0u)) {
        return;
    }
    ctx->pc = 0x139AF0u;
label_139af0:
    // 0x139af0: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x139af0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x139af4: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x139af4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x139af8: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x139af8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x139afc: 0xb3a30037  sdl         $v1, 0x37($sp)
    ctx->pc = 0x139afcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x139b00: 0xb7a30030  sdr         $v1, 0x30($sp)
    ctx->pc = 0x139b00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x139b04: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x139b04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x139b08: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x139b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x139b0c: 0xc6250008  lwc1        $f5, 0x8($s1)
    ctx->pc = 0x139b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x139b10: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x139b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x139b14: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x139b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x139b18: 0xc7a40004  lwc1        $f4, 0x4($sp)
    ctx->pc = 0x139b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x139b1c: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x139b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x139b20: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x139b20u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x139b24: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x139b24u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x139b28: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x139b28u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x139b2c: 0xe7a20050  swc1        $f2, 0x50($sp)
    ctx->pc = 0x139b2cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x139b30: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x139b30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x139b34: 0xe7a50058  swc1        $f5, 0x58($sp)
    ctx->pc = 0x139b34u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x139b38: 0x6ba70057  ldl         $a3, 0x57($sp)
    ctx->pc = 0x139b38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x139b3c: 0x6fa70050  ldr         $a3, 0x50($sp)
    ctx->pc = 0x139b3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x139b40: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x139b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x139b44: 0xb3a70047  sdl         $a3, 0x47($sp)
    ctx->pc = 0x139b44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x139b48: 0xb7a70040  sdr         $a3, 0x40($sp)
    ctx->pc = 0x139b48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x139b4c: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x139b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x139b50: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x139b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x139b54: 0xc7a70014  lwc1        $f7, 0x14($sp)
    ctx->pc = 0x139b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x139b58: 0xc7a90024  lwc1        $f9, 0x24($sp)
    ctx->pc = 0x139b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x139b5c: 0xc7a80034  lwc1        $f8, 0x34($sp)
    ctx->pc = 0x139b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x139b60: 0x46013ac2  mul.s       $f11, $f7, $f1
    ctx->pc = 0x139b60u;
    ctx->f[11] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
    // 0x139b64: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x139b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x139b68: 0x46014a42  mul.s       $f9, $f9, $f1
    ctx->pc = 0x139b68u;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[1]);
    // 0x139b6c: 0xc7a40010  lwc1        $f4, 0x10($sp)
    ctx->pc = 0x139b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x139b70: 0x46014202  mul.s       $f8, $f8, $f1
    ctx->pc = 0x139b70u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[1]);
    // 0x139b74: 0xc7a60020  lwc1        $f6, 0x20($sp)
    ctx->pc = 0x139b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x139b78: 0xc7aa0030  lwc1        $f10, 0x30($sp)
    ctx->pc = 0x139b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x139b7c: 0x46002082  mul.s       $f2, $f4, $f0
    ctx->pc = 0x139b7cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x139b80: 0xc7a30048  lwc1        $f3, 0x48($sp)
    ctx->pc = 0x139b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x139b84: 0x46003182  mul.s       $f6, $f6, $f0
    ctx->pc = 0x139b84u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x139b88: 0x46005282  mul.s       $f10, $f10, $f0
    ctx->pc = 0x139b88u;
    ctx->f[10] = FPU_MUL_S(ctx->f[10], ctx->f[0]);
    // 0x139b8c: 0xc7a50028  lwc1        $f5, 0x28($sp)
    ctx->pc = 0x139b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x139b90: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x139b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x139b94: 0x460b1080  add.s       $f2, $f2, $f11
    ctx->pc = 0x139b94u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[11]);
    // 0x139b98: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x139b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x139b9c: 0x46032942  mul.s       $f5, $f5, $f3
    ctx->pc = 0x139b9cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
    // 0x139ba0: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x139ba0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x139ba4: 0x46093180  add.s       $f6, $f6, $f9
    ctx->pc = 0x139ba4u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[9]);
    // 0x139ba8: 0x46085280  add.s       $f10, $f10, $f8
    ctx->pc = 0x139ba8u;
    ctx->f[10] = FPU_ADD_S(ctx->f[10], ctx->f[8]);
    // 0x139bac: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x139bacu;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x139bb0: 0x46053180  add.s       $f6, $f6, $f5
    ctx->pc = 0x139bb0u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[5]);
    // 0x139bb4: 0x46015280  add.s       $f10, $f10, $f1
    ctx->pc = 0x139bb4u;
    ctx->f[10] = FPU_ADD_S(ctx->f[10], ctx->f[1]);
    // 0x139bb8: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x139bb8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x139bbc: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x139bbcu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x139bc0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x139bc0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x139bc4: 0xe7a40060  swc1        $f4, 0x60($sp)
    ctx->pc = 0x139bc4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x139bc8: 0x460239c2  mul.s       $f7, $f7, $f2
    ctx->pc = 0x139bc8u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[2]);
    // 0x139bcc: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x139bccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x139bd0: 0xe7a70064  swc1        $f7, 0x64($sp)
    ctx->pc = 0x139bd0u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x139bd4: 0x6ba50067  ldl         $a1, 0x67($sp)
    ctx->pc = 0x139bd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x139bd8: 0x6fa50060  ldr         $a1, 0x60($sp)
    ctx->pc = 0x139bd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x139bdc: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x139bdcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x139be0: 0xb3a50057  sdl         $a1, 0x57($sp)
    ctx->pc = 0x139be0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x139be4: 0xb7a50050  sdr         $a1, 0x50($sp)
    ctx->pc = 0x139be4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x139be8: 0xafa60058  sw          $a2, 0x58($sp)
    ctx->pc = 0x139be8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 6));
    // 0x139bec: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x139becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x139bf0: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x139bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x139bf4: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x139bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x139bf8: 0xc7a30050  lwc1        $f3, 0x50($sp)
    ctx->pc = 0x139bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x139bfc: 0xc7a40054  lwc1        $f4, 0x54($sp)
    ctx->pc = 0x139bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x139c00: 0xc7a50058  lwc1        $f5, 0x58($sp)
    ctx->pc = 0x139c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x139c04: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x139c04u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x139c08: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x139c08u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x139c0c: 0x46051081  sub.s       $f2, $f2, $f5
    ctx->pc = 0x139c0cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
    // 0x139c10: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x139c10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x139c14: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x139c14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x139c18: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x139c18u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x139c1c: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x139c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x139c20: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x139c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x139c24: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x139c24u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x139c28: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x139c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x139c2c: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x139c2cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x139c30: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x139c30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x139c34: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x139c34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x139c38: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x139c38u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x139c3c: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x139c3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x139c40: 0x6ba30067  ldl         $v1, 0x67($sp)
    ctx->pc = 0x139c40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x139c44: 0x6fa30060  ldr         $v1, 0x60($sp)
    ctx->pc = 0x139c44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x139c48: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x139c48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x139c4c: 0xb3a30057  sdl         $v1, 0x57($sp)
    ctx->pc = 0x139c4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x139c50: 0xb7a30050  sdr         $v1, 0x50($sp)
    ctx->pc = 0x139c50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x139c54: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x139c54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
    // 0x139c58: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x139c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x139c5c: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x139c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x139c60: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x139c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x139c64: 0xc7a30050  lwc1        $f3, 0x50($sp)
    ctx->pc = 0x139c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x139c68: 0xc7a40054  lwc1        $f4, 0x54($sp)
    ctx->pc = 0x139c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x139c6c: 0xc7a50058  lwc1        $f5, 0x58($sp)
    ctx->pc = 0x139c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x139c70: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x139c70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x139c74: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x139c74u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x139c78: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x139c78u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x139c7c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x139c7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x139c80: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x139c80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x139c84: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x139c84u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x139c88: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x139c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x139c8c: 0xc7a20034  lwc1        $f2, 0x34($sp)
    ctx->pc = 0x139c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x139c90: 0x460a0842  mul.s       $f1, $f1, $f10
    ctx->pc = 0x139c90u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[10]);
    // 0x139c94: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x139c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x139c98: 0x460a1082  mul.s       $f2, $f2, $f10
    ctx->pc = 0x139c98u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[10]);
    // 0x139c9c: 0x460a0002  mul.s       $f0, $f0, $f10
    ctx->pc = 0x139c9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[10]);
    // 0x139ca0: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x139ca0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x139ca4: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x139ca4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x139ca8: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x139ca8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x139cac: 0x6ba70067  ldl         $a3, 0x67($sp)
    ctx->pc = 0x139cacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x139cb0: 0x6fa70060  ldr         $a3, 0x60($sp)
    ctx->pc = 0x139cb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x139cb4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x139cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x139cb8: 0xb3a70057  sdl         $a3, 0x57($sp)
    ctx->pc = 0x139cb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x139cbc: 0xb7a70050  sdr         $a3, 0x50($sp)
    ctx->pc = 0x139cbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x139cc0: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x139cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    // 0x139cc4: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x139cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x139cc8: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x139cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x139ccc: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x139cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x139cd0: 0xc7a30050  lwc1        $f3, 0x50($sp)
    ctx->pc = 0x139cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x139cd4: 0xc7a40054  lwc1        $f4, 0x54($sp)
    ctx->pc = 0x139cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x139cd8: 0xc7a50058  lwc1        $f5, 0x58($sp)
    ctx->pc = 0x139cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x139cdc: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x139cdcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x139ce0: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x139ce0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x139ce4: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x139ce4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x139ce8: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x139ce8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x139cec: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x139cecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x139cf0: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x139cf0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x139cf4: 0x6ba50007  ldl         $a1, 0x7($sp)
    ctx->pc = 0x139cf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x139cf8: 0x6fa50000  ldr         $a1, 0x0($sp)
    ctx->pc = 0x139cf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x139cfc: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x139cfcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x139d00: 0xb2450007  sdl         $a1, 0x7($s2)
    ctx->pc = 0x139d00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x139d04: 0xb6450000  sdr         $a1, 0x0($s2)
    ctx->pc = 0x139d04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x139d08: 0xae460008  sw          $a2, 0x8($s2)
    ctx->pc = 0x139d08u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 6));
    // 0x139d0c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x139d0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139d10: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x139d10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x139d14: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x139d14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x139d18: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x139d18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x139d1c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x139d1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x139d20: 0x3e00008  jr          $ra
    ctx->pc = 0x139D20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x139D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139D20u;
        // 0x139d24: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x139D20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x139D28u;
}

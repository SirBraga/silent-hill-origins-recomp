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

// Function: sub_002E2E48
// Address: 0x2e2e48 - 0x2e2f98
void sub_002E2E48_0x2e2e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E2E48_0x2e2e48");
#endif

    switch (ctx->pc) {
        case 0x2e2e68u: goto label_2e2e68;
        case 0x2e2f68u: goto label_2e2f68;
        default: break;
    }

    ctx->pc = 0x2e2e48u;

    // 0x2e2e48: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e2e48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e2e4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e2e4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2e50: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2e2e50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2e2e54: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x2e2e54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2e2e58: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e2e58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2e5c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e2e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e2e60: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x2E2E60u;
    SET_GPR_U32(ctx, 31, 0x2E2E68u);
    ctx->pc = 0x2E2E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2E60u;
    // 0x2e2e64: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x2E2E60u, 0x2E2E68u)) {
        return;
    }
    ctx->pc = 0x2E2E68u;
label_2e2e68:
    // 0x2e2e68: 0xae000088  sw          $zero, 0x88($s0)
    ctx->pc = 0x2e2e68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
    // 0x2e2e6c: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x2e2e6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2e2e70: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x2e2e70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2e2e74: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2e2e74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e2e78: 0xb2020047  sdl         $v0, 0x47($s0)
    ctx->pc = 0x2e2e78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e2e7c: 0xb6020040  sdr         $v0, 0x40($s0)
    ctx->pc = 0x2e2e7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e2e80: 0xae030048  sw          $v1, 0x48($s0)
    ctx->pc = 0x2e2e80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
    // 0x2e2e84: 0x8e020088  lw          $v0, 0x88($s0)
    ctx->pc = 0x2e2e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x2e2e88: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2e2e88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2e2e8c: 0xae020088  sw          $v0, 0x88($s0)
    ctx->pc = 0x2e2e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 2));
    // 0x2e2e90: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x2e2e90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2e2e94: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x2e2e94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2e2e98: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2e2e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e2e9c: 0xb2020053  sdl         $v0, 0x53($s0)
    ctx->pc = 0x2e2e9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 83); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e2ea0: 0xb602004c  sdr         $v0, 0x4C($s0)
    ctx->pc = 0x2e2ea0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 76); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e2ea4: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x2e2ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
    // 0x2e2ea8: 0x8e020088  lw          $v0, 0x88($s0)
    ctx->pc = 0x2e2ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x2e2eac: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2e2eacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2e2eb0: 0xae020088  sw          $v0, 0x88($s0)
    ctx->pc = 0x2e2eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 2));
    // 0x2e2eb4: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x2e2eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x2e2eb8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e2eb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2e2ebc: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x2e2ebcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x2e2ec0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2e2ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2e2ec4: 0xe7a80004  swc1        $f8, 0x4($sp)
    ctx->pc = 0x2e2ec4u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2e2ec8: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x2e2ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x2e2ecc: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x2e2eccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
    // 0x2e2ed0: 0xe608006c  swc1        $f8, 0x6C($s0)
    ctx->pc = 0x2e2ed0u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 108), bits); }
    // 0x2e2ed4: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x2e2ed4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2e2ed8: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x2e2ed8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2e2edc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2e2edcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e2ee0: 0xb202005f  sdl         $v0, 0x5F($s0)
    ctx->pc = 0x2e2ee0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 95); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e2ee4: 0xb6020058  sdr         $v0, 0x58($s0)
    ctx->pc = 0x2e2ee4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 88); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e2ee8: 0xae030060  sw          $v1, 0x60($s0)
    ctx->pc = 0x2e2ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
    // 0x2e2eec: 0xc604005c  lwc1        $f4, 0x5C($s0)
    ctx->pc = 0x2e2eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2e2ef0: 0xc6020060  lwc1        $f2, 0x60($s0)
    ctx->pc = 0x2e2ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e2ef4: 0xc6000068  lwc1        $f0, 0x68($s0)
    ctx->pc = 0x2e2ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e2ef8: 0xc606006c  lwc1        $f6, 0x6C($s0)
    ctx->pc = 0x2e2ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2e2efc: 0xc6010058  lwc1        $f1, 0x58($s0)
    ctx->pc = 0x2e2efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e2f00: 0x460011c2  mul.s       $f7, $f2, $f0
    ctx->pc = 0x2e2f00u;
    ctx->f[7] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2e2f04: 0xc6030064  lwc1        $f3, 0x64($s0)
    ctx->pc = 0x2e2f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e2f08: 0x46062142  mul.s       $f5, $f4, $f6
    ctx->pc = 0x2e2f08u;
    ctx->f[5] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x2e2f0c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2e2f0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e2f10: 0x46032102  mul.s       $f4, $f4, $f3
    ctx->pc = 0x2e2f10u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x2e2f14: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x2e2f14u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x2e2f18: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x2e2f18u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x2e2f1c: 0x46072941  sub.s       $f5, $f5, $f7
    ctx->pc = 0x2e2f1cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[7]);
    // 0x2e2f20: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x2e2f20u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x2e2f24: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x2e2f24u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x2e2f28: 0xe6050070  swc1        $f5, 0x70($s0)
    ctx->pc = 0x2e2f28u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x2e2f2c: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x2e2f2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x2e2f30: 0xe6020074  swc1        $f2, 0x74($s0)
    ctx->pc = 0x2e2f30u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x2e2f34: 0x8e020088  lw          $v0, 0x88($s0)
    ctx->pc = 0x2e2f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x2e2f38: 0xe6080080  swc1        $f8, 0x80($s0)
    ctx->pc = 0x2e2f38u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
    // 0x2e2f3c: 0xe6080084  swc1        $f8, 0x84($s0)
    ctx->pc = 0x2e2f3cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    // 0x2e2f40: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x2e2f40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x2e2f44: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e2f44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e2f48: 0x34420078  ori         $v0, $v0, 0x78
    ctx->pc = 0x2e2f48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)120);
    // 0x2e2f4c: 0xe600007c  swc1        $f0, 0x7C($s0)
    ctx->pc = 0x2e2f4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 124), bits); }
    // 0x2e2f50: 0xae020088  sw          $v0, 0x88($s0)
    ctx->pc = 0x2e2f50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 2));
    // 0x2e2f54: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2e2f54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2f58: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2e2f58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e2f5c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e2f5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e2f60: 0x3e00008  jr          $ra
    ctx->pc = 0x2E2F60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E2F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2F60u;
        // 0x2e2f64: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E2F60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E2F68u;
label_2e2f68:
    // 0x2e2f68: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2e2f68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2f6c: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x2e2f6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2e2f70: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x2e2f70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2e2f74: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x2e2f74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2e2f78: 0xb0430047  sdl         $v1, 0x47($v0)
    ctx->pc = 0x2e2f78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e2f7c: 0xb4430040  sdr         $v1, 0x40($v0)
    ctx->pc = 0x2e2f7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e2f80: 0xac440048  sw          $a0, 0x48($v0)
    ctx->pc = 0x2e2f80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 4));
    // 0x2e2f84: 0x8c430088  lw          $v1, 0x88($v0)
    ctx->pc = 0x2e2f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x2e2f88: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x2e2f88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x2e2f8c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E2F8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E2F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2F8Cu;
        // 0x2e2f90: 0xac430088  sw          $v1, 0x88($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 136), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E2F8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E2F94u;
    // 0x2e2f94: 0x0  nop
    ctx->pc = 0x2e2f94u;
    // NOP
    ctx->pc = 0x2e2f98u;
}

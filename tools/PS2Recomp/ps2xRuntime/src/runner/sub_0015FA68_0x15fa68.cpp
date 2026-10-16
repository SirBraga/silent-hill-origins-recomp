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

// Function: sub_0015FA68
// Address: 0x15fa68 - 0x15feb8
void sub_0015FA68_0x15fa68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015FA68_0x15fa68");
#endif

    switch (ctx->pc) {
        case 0x15fb78u: goto label_15fb78;
        case 0x15fc40u: goto label_15fc40;
        case 0x15fe00u: goto label_15fe00;
        case 0x15fe10u: goto label_15fe10;
        case 0x15fe18u: goto label_15fe18;
        case 0x15fe50u: goto label_15fe50;
        case 0x15fe60u: goto label_15fe60;
        case 0x15fe68u: goto label_15fe68;
        default: break;
    }

    ctx->pc = 0x15fa68u;

    // 0x15fa68: 0x340cd960  ori         $t4, $zero, 0xD960
    ctx->pc = 0x15fa68u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)55648);
    // 0x15fa6c: 0x3ace823  subu        $sp, $sp, $t4
    ctx->pc = 0x15fa6cu;
    SET_GPR_S32(ctx, 29, (int32_t)SUB32(GPR_U32(ctx, 29), GPR_U32(ctx, 12)));
    // 0x15fa70: 0x19d6821  addu        $t5, $t4, $sp
    ctx->pc = 0x15fa70u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 29)));
    // 0x15fa74: 0x7db0ffb0  sq          $s0, -0x50($t5)
    ctx->pc = 0x15fa74u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 4294967216), GPR_VEC(ctx, 16));
    // 0x15fa78: 0x7db1ffa0  sq          $s1, -0x60($t5)
    ctx->pc = 0x15fa78u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 4294967200), GPR_VEC(ctx, 17));
    // 0x15fa7c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x15fa7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fa80: 0x7db4ff70  sq          $s4, -0x90($t5)
    ctx->pc = 0x15fa80u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 4294967152), GPR_VEC(ctx, 20));
    // 0x15fa84: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x15fa84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fa88: 0x7db5ff60  sq          $s5, -0xA0($t5)
    ctx->pc = 0x15fa88u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 4294967136), GPR_VEC(ctx, 21));
    // 0x15fa8c: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x15fa8cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fa90: 0x7db6ff50  sq          $s6, -0xB0($t5)
    ctx->pc = 0x15fa90u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 4294967120), GPR_VEC(ctx, 22));
    // 0x15fa94: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x15fa94u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fa98: 0x7db2ff90  sq          $s2, -0x70($t5)
    ctx->pc = 0x15fa98u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 4294967184), GPR_VEC(ctx, 18));
    // 0x15fa9c: 0x7db3ff80  sq          $s3, -0x80($t5)
    ctx->pc = 0x15fa9cu;
    WRITE128(ADD32(GPR_U32(ctx, 13), 4294967168), GPR_VEC(ctx, 19));
    // 0x15faa0: 0x7db7ff40  sq          $s7, -0xC0($t5)
    ctx->pc = 0x15faa0u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 4294967104), GPR_VEC(ctx, 23));
    // 0x15faa4: 0xfdbfff30  sd          $ra, -0xD0($t5)
    ctx->pc = 0x15faa4u;
    WRITE64(ADD32(GPR_U32(ctx, 13), 4294967088), GPR_U64(ctx, 31));
    // 0x15faa8: 0xe5bafff0  swc1        $f26, -0x10($t5)
    ctx->pc = 0x15faa8u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 4294967280), bits); }
    // 0x15faac: 0xe5b9ffe8  swc1        $f25, -0x18($t5)
    ctx->pc = 0x15faacu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 4294967272), bits); }
    // 0x15fab0: 0xe5b8ffe0  swc1        $f24, -0x20($t5)
    ctx->pc = 0x15fab0u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 4294967264), bits); }
    // 0x15fab4: 0xe5b7ffd8  swc1        $f23, -0x28($t5)
    ctx->pc = 0x15fab4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 4294967256), bits); }
    // 0x15fab8: 0xe5b6ffd0  swc1        $f22, -0x30($t5)
    ctx->pc = 0x15fab8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 4294967248), bits); }
    // 0x15fabc: 0xe5b5ffc8  swc1        $f21, -0x38($t5)
    ctx->pc = 0x15fabcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 4294967240), bits); }
    // 0x15fac0: 0xe5b4ffc0  swc1        $f20, -0x40($t5)
    ctx->pc = 0x15fac0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 4294967232), bits); }
    // 0x15fac4: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x15fac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x15fac8: 0x104000e9  beqz        $v0, . + 4 + (0xE9 << 2)
    ctx->pc = 0x15FAC8u;
    {
        const bool branch_taken_0x15fac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15FACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FAC8u;
        // 0x15facc: 0xc0b02d  daddu       $s6, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fac8) {
            ctx->pc = 0x15FE70u;
            goto label_15fe70;
        }
    }
    ctx->pc = 0x15FAD0u;
    // 0x15fad0: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x15fad0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x15fad4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x15fad4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x15fad8: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x15fad8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x15fadc: 0x8c470fc8  lw          $a3, 0xFC8($v0)
    ctx->pc = 0x15fadcu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x730FC8u));
    // 0x15fae0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x15fae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x15fae4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15fae4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fae8: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x15fae8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x15faec: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x15faecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x15faf0: 0x68430017  ldl         $v1, 0x17($v0)
    ctx->pc = 0x15faf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x15faf4: 0x6c430010  ldr         $v1, 0x10($v0)
    ctx->pc = 0x15faf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x15faf8: 0x8c480018  lw          $t0, 0x18($v0)
    ctx->pc = 0x15faf8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x15fafc: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x15fafcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15fb00: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x15fb00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15fb04: 0xafa80008  sw          $t0, 0x8($sp)
    ctx->pc = 0x15fb04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 8));
    // 0x15fb08: 0x684b0027  ldl         $t3, 0x27($v0)
    ctx->pc = 0x15fb08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x15fb0c: 0x6c4b0020  ldr         $t3, 0x20($v0)
    ctx->pc = 0x15fb0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x15fb10: 0x8c480028  lw          $t0, 0x28($v0)
    ctx->pc = 0x15fb10u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x15fb14: 0xb3ab0017  sdl         $t3, 0x17($sp)
    ctx->pc = 0x15fb14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15fb18: 0xb7ab0010  sdr         $t3, 0x10($sp)
    ctx->pc = 0x15fb18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15fb1c: 0xafa80018  sw          $t0, 0x18($sp)
    ctx->pc = 0x15fb1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 8));
    // 0x15fb20: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x15fb20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x15fb24: 0x684b0037  ldl         $t3, 0x37($v0)
    ctx->pc = 0x15fb24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x15fb28: 0x6c4b0030  ldr         $t3, 0x30($v0)
    ctx->pc = 0x15fb28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x15fb2c: 0x8c480038  lw          $t0, 0x38($v0)
    ctx->pc = 0x15fb2cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x15fb30: 0xb3ab0027  sdl         $t3, 0x27($sp)
    ctx->pc = 0x15fb30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15fb34: 0xb7ab0020  sdr         $t3, 0x20($sp)
    ctx->pc = 0x15fb34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15fb38: 0xafa80028  sw          $t0, 0x28($sp)
    ctx->pc = 0x15fb38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 8));
    // 0x15fb3c: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x15fb3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15fb40: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x15fb40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15fb44: 0xc4630034  lwc1        $f3, 0x34($v1)
    ctx->pc = 0x15fb44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15fb48: 0xc7a40024  lwc1        $f4, 0x24($sp)
    ctx->pc = 0x15fb48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x15fb4c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x15fb4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x15fb50: 0xc4620038  lwc1        $f2, 0x38($v1)
    ctx->pc = 0x15fb50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15fb54: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x15fb54u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x15fb58: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x15fb58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15fb5c: 0xc4f40080  lwc1        $f20, 0x80($a3)
    ctx->pc = 0x15fb5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x15fb60: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x15fb60u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x15fb64: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x15fb64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x15fb68: 0x4618a680  add.s       $f26, $f20, $f24
    ctx->pc = 0x15fb68u;
    ctx->f[26] = FPU_ADD_S(ctx->f[20], ctx->f[24]);
    // 0x15fb6c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x15fb6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x15fb70: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x15FB70u;
    SET_GPR_U32(ctx, 31, 0x15FB78u);
    ctx->pc = 0x15FB74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15FB70u;
    // 0x15fb74: 0x46000647  neg.s       $f25, $f0 (Delay Slot)
    ctx->f[25] = FPU_NEG_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x15FB70u, 0x15FB78u)) {
        return;
    }
    ctx->pc = 0x15FB78u;
label_15fb78:
    // 0x15fb78: 0xc7a50000  lwc1        $f5, 0x0($sp)
    ctx->pc = 0x15fb78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x15fb7c: 0xc6230068  lwc1        $f3, 0x68($s1)
    ctx->pc = 0x15fb7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15fb80: 0xc7a40004  lwc1        $f4, 0x4($sp)
    ctx->pc = 0x15fb80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x15fb84: 0xc7a60008  lwc1        $f6, 0x8($sp)
    ctx->pc = 0x15fb84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x15fb88: 0x46032942  mul.s       $f5, $f5, $f3
    ctx->pc = 0x15fb88u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
    // 0x15fb8c: 0x46032102  mul.s       $f4, $f4, $f3
    ctx->pc = 0x15fb8cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x15fb90: 0x46033182  mul.s       $f6, $f6, $f3
    ctx->pc = 0x15fb90u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x15fb94: 0xe7a50030  swc1        $f5, 0x30($sp)
    ctx->pc = 0x15fb94u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x15fb98: 0xe7a40034  swc1        $f4, 0x34($sp)
    ctx->pc = 0x15fb98u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x15fb9c: 0xe7a60038  swc1        $f6, 0x38($sp)
    ctx->pc = 0x15fb9cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x15fba0: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x15fba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15fba4: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x15fba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15fba8: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x15fba8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x15fbac: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x15fbacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15fbb0: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x15fbb0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x15fbb4: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x15fbb4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x15fbb8: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x15fbb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x15fbbc: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x15fbbcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x15fbc0: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x15fbc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x15fbc4: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x15fbc4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x15fbc8: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x15fbc8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x15fbcc: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x15fbccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x15fbd0: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x15fbd0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x15fbd4: 0xe7a20054  swc1        $f2, 0x54($sp)
    ctx->pc = 0x15fbd4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x15fbd8: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x15fbd8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x15fbdc: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x15fbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x15fbe0: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x15fbe0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x15fbe4: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x15FBE4u;
    {
        const bool branch_taken_0x15fbe4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x15FBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FBE4u;
        // 0x15fbe8: 0xc4570044  lwc1        $f23, 0x44($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fbe4) {
            ctx->pc = 0x15FC08u;
            goto label_15fc08;
        }
    }
    ctx->pc = 0x15FBECu;
    // 0x15fbec: 0x8ca20040  lw          $v0, 0x40($a1)
    ctx->pc = 0x15fbecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x15fbf0: 0x684b0047  ldl         $t3, 0x47($v0)
    ctx->pc = 0x15fbf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x15fbf4: 0x6c4b0040  ldr         $t3, 0x40($v0)
    ctx->pc = 0x15fbf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x15fbf8: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x15fbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x15fbfc: 0xb3ab0067  sdl         $t3, 0x67($sp)
    ctx->pc = 0x15fbfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15fc00: 0xb7ab0060  sdr         $t3, 0x60($sp)
    ctx->pc = 0x15fc00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15fc04: 0xafa30068  sw          $v1, 0x68($sp)
    ctx->pc = 0x15fc04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 3));
label_15fc08:
    // 0x15fc08: 0xc620005c  lwc1        $f0, 0x5C($s1)
    ctx->pc = 0x15fc08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15fc0c: 0x27b30070  addiu       $s3, $sp, 0x70
    ctx->pc = 0x15fc0cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x15fc10: 0xc6210064  lwc1        $f1, 0x64($s1)
    ctx->pc = 0x15fc10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15fc14: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x15fc14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fc18: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x15fc18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x15fc1c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x15fc1cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fc20: 0x46010581  sub.s       $f22, $f0, $f1
    ctx->pc = 0x15fc20u;
    ctx->f[22] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x15fc24: 0x8e320050  lw          $s2, 0x50($s1)
    ctx->pc = 0x15fc24u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x15fc28: 0x18400083  blez        $v0, . + 4 + (0x83 << 2)
    ctx->pc = 0x15FC28u;
    {
        const bool branch_taken_0x15fc28 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x15FC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FC28u;
        // 0x15fc2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fc28) {
            ctx->pc = 0x15FE38u;
            goto label_15fe38;
        }
    }
    ctx->pc = 0x15FC30u;
    // 0x15fc30: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x15fc30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x15fc34: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x15fc34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x15fc38: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x15fc38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x15fc3c: 0x3a28021  addu        $s0, $sp, $v0
    ctx->pc = 0x15fc3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_15fc40:
    // 0x15fc40: 0x6a470007  ldl         $a3, 0x7($s2)
    ctx->pc = 0x15fc40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x15fc44: 0x6e470000  ldr         $a3, 0x0($s2)
    ctx->pc = 0x15fc44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x15fc48: 0x8e480008  lw          $t0, 0x8($s2)
    ctx->pc = 0x15fc48u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x15fc4c: 0xb2075877  sdl         $a3, 0x5877($s0)
    ctx->pc = 0x15fc4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 22647); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15fc50: 0xb6075870  sdr         $a3, 0x5870($s0)
    ctx->pc = 0x15fc50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 22640); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15fc54: 0xae085878  sw          $t0, 0x5878($s0)
    ctx->pc = 0x15fc54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 22648), GPR_U32(ctx, 8));
    // 0x15fc58: 0xc6065874  lwc1        $f6, 0x5874($s0)
    ctx->pc = 0x15fc58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 22644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x15fc5c: 0xc6005870  lwc1        $f0, 0x5870($s0)
    ctx->pc = 0x15fc5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 22640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15fc60: 0x461730c0  add.s       $f3, $f6, $f23
    ctx->pc = 0x15fc60u;
    ctx->f[3] = FPU_ADD_S(ctx->f[6], ctx->f[23]);
    // 0x15fc64: 0xc6045878  lwc1        $f4, 0x5878($s0)
    ctx->pc = 0x15fc64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 22648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x15fc68: 0xe6035874  swc1        $f3, 0x5874($s0)
    ctx->pc = 0x15fc68u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 22644), bits); }
    // 0x15fc6c: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x15fc6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15fc70: 0xc7a50024  lwc1        $f5, 0x24($sp)
    ctx->pc = 0x15fc70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x15fc74: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x15fc74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x15fc78: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x15fc78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15fc7c: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x15fc7cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x15fc80: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x15fc80u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x15fc84: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x15fc84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x15fc88: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x15fc88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x15fc8c: 0x46190000  add.s       $f0, $f0, $f25
    ctx->pc = 0x15fc8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[25]);
    // 0x15fc90: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x15fc90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15fc94: 0x0  nop
    ctx->pc = 0x15fc94u;
    // NOP
    // 0x15fc98: 0x45020063  bc1fl       . + 4 + (0x63 << 2)
    ctx->pc = 0x15FC98u;
    {
        const bool branch_taken_0x15fc98 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15fc98) {
            ctx->pc = 0x15FC9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15FC98u;
            // 0x15fc9c: 0x8e220054  lw          $v0, 0x54($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15FE28u;
            goto label_15fe28;
        }
    }
    ctx->pc = 0x15FCA0u;
    // 0x15fca0: 0x461a0034  c.lt.s      $f0, $f26
    ctx->pc = 0x15fca0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[26])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15fca4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x15fca4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x15fca8: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x15fca8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x15fcac: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x15FCACu;
    {
        const bool branch_taken_0x15fcac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x15FCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FCACu;
        // 0x15fcb0: 0xc6230064  lwc1        $f3, 0x64($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fcac) {
            ctx->pc = 0x15FCC0u;
            goto label_15fcc0;
        }
    }
    ctx->pc = 0x15FCB4u;
    // 0x15fcb4: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x15fcb4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x15fcb8: 0x0  nop
    ctx->pc = 0x15fcb8u;
    // NOP
    // 0x15fcbc: 0x46180103  div.s       $f4, $f0, $f24
    ctx->pc = 0x15fcbcu;
    ctx->f[4] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[24]);
label_15fcc0:
    // 0x15fcc0: 0x46033034  c.lt.s      $f6, $f3
    ctx->pc = 0x15fcc0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15fcc4: 0x0  nop
    ctx->pc = 0x15fcc4u;
    // NOP
    // 0x15fcc8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x15FCC8u;
    {
        const bool branch_taken_0x15fcc8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15fcc8) {
            ctx->pc = 0x15FCE4u;
            goto label_15fce4;
        }
    }
    ctx->pc = 0x15FCD0u;
    // 0x15fcd0: 0x0  nop
    ctx->pc = 0x15fcd0u;
    // NOP
    // 0x15fcd4: 0x0  nop
    ctx->pc = 0x15fcd4u;
    // NOP
    // 0x15fcd8: 0x46033003  div.s       $f0, $f6, $f3
    ctx->pc = 0x15fcd8u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[6], ctx->f[3]);
    // 0x15fcdc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x15FCDCu;
    {
        const bool branch_taken_0x15fcdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15FCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FCDCu;
        // 0x15fce0: 0x46002102  mul.s       $f4, $f4, $f0 (Delay Slot)
        ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fcdc) {
            ctx->pc = 0x15FD04u;
            goto label_15fd04;
        }
    }
    ctx->pc = 0x15FCE4u;
label_15fce4:
    // 0x15fce4: 0x4606b034  c.lt.s      $f22, $f6
    ctx->pc = 0x15fce4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15fce8: 0x0  nop
    ctx->pc = 0x15fce8u;
    // NOP
    // 0x15fcec: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x15FCECu;
    {
        const bool branch_taken_0x15fcec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x15FCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FCECu;
        // 0x15fcf0: 0xc7a00050  lwc1        $f0, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fcec) {
            ctx->pc = 0x15FD08u;
            goto label_15fd08;
        }
    }
    ctx->pc = 0x15FCF4u;
    // 0x15fcf4: 0xc620005c  lwc1        $f0, 0x5C($s1)
    ctx->pc = 0x15fcf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15fcf8: 0x46060001  sub.s       $f0, $f0, $f6
    ctx->pc = 0x15fcf8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
    // 0x15fcfc: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x15fcfcu;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[3]);
    // 0x15fd00: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x15fd00u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_15fd04:
    // 0x15fd04: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x15fd04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15fd08:
    // 0x15fd08: 0xc6015870  lwc1        $f1, 0x5870($s0)
    ctx->pc = 0x15fd08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 22640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15fd0c: 0xc6025874  lwc1        $f2, 0x5874($s0)
    ctx->pc = 0x15fd0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 22644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15fd10: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x15fd10u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x15fd14: 0xc6035878  lwc1        $f3, 0x5878($s0)
    ctx->pc = 0x15fd14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 22648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15fd18: 0xe6015880  swc1        $f1, 0x5880($s0)
    ctx->pc = 0x15fd18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 22656), bits); }
    // 0x15fd1c: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x15fd1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15fd20: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x15fd20u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x15fd24: 0xe6025884  swc1        $f2, 0x5884($s0)
    ctx->pc = 0x15fd24u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 22660), bits); }
    // 0x15fd28: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x15fd28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15fd2c: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x15fd2cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x15fd30: 0xe6035888  swc1        $f3, 0x5888($s0)
    ctx->pc = 0x15fd30u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 22664), bits); }
    // 0x15fd34: 0x6a0b5887  ldl         $t3, 0x5887($s0)
    ctx->pc = 0x15fd34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 22663); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x15fd38: 0x6e0b5880  ldr         $t3, 0x5880($s0)
    ctx->pc = 0x15fd38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 22656); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x15fd3c: 0x8e025888  lw          $v0, 0x5888($s0)
    ctx->pc = 0x15fd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 22664)));
    // 0x15fd40: 0xb0cb0007  sdl         $t3, 0x7($a2)
    ctx->pc = 0x15fd40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15fd44: 0xb4cb0000  sdr         $t3, 0x0($a2)
    ctx->pc = 0x15fd44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15fd48: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x15fd48u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x15fd4c: 0xc6015870  lwc1        $f1, 0x5870($s0)
    ctx->pc = 0x15fd4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 22640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15fd50: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x15fd50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15fd54: 0xc6025874  lwc1        $f2, 0x5874($s0)
    ctx->pc = 0x15fd54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 22644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15fd58: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x15fd58u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x15fd5c: 0xc6035878  lwc1        $f3, 0x5878($s0)
    ctx->pc = 0x15fd5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 22648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15fd60: 0xe6015880  swc1        $f1, 0x5880($s0)
    ctx->pc = 0x15fd60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 22656), bits); }
    // 0x15fd64: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x15fd64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15fd68: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x15fd68u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x15fd6c: 0xe6025884  swc1        $f2, 0x5884($s0)
    ctx->pc = 0x15fd6cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 22660), bits); }
    // 0x15fd70: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x15fd70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15fd74: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x15fd74u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x15fd78: 0xe6035888  swc1        $f3, 0x5888($s0)
    ctx->pc = 0x15fd78u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 22664), bits); }
    // 0x15fd7c: 0x6a075887  ldl         $a3, 0x5887($s0)
    ctx->pc = 0x15fd7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 22663); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x15fd80: 0x6e075880  ldr         $a3, 0x5880($s0)
    ctx->pc = 0x15fd80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 22656); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x15fd84: 0x8e085888  lw          $t0, 0x5888($s0)
    ctx->pc = 0x15fd84u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 22664)));
    // 0x15fd88: 0xb0c7002b  sdl         $a3, 0x2B($a2)
    ctx->pc = 0x15fd88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 43); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15fd8c: 0xb4c70024  sdr         $a3, 0x24($a2)
    ctx->pc = 0x15fd8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 36); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15fd90: 0xacc8002c  sw          $t0, 0x2C($a2)
    ctx->pc = 0x15fd90u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 8));
    // 0x15fd94: 0xacc0001c  sw          $zero, 0x1C($a2)
    ctx->pc = 0x15fd94u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 0));
    // 0x15fd98: 0xacc00020  sw          $zero, 0x20($a2)
    ctx->pc = 0x15fd98u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 0));
    // 0x15fd9c: 0xe4d50040  swc1        $f21, 0x40($a2)
    ctx->pc = 0x15fd9cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 64), bits); }
    // 0x15fda0: 0xe4d50044  swc1        $f21, 0x44($a2)
    ctx->pc = 0x15fda0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 68), bits); }
    // 0x15fda4: 0xc6200060  lwc1        $f0, 0x60($s1)
    ctx->pc = 0x15fda4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15fda8: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x15fda8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x15fdac: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x15fdacu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x15fdb0: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x15fdb0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x15fdb4: 0x24c2000c  addiu       $v0, $a2, 0xC
    ctx->pc = 0x15fdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
    // 0x15fdb8: 0xa0d6000c  sb          $s6, 0xC($a2)
    ctx->pc = 0x15fdb8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 12), (uint8_t)GPR_U32(ctx, 22));
    // 0x15fdbc: 0xa0440003  sb          $a0, 0x3($v0)
    ctx->pc = 0x15fdbcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x15fdc0: 0xa0550001  sb          $s5, 0x1($v0)
    ctx->pc = 0x15fdc0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 21));
    // 0x15fdc4: 0xa0540002  sb          $s4, 0x2($v0)
    ctx->pc = 0x15fdc4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 20));
    // 0x15fdc8: 0x24c30030  addiu       $v1, $a2, 0x30
    ctx->pc = 0x15fdc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    // 0x15fdcc: 0xa0d60030  sb          $s6, 0x30($a2)
    ctx->pc = 0x15fdccu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 48), (uint8_t)GPR_U32(ctx, 22));
    // 0x15fdd0: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x15fdd0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x15fdd4: 0xa0750001  sb          $s5, 0x1($v1)
    ctx->pc = 0x15fdd4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 21));
    // 0x15fdd8: 0xa0740002  sb          $s4, 0x2($v1)
    ctx->pc = 0x15fdd8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 20));
    // 0x15fddc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x15fddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x15fde0: 0x24020300  addiu       $v0, $zero, 0x300
    ctx->pc = 0x15fde0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
    // 0x15fde4: 0x14a2000f  bne         $a1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x15FDE4u;
    {
        const bool branch_taken_0x15fde4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x15FDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FDE4u;
        // 0x15fde8: 0x24c60048  addiu       $a2, $a2, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fde4) {
            ctx->pc = 0x15FE24u;
            goto label_15fe24;
        }
    }
    ctx->pc = 0x15FDECu;
    // 0x15fdec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x15fdecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fdf0: 0x24050600  addiu       $a1, $zero, 0x600
    ctx->pc = 0x15fdf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1536));
    // 0x15fdf4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15fdf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fdf8: 0xc091fea  jal         func_247FA8
    ctx->pc = 0x15FDF8u;
    SET_GPR_U32(ctx, 31, 0x15FE00u);
    ctx->pc = 0x15FDFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15FDF8u;
    // 0x15fdfc: 0x24070019  addiu       $a3, $zero, 0x19 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247FA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x247FA8u, 0x15FDF8u, 0x15FE00u)) {
        return;
    }
    ctx->pc = 0x15FE00u;
label_15fe00:
    // 0x15fe00: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x15FE00u;
    {
        const bool branch_taken_0x15fe00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15FE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FE00u;
        // 0x15fe04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fe00) {
            ctx->pc = 0x15FE20u;
            goto label_15fe20;
        }
    }
    ctx->pc = 0x15FE08u;
    // 0x15fe08: 0xc092094  jal         func_248250
    ctx->pc = 0x15FE08u;
    SET_GPR_U32(ctx, 31, 0x15FE10u);
    ctx->pc = 0x15FE0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15FE08u;
    // 0x15fe0c: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248250u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x248250u, 0x15FE08u, 0x15FE10u)) {
        return;
    }
    ctx->pc = 0x15FE10u;
label_15fe10:
    // 0x15fe10: 0xc092016  jal         func_248058
    ctx->pc = 0x15FE10u;
    SET_GPR_U32(ctx, 31, 0x15FE18u);
    ctx->pc = 0x248058u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x248058u, 0x15FE10u, 0x15FE18u)) {
        return;
    }
    ctx->pc = 0x15FE18u;
label_15fe18:
    // 0x15fe18: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15fe18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fe1c: 0x0  nop
    ctx->pc = 0x15fe1cu;
    // NOP
label_15fe20:
    // 0x15fe20: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x15fe20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15fe24:
    // 0x15fe24: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x15fe24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_15fe28:
    // 0x15fe28: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x15fe28u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x15fe2c: 0x2e2102a  slt         $v0, $s7, $v0
    ctx->pc = 0x15fe2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x15fe30: 0x1440ff83  bnez        $v0, . + 4 + (-0x7D << 2)
    ctx->pc = 0x15FE30u;
    {
        const bool branch_taken_0x15fe30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15FE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FE30u;
        // 0x15fe34: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fe30) {
            ctx->pc = 0x15FC40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15fc40;
        }
    }
    ctx->pc = 0x15FE38u;
label_15fe38:
    // 0x15fe38: 0x18a0000b  blez        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x15FE38u;
    {
        const bool branch_taken_0x15fe38 = (GPR_S64(ctx, 5) <= 0);
        ctx->pc = 0x15FE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FE38u;
        // 0x15fe3c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fe38) {
            ctx->pc = 0x15FE68u;
            goto label_15fe68;
        }
    }
    ctx->pc = 0x15FE40u;
    // 0x15fe40: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x15fe40u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x15fe44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15fe44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fe48: 0xc091fea  jal         func_247FA8
    ctx->pc = 0x15FE48u;
    SET_GPR_U32(ctx, 31, 0x15FE50u);
    ctx->pc = 0x15FE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15FE48u;
    // 0x15fe4c: 0x24070019  addiu       $a3, $zero, 0x19 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247FA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x247FA8u, 0x15FE48u, 0x15FE50u)) {
        return;
    }
    ctx->pc = 0x15FE50u;
label_15fe50:
    // 0x15fe50: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15FE50u;
    {
        const bool branch_taken_0x15fe50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15FE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FE50u;
        // 0x15fe54: 0x340cd960  ori         $t4, $zero, 0xD960 (Delay Slot)
        SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)55648);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fe50) {
            ctx->pc = 0x15FE6Cu;
            goto label_15fe6c;
        }
    }
    ctx->pc = 0x15FE58u;
    // 0x15fe58: 0xc092094  jal         func_248250
    ctx->pc = 0x15FE58u;
    SET_GPR_U32(ctx, 31, 0x15FE60u);
    ctx->pc = 0x15FE5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15FE58u;
    // 0x15fe5c: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248250u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x248250u, 0x15FE58u, 0x15FE60u)) {
        return;
    }
    ctx->pc = 0x15FE60u;
label_15fe60:
    // 0x15fe60: 0xc092016  jal         func_248058
    ctx->pc = 0x15FE60u;
    SET_GPR_U32(ctx, 31, 0x15FE68u);
    ctx->pc = 0x248058u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x248058u, 0x15FE60u, 0x15FE68u)) {
        return;
    }
    ctx->pc = 0x15FE68u;
label_15fe68:
    // 0x15fe68: 0x340cd960  ori         $t4, $zero, 0xD960
    ctx->pc = 0x15fe68u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)55648);
label_15fe6c:
    // 0x15fe6c: 0x19d6821  addu        $t5, $t4, $sp
    ctx->pc = 0x15fe6cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 29)));
label_15fe70:
    // 0x15fe70: 0x79b0ffb0  lq          $s0, -0x50($t5)
    ctx->pc = 0x15fe70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 13), 4294967216)));
    // 0x15fe74: 0x79b1ffa0  lq          $s1, -0x60($t5)
    ctx->pc = 0x15fe74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 13), 4294967200)));
    // 0x15fe78: 0x79b2ff90  lq          $s2, -0x70($t5)
    ctx->pc = 0x15fe78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 13), 4294967184)));
    // 0x15fe7c: 0x79b3ff80  lq          $s3, -0x80($t5)
    ctx->pc = 0x15fe7cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 13), 4294967168)));
    // 0x15fe80: 0x79b4ff70  lq          $s4, -0x90($t5)
    ctx->pc = 0x15fe80u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 13), 4294967152)));
    // 0x15fe84: 0x79b5ff60  lq          $s5, -0xA0($t5)
    ctx->pc = 0x15fe84u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 13), 4294967136)));
    // 0x15fe88: 0x79b6ff50  lq          $s6, -0xB0($t5)
    ctx->pc = 0x15fe88u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 13), 4294967120)));
    // 0x15fe8c: 0x79b7ff40  lq          $s7, -0xC0($t5)
    ctx->pc = 0x15fe8cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 13), 4294967104)));
    // 0x15fe90: 0xddbfff30  ld          $ra, -0xD0($t5)
    ctx->pc = 0x15fe90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 13), 4294967088)));
    // 0x15fe94: 0xc5bafff0  lwc1        $f26, -0x10($t5)
    ctx->pc = 0x15fe94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 4294967280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x15fe98: 0xc5b9ffe8  lwc1        $f25, -0x18($t5)
    ctx->pc = 0x15fe98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 4294967272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x15fe9c: 0xc5b8ffe0  lwc1        $f24, -0x20($t5)
    ctx->pc = 0x15fe9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 4294967264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x15fea0: 0xc5b7ffd8  lwc1        $f23, -0x28($t5)
    ctx->pc = 0x15fea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 4294967256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x15fea4: 0xc5b6ffd0  lwc1        $f22, -0x30($t5)
    ctx->pc = 0x15fea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 4294967248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x15fea8: 0xc5b5ffc8  lwc1        $f21, -0x38($t5)
    ctx->pc = 0x15fea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 4294967240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x15feac: 0xc5b4ffc0  lwc1        $f20, -0x40($t5)
    ctx->pc = 0x15feacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 4294967232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x15feb0: 0x3e00008  jr          $ra
    ctx->pc = 0x15FEB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15FEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FEB0u;
        // 0x15feb4: 0x3ace821  addu        $sp, $sp, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15FEB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15FEB8u;
}

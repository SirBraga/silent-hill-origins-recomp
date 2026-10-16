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

// Function: sub_0014BC58
// Address: 0x14bc58 - 0x14c110
void sub_0014BC58_0x14bc58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014BC58_0x14bc58");
#endif

    switch (ctx->pc) {
        case 0x14bcc4u: goto label_14bcc4;
        case 0x14bcd8u: goto label_14bcd8;
        case 0x14bd74u: goto label_14bd74;
        case 0x14bd88u: goto label_14bd88;
        case 0x14bdd0u: goto label_14bdd0;
        case 0x14be08u: goto label_14be08;
        case 0x14be20u: goto label_14be20;
        case 0x14be40u: goto label_14be40;
        case 0x14bea8u: goto label_14bea8;
        case 0x14befcu: goto label_14befc;
        case 0x14bf34u: goto label_14bf34;
        case 0x14bf64u: goto label_14bf64;
        case 0x14bf70u: goto label_14bf70;
        case 0x14bf84u: goto label_14bf84;
        case 0x14bf8cu: goto label_14bf8c;
        case 0x14bff8u: goto label_14bff8;
        case 0x14c04cu: goto label_14c04c;
        case 0x14c07cu: goto label_14c07c;
        case 0x14c0acu: goto label_14c0ac;
        case 0x14c0b8u: goto label_14c0b8;
        case 0x14c0e8u: goto label_14c0e8;
        default: break;
    }

    ctx->pc = 0x14bc58u;

    // 0x14bc58: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x14bc58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x14bc5c: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x14bc5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x14bc60: 0xe7b500c8  swc1        $f21, 0xC8($sp)
    ctx->pc = 0x14bc60u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x14bc64: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14bc64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bc68: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x14bc68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x14bc6c: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x14bc6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x14bc70: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x14bc70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x14bc74: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x14bc74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x14bc78: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x14bc78u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x14bc7c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x14bc7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x14bc80: 0x10800119  beqz        $a0, . + 4 + (0x119 << 2)
    ctx->pc = 0x14BC80u;
    {
        const bool branch_taken_0x14bc80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BC80u;
        // 0x14bc84: 0x46006546  mov.s       $f21, $f12 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bc80) {
            ctx->pc = 0x14C0E8u;
            goto label_14c0e8;
        }
    }
    ctx->pc = 0x14BC88u;
    // 0x14bc88: 0x8e220150  lw          $v0, 0x150($s1)
    ctx->pc = 0x14bc88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x14bc8c: 0x10400117  beqz        $v0, . + 4 + (0x117 << 2)
    ctx->pc = 0x14BC8Cu;
    {
        const bool branch_taken_0x14bc8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BC8Cu;
        // 0x14bc90: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bc8c) {
            ctx->pc = 0x14C0ECu;
            goto label_14c0ec;
        }
    }
    ctx->pc = 0x14BC94u;
    // 0x14bc94: 0x8c930004  lw          $s3, 0x4($a0)
    ctx->pc = 0x14bc94u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x14bc98: 0x8e220154  lw          $v0, 0x154($s1)
    ctx->pc = 0x14bc98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 340)));
    // 0x14bc9c: 0x6a630047  ldl         $v1, 0x47($s3)
    ctx->pc = 0x14bc9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x14bca0: 0x6e630040  ldr         $v1, 0x40($s3)
    ctx->pc = 0x14bca0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x14bca4: 0x8e640048  lw          $a0, 0x48($s3)
    ctx->pc = 0x14bca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
    // 0x14bca8: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x14bca8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14bcac: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x14bcacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14bcb0: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x14bcb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x14bcb4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x14BCB4u;
    {
        const bool branch_taken_0x14bcb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BCB4u;
        // 0x14bcb8: 0x26700010  addiu       $s0, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bcb4) {
            ctx->pc = 0x14BCE0u;
            goto label_14bce0;
        }
    }
    ctx->pc = 0x14BCBCu;
    // 0x14bcbc: 0xc07600c  jal         func_1D8030
    ctx->pc = 0x14BCBCu;
    SET_GPR_U32(ctx, 31, 0x14BCC4u);
    ctx->pc = 0x1D8030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D8030u, 0x14BCBCu, 0x14BCC4u)) {
        return;
    }
    ctx->pc = 0x14BCC4u;
label_14bcc4:
    // 0x14bcc4: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x14bcc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x14bcc8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14BCC8u;
    {
        const bool branch_taken_0x14bcc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BCC8u;
        // 0x14bccc: 0xc7b40004  lwc1        $f20, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bcc8) {
            ctx->pc = 0x14BCDCu;
            goto label_14bcdc;
        }
    }
    ctx->pc = 0x14BCD0u;
    // 0x14bcd0: 0xc04f0c2  jal         func_13C308
    ctx->pc = 0x14BCD0u;
    SET_GPR_U32(ctx, 31, 0x14BCD8u);
    ctx->pc = 0x14BCD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BCD0u;
    // 0x14bcd4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C308u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C308u, 0x14BCD0u, 0x14BCD8u)) {
        return;
    }
    ctx->pc = 0x14BCD8u;
label_14bcd8:
    // 0x14bcd8: 0xe7b40004  swc1        $f20, 0x4($sp)
    ctx->pc = 0x14bcd8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_14bcdc:
    // 0x14bcdc: 0xae200154  sw          $zero, 0x154($s1)
    ctx->pc = 0x14bcdcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 340), GPR_U32(ctx, 0));
label_14bce0:
    // 0x14bce0: 0x3c01c120  lui         $at, 0xC120
    ctx->pc = 0x14bce0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49440 << 16));
    // 0x14bce4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x14bce4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14bce8: 0xc6210144  lwc1        $f1, 0x144($s1)
    ctx->pc = 0x14bce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14bcec: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x14bcecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x14bcf0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x14bcf0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x14bcf4: 0xe6210144  swc1        $f1, 0x144($s1)
    ctx->pc = 0x14bcf4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 324), bits); }
    // 0x14bcf8: 0x6a270147  ldl         $a3, 0x147($s1)
    ctx->pc = 0x14bcf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 327); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x14bcfc: 0x6e270140  ldr         $a3, 0x140($s1)
    ctx->pc = 0x14bcfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 320); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x14bd00: 0x8e220148  lw          $v0, 0x148($s1)
    ctx->pc = 0x14bd00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    // 0x14bd04: 0xb3a70017  sdl         $a3, 0x17($sp)
    ctx->pc = 0x14bd04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14bd08: 0xb7a70010  sdr         $a3, 0x10($sp)
    ctx->pc = 0x14bd08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14bd0c: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x14bd0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x14bd10: 0xc7a30010  lwc1        $f3, 0x10($sp)
    ctx->pc = 0x14bd10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14bd14: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x14bd14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14bd18: 0x461518c2  mul.s       $f3, $f3, $f21
    ctx->pc = 0x14bd18u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[21]);
    // 0x14bd1c: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x14bd1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14bd20: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x14bd20u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x14bd24: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x14bd24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x14bd28: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x14bd28u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x14bd2c: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x14bd2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x14bd30: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x14bd30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x14bd34: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x14bd34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14bd38: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x14bd38u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x14bd3c: 0xc6020034  lwc1        $f2, 0x34($s0)
    ctx->pc = 0x14bd3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14bd40: 0xc6030038  lwc1        $f3, 0x38($s0)
    ctx->pc = 0x14bd40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14bd44: 0xe6010030  swc1        $f1, 0x30($s0)
    ctx->pc = 0x14bd44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x14bd48: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x14bd48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14bd4c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x14bd4cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x14bd50: 0xe6020034  swc1        $f2, 0x34($s0)
    ctx->pc = 0x14bd50u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x14bd54: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x14bd54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14bd58: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x14bd58u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x14bd5c: 0xe6030038  swc1        $f3, 0x38($s0)
    ctx->pc = 0x14bd5cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x14bd60: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x14bd60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x14bd64: 0x8c43870c  lw          $v1, -0x78F4($v0)
    ctx->pc = 0x14bd64u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x33870Cu));
    // 0x14bd68: 0x26120030  addiu       $s2, $s0, 0x30
    ctx->pc = 0x14bd68u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x14bd6c: 0xc05e396  jal         func_178E58
    ctx->pc = 0x14BD6Cu;
    SET_GPR_U32(ctx, 31, 0x14BD74u);
    ctx->pc = 0x14BD70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BD6Cu;
    // 0x14bd70: 0x8c64000c  lw          $a0, 0xC($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178E58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x178E58u, 0x14BD6Cu, 0x14BD74u)) {
        return;
    }
    ctx->pc = 0x14BD74u;
label_14bd74:
    // 0x14bd74: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14bd74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bd78: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x14bd78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bd7c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x14bd7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bd80: 0xc086156  jal         func_218558
    ctx->pc = 0x14BD80u;
    SET_GPR_U32(ctx, 31, 0x14BD88u);
    ctx->pc = 0x14BD84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BD80u;
    // 0x14bd84: 0x27a70020  addiu       $a3, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218558u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x218558u, 0x14BD80u, 0x14BD88u)) {
        return;
    }
    ctx->pc = 0x14BD88u;
label_14bd88:
    // 0x14bd88: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14bd88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14bd8c: 0x5443002a  bnel        $v0, $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x14BD8Cu;
    {
        const bool branch_taken_0x14bd8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x14bd8c) {
            ctx->pc = 0x14BD90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14BD8Cu;
            // 0x14bd90: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14BE38u;
            goto label_14be38;
        }
    }
    ctx->pc = 0x14BD94u;
    // 0x14bd94: 0x6ba50027  ldl         $a1, 0x27($sp)
    ctx->pc = 0x14bd94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x14bd98: 0x6fa50020  ldr         $a1, 0x20($sp)
    ctx->pc = 0x14bd98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x14bd9c: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x14bd9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14bda0: 0xb2050037  sdl         $a1, 0x37($s0)
    ctx->pc = 0x14bda0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14bda4: 0xb6050030  sdr         $a1, 0x30($s0)
    ctx->pc = 0x14bda4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14bda8: 0xae060038  sw          $a2, 0x38($s0)
    ctx->pc = 0x14bda8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 6));
    // 0x14bdac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14bdacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bdb0: 0x6ba30037  ldl         $v1, 0x37($sp)
    ctx->pc = 0x14bdb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x14bdb4: 0x6fa30030  ldr         $v1, 0x30($sp)
    ctx->pc = 0x14bdb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x14bdb8: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x14bdb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x14bdbc: 0xb3a30057  sdl         $v1, 0x57($sp)
    ctx->pc = 0x14bdbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14bdc0: 0xb7a30050  sdr         $v1, 0x50($sp)
    ctx->pc = 0x14bdc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14bdc4: 0xafa60058  sw          $a2, 0x58($sp)
    ctx->pc = 0x14bdc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 6));
    // 0x14bdc8: 0xc053044  jal         func_14C110
    ctx->pc = 0x14BDC8u;
    SET_GPR_U32(ctx, 31, 0x14BDD0u);
    ctx->pc = 0x14BDCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BDC8u;
    // 0x14bdcc: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14C110u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x14C110u, 0x14BDC8u, 0x14BDD0u)) {
        return;
    }
    ctx->pc = 0x14BDD0u;
label_14bdd0:
    // 0x14bdd0: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x14bdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x14bdd4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x14bdd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x14bdd8: 0x8c441a70  lw          $a0, 0x1A70($v0)
    ctx->pc = 0x14bdd8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x701A70u));
    // 0x14bddc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x14bddcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bde0: 0x8c634780  lw          $v1, 0x4780($v1)
    ctx->pc = 0x14bde0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B4780u));
    // 0x14bde4: 0x10640053  beq         $v1, $a0, . + 4 + (0x53 << 2)
    ctx->pc = 0x14BDE4u;
    {
        const bool branch_taken_0x14bde4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x14BDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BDE4u;
        // 0x14bde8: 0x8e250020  lw          $a1, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bde4) {
            ctx->pc = 0x14BF34u;
            goto label_14bf34;
        }
    }
    ctx->pc = 0x14BDECu;
    // 0x14bdec: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x14bdecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14bdf0: 0x10400050  beqz        $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x14BDF0u;
    {
        const bool branch_taken_0x14bdf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BDF0u;
        // 0x14bdf4: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bdf0) {
            ctx->pc = 0x14BF34u;
            goto label_14bf34;
        }
    }
    ctx->pc = 0x14BDF8u;
    // 0x14bdf8: 0xafa30060  sw          $v1, 0x60($sp)
    ctx->pc = 0x14bdf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 3));
    // 0x14bdfc: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x14BDFCu;
    {
        const bool branch_taken_0x14bdfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BDFCu;
        // 0x14be00: 0xac850004  sw          $a1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bdfc) {
            ctx->pc = 0x14BF2Cu;
            goto label_14bf2c;
        }
    }
    ctx->pc = 0x14BE04u;
    // 0x14be04: 0x0  nop
    ctx->pc = 0x14be04u;
    // NOP
label_14be08:
    // 0x14be08: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x14be08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x14be0c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x14be0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14be10: 0x0  nop
    ctx->pc = 0x14be10u;
    // NOP
    // 0x14be14: 0x460100c3  div.s       $f3, $f0, $f1
    ctx->pc = 0x14be14u;
    ctx->f[3] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x14be18: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x14BE18u;
    {
        const bool branch_taken_0x14be18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BE18u;
        // 0x14be1c: 0xc7a00050  lwc1        $f0, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14be18) {
            ctx->pc = 0x14BED0u;
            goto label_14bed0;
        }
    }
    ctx->pc = 0x14BE20u;
label_14be20:
    // 0x14be20: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x14be20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x14be24: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x14be24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14be28: 0x0  nop
    ctx->pc = 0x14be28u;
    // NOP
    // 0x14be2c: 0x460100c3  div.s       $f3, $f0, $f1
    ctx->pc = 0x14be2cu;
    ctx->f[3] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x14be30: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x14BE30u;
    {
        const bool branch_taken_0x14be30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BE30u;
        // 0x14be34: 0xc7a00050  lwc1        $f0, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14be30) {
            ctx->pc = 0x14C020u;
            goto label_14c020;
        }
    }
    ctx->pc = 0x14BE38u;
label_14be38:
    // 0x14be38: 0xc04f598  jal         func_13D660
    ctx->pc = 0x14BE38u;
    SET_GPR_U32(ctx, 31, 0x14BE40u);
    ctx->pc = 0x14BE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BE38u;
    // 0x14be3c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13D660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13D660u, 0x14BE38u, 0x14BE40u)) {
        return;
    }
    ctx->pc = 0x14BE40u;
label_14be40:
    // 0x14be40: 0x10400049  beqz        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x14BE40u;
    {
        const bool branch_taken_0x14be40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BE40u;
        // 0x14be44: 0x3c120070  lui         $s2, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14be40) {
            ctx->pc = 0x14BF68u;
            goto label_14bf68;
        }
    }
    ctx->pc = 0x14BE48u;
    // 0x14be48: 0x6ba30007  ldl         $v1, 0x7($sp)
    ctx->pc = 0x14be48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x14be4c: 0x6fa30000  ldr         $v1, 0x0($sp)
    ctx->pc = 0x14be4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x14be50: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x14be50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14be54: 0xb2030037  sdl         $v1, 0x37($s0)
    ctx->pc = 0x14be54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14be58: 0xb6030030  sdr         $v1, 0x30($s0)
    ctx->pc = 0x14be58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14be5c: 0xae040038  sw          $a0, 0x38($s0)
    ctx->pc = 0x14be5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 4));
    // 0x14be60: 0x6a270147  ldl         $a3, 0x147($s1)
    ctx->pc = 0x14be60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 327); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x14be64: 0x6e270140  ldr         $a3, 0x140($s1)
    ctx->pc = 0x14be64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 320); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x14be68: 0x8e220148  lw          $v0, 0x148($s1)
    ctx->pc = 0x14be68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    // 0x14be6c: 0xb3a70057  sdl         $a3, 0x57($sp)
    ctx->pc = 0x14be6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14be70: 0xb7a70050  sdr         $a3, 0x50($sp)
    ctx->pc = 0x14be70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14be74: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x14be74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    // 0x14be78: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x14be78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14be7c: 0xc7a20054  lwc1        $f2, 0x54($sp)
    ctx->pc = 0x14be7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14be80: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x14be80u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x14be84: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x14be84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14be88: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x14be88u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x14be8c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x14be8cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x14be90: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x14be90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x14be94: 0xe7a20054  swc1        $f2, 0x54($sp)
    ctx->pc = 0x14be94u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x14be98: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x14be98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x14be9c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x14be9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x14bea0: 0xc04642c  jal         func_1190B0
    ctx->pc = 0x14BEA0u;
    SET_GPR_U32(ctx, 31, 0x14BEA8u);
    ctx->pc = 0x14BEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BEA0u;
    // 0x14bea4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1190B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1190B0u, 0x14BEA0u, 0x14BEA8u)) {
        return;
    }
    ctx->pc = 0x14BEA8u;
label_14bea8:
    // 0x14bea8: 0x0  nop
    ctx->pc = 0x14bea8u;
    // NOP
    // 0x14beac: 0x0  nop
    ctx->pc = 0x14beacu;
    // NOP
    // 0x14beb0: 0x46000044  c1          0x44
    ctx->pc = 0x14beb0u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x14beb4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14beb4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14beb8: 0x0  nop
    ctx->pc = 0x14beb8u;
    // NOP
    // 0x14bebc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x14bebcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14bec0: 0x0  nop
    ctx->pc = 0x14bec0u;
    // NOP
    // 0x14bec4: 0x4501ffd0  bc1t        . + 4 + (-0x30 << 2)
    ctx->pc = 0x14BEC4u;
    {
        const bool branch_taken_0x14bec4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14BEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BEC4u;
        // 0x14bec8: 0x460008c6  mov.s       $f3, $f1 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bec4) {
            ctx->pc = 0x14BE08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14be08;
        }
    }
    ctx->pc = 0x14BECCu;
    // 0x14becc: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x14beccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14bed0:
    // 0x14bed0: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x14bed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14bed4: 0xc7a20058  lwc1        $f2, 0x58($sp)
    ctx->pc = 0x14bed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14bed8: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x14bed8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x14bedc: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x14bedcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x14bee0: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x14bee0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x14bee4: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x14bee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x14bee8: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x14bee8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x14beec: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x14beecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x14bef0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14bef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bef4: 0xc053044  jal         func_14C110
    ctx->pc = 0x14BEF4u;
    SET_GPR_U32(ctx, 31, 0x14BEFCu);
    ctx->pc = 0x14BEF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BEF4u;
    // 0x14bef8: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14C110u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x14C110u, 0x14BEF4u, 0x14BEFCu)) {
        return;
    }
    ctx->pc = 0x14BEFCu;
label_14befc:
    // 0x14befc: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x14befcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x14bf00: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x14bf00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x14bf04: 0x8c641a70  lw          $a0, 0x1A70($v1)
    ctx->pc = 0x14bf04u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x701A70u));
    // 0x14bf08: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x14bf08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bf0c: 0x8c454780  lw          $a1, 0x4780($v0)
    ctx->pc = 0x14bf0cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6B4780u));
    // 0x14bf10: 0x10a40008  beq         $a1, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x14BF10u;
    {
        const bool branch_taken_0x14bf10 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x14BF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BF10u;
        // 0x14bf14: 0x8e260020  lw          $a2, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bf10) {
            ctx->pc = 0x14BF34u;
            goto label_14bf34;
        }
    }
    ctx->pc = 0x14BF18u;
    // 0x14bf18: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x14bf18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14bf1c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14BF1Cu;
    {
        const bool branch_taken_0x14bf1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BF1Cu;
        // 0x14bf20: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bf1c) {
            ctx->pc = 0x14BF34u;
            goto label_14bf34;
        }
    }
    ctx->pc = 0x14BF24u;
    // 0x14bf24: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x14bf24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x14bf28: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x14bf28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
label_14bf2c:
    // 0x14bf2c: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x14BF2Cu;
    SET_GPR_U32(ctx, 31, 0x14BF34u);
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x14BF2Cu, 0x14BF34u)) {
        return;
    }
    ctx->pc = 0x14BF34u;
label_14bf34:
    // 0x14bf34: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x14bf34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x14bf38: 0x8e431a70  lw          $v1, 0x1A70($s2)
    ctx->pc = 0x14bf38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 6768)));
    // 0x14bf3c: 0x8c444740  lw          $a0, 0x4740($v0)
    ctx->pc = 0x14bf3cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B4740u));
    // 0x14bf40: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x14BF40u;
    {
        const bool branch_taken_0x14bf40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x14BF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BF40u;
        // 0x14bf44: 0x8e250034  lw          $a1, 0x34($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bf40) {
            ctx->pc = 0x14BF64u;
            goto label_14bf64;
        }
    }
    ctx->pc = 0x14BF48u;
    // 0x14bf48: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x14bf48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14bf4c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x14BF4Cu;
    {
        const bool branch_taken_0x14bf4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14bf4c) {
            ctx->pc = 0x14BF50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14BF4Cu;
            // 0x14bf50: 0xae200034  sw          $zero, 0x34($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14BF68u;
            goto label_14bf68;
        }
    }
    ctx->pc = 0x14BF54u;
    // 0x14bf54: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x14bf54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
    // 0x14bf58: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x14bf58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x14bf5c: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x14BF5Cu;
    SET_GPR_U32(ctx, 31, 0x14BF64u);
    ctx->pc = 0x14BF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BF5Cu;
    // 0x14bf60: 0xac850004  sw          $a1, 0x4($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x14BF5Cu, 0x14BF64u)) {
        return;
    }
    ctx->pc = 0x14BF64u;
label_14bf64:
    // 0x14bf64: 0xae200034  sw          $zero, 0x34($s1)
    ctx->pc = 0x14bf64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 0));
label_14bf68:
    // 0x14bf68: 0xc07600c  jal         func_1D8030
    ctx->pc = 0x14BF68u;
    SET_GPR_U32(ctx, 31, 0x14BF70u);
    ctx->pc = 0x1D8030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D8030u, 0x14BF68u, 0x14BF70u)) {
        return;
    }
    ctx->pc = 0x14BF70u;
label_14bf70:
    // 0x14bf70: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x14bf70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x14bf74: 0x1060004e  beqz        $v1, . + 4 + (0x4E << 2)
    ctx->pc = 0x14BF74u;
    {
        const bool branch_taken_0x14bf74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14bf74) {
            ctx->pc = 0x14C0B0u;
            goto label_14c0b0;
        }
    }
    ctx->pc = 0x14BF7Cu;
    // 0x14bf7c: 0xc07600c  jal         func_1D8030
    ctx->pc = 0x14BF7Cu;
    SET_GPR_U32(ctx, 31, 0x14BF84u);
    ctx->pc = 0x1D8030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D8030u, 0x14BF7Cu, 0x14BF84u)) {
        return;
    }
    ctx->pc = 0x14BF84u;
label_14bf84:
    // 0x14bf84: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x14BF84u;
    SET_GPR_U32(ctx, 31, 0x14BF8Cu);
    ctx->pc = 0x14BF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BF84u;
    // 0x14bf88: 0x8c440014  lw          $a0, 0x14($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x14BF84u, 0x14BF8Cu)) {
        return;
    }
    ctx->pc = 0x14BF8Cu;
label_14bf8c:
    // 0x14bf8c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x14bf8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14bf90: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x14bf90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14bf94: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x14bf94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x14bf98: 0xc44284f0  lwc1        $f2, -0x7B10($v0)
    ctx->pc = 0x14bf98u;
    { uint32_t bits = FAST_READ32(0x3384F0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14bf9c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x14bf9cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x14bfa0: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x14bfa0u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x14bfa4: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x14bfa4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14bfa8: 0x0  nop
    ctx->pc = 0x14bfa8u;
    // NOP
    // 0x14bfac: 0x45000040  bc1f        . + 4 + (0x40 << 2)
    ctx->pc = 0x14BFACu;
    {
        const bool branch_taken_0x14bfac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14BFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BFACu;
        // 0x14bfb0: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bfac) {
            ctx->pc = 0x14C0B0u;
            goto label_14c0b0;
        }
    }
    ctx->pc = 0x14BFB4u;
    // 0x14bfb4: 0x6a250147  ldl         $a1, 0x147($s1)
    ctx->pc = 0x14bfb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 327); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x14bfb8: 0x6e250140  ldr         $a1, 0x140($s1)
    ctx->pc = 0x14bfb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 320); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x14bfbc: 0x8e260148  lw          $a2, 0x148($s1)
    ctx->pc = 0x14bfbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    // 0x14bfc0: 0xb3a50057  sdl         $a1, 0x57($sp)
    ctx->pc = 0x14bfc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14bfc4: 0xb7a50050  sdr         $a1, 0x50($sp)
    ctx->pc = 0x14bfc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14bfc8: 0xafa60058  sw          $a2, 0x58($sp)
    ctx->pc = 0x14bfc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 6));
    // 0x14bfcc: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x14bfccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14bfd0: 0xc7a20054  lwc1        $f2, 0x54($sp)
    ctx->pc = 0x14bfd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14bfd4: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x14bfd4u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x14bfd8: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x14bfd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14bfdc: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x14bfdcu;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x14bfe0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x14bfe0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x14bfe4: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x14bfe4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x14bfe8: 0xe7a20054  swc1        $f2, 0x54($sp)
    ctx->pc = 0x14bfe8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x14bfec: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x14bfecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x14bff0: 0xc04642c  jal         func_1190B0
    ctx->pc = 0x14BFF0u;
    SET_GPR_U32(ctx, 31, 0x14BFF8u);
    ctx->pc = 0x14BFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BFF0u;
    // 0x14bff4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1190B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1190B0u, 0x14BFF0u, 0x14BFF8u)) {
        return;
    }
    ctx->pc = 0x14BFF8u;
label_14bff8:
    // 0x14bff8: 0x0  nop
    ctx->pc = 0x14bff8u;
    // NOP
    // 0x14bffc: 0x0  nop
    ctx->pc = 0x14bffcu;
    // NOP
    // 0x14c000: 0x46000044  c1          0x44
    ctx->pc = 0x14c000u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x14c004: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14c004u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14c008: 0x0  nop
    ctx->pc = 0x14c008u;
    // NOP
    // 0x14c00c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x14c00cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14c010: 0x0  nop
    ctx->pc = 0x14c010u;
    // NOP
    // 0x14c014: 0x4501ff82  bc1t        . + 4 + (-0x7E << 2)
    ctx->pc = 0x14C014u;
    {
        const bool branch_taken_0x14c014 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14C018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C014u;
        // 0x14c018: 0x460008c6  mov.s       $f3, $f1 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c014) {
            ctx->pc = 0x14BE20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14be20;
        }
    }
    ctx->pc = 0x14C01Cu;
    // 0x14c01c: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x14c01cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14c020:
    // 0x14c020: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x14c020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14c024: 0xc7a20058  lwc1        $f2, 0x58($sp)
    ctx->pc = 0x14c024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14c028: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x14c028u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x14c02c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x14c02cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x14c030: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x14c030u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x14c034: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x14c034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x14c038: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x14c038u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x14c03c: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x14c03cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x14c040: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14c040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c044: 0xc053044  jal         func_14C110
    ctx->pc = 0x14C044u;
    SET_GPR_U32(ctx, 31, 0x14C04Cu);
    ctx->pc = 0x14C048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C044u;
    // 0x14c048: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14C110u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x14C110u, 0x14C044u, 0x14C04Cu)) {
        return;
    }
    ctx->pc = 0x14C04Cu;
label_14c04c:
    // 0x14c04c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x14c04cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x14c050: 0x8e431a70  lw          $v1, 0x1A70($s2)
    ctx->pc = 0x14c050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 6768)));
    // 0x14c054: 0x8c444780  lw          $a0, 0x4780($v0)
    ctx->pc = 0x14c054u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B4780u));
    // 0x14c058: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x14C058u;
    {
        const bool branch_taken_0x14c058 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x14C05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C058u;
        // 0x14c05c: 0x8e250020  lw          $a1, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c058) {
            ctx->pc = 0x14C07Cu;
            goto label_14c07c;
        }
    }
    ctx->pc = 0x14C060u;
    // 0x14c060: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x14c060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14c064: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x14C064u;
    {
        const bool branch_taken_0x14c064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C064u;
        // 0x14c068: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c064) {
            ctx->pc = 0x14C084u;
            goto label_14c084;
        }
    }
    ctx->pc = 0x14C06Cu;
    // 0x14c06c: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x14c06cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
    // 0x14c070: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x14c070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x14c074: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x14C074u;
    SET_GPR_U32(ctx, 31, 0x14C07Cu);
    ctx->pc = 0x14C078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C074u;
    // 0x14c078: 0xac850004  sw          $a1, 0x4($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x14C074u, 0x14C07Cu)) {
        return;
    }
    ctx->pc = 0x14C07Cu;
label_14c07c:
    // 0x14c07c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x14c07cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x14c080: 0x8e431a70  lw          $v1, 0x1A70($s2)
    ctx->pc = 0x14c080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 6768)));
label_14c084:
    // 0x14c084: 0x8c444740  lw          $a0, 0x4740($v0)
    ctx->pc = 0x14c084u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18240)));
    // 0x14c088: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x14C088u;
    {
        const bool branch_taken_0x14c088 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x14C08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C088u;
        // 0x14c08c: 0x8e250034  lw          $a1, 0x34($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c088) {
            ctx->pc = 0x14C0ACu;
            goto label_14c0ac;
        }
    }
    ctx->pc = 0x14C090u;
    // 0x14c090: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x14c090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14c094: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x14C094u;
    {
        const bool branch_taken_0x14c094 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c094) {
            ctx->pc = 0x14C098u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14C094u;
            // 0x14c098: 0xae200034  sw          $zero, 0x34($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14C0B0u;
            goto label_14c0b0;
        }
    }
    ctx->pc = 0x14C09Cu;
    // 0x14c09c: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x14c09cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
    // 0x14c0a0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x14c0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x14c0a4: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x14C0A4u;
    SET_GPR_U32(ctx, 31, 0x14C0ACu);
    ctx->pc = 0x14C0A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C0A4u;
    // 0x14c0a8: 0xac850004  sw          $a1, 0x4($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x14C0A4u, 0x14C0ACu)) {
        return;
    }
    ctx->pc = 0x14C0ACu;
label_14c0ac:
    // 0x14c0ac: 0xae200034  sw          $zero, 0x34($s1)
    ctx->pc = 0x14c0acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 0));
label_14c0b0:
    // 0x14c0b0: 0xc08992e  jal         func_2264B8
    ctx->pc = 0x14C0B0u;
    SET_GPR_U32(ctx, 31, 0x14C0B8u);
    ctx->pc = 0x14C0B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C0B0u;
    // 0x14c0b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2264B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2264B8u, 0x14C0B0u, 0x14C0B8u)) {
        return;
    }
    ctx->pc = 0x14C0B8u;
label_14c0b8:
    // 0x14c0b8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x14c0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x14c0bc: 0x8e431a70  lw          $v1, 0x1A70($s2)
    ctx->pc = 0x14c0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 6768)));
    // 0x14c0c0: 0x8c444788  lw          $a0, 0x4788($v0)
    ctx->pc = 0x14c0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B4788u));
    // 0x14c0c4: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x14C0C4u;
    {
        const bool branch_taken_0x14c0c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x14C0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C0C4u;
        // 0x14c0c8: 0x8e250008  lw          $a1, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c0c4) {
            ctx->pc = 0x14C0E8u;
            goto label_14c0e8;
        }
    }
    ctx->pc = 0x14C0CCu;
    // 0x14c0cc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x14c0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14c0d0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14C0D0u;
    {
        const bool branch_taken_0x14c0d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C0D0u;
        // 0x14c0d4: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c0d0) {
            ctx->pc = 0x14C0ECu;
            goto label_14c0ec;
        }
    }
    ctx->pc = 0x14C0D8u;
    // 0x14c0d8: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x14c0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x14c0dc: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x14c0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x14c0e0: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x14C0E0u;
    SET_GPR_U32(ctx, 31, 0x14C0E8u);
    ctx->pc = 0x14C0E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C0E0u;
    // 0x14c0e4: 0xac850004  sw          $a1, 0x4($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x14C0E0u, 0x14C0E8u)) {
        return;
    }
    ctx->pc = 0x14C0E8u;
label_14c0e8:
    // 0x14c0e8: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x14c0e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_14c0ec:
    // 0x14c0ec: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x14c0ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x14c0f0: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x14c0f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x14c0f4: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x14c0f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x14c0f8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x14c0f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x14c0fc: 0xc7b500c8  lwc1        $f21, 0xC8($sp)
    ctx->pc = 0x14c0fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x14c100: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x14c100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x14c104: 0x3e00008  jr          $ra
    ctx->pc = 0x14C104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14C108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C104u;
        // 0x14c108: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14C104u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14C10Cu;
    // 0x14c10c: 0x0  nop
    ctx->pc = 0x14c10cu;
    // NOP
    ctx->pc = 0x14c110u;
}

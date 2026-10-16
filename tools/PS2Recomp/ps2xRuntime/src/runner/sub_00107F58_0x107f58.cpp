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

// Function: sub_00107F58
// Address: 0x107f58 - 0x1081f0
void sub_00107F58_0x107f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00107F58_0x107f58");
#endif

    switch (ctx->pc) {
        case 0x107fa8u: goto label_107fa8;
        case 0x107fb0u: goto label_107fb0;
        case 0x107fd0u: goto label_107fd0;
        case 0x108028u: goto label_108028;
        case 0x108160u: goto label_108160;
        case 0x108178u: goto label_108178;
        case 0x108188u: goto label_108188;
        default: break;
    }

    ctx->pc = 0x107f58u;

    // 0x107f58: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x107f58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x107f5c: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x107f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
    // 0x107f60: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x107f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
    // 0x107f64: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x107f64u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107f68: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x107f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
    // 0x107f6c: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x107f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
    // 0x107f70: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x107f70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
    // 0x107f74: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x107f74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
    // 0x107f78: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x107f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x107f7c: 0xe7b50108  swc1        $f21, 0x108($sp)
    ctx->pc = 0x107f7cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x107f80: 0xe7b40100  swc1        $f20, 0x100($sp)
    ctx->pc = 0x107f80u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x107f84: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x107f84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
    // 0x107f88: 0x8ed00008  lw          $s0, 0x8($s6)
    ctx->pc = 0x107f88u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x107f8c: 0x1200008a  beqz        $s0, . + 4 + (0x8A << 2)
    ctx->pc = 0x107F8Cu;
    {
        const bool branch_taken_0x107f8c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x107F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107F8Cu;
        // 0x107f90: 0x27b40040  addiu       $s4, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107f8c) {
            ctx->pc = 0x1081B8u;
            goto label_1081b8;
        }
    }
    ctx->pc = 0x107F94u;
    // 0x107f94: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x107f94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x107f98: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x107f98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x107f9c: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x107f9cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x107fa0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x107fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x107fa4: 0x0  nop
    ctx->pc = 0x107fa4u;
    // NOP
label_107fa8:
    // 0x107fa8: 0xc08994a  jal         func_226528
    ctx->pc = 0x107FA8u;
    SET_GPR_U32(ctx, 31, 0x107FB0u);
    ctx->pc = 0x107FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107FA8u;
    // 0x107fac: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226528u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226528u, 0x107FA8u, 0x107FB0u)) {
        return;
    }
    ctx->pc = 0x107FB0u;
label_107fb0:
    // 0x107fb0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x107fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x107fb4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x107fb4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107fb8: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x107fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x107fbc: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x107fbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x107fc0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x107FC0u;
    {
        const bool branch_taken_0x107fc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x107fc0) {
            ctx->pc = 0x107FC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107FC0u;
            // 0x107fc4: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107FD4u;
            goto label_107fd4;
        }
    }
    ctx->pc = 0x107FC8u;
    // 0x107fc8: 0xc0952e0  jal         func_254B80
    ctx->pc = 0x107FC8u;
    SET_GPR_U32(ctx, 31, 0x107FD0u);
    ctx->pc = 0x254B80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x254B80u, 0x107FC8u, 0x107FD0u)) {
        return;
    }
    ctx->pc = 0x107FD0u;
label_107fd0:
    // 0x107fd0: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x107fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_107fd4:
    // 0x107fd4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x107fd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107fd8: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x107fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x107fdc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x107fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x107fe0: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x107fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x107fe4: 0x8c720000  lw          $s2, 0x0($v1)
    ctx->pc = 0x107fe4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x107fe8: 0x2451001c  addiu       $s1, $v0, 0x1C
    ctx->pc = 0x107fe8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
    // 0x107fec: 0x68830037  ldl         $v1, 0x37($a0)
    ctx->pc = 0x107fecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x107ff0: 0x6c830030  ldr         $v1, 0x30($a0)
    ctx->pc = 0x107ff0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x107ff4: 0x8c880038  lw          $t0, 0x38($a0)
    ctx->pc = 0x107ff4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x107ff8: 0xb3a30017  sdl         $v1, 0x17($sp)
    ctx->pc = 0x107ff8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x107ffc: 0xb7a30010  sdr         $v1, 0x10($sp)
    ctx->pc = 0x107ffcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x108000: 0xafa80018  sw          $t0, 0x18($sp)
    ctx->pc = 0x108000u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 8));
    // 0x108004: 0x6ba20017  ldl         $v0, 0x17($sp)
    ctx->pc = 0x108004u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x108008: 0x6fa20010  ldr         $v0, 0x10($sp)
    ctx->pc = 0x108008u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x10800c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x10800cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x108010: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x108010u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x108014: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x108014u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x108018: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x108018u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x10801c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x10801cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x108020: 0x18400038  blez        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x108020u;
    {
        const bool branch_taken_0x108020 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x108024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108020u;
        // 0x108024: 0x27a70030  addiu       $a3, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108020) {
            ctx->pc = 0x108104u;
            goto label_108104;
        }
    }
    ctx->pc = 0x108028u;
label_108028:
    // 0x108028: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x108028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x10802c: 0x68490037  ldl         $t1, 0x37($v0)
    ctx->pc = 0x10802cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x108030: 0x6c490030  ldr         $t1, 0x30($v0)
    ctx->pc = 0x108030u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x108034: 0x8c4a0038  lw          $t2, 0x38($v0)
    ctx->pc = 0x108034u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x108038: 0xb3a90027  sdl         $t1, 0x27($sp)
    ctx->pc = 0x108038u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x10803c: 0xb7a90020  sdr         $t1, 0x20($sp)
    ctx->pc = 0x10803cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x108040: 0xafaa0028  sw          $t2, 0x28($sp)
    ctx->pc = 0x108040u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 10));
    // 0x108044: 0xc4a2000c  lwc1        $f2, 0xC($a1)
    ctx->pc = 0x108044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x108048: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x108048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10804c: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x10804cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x108050: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x108050u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x108054: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x108054u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x108058: 0x0  nop
    ctx->pc = 0x108058u;
    // NOP
    // 0x10805c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x10805Cu;
    {
        const bool branch_taken_0x10805c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x10805c) {
            ctx->pc = 0x108060u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10805Cu;
            // 0x108060: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x108064u;
            goto label_108064;
        }
    }
    ctx->pc = 0x108064u;
label_108064:
    // 0x108064: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x108064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x108068: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x108068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10806c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x10806cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x108070: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x108070u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x108074: 0x0  nop
    ctx->pc = 0x108074u;
    // NOP
    // 0x108078: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x108078u;
    {
        const bool branch_taken_0x108078 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x108078) {
            ctx->pc = 0x10807Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x108078u;
            // 0x10807c: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x108080u;
            goto label_108080;
        }
    }
    ctx->pc = 0x108080u;
label_108080:
    // 0x108080: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x108080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x108084: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x108084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x108088: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x108088u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x10808c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x10808cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x108090: 0x0  nop
    ctx->pc = 0x108090u;
    // NOP
    // 0x108094: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x108094u;
    {
        const bool branch_taken_0x108094 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x108094) {
            ctx->pc = 0x108098u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x108094u;
            // 0x108098: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x10809Cu;
            goto label_10809c;
        }
    }
    ctx->pc = 0x10809Cu;
label_10809c:
    // 0x10809c: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x10809cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1080a0: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x1080a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1080a4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1080a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1080a8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1080a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1080ac: 0x0  nop
    ctx->pc = 0x1080acu;
    // NOP
    // 0x1080b0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1080B0u;
    {
        const bool branch_taken_0x1080b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1080b0) {
            ctx->pc = 0x1080B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1080B0u;
            // 0x1080b4: 0xe7a00010  swc1        $f0, 0x10($sp) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1080B8u;
            goto label_1080b8;
        }
    }
    ctx->pc = 0x1080B8u;
label_1080b8:
    // 0x1080b8: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x1080b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1080bc: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1080bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1080c0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1080c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1080c4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1080c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1080c8: 0x0  nop
    ctx->pc = 0x1080c8u;
    // NOP
    // 0x1080cc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1080CCu;
    {
        const bool branch_taken_0x1080cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1080cc) {
            ctx->pc = 0x1080D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1080CCu;
            // 0x1080d0: 0xe7a00014  swc1        $f0, 0x14($sp) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1080D4u;
            goto label_1080d4;
        }
    }
    ctx->pc = 0x1080D4u;
label_1080d4:
    // 0x1080d4: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x1080d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1080d8: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x1080d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1080dc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1080dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1080e0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1080e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1080e4: 0x0  nop
    ctx->pc = 0x1080e4u;
    // NOP
    // 0x1080e8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1080E8u;
    {
        const bool branch_taken_0x1080e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1080e8) {
            ctx->pc = 0x1080ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1080E8u;
            // 0x1080ec: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1080F0u;
            goto label_1080f0;
        }
    }
    ctx->pc = 0x1080F0u;
label_1080f0:
    // 0x1080f0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1080f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1080f4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1080f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1080f8: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x1080f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1080fc: 0x1440ffca  bnez        $v0, . + 4 + (-0x36 << 2)
    ctx->pc = 0x1080FCu;
    {
        const bool branch_taken_0x1080fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x108100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1080FCu;
        // 0x108100: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1080fc) {
            ctx->pc = 0x108028u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_108028;
        }
    }
    ctx->pc = 0x108104u;
label_108104:
    // 0x108104: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x108104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x108108: 0xc7a40010  lwc1        $f4, 0x10($sp)
    ctx->pc = 0x108108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x10810c: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x10810cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x108110: 0xc7a50014  lwc1        $f5, 0x14($sp)
    ctx->pc = 0x108110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x108114: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x108114u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x108118: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x108118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10811c: 0xc7a30018  lwc1        $f3, 0x18($sp)
    ctx->pc = 0x10811cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x108120: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x108120u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x108124: 0x46151082  mul.s       $f2, $f2, $f21
    ctx->pc = 0x108124u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[21]);
    // 0x108128: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x108128u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x10812c: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x10812cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x108130: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x108130u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x108134: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x108134u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x108138: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x108138u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x10813c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x10813cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x108140: 0x46022101  sub.s       $f4, $f4, $f2
    ctx->pc = 0x108140u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
    // 0x108144: 0x46012941  sub.s       $f5, $f5, $f1
    ctx->pc = 0x108144u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[1]);
    // 0x108148: 0xe7a40030  swc1        $f4, 0x30($sp)
    ctx->pc = 0x108148u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x10814c: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x10814cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x108150: 0xe7a50034  swc1        $f5, 0x34($sp)
    ctx->pc = 0x108150u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x108154: 0xe7a30038  swc1        $f3, 0x38($sp)
    ctx->pc = 0x108154u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x108158: 0xc093aa8  jal         func_24EAA0
    ctx->pc = 0x108158u;
    SET_GPR_U32(ctx, 31, 0x108160u);
    ctx->pc = 0x10815Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108158u;
    // 0x10815c: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EAA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EAA0u, 0x108158u, 0x108160u)) {
        return;
    }
    ctx->pc = 0x108160u;
label_108160:
    // 0x108160: 0x32424000  andi        $v0, $s2, 0x4000
    ctx->pc = 0x108160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)16384);
    // 0x108164: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x108164u;
    {
        const bool branch_taken_0x108164 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x108168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108164u;
        // 0x108168: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x108164) {
            ctx->pc = 0x108188u;
            goto label_108188;
        }
    }
    ctx->pc = 0x10816Cu;
    // 0x10816c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x10816cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108170: 0xc092e7c  jal         func_24B9F0
    ctx->pc = 0x108170u;
    SET_GPR_U32(ctx, 31, 0x108178u);
    ctx->pc = 0x108174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108170u;
    // 0x108174: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B9F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B9F0u, 0x108170u, 0x108178u)) {
        return;
    }
    ctx->pc = 0x108178u;
label_108178:
    // 0x108178: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x108178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10817c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x10817cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108180: 0xc093aea  jal         func_24EBA8
    ctx->pc = 0x108180u;
    SET_GPR_U32(ctx, 31, 0x108188u);
    ctx->pc = 0x108184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108180u;
    // 0x108184: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EBA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EBA8u, 0x108180u, 0x108188u)) {
        return;
    }
    ctx->pc = 0x108188u;
label_108188:
    // 0x108188: 0x6ba50027  ldl         $a1, 0x27($sp)
    ctx->pc = 0x108188u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x10818c: 0x6fa50020  ldr         $a1, 0x20($sp)
    ctx->pc = 0x10818cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x108190: 0x8fa80028  lw          $t0, 0x28($sp)
    ctx->pc = 0x108190u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x108194: 0xb2250007  sdl         $a1, 0x7($s1)
    ctx->pc = 0x108194u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x108198: 0xb6250000  sdr         $a1, 0x0($s1)
    ctx->pc = 0x108198u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x10819c: 0xae280008  sw          $t0, 0x8($s1)
    ctx->pc = 0x10819cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 8));
    // 0x1081a0: 0xc6c00004  lwc1        $f0, 0x4($s6)
    ctx->pc = 0x1081a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1081a4: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1081a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1081a8: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x1081a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x1081ac: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x1081acu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1081b0: 0x5600ff7d  bnel        $s0, $zero, . + 4 + (-0x83 << 2)
    ctx->pc = 0x1081B0u;
    {
        const bool branch_taken_0x1081b0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1081b0) {
            ctx->pc = 0x1081B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1081B0u;
            // 0x1081b4: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107FA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_107fa8;
        }
    }
    ctx->pc = 0x1081B8u;
label_1081b8:
    // 0x1081b8: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x1081b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1081bc: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x1081bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1081c0: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x1081c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1081c4: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x1081c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1081c8: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x1081c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1081cc: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x1081ccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1081d0: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x1081d0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1081d4: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1081d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1081d8: 0xc7b50108  lwc1        $f21, 0x108($sp)
    ctx->pc = 0x1081d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1081dc: 0xc7b40100  lwc1        $f20, 0x100($sp)
    ctx->pc = 0x1081dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1081e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1081E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1081E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1081E0u;
        // 0x1081e4: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1081E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1081E8u;
    // 0x1081e8: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1081e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x1081ec: 0x0  nop
    ctx->pc = 0x1081ecu;
    // NOP
    ctx->pc = 0x1081f0u;
}

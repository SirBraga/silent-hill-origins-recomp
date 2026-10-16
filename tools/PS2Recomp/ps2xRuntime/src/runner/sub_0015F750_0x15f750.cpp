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

// Function: sub_0015F750
// Address: 0x15f750 - 0x15fa68
void sub_0015F750_0x15f750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015F750_0x15f750");
#endif

    switch (ctx->pc) {
        case 0x15f7b4u: goto label_15f7b4;
        case 0x15f844u: goto label_15f844;
        case 0x15f868u: goto label_15f868;
        case 0x15f8bcu: goto label_15f8bc;
        case 0x15f8dcu: goto label_15f8dc;
        case 0x15f928u: goto label_15f928;
        case 0x15f944u: goto label_15f944;
        default: break;
    }

    ctx->pc = 0x15f750u;

    // 0x15f750: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x15f750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x15f754: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x15f754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x15f758: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x15f758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x15f75c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x15f75cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f760: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x15f760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x15f764: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x15f764u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f768: 0xe7b600a0  swc1        $f22, 0xA0($sp)
    ctx->pc = 0x15f768u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x15f76c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x15f76cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f770: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x15f770u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x15f774: 0x46006d86  mov.s       $f22, $f13
    ctx->pc = 0x15f774u;
    ctx->f[22] = FPU_MOV_S(ctx->f[13]);
    // 0x15f778: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x15f778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x15f77c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x15f77cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x15f780: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x15f780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x15f784: 0xe7bb00c8  swc1        $f27, 0xC8($sp)
    ctx->pc = 0x15f784u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x15f788: 0xe7ba00c0  swc1        $f26, 0xC0($sp)
    ctx->pc = 0x15f788u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x15f78c: 0xe7b900b8  swc1        $f25, 0xB8($sp)
    ctx->pc = 0x15f78cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x15f790: 0xe7b800b0  swc1        $f24, 0xB0($sp)
    ctx->pc = 0x15f790u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x15f794: 0xe7b700a8  swc1        $f23, 0xA8($sp)
    ctx->pc = 0x15f794u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x15f798: 0x10c000a3  beqz        $a2, . + 4 + (0xA3 << 2)
    ctx->pc = 0x15F798u;
    {
        const bool branch_taken_0x15f798 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F798u;
        // 0x15f79c: 0xe7b50098  swc1        $f21, 0x98($sp) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f798) {
            ctx->pc = 0x15FA28u;
            goto label_15fa28;
        }
    }
    ctx->pc = 0x15F7A0u;
    // 0x15f7a0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x15f7a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f7a4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x15f7a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f7a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15f7a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f7ac: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x15F7ACu;
    SET_GPR_U32(ctx, 31, 0x15F7B4u);
    ctx->pc = 0x15F7B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F7ACu;
    // 0x15f7b0: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x15F7ACu, 0x15F7B4u)) {
        return;
    }
    ctx->pc = 0x15F7B4u;
label_15f7b4:
    // 0x15f7b4: 0x4614a540  add.s       $f21, $f20, $f20
    ctx->pc = 0x15f7b4u;
    ctx->f[21] = FPU_ADD_S(ctx->f[20], ctx->f[20]);
    // 0x15f7b8: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x15f7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x15f7bc: 0xc62c0090  lwc1        $f12, 0x90($s1)
    ctx->pc = 0x15f7bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15f7c0: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x15f7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x15f7c4: 0x4480d000  mtc1        $zero, $f26
    ctx->pc = 0x15f7c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
    // 0x15f7c8: 0x68620047  ldl         $v0, 0x47($v1)
    ctx->pc = 0x15f7c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x15f7cc: 0x6c620040  ldr         $v0, 0x40($v1)
    ctx->pc = 0x15f7ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x15f7d0: 0x8c640048  lw          $a0, 0x48($v1)
    ctx->pc = 0x15f7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x15f7d4: 0xb3a20017  sdl         $v0, 0x17($sp)
    ctx->pc = 0x15f7d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15f7d8: 0xb7a20010  sdr         $v0, 0x10($sp)
    ctx->pc = 0x15f7d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15f7dc: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x15f7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x15f7e0: 0x6ba20017  ldl         $v0, 0x17($sp)
    ctx->pc = 0x15f7e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x15f7e4: 0x6fa20010  ldr         $v0, 0x10($sp)
    ctx->pc = 0x15f7e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x15f7e8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x15f7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15f7ec: 0xb3a20037  sdl         $v0, 0x37($sp)
    ctx->pc = 0x15f7ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15f7f0: 0xb7a20030  sdr         $v0, 0x30($sp)
    ctx->pc = 0x15f7f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15f7f4: 0xafa30038  sw          $v1, 0x38($sp)
    ctx->pc = 0x15f7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 3));
    // 0x15f7f8: 0x6ba60037  ldl         $a2, 0x37($sp)
    ctx->pc = 0x15f7f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x15f7fc: 0x6fa60030  ldr         $a2, 0x30($sp)
    ctx->pc = 0x15f7fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x15f800: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x15f800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15f804: 0xb3a60027  sdl         $a2, 0x27($sp)
    ctx->pc = 0x15f804u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15f808: 0xb7a60020  sdr         $a2, 0x20($sp)
    ctx->pc = 0x15f808u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15f80c: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x15f80cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x15f810: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x15f810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15f814: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x15f814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15f818: 0xc7a30030  lwc1        $f3, 0x30($sp)
    ctx->pc = 0x15f818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15f81c: 0x46140841  sub.s       $f1, $f1, $f20
    ctx->pc = 0x15f81cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
    // 0x15f820: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x15f820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15f824: 0x46141081  sub.s       $f2, $f2, $f20
    ctx->pc = 0x15f824u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[20]);
    // 0x15f828: 0x461418c0  add.s       $f3, $f3, $f20
    ctx->pc = 0x15f828u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[20]);
    // 0x15f82c: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x15f82cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x15f830: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x15f830u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x15f834: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x15f834u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x15f838: 0xe7a30030  swc1        $f3, 0x30($sp)
    ctx->pc = 0x15f838u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x15f83c: 0xc09b164  jal         func_26C590
    ctx->pc = 0x15F83Cu;
    SET_GPR_U32(ctx, 31, 0x15F844u);
    ctx->pc = 0x15F840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F83Cu;
    // 0x15f840: 0xe7a00038  swc1        $f0, 0x38($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C590u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C590u, 0x15F83Cu, 0x15F844u)) {
        return;
    }
    ctx->pc = 0x15F844u;
label_15f844:
    // 0x15f844: 0xc6420008  lwc1        $f2, 0x8($s2)
    ctx->pc = 0x15f844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15f848: 0xc623009c  lwc1        $f3, 0x9C($s1)
    ctx->pc = 0x15f848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15f84c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x15f84cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x15f850: 0xc6210088  lwc1        $f1, 0x88($s1)
    ctx->pc = 0x15f850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15f854: 0xc62c0090  lwc1        $f12, 0x90($s1)
    ctx->pc = 0x15f854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15f858: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x15f858u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x15f85c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x15f85cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x15f860: 0xc09b0e8  jal         func_26C3A0
    ctx->pc = 0x15F860u;
    SET_GPR_U32(ctx, 31, 0x15F868u);
    ctx->pc = 0x15F864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F860u;
    // 0x15f864: 0xe6210088  swc1        $f1, 0x88($s1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 136), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C3A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C3A0u, 0x15F860u, 0x15F868u)) {
        return;
    }
    ctx->pc = 0x15F868u;
label_15f868:
    // 0x15f868: 0xc6420008  lwc1        $f2, 0x8($s2)
    ctx->pc = 0x15f868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15f86c: 0xc624009c  lwc1        $f4, 0x9C($s1)
    ctx->pc = 0x15f86cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x15f870: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x15f870u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x15f874: 0xc621008c  lwc1        $f1, 0x8C($s1)
    ctx->pc = 0x15f874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15f878: 0xc62500a8  lwc1        $f5, 0xA8($s1)
    ctx->pc = 0x15f878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x15f87c: 0xc6230090  lwc1        $f3, 0x90($s1)
    ctx->pc = 0x15f87cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15f880: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x15f880u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x15f884: 0xc62600ac  lwc1        $f6, 0xAC($s1)
    ctx->pc = 0x15f884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x15f888: 0xc6220094  lwc1        $f2, 0x94($s1)
    ctx->pc = 0x15f888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15f88c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x15f88cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x15f890: 0xe621008c  swc1        $f1, 0x8C($s1)
    ctx->pc = 0x15f890u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 140), bits); }
    // 0x15f894: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x15f894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15f898: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x15f898u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x15f89c: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x15f89cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x15f8a0: 0xe6230090  swc1        $f3, 0x90($s1)
    ctx->pc = 0x15f8a0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 144), bits); }
    // 0x15f8a4: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x15f8a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15f8a8: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x15f8a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x15f8ac: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x15f8acu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x15f8b0: 0x46001306  mov.s       $f12, $f2
    ctx->pc = 0x15f8b0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[2]);
    // 0x15f8b4: 0xc09b164  jal         func_26C590
    ctx->pc = 0x15F8B4u;
    SET_GPR_U32(ctx, 31, 0x15F8BCu);
    ctx->pc = 0x15F8B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F8B4u;
    // 0x15f8b8: 0xe6220094  swc1        $f2, 0x94($s1) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 148), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C590u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C590u, 0x15F8B4u, 0x15F8BCu)) {
        return;
    }
    ctx->pc = 0x15F8BCu;
label_15f8bc:
    // 0x15f8bc: 0xc6420008  lwc1        $f2, 0x8($s2)
    ctx->pc = 0x15f8bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15f8c0: 0xc62300a4  lwc1        $f3, 0xA4($s1)
    ctx->pc = 0x15f8c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15f8c4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x15f8c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x15f8c8: 0xc6210098  lwc1        $f1, 0x98($s1)
    ctx->pc = 0x15f8c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15f8cc: 0xc62c0094  lwc1        $f12, 0x94($s1)
    ctx->pc = 0x15f8ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15f8d0: 0x46020e42  mul.s       $f25, $f1, $f2
    ctx->pc = 0x15f8d0u;
    ctx->f[25] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x15f8d4: 0xc09b0e8  jal         func_26C3A0
    ctx->pc = 0x15F8D4u;
    SET_GPR_U32(ctx, 31, 0x15F8DCu);
    ctx->pc = 0x15F8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F8D4u;
    // 0x15f8d8: 0x46030602  mul.s       $f24, $f0, $f3 (Delay Slot)
    ctx->f[24] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C3A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C3A0u, 0x15F8D4u, 0x15F8DCu)) {
        return;
    }
    ctx->pc = 0x15F8DCu;
label_15f8dc:
    // 0x15f8dc: 0xc6420008  lwc1        $f2, 0x8($s2)
    ctx->pc = 0x15f8dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15f8e0: 0xc62300a4  lwc1        $f3, 0xA4($s1)
    ctx->pc = 0x15f8e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15f8e4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x15f8e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x15f8e8: 0xc62100a0  lwc1        $f1, 0xA0($s1)
    ctx->pc = 0x15f8e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15f8ec: 0x8e2200b4  lw          $v0, 0xB4($s1)
    ctx->pc = 0x15f8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
    // 0x15f8f0: 0x460115c2  mul.s       $f23, $f2, $f1
    ctx->pc = 0x15f8f0u;
    ctx->f[23] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x15f8f4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x15F8F4u;
    {
        const bool branch_taken_0x15f8f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F8F4u;
        // 0x15f8f8: 0x46030502  mul.s       $f20, $f0, $f3 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f8f4) {
            ctx->pc = 0x15F918u;
            goto label_15f918;
        }
    }
    ctx->pc = 0x15F8FCu;
    // 0x15f8fc: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x15f8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x15f900: 0xc62100b0  lwc1        $f1, 0xB0($s1)
    ctx->pc = 0x15f900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15f904: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x15f904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x15f908: 0x8e240040  lw          $a0, 0x40($s1)
    ctx->pc = 0x15f908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x15f90c: 0xc4600044  lwc1        $f0, 0x44($v1)
    ctx->pc = 0x15f90cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15f910: 0x46010681  sub.s       $f26, $f0, $f1
    ctx->pc = 0x15f910u;
    ctx->f[26] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x15f914: 0xe4800044  swc1        $f0, 0x44($a0)
    ctx->pc = 0x15f914u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 68), bits); }
label_15f918:
    // 0x15f918: 0x1a600043  blez        $s3, . + 4 + (0x43 << 2)
    ctx->pc = 0x15F918u;
    {
        const bool branch_taken_0x15f918 = (GPR_S64(ctx, 19) <= 0);
        ctx->pc = 0x15F91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F918u;
        // 0x15f91c: 0x260902d  daddu       $s2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f918) {
            ctx->pc = 0x15FA28u;
            goto label_15fa28;
        }
    }
    ctx->pc = 0x15F920u;
    // 0x15f920: 0x4480d800  mtc1        $zero, $f27
    ctx->pc = 0x15f920u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[27], &bits, sizeof(bits)); }
    // 0x15f924: 0x0  nop
    ctx->pc = 0x15f924u;
    // NOP
label_15f928:
    // 0x15f928: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x15f928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15f92c: 0xc62c0088  lwc1        $f12, 0x88($s1)
    ctx->pc = 0x15f92cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15f930: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x15f930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15f934: 0xc62d008c  lwc1        $f13, 0x8C($s1)
    ctx->pc = 0x15f934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x15f938: 0x460c0b00  add.s       $f12, $f1, $f12
    ctx->pc = 0x15f938u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[12]);
    // 0x15f93c: 0xc07696e  jal         func_1DA5B8
    ctx->pc = 0x15F93Cu;
    SET_GPR_U32(ctx, 31, 0x15F944u);
    ctx->pc = 0x15F940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F93Cu;
    // 0x15f940: 0x460d0340  add.s       $f13, $f0, $f13 (Delay Slot)
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA5B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DA5B8u, 0x15F93Cu, 0x15F944u)) {
        return;
    }
    ctx->pc = 0x15F944u;
label_15f944:
    // 0x15f944: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x15f944u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
    // 0x15f948: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x15f948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15f94c: 0xc6030000  lwc1        $f3, 0x0($s0)
    ctx->pc = 0x15f94cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15f950: 0x4619d140  add.s       $f5, $f26, $f25
    ctx->pc = 0x15f950u;
    ctx->f[5] = FPU_ADD_S(ctx->f[26], ctx->f[25]);
    // 0x15f954: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x15f954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15f958: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x15f958u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x15f95c: 0xc7a40020  lwc1        $f4, 0x20($sp)
    ctx->pc = 0x15f95cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x15f960: 0x461818c0  add.s       $f3, $f3, $f24
    ctx->pc = 0x15f960u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[24]);
    // 0x15f964: 0x46141080  add.s       $f2, $f2, $f20
    ctx->pc = 0x15f964u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[20]);
    // 0x15f968: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x15f968u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x15f96c: 0x46041834  c.lt.s      $f3, $f4
    ctx->pc = 0x15f96cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15f970: 0xe6030000  swc1        $f3, 0x0($s0)
    ctx->pc = 0x15f970u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x15f974: 0xe6020008  swc1        $f2, 0x8($s0)
    ctx->pc = 0x15f974u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x15f978: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x15F978u;
    {
        const bool branch_taken_0x15f978 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x15F97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F978u;
        // 0x15f97c: 0xe6010004  swc1        $f1, 0x4($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f978) {
            ctx->pc = 0x15F988u;
            goto label_15f988;
        }
    }
    ctx->pc = 0x15F980u;
    // 0x15f980: 0x46151800  add.s       $f0, $f3, $f21
    ctx->pc = 0x15f980u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[21]);
    // 0x15f984: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x15f984u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_15f988:
    // 0x15f988: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x15f988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15f98c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x15f98cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15f990: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x15f990u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15f994: 0x0  nop
    ctx->pc = 0x15f994u;
    // NOP
    // 0x15f998: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x15F998u;
    {
        const bool branch_taken_0x15f998 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15f998) {
            ctx->pc = 0x15F99Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15F998u;
            // 0x15f99c: 0xc6010000  lwc1        $f1, 0x0($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x15F9ACu;
            goto label_15f9ac;
        }
    }
    ctx->pc = 0x15F9A0u;
    // 0x15f9a0: 0x46150800  add.s       $f0, $f1, $f21
    ctx->pc = 0x15f9a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[21]);
    // 0x15f9a4: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x15f9a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x15f9a8: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x15f9a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_15f9ac:
    // 0x15f9ac: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x15f9acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15f9b0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x15f9b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15f9b4: 0x0  nop
    ctx->pc = 0x15f9b4u;
    // NOP
    // 0x15f9b8: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x15F9B8u;
    {
        const bool branch_taken_0x15f9b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15f9b8) {
            ctx->pc = 0x15F9BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15F9B8u;
            // 0x15f9bc: 0xc6010008  lwc1        $f1, 0x8($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x15F9CCu;
            goto label_15f9cc;
        }
    }
    ctx->pc = 0x15F9C0u;
    // 0x15f9c0: 0x46150801  sub.s       $f0, $f1, $f21
    ctx->pc = 0x15f9c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[21]);
    // 0x15f9c4: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x15f9c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x15f9c8: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x15f9c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_15f9cc:
    // 0x15f9cc: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x15f9ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15f9d0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x15f9d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15f9d4: 0x0  nop
    ctx->pc = 0x15f9d4u;
    // NOP
    // 0x15f9d8: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x15F9D8u;
    {
        const bool branch_taken_0x15f9d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15f9d8) {
            ctx->pc = 0x15F9DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15F9D8u;
            // 0x15f9dc: 0xc6000004  lwc1        $f0, 0x4($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x15F9ECu;
            goto label_15f9ec;
        }
    }
    ctx->pc = 0x15F9E0u;
    // 0x15f9e0: 0x46150801  sub.s       $f0, $f1, $f21
    ctx->pc = 0x15f9e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[21]);
    // 0x15f9e4: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x15f9e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x15f9e8: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x15f9e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15f9ec:
    // 0x15f9ec: 0x461b0034  c.lt.s      $f0, $f27
    ctx->pc = 0x15f9ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[27])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15f9f0: 0x0  nop
    ctx->pc = 0x15f9f0u;
    // NOP
    // 0x15f9f4: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x15F9F4u;
    {
        const bool branch_taken_0x15f9f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15f9f4) {
            ctx->pc = 0x15F9F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15F9F4u;
            // 0x15f9f8: 0xc6000004  lwc1        $f0, 0x4($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x15FA08u;
            goto label_15fa08;
        }
    }
    ctx->pc = 0x15F9FCu;
    // 0x15f9fc: 0x46160000  add.s       $f0, $f0, $f22
    ctx->pc = 0x15f9fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
    // 0x15fa00: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x15fa00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x15fa04: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x15fa04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15fa08:
    // 0x15fa08: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x15fa08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15fa0c: 0x0  nop
    ctx->pc = 0x15fa0cu;
    // NOP
    // 0x15fa10: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x15FA10u;
    {
        const bool branch_taken_0x15fa10 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x15FA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FA10u;
        // 0x15fa14: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fa10) {
            ctx->pc = 0x15FA20u;
            goto label_15fa20;
        }
    }
    ctx->pc = 0x15FA18u;
    // 0x15fa18: 0x46160001  sub.s       $f0, $f0, $f22
    ctx->pc = 0x15fa18u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[22]);
    // 0x15fa1c: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x15fa1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_15fa20:
    // 0x15fa20: 0x1640ffc1  bnez        $s2, . + 4 + (-0x3F << 2)
    ctx->pc = 0x15FA20u;
    {
        const bool branch_taken_0x15fa20 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x15FA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FA20u;
        // 0x15fa24: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fa20) {
            ctx->pc = 0x15F928u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15f928;
        }
    }
    ctx->pc = 0x15FA28u;
label_15fa28:
    // 0x15fa28: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x15fa28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15fa2c: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x15fa2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x15fa30: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x15fa30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x15fa34: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x15fa34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15fa38: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x15fa38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15fa3c: 0xc7bb00c8  lwc1        $f27, 0xC8($sp)
    ctx->pc = 0x15fa3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x15fa40: 0xc7ba00c0  lwc1        $f26, 0xC0($sp)
    ctx->pc = 0x15fa40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x15fa44: 0xc7b900b8  lwc1        $f25, 0xB8($sp)
    ctx->pc = 0x15fa44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x15fa48: 0xc7b800b0  lwc1        $f24, 0xB0($sp)
    ctx->pc = 0x15fa48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x15fa4c: 0xc7b700a8  lwc1        $f23, 0xA8($sp)
    ctx->pc = 0x15fa4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x15fa50: 0xc7b600a0  lwc1        $f22, 0xA0($sp)
    ctx->pc = 0x15fa50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x15fa54: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x15fa54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x15fa58: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x15fa58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x15fa5c: 0x3e00008  jr          $ra
    ctx->pc = 0x15FA5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15FA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FA5Cu;
        // 0x15fa60: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15FA5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15FA64u;
    // 0x15fa64: 0x0  nop
    ctx->pc = 0x15fa64u;
    // NOP
    ctx->pc = 0x15fa68u;
}

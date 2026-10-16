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

// Function: sub_0014F790
// Address: 0x14f790 - 0x14f938
void sub_0014F790_0x14f790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014F790_0x14f790");
#endif

    switch (ctx->pc) {
        case 0x14f7d0u: goto label_14f7d0;
        case 0x14f834u: goto label_14f834;
        case 0x14f85cu: goto label_14f85c;
        case 0x14f888u: goto label_14f888;
        case 0x14f894u: goto label_14f894;
        case 0x14f8a0u: goto label_14f8a0;
        case 0x14f8f4u: goto label_14f8f4;
        case 0x14f914u: goto label_14f914;
        default: break;
    }

    ctx->pc = 0x14f790u;

    // 0x14f790: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x14f790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x14f794: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x14f794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x14f798: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x14f798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x14f79c: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x14f79cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x14f7a0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x14f7a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f7a4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x14f7a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x14f7a8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x14f7a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x14f7ac: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x14f7acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x14f7b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14f7b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14f7b4: 0x8c438880  lw          $v1, -0x7780($v0)
    ctx->pc = 0x14f7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6F8880u));
    // 0x14f7b8: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x14f7b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14f7bc: 0x14c30006  bne         $a2, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x14F7BCu;
    {
        const bool branch_taken_0x14f7bc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x14F7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F7BCu;
        // 0x14f7c0: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f7bc) {
            ctx->pc = 0x14F7D8u;
            goto label_14f7d8;
        }
    }
    ctx->pc = 0x14F7C4u;
    // 0x14f7c4: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x14f7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x14f7c8: 0xc054112  jal         func_150448
    ctx->pc = 0x14F7C8u;
    SET_GPR_U32(ctx, 31, 0x14F7D0u);
    ctx->pc = 0x14F7CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F7C8u;
    // 0x14f7cc: 0xc44c0008  lwc1        $f12, 0x8($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x150448u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x150448u, 0x14F7C8u, 0x14F7D0u)) {
        return;
    }
    ctx->pc = 0x14F7D0u;
label_14f7d0:
    // 0x14f7d0: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x14F7D0u;
    {
        const bool branch_taken_0x14f7d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F7D0u;
        // 0x14f7d4: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f7d0) {
            ctx->pc = 0x14F918u;
            goto label_14f918;
        }
    }
    ctx->pc = 0x14F7D8u;
label_14f7d8:
    // 0x14f7d8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x14f7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x14f7dc: 0x8c4344c8  lw          $v1, 0x44C8($v0)
    ctx->pc = 0x14f7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B44C8u));
    // 0x14f7e0: 0x14c3000e  bne         $a2, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x14F7E0u;
    {
        const bool branch_taken_0x14f7e0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x14F7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F7E0u;
        // 0x14f7e4: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f7e0) {
            ctx->pc = 0x14F81Cu;
            goto label_14f81c;
        }
    }
    ctx->pc = 0x14F7E8u;
    // 0x14f7e8: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x14f7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x14f7ec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x14f7ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x14f7f0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x14f7f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14f7f4: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x14f7f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x14f7f8: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x14f7f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x14f7fc: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x14f7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x14f800: 0xb2430027  sdl         $v1, 0x27($s2)
    ctx->pc = 0x14f800u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14f804: 0xb6430020  sdr         $v1, 0x20($s2)
    ctx->pc = 0x14f804u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14f808: 0xae440028  sw          $a0, 0x28($s2)
    ctx->pc = 0x14f808u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 4));
    // 0x14f80c: 0xc6400024  lwc1        $f0, 0x24($s2)
    ctx->pc = 0x14f80cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f810: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x14f810u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x14f814: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x14F814u;
    {
        const bool branch_taken_0x14f814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F814u;
        // 0x14f818: 0xe6400024  swc1        $f0, 0x24($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f814) {
            ctx->pc = 0x14F914u;
            goto label_14f914;
        }
    }
    ctx->pc = 0x14F81Cu;
label_14f81c:
    // 0x14f81c: 0x8c43efb8  lw          $v1, -0x1048($v0)
    ctx->pc = 0x14f81cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963128)));
    // 0x14f820: 0x14c30006  bne         $a2, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x14F820u;
    {
        const bool branch_taken_0x14f820 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x14F824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F820u;
        // 0x14f824: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f820) {
            ctx->pc = 0x14F83Cu;
            goto label_14f83c;
        }
    }
    ctx->pc = 0x14F828u;
    // 0x14f828: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x14f828u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x14f82c: 0xc053e4e  jal         func_14F938
    ctx->pc = 0x14F82Cu;
    SET_GPR_U32(ctx, 31, 0x14F834u);
    ctx->pc = 0x14F830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F82Cu;
    // 0x14f830: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F938u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x14F938u, 0x14F82Cu, 0x14F834u)) {
        return;
    }
    ctx->pc = 0x14F834u;
label_14f834:
    // 0x14f834: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x14F834u;
    {
        const bool branch_taken_0x14f834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F834u;
        // 0x14f838: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f834) {
            ctx->pc = 0x14F918u;
            goto label_14f918;
        }
    }
    ctx->pc = 0x14F83Cu;
label_14f83c:
    // 0x14f83c: 0x8c43f888  lw          $v1, -0x778($v0)
    ctx->pc = 0x14f83cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965384)));
    // 0x14f840: 0x10c30004  beq         $a2, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x14F840u;
    {
        const bool branch_taken_0x14f840 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x14F844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F840u;
        // 0x14f844: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f840) {
            ctx->pc = 0x14F854u;
            goto label_14f854;
        }
    }
    ctx->pc = 0x14F848u;
    // 0x14f848: 0x8c43f890  lw          $v1, -0x770($v0)
    ctx->pc = 0x14f848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965392)));
    // 0x14f84c: 0x14c30005  bne         $a2, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x14F84Cu;
    {
        const bool branch_taken_0x14f84c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x14F850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F84Cu;
        // 0x14f850: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f84c) {
            ctx->pc = 0x14F864u;
            goto label_14f864;
        }
    }
    ctx->pc = 0x14F854u;
label_14f854:
    // 0x14f854: 0xc0540da  jal         func_150368
    ctx->pc = 0x14F854u;
    SET_GPR_U32(ctx, 31, 0x14F85Cu);
    ctx->pc = 0x14F858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F854u;
    // 0x14f858: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150368u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x150368u, 0x14F854u, 0x14F85Cu)) {
        return;
    }
    ctx->pc = 0x14F85Cu;
label_14f85c:
    // 0x14f85c: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x14F85Cu;
    {
        const bool branch_taken_0x14f85c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F85Cu;
        // 0x14f860: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f85c) {
            ctx->pc = 0x14F918u;
            goto label_14f918;
        }
    }
    ctx->pc = 0x14F864u;
label_14f864:
    // 0x14f864: 0x8c43f880  lw          $v1, -0x780($v0)
    ctx->pc = 0x14f864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965376)));
    // 0x14f868: 0x14c30024  bne         $a2, $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x14F868u;
    {
        const bool branch_taken_0x14f868 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x14F86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F868u;
        // 0x14f86c: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f868) {
            ctx->pc = 0x14F8FCu;
            goto label_14f8fc;
        }
    }
    ctx->pc = 0x14F870u;
    // 0x14f870: 0x26510008  addiu       $s1, $s2, 0x8
    ctx->pc = 0x14f870u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x14f874: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x14f874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x14f878: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x14f878u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    // 0x14f87c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x14f87cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f880: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x14f880u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x14f884: 0x0  nop
    ctx->pc = 0x14f884u;
    // NOP
label_14f888:
    // 0x14f888: 0x24040190  addiu       $a0, $zero, 0x190
    ctx->pc = 0x14f888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x14f88c: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x14F88Cu;
    SET_GPR_U32(ctx, 31, 0x14F894u);
    ctx->pc = 0x14F890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F88Cu;
    // 0x14f890: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x14F88Cu, 0x14F894u)) {
        return;
    }
    ctx->pc = 0x14F894u;
label_14f894:
    // 0x14f894: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14f894u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f898: 0xc05352a  jal         func_14D4A8
    ctx->pc = 0x14F898u;
    SET_GPR_U32(ctx, 31, 0x14F8A0u);
    ctx->pc = 0x14F89Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F898u;
    // 0x14f89c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D4A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x14D4A8u, 0x14F898u, 0x14F8A0u)) {
        return;
    }
    ctx->pc = 0x14F8A0u;
label_14f8a0:
    // 0x14f8a0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x14f8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14f8a4: 0xae000180  sw          $zero, 0x180($s0)
    ctx->pc = 0x14f8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 384), GPR_U32(ctx, 0));
    // 0x14f8a8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x14F8A8u;
    {
        const bool branch_taken_0x14f8a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F8A8u;
        // 0x14f8ac: 0xae000184  sw          $zero, 0x184($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f8a8) {
            ctx->pc = 0x14F8B4u;
            goto label_14f8b4;
        }
    }
    ctx->pc = 0x14F8B0u;
    // 0x14f8b0: 0xac500184  sw          $s0, 0x184($v0)
    ctx->pc = 0x14f8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 388), GPR_U32(ctx, 16));
label_14f8b4:
    // 0x14f8b4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x14f8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14f8b8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x14f8b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x14f8bc: 0xae000184  sw          $zero, 0x184($s0)
    ctx->pc = 0x14f8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 0));
    // 0x14f8c0: 0xae020180  sw          $v0, 0x180($s0)
    ctx->pc = 0x14f8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 384), GPR_U32(ctx, 2));
    // 0x14f8c4: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x14f8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x14f8c8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x14f8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x14f8cc: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x14f8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x14f8d0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14f8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14f8d4: 0x263182b  sltu        $v1, $s3, $v1
    ctx->pc = 0x14f8d4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x14f8d8: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x14F8D8u;
    {
        const bool branch_taken_0x14f8d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14F8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F8D8u;
        // 0x14f8dc: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f8d8) {
            ctx->pc = 0x14F888u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14f888;
        }
    }
    ctx->pc = 0x14F8E0u;
    // 0x14f8e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14f8e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f8e4: 0x26858880  addiu       $a1, $s4, -0x7780
    ctx->pc = 0x14f8e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294936704));
    // 0x14f8e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14f8e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f8ec: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x14F8ECu;
    SET_GPR_U32(ctx, 31, 0x14F8F4u);
    ctx->pc = 0x14F8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F8ECu;
    // 0x14f8f0: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x14F8ECu, 0x14F8F4u)) {
        return;
    }
    ctx->pc = 0x14F8F4u;
label_14f8f4:
    // 0x14f8f4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x14F8F4u;
    {
        const bool branch_taken_0x14f8f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F8F4u;
        // 0x14f8f8: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f8f4) {
            ctx->pc = 0x14F918u;
            goto label_14f918;
        }
    }
    ctx->pc = 0x14F8FCu;
label_14f8fc:
    // 0x14f8fc: 0x8c43f8d0  lw          $v1, -0x730($v0)
    ctx->pc = 0x14f8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965456)));
    // 0x14f900: 0x14c30005  bne         $a2, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x14F900u;
    {
        const bool branch_taken_0x14f900 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x14F904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F900u;
        // 0x14f904: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f900) {
            ctx->pc = 0x14F918u;
            goto label_14f918;
        }
    }
    ctx->pc = 0x14F908u;
    // 0x14f908: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x14f908u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x14f90c: 0xc0540c6  jal         func_150318
    ctx->pc = 0x14F90Cu;
    SET_GPR_U32(ctx, 31, 0x14F914u);
    ctx->pc = 0x14F910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F90Cu;
    // 0x14f910: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150318u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x150318u, 0x14F90Cu, 0x14F914u)) {
        return;
    }
    ctx->pc = 0x14F914u;
label_14f914:
    // 0x14f914: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x14f914u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_14f918:
    // 0x14f918: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x14f918u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14f91c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x14f91cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14f920: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x14f920u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14f924: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x14f924u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14f928: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14f928u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14f92c: 0x3e00008  jr          $ra
    ctx->pc = 0x14F92Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14F930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F92Cu;
        // 0x14f930: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14F92Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14F934u;
    // 0x14f934: 0x0  nop
    ctx->pc = 0x14f934u;
    // NOP
    ctx->pc = 0x14f938u;
}

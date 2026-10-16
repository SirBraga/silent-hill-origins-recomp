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

// Function: sub_002AB738
// Address: 0x2ab738 - 0x2ab8c0
void sub_002AB738_0x2ab738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AB738_0x2ab738");
#endif

    switch (ctx->pc) {
        case 0x2ab7e8u: goto label_2ab7e8;
        default: break;
    }

    ctx->pc = 0x2ab738u;

    // 0x2ab738: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2ab738u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2ab73c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2ab73cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2ab740: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2ab740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2ab744: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2ab744u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab748: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2ab748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x2ab74c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2ab74cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab750: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x2ab750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x2ab754: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2ab754u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab758: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2ab758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x2ab75c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ab75cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ab760: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x2ab760u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2ab764: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x2ab764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2ab768: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x2ab768u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2ab76c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AB76Cu;
    {
        const bool branch_taken_0x2ab76c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AB770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB76Cu;
        // 0x2ab770: 0x2634001c  addiu       $s4, $s1, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab76c) {
            ctx->pc = 0x2AB77Cu;
            goto label_2ab77c;
        }
    }
    ctx->pc = 0x2AB774u;
    // 0x2ab774: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x2AB774u;
    {
        const bool branch_taken_0x2ab774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB774u;
        // 0x2ab778: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab774) {
            ctx->pc = 0x2AB8A0u;
            goto label_2ab8a0;
        }
    }
    ctx->pc = 0x2AB77Cu;
label_2ab77c:
    // 0x2ab77c: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x2ab77cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ab780: 0xc6220004  lwc1        $f2, 0x4($s1)
    ctx->pc = 0x2ab780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ab784: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2ab784u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2ab788: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x2ab788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ab78c: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x2ab78cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2ab790: 0xc78380d0  lwc1        $f3, -0x7F30($gp)
    ctx->pc = 0x2ab790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2ab794: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2ab794u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2ab798: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2ab798u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2ab79c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2ab79cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2ab7a0: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x2ab7a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ab7a4: 0x0  nop
    ctx->pc = 0x2ab7a4u;
    // NOP
    // 0x2ab7a8: 0x4501003d  bc1t        . + 4 + (0x3D << 2)
    ctx->pc = 0x2AB7A8u;
    {
        const bool branch_taken_0x2ab7a8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2AB7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB7A8u;
        // 0x2ab7ac: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab7a8) {
            ctx->pc = 0x2AB8A0u;
            goto label_2ab8a0;
        }
    }
    ctx->pc = 0x2AB7B0u;
    // 0x2ab7b0: 0xc78080d4  lwc1        $f0, -0x7F2C($gp)
    ctx->pc = 0x2ab7b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ab7b4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2ab7b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ab7b8: 0x0  nop
    ctx->pc = 0x2ab7b8u;
    // NOP
    // 0x2ab7bc: 0x45010039  bc1t        . + 4 + (0x39 << 2)
    ctx->pc = 0x2AB7BCu;
    {
        const bool branch_taken_0x2ab7bc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2AB7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB7BCu;
        // 0x2ab7c0: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab7bc) {
            ctx->pc = 0x2AB8A4u;
            goto label_2ab8a4;
        }
    }
    ctx->pc = 0x2AB7C4u;
    // 0x2ab7c4: 0x2403004c  addiu       $v1, $zero, 0x4C
    ctx->pc = 0x2ab7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x2ab7c8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2ab7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2ab7cc: 0xc31818  mult        $v1, $a2, $v1
    ctx->pc = 0x2ab7ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2ab7d0: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x2ab7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2ab7d4: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x2ab7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x2ab7d8: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AB7D8u;
    {
        const bool branch_taken_0x2ab7d8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB7D8u;
        // 0x2ab7dc: 0x838021  addu        $s0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab7d8) {
            ctx->pc = 0x2AB7ECu;
            goto label_2ab7ec;
        }
    }
    ctx->pc = 0x2AB7E0u;
    // 0x2ab7e0: 0xc0aae84  jal         func_2ABA10
    ctx->pc = 0x2AB7E0u;
    SET_GPR_U32(ctx, 31, 0x2AB7E8u);
    ctx->pc = 0x2AB7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB7E0u;
    // 0x2ab7e4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABA10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2ABA10u, 0x2AB7E0u, 0x2AB7E8u)) {
        return;
    }
    ctx->pc = 0x2AB7E8u;
label_2ab7e8:
    // 0x2ab7e8: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x2ab7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
label_2ab7ec:
    // 0x2ab7ec: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x2ab7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x2ab7f0: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x2ab7f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2ab7f4: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x2ab7f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2ab7f8: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x2ab7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2ab7fc: 0xb2030007  sdl         $v1, 0x7($s0)
    ctx->pc = 0x2ab7fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ab800: 0xb6030000  sdr         $v1, 0x0($s0)
    ctx->pc = 0x2ab800u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ab804: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x2ab804u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
    // 0x2ab808: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x2ab808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x2ab80c: 0x68620007  ldl         $v0, 0x7($v1)
    ctx->pc = 0x2ab80cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2ab810: 0x6c620000  ldr         $v0, 0x0($v1)
    ctx->pc = 0x2ab810u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2ab814: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x2ab814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2ab818: 0xb2020017  sdl         $v0, 0x17($s0)
    ctx->pc = 0x2ab818u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ab81c: 0xb6020010  sdr         $v0, 0x10($s0)
    ctx->pc = 0x2ab81cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ab820: 0xae040018  sw          $a0, 0x18($s0)
    ctx->pc = 0x2ab820u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 4));
    // 0x2ab824: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x2ab824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x2ab828: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x2ab828u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2ab82c: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x2ab82cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2ab830: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x2ab830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2ab834: 0xb2030027  sdl         $v1, 0x27($s0)
    ctx->pc = 0x2ab834u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ab838: 0xb6030020  sdr         $v1, 0x20($s0)
    ctx->pc = 0x2ab838u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ab83c: 0xae040028  sw          $a0, 0x28($s0)
    ctx->pc = 0x2ab83cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 4));
    // 0x2ab840: 0x6a220007  ldl         $v0, 0x7($s1)
    ctx->pc = 0x2ab840u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2ab844: 0x6e220000  ldr         $v0, 0x0($s1)
    ctx->pc = 0x2ab844u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2ab848: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x2ab848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2ab84c: 0xb2020037  sdl         $v0, 0x37($s0)
    ctx->pc = 0x2ab84cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ab850: 0xb6020030  sdr         $v0, 0x30($s0)
    ctx->pc = 0x2ab850u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ab854: 0xae030038  sw          $v1, 0x38($s0)
    ctx->pc = 0x2ab854u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
    // 0x2ab858: 0xae130040  sw          $s3, 0x40($s0)
    ctx->pc = 0x2ab858u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 19));
    // 0x2ab85c: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x2ab85cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x2ab860: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x2ab860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x2ab864: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2AB864u;
    {
        const bool branch_taken_0x2ab864 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB864u;
        // 0x2ab868: 0xae040044  sw          $a0, 0x44($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab864) {
            ctx->pc = 0x2AB894u;
            goto label_2ab894;
        }
    }
    ctx->pc = 0x2AB86Cu;
    // 0x2ab86c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2ab86cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ab870: 0x418c2  srl         $v1, $a0, 3
    ctx->pc = 0x2ab870u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 3));
    // 0x2ab874: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2ab874u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ab878: 0x30840007  andi        $a0, $a0, 0x7
    ctx->pc = 0x2ab878u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
    // 0x2ab87c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2ab87cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ab880: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2ab880u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ab884: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2ab884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ab888: 0x821006  srlv        $v0, $v0, $a0
    ctx->pc = 0x2ab888u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x2ab88c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2AB88Cu;
    {
        const bool branch_taken_0x2ab88c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB88Cu;
        // 0x2ab890: 0x3042000f  andi        $v0, $v0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab88c) {
            ctx->pc = 0x2AB898u;
            goto label_2ab898;
        }
    }
    ctx->pc = 0x2AB894u;
label_2ab894:
    // 0x2ab894: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x2ab894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_2ab898:
    // 0x2ab898: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x2ab898u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    // 0x2ab89c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2ab89cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ab8a0:
    // 0x2ab8a0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2ab8a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2ab8a4:
    // 0x2ab8a4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2ab8a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ab8a8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2ab8a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ab8ac: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2ab8acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ab8b0: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x2ab8b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ab8b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ab8b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ab8b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2AB8B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AB8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB8B8u;
        // 0x2ab8bc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AB8B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AB8C0u;
}

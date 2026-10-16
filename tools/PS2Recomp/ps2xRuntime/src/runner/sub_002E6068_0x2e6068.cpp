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

// Function: sub_002E6068
// Address: 0x2e6068 - 0x2e6360
void sub_002E6068_0x2e6068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E6068_0x2e6068");
#endif

    switch (ctx->pc) {
        case 0x2e6280u: goto label_2e6280;
        case 0x2e62d4u: goto label_2e62d4;
        case 0x2e631cu: goto label_2e631c;
        case 0x2e6330u: goto label_2e6330;
        default: break;
    }

    ctx->pc = 0x2e6068u;

    // 0x2e6068: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x2e6068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x2e606c: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x2e606cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x2e6070: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x2e6070u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6074: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x2e6074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x2e6078: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x2e6078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x2e607c: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2e607cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6080: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x2e6080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x2e6084: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x2e6084u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6088: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x2e6088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x2e608c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2e608cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6090: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x2e6090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x2e6094: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x2e6094u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6098: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x2e6098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
    // 0x2e609c: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x2e609cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e60a0: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2e60a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2e60a4: 0x220b82d  daddu       $s7, $s1, $zero
    ctx->pc = 0x2e60a4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e60a8: 0xafb50040  sw          $s5, 0x40($sp)
    ctx->pc = 0x2e60a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 21));
    // 0x2e60ac: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x2e60acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x2e60b0: 0x8c940008  lw          $s4, 0x8($a0)
    ctx->pc = 0x2e60b0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2e60b4: 0x68820007  ldl         $v0, 0x7($a0)
    ctx->pc = 0x2e60b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2e60b8: 0x6c820000  ldr         $v0, 0x0($a0)
    ctx->pc = 0x2e60b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2e60bc: 0x6883000f  ldl         $v1, 0xF($a0)
    ctx->pc = 0x2e60bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2e60c0: 0x6c830008  ldr         $v1, 0x8($a0)
    ctx->pc = 0x2e60c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2e60c4: 0x68850017  ldl         $a1, 0x17($a0)
    ctx->pc = 0x2e60c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2e60c8: 0x6c850010  ldr         $a1, 0x10($a0)
    ctx->pc = 0x2e60c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2e60cc: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x2e60ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2e60d0: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x2e60d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e60d4: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x2e60d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e60d8: 0xb3a3000f  sdl         $v1, 0xF($sp)
    ctx->pc = 0x2e60d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e60dc: 0xb7a30008  sdr         $v1, 0x8($sp)
    ctx->pc = 0x2e60dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e60e0: 0xb3a50017  sdl         $a1, 0x17($sp)
    ctx->pc = 0x2e60e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e60e4: 0xb7a50010  sdr         $a1, 0x10($sp)
    ctx->pc = 0x2e60e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e60e8: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E60E8u;
    {
        const bool branch_taken_0x2e60e8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E60ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E60E8u;
        // 0x2e60ec: 0xafa60018  sw          $a2, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e60e8) {
            ctx->pc = 0x2E60F8u;
            goto label_2e60f8;
        }
    }
    ctx->pc = 0x2E60F0u;
    // 0x2e60f0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E60F0u;
    {
        const bool branch_taken_0x2e60f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E60F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E60F0u;
        // 0x2e60f4: 0x27b30040  addiu       $s3, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e60f0) {
            ctx->pc = 0x2E6100u;
            goto label_2e6100;
        }
    }
    ctx->pc = 0x2E60F8u;
label_2e60f8:
    // 0x2e60f8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2e60f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e60fc: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2e60fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_2e6100:
    // 0x2e6100: 0x9202000c  lbu         $v0, 0xC($s0)
    ctx->pc = 0x2e6100u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2e6104: 0x93a3000c  lbu         $v1, 0xC($sp)
    ctx->pc = 0x2e6104u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2e6108: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x2e6108u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e610c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e610cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6110: 0x10650064  beq         $v1, $a1, . + 4 + (0x64 << 2)
    ctx->pc = 0x2E6110u;
    {
        const bool branch_taken_0x2e6110 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x2E6114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6110u;
        // 0x2e6114: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6110) {
            ctx->pc = 0x2E62A4u;
            goto label_2e62a4;
        }
    }
    ctx->pc = 0x2E6118u;
    // 0x2e6118: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2e6118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e611c: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x2e611cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e6120: 0x1047005e  beq         $v0, $a3, . + 4 + (0x5E << 2)
    ctx->pc = 0x2E6120u;
    {
        const bool branch_taken_0x2e6120 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        if (branch_taken_0x2e6120) {
            ctx->pc = 0x2E629Cu;
            goto label_2e629c;
        }
    }
    ctx->pc = 0x2E6128u;
    // 0x2e6128: 0x1220005c  beqz        $s1, . + 4 + (0x5C << 2)
    ctx->pc = 0x2E6128u;
    {
        const bool branch_taken_0x2e6128 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E612Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6128u;
        // 0x2e612c: 0x7ba20000  lq          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6128) {
            ctx->pc = 0x2E629Cu;
            goto label_2e629c;
        }
    }
    ctx->pc = 0x2E6130u;
    // 0x2e6130: 0x530c2  srl         $a2, $a1, 3
    ctx->pc = 0x2e6130u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 5), 3));
    // 0x2e6134: 0xdfa40010  ld          $a0, 0x10($sp)
    ctx->pc = 0x2e6134u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e6138: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x2e6138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x2e613c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2e613cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e6140: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e6140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e6144: 0xffa40030  sd          $a0, 0x30($sp)
    ctx->pc = 0x2e6144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 4));
    // 0x2e6148: 0xafa30038  sw          $v1, 0x38($sp)
    ctx->pc = 0x2e6148u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 3));
    // 0x2e614c: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E614Cu;
    {
        const bool branch_taken_0x2e614c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2E6150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E614Cu;
        // 0x2e6150: 0xafa70020  sw          $a3, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e614c) {
            ctx->pc = 0x2E6164u;
            goto label_2e6164;
        }
    }
    ctx->pc = 0x2E6154u;
    // 0x2e6154: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x2e6154u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2e6158: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x2e6158u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x2e615c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E615Cu;
    {
        const bool branch_taken_0x2e615c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E615Cu;
        // 0x2e6160: 0x9202000c  lbu         $v0, 0xC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e615c) {
            ctx->pc = 0x2E6180u;
            goto label_2e6180;
        }
    }
    ctx->pc = 0x2E6164u;
label_2e6164:
    // 0x2e6164: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2e6164u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2e6168: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2e6168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2e616c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2e616cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2e6170: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x2e6170u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2e6174: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x2e6174u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x2e6178: 0x46042100  add.s       $f4, $f4, $f4
    ctx->pc = 0x2e6178u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
    // 0x2e617c: 0x9202000c  lbu         $v0, 0xC($s0)
    ctx->pc = 0x2e617cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
label_2e6180:
    // 0x2e6180: 0x93a3002c  lbu         $v1, 0x2C($sp)
    ctx->pc = 0x2e6180u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x2e6184: 0x9204000d  lbu         $a0, 0xD($s0)
    ctx->pc = 0x2e6184u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 13)));
    // 0x2e6188: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e6188u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e618c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2e618cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2e6190: 0x93a5002d  lbu         $a1, 0x2D($sp)
    ctx->pc = 0x2e6190u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 45)));
    // 0x2e6194: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x2e6194u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2e6198: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2e6198u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2e619c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2e619cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e61a0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e61a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e61a4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2e61a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e61a8: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x2e61a8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2e61ac: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2e61acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2e61b0: 0x46030843  div.s       $f1, $f1, $f3
    ctx->pc = 0x2e61b0u;
    ctx->f[1] = FPU_DIV_S(ctx, ctx->f[1], ctx->f[3]);
    // 0x2e61b4: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x2e61b4u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[2]);
    // 0x2e61b8: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E61B8u;
    {
        const bool branch_taken_0x2e61b8 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2E61BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E61B8u;
        // 0x2e61bc: 0x46000842  mul.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e61b8) {
            ctx->pc = 0x2E61D0u;
            goto label_2e61d0;
        }
    }
    ctx->pc = 0x2E61C0u;
    // 0x2e61c0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2e61c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2e61c4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2e61c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2e61c8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E61C8u;
    {
        const bool branch_taken_0x2e61c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E61CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E61C8u;
        // 0x2e61cc: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e61c8) {
            ctx->pc = 0x2E61ECu;
            goto label_2e61ec;
        }
    }
    ctx->pc = 0x2E61D0u;
label_2e61d0:
    // 0x2e61d0: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2e61d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2e61d4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2e61d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2e61d8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2e61d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2e61dc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2e61dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2e61e0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2e61e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2e61e4: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2e61e4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x2e61e8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2e61e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2e61ec:
    // 0x2e61ec: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E61ECu;
    {
        const bool branch_taken_0x2e61ec = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2E61F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E61ECu;
        // 0x2e61f0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e61ec) {
            ctx->pc = 0x2E6204u;
            goto label_2e6204;
        }
    }
    ctx->pc = 0x2E61F4u;
    // 0x2e61f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e61f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e61f8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e61f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e61fc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2E61FCu;
    {
        const bool branch_taken_0x2e61fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e61fc) {
            ctx->pc = 0x2E6218u;
            goto label_2e6218;
        }
    }
    ctx->pc = 0x2E6204u;
label_2e6204:
    // 0x2e6204: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2e6204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2e6208: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2e6208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2e620c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e620cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e6210: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e6210u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e6214: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2e6214u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2e6218:
    // 0x2e6218: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x2e6218u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[2], ctx->f[0]);
    // 0x2e621c: 0x61823  negu        $v1, $a2
    ctx->pc = 0x2e621cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x2e6220: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2e6220u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e6224: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x2e6224u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2e6228: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e6228u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2e622c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2e622cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2e6230: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2e6230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2e6234: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2e6234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2e6238: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e6238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2e623c: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E623Cu;
    {
        const bool branch_taken_0x2e623c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2E6240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E623Cu;
        // 0x2e6240: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e623c) {
            ctx->pc = 0x2E6254u;
            goto label_2e6254;
        }
    }
    ctx->pc = 0x2E6244u;
    // 0x2e6244: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e6244u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e6248: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e6248u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e624c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2E624Cu;
    {
        const bool branch_taken_0x2e624c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e624c) {
            ctx->pc = 0x2E6268u;
            goto label_2e6268;
        }
    }
    ctx->pc = 0x2E6254u;
label_2e6254:
    // 0x2e6254: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2e6254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2e6258: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2e6258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2e625c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e625cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e6260: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e6260u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e6264: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2e6264u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2e6268:
    // 0x2e6268: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e6268u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2e626c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2e626cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2e6270: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x2e6270u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
    // 0x2e6274: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2e6274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e6278: 0xc0b708c  jal         func_2DC230
    ctx->pc = 0x2E6278u;
    SET_GPR_U32(ctx, 31, 0x2E6280u);
    ctx->pc = 0x2E627Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6278u;
    // 0x2e627c: 0x34c60806  ori         $a2, $a2, 0x806 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2054);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC230u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DC230u, 0x2E6278u, 0x2E6280u)) {
        return;
    }
    ctx->pc = 0x2E6280u;
label_2e6280:
    // 0x2e6280: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2e6280u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6284: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E6284u;
    {
        const bool branch_taken_0x2e6284 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E6288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6284u;
        // 0x2e6288: 0x93a6000c  lbu         $a2, 0xC($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6284) {
            ctx->pc = 0x2E6294u;
            goto label_2e6294;
        }
    }
    ctx->pc = 0x2E628Cu;
    // 0x2e628c: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x2E628Cu;
    {
        const bool branch_taken_0x2e628c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E628Cu;
        // 0x2e6290: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e628c) {
            ctx->pc = 0x2E6334u;
            goto label_2e6334;
        }
    }
    ctx->pc = 0x2E6294u;
label_2e6294:
    // 0x2e6294: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x2e6294u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6298: 0x9204000c  lbu         $a0, 0xC($s0)
    ctx->pc = 0x2e6298u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
label_2e629c:
    // 0x2e629c: 0x14c40007  bne         $a2, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E629Cu;
    {
        const bool branch_taken_0x2e629c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        ctx->pc = 0x2E62A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E629Cu;
        // 0x2e62a0: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e629c) {
            ctx->pc = 0x2E62BCu;
            goto label_2e62bc;
        }
    }
    ctx->pc = 0x2E62A4u;
label_2e62a4:
    // 0x2e62a4: 0x93a30018  lbu         $v1, 0x18($sp)
    ctx->pc = 0x2e62a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e62a8: 0x92020018  lbu         $v0, 0x18($s0)
    ctx->pc = 0x2e62a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2e62ac: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2e62acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2e62b0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2e62b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2e62b4: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2E62B4u;
    {
        const bool branch_taken_0x2e62b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E62B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E62B4u;
        // 0x2e62b8: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e62b4) {
            ctx->pc = 0x2E62E8u;
            goto label_2e62e8;
        }
    }
    ctx->pc = 0x2E62BCu;
label_2e62bc:
    // 0x2e62bc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2e62bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e62c0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2e62c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e62c4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2e62c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e62c8: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x2e62c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e62cc: 0xc0b9686  jal         func_2E5A18
    ctx->pc = 0x2E62CCu;
    SET_GPR_U32(ctx, 31, 0x2E62D4u);
    ctx->pc = 0x2E62D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E62CCu;
    // 0x2e62d0: 0x260482d  daddu       $t1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5A18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E5A18u, 0x2E62CCu, 0x2E62D4u)) {
        return;
    }
    ctx->pc = 0x2E62D4u;
label_2e62d4:
    // 0x2e62d4: 0x9203000c  lbu         $v1, 0xC($s0)
    ctx->pc = 0x2e62d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2e62d8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2e62d8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e62dc: 0xafb40008  sw          $s4, 0x8($sp)
    ctx->pc = 0x2e62dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 20));
    // 0x2e62e0: 0xa3a3000c  sb          $v1, 0xC($sp)
    ctx->pc = 0x2e62e0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 12), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e62e4: 0x8e750000  lw          $s5, 0x0($s3)
    ctx->pc = 0x2e62e4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2e62e8:
    // 0x2e62e8: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E62E8u;
    {
        const bool branch_taken_0x2e62e8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E62ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E62E8u;
        // 0x2e62ec: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e62e8) {
            ctx->pc = 0x2E62F8u;
            goto label_2e62f8;
        }
    }
    ctx->pc = 0x2E62F0u;
    // 0x2e62f0: 0x2e0882d  daddu       $s1, $s7, $zero
    ctx->pc = 0x2e62f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e62f4: 0x240b02d  daddu       $s6, $s2, $zero
    ctx->pc = 0x2e62f4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2e62f8:
    // 0x2e62f8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2e62f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e62fc: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E62FCu;
    {
        const bool branch_taken_0x2e62fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E6300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E62FCu;
        // 0x2e6300: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e62fc) {
            ctx->pc = 0x2E6320u;
            goto label_2e6320;
        }
    }
    ctx->pc = 0x2E6304u;
    // 0x2e6304: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2e6304u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6308: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2e6308u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e630c: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x2e630cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6310: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x2e6310u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6314: 0xc0b953a  jal         func_2E54E8
    ctx->pc = 0x2E6314u;
    SET_GPR_U32(ctx, 31, 0x2E631Cu);
    ctx->pc = 0x2E6318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6314u;
    // 0x2e6318: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E54E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E54E8u, 0x2E6314u, 0x2E631Cu)) {
        return;
    }
    ctx->pc = 0x2E631Cu;
label_2e631c:
    // 0x2e631c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2e631cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e6320:
    // 0x2e6320: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E6320u;
    {
        const bool branch_taken_0x2e6320 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6320u;
        // 0x2e6324: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6320) {
            ctx->pc = 0x2E6334u;
            goto label_2e6334;
        }
    }
    ctx->pc = 0x2E6328u;
    // 0x2e6328: 0xc0b7080  jal         func_2DC200
    ctx->pc = 0x2E6328u;
    SET_GPR_U32(ctx, 31, 0x2E6330u);
    ctx->pc = 0x2E632Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6328u;
    // 0x2e632c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC200u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DC200u, 0x2E6328u, 0x2E6330u)) {
        return;
    }
    ctx->pc = 0x2E6330u;
label_2e6330:
    // 0x2e6330: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x2e6330u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2e6334:
    // 0x2e6334: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x2e6334u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2e6338: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x2e6338u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2e633c: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x2e633cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2e6340: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x2e6340u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2e6344: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x2e6344u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e6348: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x2e6348u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e634c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x2e634cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e6350: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x2e6350u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e6354: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2e6354u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e6358: 0x3e00008  jr          $ra
    ctx->pc = 0x2E6358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E635Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6358u;
        // 0x2e635c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E6358u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E6360u;
}

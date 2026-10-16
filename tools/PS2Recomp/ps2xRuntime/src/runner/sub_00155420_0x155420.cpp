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

// Function: sub_00155420
// Address: 0x155420 - 0x1555b8
void sub_00155420_0x155420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00155420_0x155420");
#endif

    switch (ctx->pc) {
        case 0x1554f8u: goto label_1554f8;
        case 0x155530u: goto label_155530;
        case 0x155568u: goto label_155568;
        default: break;
    }

    ctx->pc = 0x155420u;

    // 0x155420: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x155420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x155424: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x155424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x155428: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x155428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x15542c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x15542cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155430: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x155430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x155434: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x155434u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155438: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x155438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x15543c: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x15543cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x155440: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x155440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x155444: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x155444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x155448: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x155448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x15544c: 0x6a22007b  ldl         $v0, 0x7B($s1)
    ctx->pc = 0x15544cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 123); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x155450: 0x6e220074  ldr         $v0, 0x74($s1)
    ctx->pc = 0x155450u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 116); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x155454: 0x6a230083  ldl         $v1, 0x83($s1)
    ctx->pc = 0x155454u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 131); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x155458: 0x6e23007c  ldr         $v1, 0x7C($s1)
    ctx->pc = 0x155458u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 124); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x15545c: 0x8e240084  lw          $a0, 0x84($s1)
    ctx->pc = 0x15545cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    // 0x155460: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x155460u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x155464: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x155464u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x155468: 0xb3a3000f  sdl         $v1, 0xF($sp)
    ctx->pc = 0x155468u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15546c: 0xb7a30008  sdr         $v1, 0x8($sp)
    ctx->pc = 0x15546cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x155470: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x155470u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x155474: 0x6a22008f  ldl         $v0, 0x8F($s1)
    ctx->pc = 0x155474u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 143); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x155478: 0x6e220088  ldr         $v0, 0x88($s1)
    ctx->pc = 0x155478u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 136); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x15547c: 0x6a230097  ldl         $v1, 0x97($s1)
    ctx->pc = 0x15547cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x155480: 0x6e230090  ldr         $v1, 0x90($s1)
    ctx->pc = 0x155480u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x155484: 0x8e240098  lw          $a0, 0x98($s1)
    ctx->pc = 0x155484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x155488: 0xb3a20027  sdl         $v0, 0x27($sp)
    ctx->pc = 0x155488u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15548c: 0xb7a20020  sdr         $v0, 0x20($sp)
    ctx->pc = 0x15548cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x155490: 0xb3a3002f  sdl         $v1, 0x2F($sp)
    ctx->pc = 0x155490u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x155494: 0xb7a30028  sdr         $v1, 0x28($sp)
    ctx->pc = 0x155494u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x155498: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x155498u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x15549c: 0x56a00009  bnel        $s5, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x15549Cu;
    {
        const bool branch_taken_0x15549c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x15549c) {
            ctx->pc = 0x1554A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15549Cu;
            // 0x1554a0: 0x8e2200a0  lw          $v0, 0xA0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1554C4u;
            goto label_1554c4;
        }
    }
    ctx->pc = 0x1554A4u;
    // 0x1554a4: 0x8e22009c  lw          $v0, 0x9C($s1)
    ctx->pc = 0x1554a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x1554a8: 0x8e2300a0  lw          $v1, 0xA0($s1)
    ctx->pc = 0x1554a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
    // 0x1554ac: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1554acu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1554b0: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x1554b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1554b4: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1554B4u;
    {
        const bool branch_taken_0x1554b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1554B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1554B4u;
        // 0x1554b8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1554b4) {
            ctx->pc = 0x1554E4u;
            goto label_1554e4;
        }
    }
    ctx->pc = 0x1554BCu;
    // 0x1554bc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1554BCu;
    {
        const bool branch_taken_0x1554bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1554C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1554BCu;
        // 0x1554c0: 0x8e220084  lw          $v0, 0x84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1554bc) {
            ctx->pc = 0x1554D4u;
            goto label_1554d4;
        }
    }
    ctx->pc = 0x1554C4u;
label_1554c4:
    // 0x1554c4: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x1554c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1554c8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1554C8u;
    {
        const bool branch_taken_0x1554c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1554CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1554C8u;
        // 0x1554cc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1554c8) {
            ctx->pc = 0x1554E4u;
            goto label_1554e4;
        }
    }
    ctx->pc = 0x1554D0u;
    // 0x1554d0: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x1554d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_1554d4:
    // 0x1554d4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1554d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1554d8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1554d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1554dc: 0xac400050  sw          $zero, 0x50($v0)
    ctx->pc = 0x1554dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 0));
    // 0x1554e0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1554e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1554e4:
    // 0x1554e4: 0x26340074  addiu       $s4, $s1, 0x74
    ctx->pc = 0x1554e4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 116));
    // 0x1554e8: 0x26330088  addiu       $s3, $s1, 0x88
    ctx->pc = 0x1554e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 136));
    // 0x1554ec: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x1554ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1554f0: 0x24160004  addiu       $s6, $zero, 0x4
    ctx->pc = 0x1554f0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1554f4: 0x0  nop
    ctx->pc = 0x1554f4u;
    // NOP
label_1554f8:
    // 0x1554f8: 0x16a00010  bnez        $s5, . + 4 + (0x10 << 2)
    ctx->pc = 0x1554F8u;
    {
        const bool branch_taken_0x1554f8 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x1554FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1554F8u;
        // 0x1554fc: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1554f8) {
            ctx->pc = 0x15553Cu;
            goto label_15553c;
        }
    }
    ctx->pc = 0x155500u;
    // 0x155500: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x155500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x155504: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x155504u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x155508: 0x2833821  addu        $a3, $s4, $v1
    ctx->pc = 0x155508u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x15550c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15550cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155510: 0x3a24021  addu        $t0, $sp, $v0
    ctx->pc = 0x155510u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x155514: 0x2424821  addu        $t1, $s2, $v0
    ctx->pc = 0x155514u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x155518: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x155518u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15551c: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x15551cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x155520: 0x16000014  bnez        $s0, . + 4 + (0x14 << 2)
    ctx->pc = 0x155520u;
    {
        const bool branch_taken_0x155520 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x155524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155520u;
        // 0x155524: 0x26060001  addiu       $a2, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155520) {
            ctx->pc = 0x155574u;
            goto label_155574;
        }
    }
    ctx->pc = 0x155528u;
    // 0x155528: 0xc05556e  jal         func_1555B8
    ctx->pc = 0x155528u;
    SET_GPR_U32(ctx, 31, 0x155530u);
    ctx->pc = 0x1555B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1555B8u, 0x155528u, 0x155530u)) {
        return;
    }
    ctx->pc = 0x155530u;
label_155530:
    // 0x155530: 0xae220074  sw          $v0, 0x74($s1)
    ctx->pc = 0x155530u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 2));
    // 0x155534: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x155534u;
    {
        const bool branch_taken_0x155534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155534u;
        // 0x155538: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155534) {
            ctx->pc = 0x155584u;
            goto label_155584;
        }
    }
    ctx->pc = 0x15553Cu;
label_15553c:
    // 0x15553c: 0x26060001  addiu       $a2, $s0, 0x1
    ctx->pc = 0x15553cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x155540: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x155540u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x155544: 0x2833821  addu        $a3, $s4, $v1
    ctx->pc = 0x155544u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x155548: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x155548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15554c: 0x3a24021  addu        $t0, $sp, $v0
    ctx->pc = 0x15554cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x155550: 0x2424821  addu        $t1, $s2, $v0
    ctx->pc = 0x155550u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x155554: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x155554u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155558: 0x16160006  bne         $s0, $s6, . + 4 + (0x6 << 2)
    ctx->pc = 0x155558u;
    {
        const bool branch_taken_0x155558 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 22));
        ctx->pc = 0x15555Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155558u;
        // 0x15555c: 0x2631821  addu        $v1, $s3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155558) {
            ctx->pc = 0x155574u;
            goto label_155574;
        }
    }
    ctx->pc = 0x155560u;
    // 0x155560: 0xc05556e  jal         func_1555B8
    ctx->pc = 0x155560u;
    SET_GPR_U32(ctx, 31, 0x155568u);
    ctx->pc = 0x1555B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1555B8u, 0x155560u, 0x155568u)) {
        return;
    }
    ctx->pc = 0x155568u;
label_155568:
    // 0x155568: 0x26060001  addiu       $a2, $s0, 0x1
    ctx->pc = 0x155568u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x15556c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x15556Cu;
    {
        const bool branch_taken_0x15556c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15556Cu;
        // 0x155570: 0xae220084  sw          $v0, 0x84($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15556c) {
            ctx->pc = 0x155584u;
            goto label_155584;
        }
    }
    ctx->pc = 0x155574u;
label_155574:
    // 0x155574: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x155574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x155578: 0xc5200000  lwc1        $f0, 0x0($t1)
    ctx->pc = 0x155578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15557c: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x15557cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x155580: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x155580u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_155584:
    // 0x155584: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x155584u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155588: 0x2a020005  slti        $v0, $s0, 0x5
    ctx->pc = 0x155588u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x15558c: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
    ctx->pc = 0x15558Cu;
    {
        const bool branch_taken_0x15558c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x155590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15558Cu;
        // 0x155590: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15558c) {
            ctx->pc = 0x1554F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1554f8;
        }
    }
    ctx->pc = 0x155594u;
    // 0x155594: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x155594u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x155598: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x155598u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x15559c: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x15559cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1555a0: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x1555a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1555a4: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x1555a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1555a8: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1555a8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1555ac: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x1555acu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1555b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1555B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1555B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1555B0u;
        // 0x1555b4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1555B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1555B8u;
}

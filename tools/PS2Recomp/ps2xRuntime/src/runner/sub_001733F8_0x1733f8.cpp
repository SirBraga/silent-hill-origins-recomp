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

// Function: sub_001733F8
// Address: 0x1733f8 - 0x173488
void sub_001733F8_0x1733f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001733F8_0x1733f8");
#endif

    switch (ctx->pc) {
        case 0x173424u: goto label_173424;
        case 0x173474u: goto label_173474;
        default: break;
    }

    ctx->pc = 0x1733f8u;

    // 0x1733f8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1733f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1733fc: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1733fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x173400: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x173400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x173404: 0x2482005c  addiu       $v0, $a0, 0x5C
    ctx->pc = 0x173404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 92));
    // 0x173408: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x173408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17340c: 0x458021  addu        $s0, $v0, $a1
    ctx->pc = 0x17340cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x173410: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x173410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x173414: 0x50600018  beql        $v1, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x173414u;
    {
        const bool branch_taken_0x173414 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x173414) {
            ctx->pc = 0x173418u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x173414u;
            // 0x173418: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x173478u;
            goto label_173478;
        }
    }
    ctx->pc = 0x17341Cu;
    // 0x17341c: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x17341Cu;
    SET_GPR_U32(ctx, 31, 0x173424u);
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x17341Cu, 0x173424u)) {
        return;
    }
    ctx->pc = 0x173424u;
label_173424:
    // 0x173424: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x173424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x173428: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x173428u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x17342c: 0x8c6542d8  lw          $a1, 0x42D8($v1)
    ctx->pc = 0x17342cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6B42D8u));
    // 0x173430: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x173430u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x173434: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x173434u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x173438: 0x8c641a70  lw          $a0, 0x1A70($v1)
    ctx->pc = 0x173438u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x701A70u));
    // 0x17343c: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x17343cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x173440: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x173440u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x173444: 0x8c460008  lw          $a2, 0x8($v0)
    ctx->pc = 0x173444u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x173448: 0xb3a3000b  sdl         $v1, 0xB($sp)
    ctx->pc = 0x173448u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17344c: 0xb7a30004  sdr         $v1, 0x4($sp)
    ctx->pc = 0x17344cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x173450: 0xafa6000c  sw          $a2, 0xC($sp)
    ctx->pc = 0x173450u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 6));
    // 0x173454: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x173454u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x173458: 0x10a40006  beq         $a1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x173458u;
    {
        const bool branch_taken_0x173458 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x17345Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173458u;
        // 0x17345c: 0xafbd0014  sw          $sp, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173458) {
            ctx->pc = 0x173474u;
            goto label_173474;
        }
    }
    ctx->pc = 0x173460u;
    // 0x173460: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x173460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x173464: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x173464u;
    {
        const bool branch_taken_0x173464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x173468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173464u;
        // 0x173468: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173464) {
            ctx->pc = 0x173478u;
            goto label_173478;
        }
    }
    ctx->pc = 0x17346Cu;
    // 0x17346c: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x17346Cu;
    SET_GPR_U32(ctx, 31, 0x173474u);
    ctx->pc = 0x173470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17346Cu;
    // 0x173470: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x17346Cu, 0x173474u)) {
        return;
    }
    ctx->pc = 0x173474u;
label_173474:
    // 0x173474: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x173474u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_173478:
    // 0x173478: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x173478u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17347c: 0x3e00008  jr          $ra
    ctx->pc = 0x17347Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17347Cu;
        // 0x173480: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17347Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x173484u;
    // 0x173484: 0x0  nop
    ctx->pc = 0x173484u;
    // NOP
    ctx->pc = 0x173488u;
}

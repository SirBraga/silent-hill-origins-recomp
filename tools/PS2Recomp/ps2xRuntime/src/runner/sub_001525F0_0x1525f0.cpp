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

// Function: sub_001525F0
// Address: 0x1525f0 - 0x152698
void sub_001525F0_0x1525f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001525F0_0x1525f0");
#endif

    switch (ctx->pc) {
        case 0x15260cu: goto label_15260c;
        case 0x152620u: goto label_152620;
        case 0x152638u: goto label_152638;
        case 0x152670u: goto label_152670;
        default: break;
    }

    ctx->pc = 0x1525f0u;

    // 0x1525f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1525f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1525f4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1525f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1525f8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1525f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1525fc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1525fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152600: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x152600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x152604: 0xc04efda  jal         func_13BF68
    ctx->pc = 0x152604u;
    SET_GPR_U32(ctx, 31, 0x15260Cu);
    ctx->pc = 0x152608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152604u;
    // 0x152608: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BF68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13BF68u, 0x152604u, 0x15260Cu)) {
        return;
    }
    ctx->pc = 0x15260Cu;
label_15260c:
    // 0x15260c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x15260cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x152610: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x152610u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152614: 0x8c46efd8  lw          $a2, -0x1028($v0)
    ctx->pc = 0x152614u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6BEFD8u));
    // 0x152618: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x152618u;
    SET_GPR_U32(ctx, 31, 0x152620u);
    ctx->pc = 0x15261Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152618u;
    // 0x15261c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x152618u, 0x152620u)) {
        return;
    }
    ctx->pc = 0x152620u;
label_152620:
    // 0x152620: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x152620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x152624: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x152624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x152628: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x152628u;
    {
        const bool branch_taken_0x152628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15262Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152628u;
        // 0x15262c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152628) {
            ctx->pc = 0x152684u;
            goto label_152684;
        }
    }
    ctx->pc = 0x152630u;
    // 0x152630: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x152630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x152634: 0x0  nop
    ctx->pc = 0x152634u;
    // NOP
label_152638:
    // 0x152638: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x152638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x15263c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x15263Cu;
    {
        const bool branch_taken_0x15263c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x152640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15263Cu;
        // 0x152640: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15263c) {
            ctx->pc = 0x15265Cu;
            goto label_15265c;
        }
    }
    ctx->pc = 0x152644u;
    // 0x152644: 0x8862000b  lwl         $v0, 0xB($v1)
    ctx->pc = 0x152644u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x152648: 0x98620008  lwr         $v0, 0x8($v1)
    ctx->pc = 0x152648u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x15264c: 0xaa22004f  swl         $v0, 0x4F($s1)
    ctx->pc = 0x15264cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 79); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x152650: 0xba22004c  swr         $v0, 0x4C($s1)
    ctx->pc = 0x152650u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 76); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x152654: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x152654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x152658: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x152658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_15265c:
    // 0x15265c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15265cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x152660: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x152660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x152664: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x152664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x152668: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x152668u;
    SET_GPR_U32(ctx, 31, 0x152670u);
    ctx->pc = 0x15266Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152668u;
    // 0x15266c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x152668u, 0x152670u)) {
        return;
    }
    ctx->pc = 0x152670u;
label_152670:
    // 0x152670: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x152670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x152674: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x152674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x152678: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x152678u;
    {
        const bool branch_taken_0x152678 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15267Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152678u;
        // 0x15267c: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152678) {
            ctx->pc = 0x152638u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_152638;
        }
    }
    ctx->pc = 0x152680u;
    // 0x152680: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x152680u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_152684:
    // 0x152684: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x152684u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x152688: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x152688u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15268c: 0x3e00008  jr          $ra
    ctx->pc = 0x15268Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x152690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15268Cu;
        // 0x152690: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15268Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x152694u;
    // 0x152694: 0x0  nop
    ctx->pc = 0x152694u;
    // NOP
    ctx->pc = 0x152698u;
}

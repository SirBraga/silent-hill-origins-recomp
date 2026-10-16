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

// Function: sub_00309820
// Address: 0x309820 - 0x309880
void sub_00309820_0x309820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00309820_0x309820");
#endif

    switch (ctx->pc) {
        case 0x309830u: goto label_309830;
        default: break;
    }

    ctx->pc = 0x309820u;

    // 0x309820: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x309820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x309824: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x309824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x309828: 0xc0c2674  jal         func_3099D0
    ctx->pc = 0x309828u;
    SET_GPR_U32(ctx, 31, 0x309830u);
    ctx->pc = 0x30982Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309828u;
    // 0x30982c: 0x8c84004c  lw          $a0, 0x4C($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3099D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3099D0u, 0x309828u, 0x309830u)) {
        return;
    }
    ctx->pc = 0x309830u;
label_309830:
    // 0x309830: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x309830u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x309834: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x309834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x309838: 0x3e00008  jr          $ra
    ctx->pc = 0x309838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30983Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309838u;
        // 0x30983c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x309838u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x309840u;
    // 0x309840: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x309840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x309844: 0x0  nop
    ctx->pc = 0x309844u;
    // NOP
    // 0x309848: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x309848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x30984c: 0x0  nop
    ctx->pc = 0x30984cu;
    // NOP
    // 0x309850: 0xb4a30008  sdr         $v1, 0x8($a1)
    ctx->pc = 0x309850u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x309854: 0x0  nop
    ctx->pc = 0x309854u;
    // NOP
    // 0x309858: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x309858u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30985c: 0x0  nop
    ctx->pc = 0x30985cu;
    // NOP
    // 0x309860: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x309860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x309864: 0x0  nop
    ctx->pc = 0x309864u;
    // NOP
    // 0x309868: 0xb4a30008  sdr         $v1, 0x8($a1)
    ctx->pc = 0x309868u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30986c: 0x0  nop
    ctx->pc = 0x30986cu;
    // NOP
    // 0x309870: 0xb4a30008  sdr         $v1, 0x8($a1)
    ctx->pc = 0x309870u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x309874: 0x0  nop
    ctx->pc = 0x309874u;
    // NOP
    // 0x309878: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x309878u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x30987c: 0x0  nop
    ctx->pc = 0x30987cu;
    // NOP
    ctx->pc = 0x309880u;
}

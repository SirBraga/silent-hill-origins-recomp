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

// Function: sub_001E4818
// Address: 0x1e4818 - 0x1e4888
void sub_001E4818_0x1e4818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E4818_0x1e4818");
#endif

    switch (ctx->pc) {
        case 0x1e487cu: goto label_1e487c;
        default: break;
    }

    ctx->pc = 0x1e4818u;

    // 0x1e4818: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x1e4818u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
    // 0x1e481c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e481cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e4820: 0x8ca2e720  lw          $v0, -0x18E0($a1)
    ctx->pc = 0x1e4820u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x33E720u));
    // 0x1e4824: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e4824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e4828: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1E4828u;
    {
        const bool branch_taken_0x1e4828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E482Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4828u;
        // 0x1e482c: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4828) {
            ctx->pc = 0x1E487Cu;
            goto label_1e487c;
        }
    }
    ctx->pc = 0x1E4830u;
    // 0x1e4830: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1e4830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1e4834: 0x8c43e704  lw          $v1, -0x18FC($v0)
    ctx->pc = 0x1e4834u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x33E704u));
    // 0x1e4838: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E4838u;
    {
        const bool branch_taken_0x1e4838 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E483Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4838u;
        // 0x1e483c: 0x93a20003  lbu         $v0, 0x3($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4838) {
            ctx->pc = 0x1E4854u;
            goto label_1e4854;
        }
    }
    ctx->pc = 0x1E4840u;
    // 0x1e4840: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x1e4840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1e4844: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x1e4844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x1e4848: 0x28430100  slti        $v1, $v0, 0x100
    ctx->pc = 0x1e4848u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x1e484c: 0x83100a  movz        $v0, $a0, $v1
    ctx->pc = 0x1e484cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4));
    // 0x1e4850: 0xa3a20003  sb          $v0, 0x3($sp)
    ctx->pc = 0x1e4850u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 2));
label_1e4854:
    // 0x1e4854: 0x8ba20003  lwl         $v0, 0x3($sp)
    ctx->pc = 0x1e4854u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x1e4858: 0x9ba20000  lwr         $v0, 0x0($sp)
    ctx->pc = 0x1e4858u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x1e485c: 0xaba20013  swl         $v0, 0x13($sp)
    ctx->pc = 0x1e485cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1e4860: 0xbba20010  swr         $v0, 0x10($sp)
    ctx->pc = 0x1e4860u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1e4864: 0x8ca4e720  lw          $a0, -0x18E0($a1)
    ctx->pc = 0x1e4864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294960928)));
    // 0x1e4868: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1e4868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e486c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1e486cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1e4870: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x1e4870u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e4874: 0xc079c7c  jal         func_1E71F0
    ctx->pc = 0x1E4874u;
    SET_GPR_U32(ctx, 31, 0x1E487Cu);
    ctx->pc = 0x1E4878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4874u;
    // 0x1e4878: 0xa22824  and         $a1, $a1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E71F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E71F0u, 0x1E4874u, 0x1E487Cu)) {
        return;
    }
    ctx->pc = 0x1E487Cu;
label_1e487c:
    // 0x1e487c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e487cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e4880: 0x3e00008  jr          $ra
    ctx->pc = 0x1E4880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4880u;
        // 0x1e4884: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E4880u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E4888u;
}

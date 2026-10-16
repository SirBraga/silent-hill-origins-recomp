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

// Function: sub_001AF1A0
// Address: 0x1af1a0 - 0x1af228
void sub_001AF1A0_0x1af1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AF1A0_0x1af1a0");
#endif

    switch (ctx->pc) {
        case 0x1af1ccu: goto label_1af1cc;
        default: break;
    }

    ctx->pc = 0x1af1a0u;

    // 0x1af1a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1af1a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1af1a4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1af1a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1af1a8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1af1a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1af1ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1af1acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af1b0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1af1b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1af1b4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1af1b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af1b8: 0x12400014  beqz        $s2, . + 4 + (0x14 << 2)
    ctx->pc = 0x1AF1B8u;
    {
        const bool branch_taken_0x1af1b8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF1B8u;
        // 0x1af1bc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af1b8) {
            ctx->pc = 0x1AF20Cu;
            goto label_1af20c;
        }
    }
    ctx->pc = 0x1AF1C0u;
    // 0x1af1c0: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1af1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1af1c4: 0xc080858  jal         func_202160
    ctx->pc = 0x1AF1C4u;
    SET_GPR_U32(ctx, 31, 0x1AF1CCu);
    ctx->pc = 0x1AF1C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF1C4u;
    // 0x1af1c8: 0x26300030  addiu       $s0, $s1, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202160u, 0x1AF1C4u, 0x1AF1CCu)) {
        return;
    }
    ctx->pc = 0x1AF1CCu;
label_1af1cc:
    // 0x1af1cc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1af1ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af1d0: 0xac720000  sw          $s2, 0x0($v1)
    ctx->pc = 0x1af1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 18));
    // 0x1af1d4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1af1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1af1d8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1af1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1af1dc: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1af1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x1af1e0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1af1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1af1e4: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1AF1E4u;
    {
        const bool branch_taken_0x1af1e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1af1e4) {
            ctx->pc = 0x1AF1E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AF1E4u;
            // 0x1af1e8: 0xac430004  sw          $v1, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AF1ECu;
            goto label_1af1ec;
        }
    }
    ctx->pc = 0x1AF1ECu;
label_1af1ec:
    // 0x1af1ec: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1af1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1af1f0: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1AF1F0u;
    {
        const bool branch_taken_0x1af1f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1af1f0) {
            ctx->pc = 0x1AF1F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AF1F0u;
            // 0x1af1f4: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AF1F8u;
            goto label_1af1f8;
        }
    }
    ctx->pc = 0x1AF1F8u;
label_1af1f8:
    // 0x1af1f8: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1af1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x1af1fc: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x1af1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x1af200: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1af200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1af204: 0xae220030  sw          $v0, 0x30($s1)
    ctx->pc = 0x1af204u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
    // 0x1af208: 0xae510040  sw          $s1, 0x40($s2)
    ctx->pc = 0x1af208u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 17));
label_1af20c:
    // 0x1af20c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1af20cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1af210: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1af210u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1af214: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1af214u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1af218: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1af218u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1af21c: 0x3e00008  jr          $ra
    ctx->pc = 0x1AF21Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF21Cu;
        // 0x1af220: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF21Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AF224u;
    // 0x1af224: 0x0  nop
    ctx->pc = 0x1af224u;
    // NOP
    ctx->pc = 0x1af228u;
}

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

// Function: sub_001D03E0
// Address: 0x1d03e0 - 0x1d0488
void sub_001D03E0_0x1d03e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D03E0_0x1d03e0");
#endif

    switch (ctx->pc) {
        case 0x1d0408u: goto label_1d0408;
        case 0x1d0424u: goto label_1d0424;
        case 0x1d0438u: goto label_1d0438;
        case 0x1d0450u: goto label_1d0450;
        case 0x1d0460u: goto label_1d0460;
        default: break;
    }

    ctx->pc = 0x1d03e0u;

    // 0x1d03e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d03e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1d03e4: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1d03e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1d03e8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1d03e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1d03ec: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1d03ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d03f0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1d03f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1d03f4: 0x1080001c  beqz        $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1D03F4u;
    {
        const bool branch_taken_0x1d03f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D03F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D03F4u;
        // 0x1d03f8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d03f4) {
            ctx->pc = 0x1D0468u;
            goto label_1d0468;
        }
    }
    ctx->pc = 0x1D03FCu;
    // 0x1d03fc: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1d03fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1d0400: 0xc06c994  jal         func_1B2650
    ctx->pc = 0x1D0400u;
    SET_GPR_U32(ctx, 31, 0x1D0408u);
    ctx->pc = 0x1D0404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0400u;
    // 0x1d0404: 0x24a50908  addiu       $a1, $a1, 0x908 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2650u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B2650u, 0x1D0400u, 0x1D0408u)) {
        return;
    }
    ctx->pc = 0x1D0408u;
label_1d0408:
    // 0x1d0408: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d0408u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d040c: 0x12200017  beqz        $s1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1D040Cu;
    {
        const bool branch_taken_0x1d040c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D040Cu;
        // 0x1d0410: 0x3c06001d  lui         $a2, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d040c) {
            ctx->pc = 0x1D046Cu;
            goto label_1d046c;
        }
    }
    ctx->pc = 0x1D0414u;
    // 0x1d0414: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d0414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0418: 0x24c6ff90  addiu       $a2, $a2, -0x70
    ctx->pc = 0x1d0418u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967184));
    // 0x1d041c: 0xc06bc8a  jal         func_1AF228
    ctx->pc = 0x1D041Cu;
    SET_GPR_U32(ctx, 31, 0x1D0424u);
    ctx->pc = 0x1D0420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D041Cu;
    // 0x1d0420: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF228u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AF228u, 0x1D041Cu, 0x1D0424u)) {
        return;
    }
    ctx->pc = 0x1D0424u;
label_1d0424:
    // 0x1d0424: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x1d0424u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x1d0428: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d0428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d042c: 0x24c600d0  addiu       $a2, $a2, 0xD0
    ctx->pc = 0x1d042cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 208));
    // 0x1d0430: 0xc06bc8a  jal         func_1AF228
    ctx->pc = 0x1D0430u;
    SET_GPR_U32(ctx, 31, 0x1D0438u);
    ctx->pc = 0x1D0434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0430u;
    // 0x1d0434: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF228u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AF228u, 0x1D0430u, 0x1D0438u)) {
        return;
    }
    ctx->pc = 0x1D0438u;
label_1d0438:
    // 0x1d0438: 0x3c10001d  lui         $s0, 0x1D
    ctx->pc = 0x1d0438u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)29 << 16));
    // 0x1d043c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d043cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0440: 0x2610fed8  addiu       $s0, $s0, -0x128
    ctx->pc = 0x1d0440u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967000));
    // 0x1d0444: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d0444u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0448: 0xc06bc8a  jal         func_1AF228
    ctx->pc = 0x1D0448u;
    SET_GPR_U32(ctx, 31, 0x1D0450u);
    ctx->pc = 0x1D044Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0448u;
    // 0x1d044c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF228u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AF228u, 0x1D0448u, 0x1D0450u)) {
        return;
    }
    ctx->pc = 0x1D0450u;
label_1d0450:
    // 0x1d0450: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d0450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0454: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1d0454u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0458: 0xc06bc8a  jal         func_1AF228
    ctx->pc = 0x1D0458u;
    SET_GPR_U32(ctx, 31, 0x1D0460u);
    ctx->pc = 0x1D045Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0458u;
    // 0x1d045c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF228u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AF228u, 0x1D0458u, 0x1D0460u)) {
        return;
    }
    ctx->pc = 0x1D0460u;
label_1d0460:
    // 0x1d0460: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D0460u;
    {
        const bool branch_taken_0x1d0460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0460u;
        // 0x1d0464: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0460) {
            ctx->pc = 0x1D0470u;
            goto label_1d0470;
        }
    }
    ctx->pc = 0x1D0468u;
label_1d0468:
    // 0x1d0468: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1d0468u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d046c:
    // 0x1d046c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1d046cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d0470:
    // 0x1d0470: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1d0470u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d0474: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1d0474u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d0478: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1d0478u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d047c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d047cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d0480: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0480u;
        // 0x1d0484: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0480u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0488u;
}

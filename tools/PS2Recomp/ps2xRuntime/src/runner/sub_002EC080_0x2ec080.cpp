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

// Function: sub_002EC080
// Address: 0x2ec080 - 0x2ec0f0
void sub_002EC080_0x2ec080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EC080_0x2ec080");
#endif

    switch (ctx->pc) {
        case 0x2ec09cu: goto label_2ec09c;
        case 0x2ec0b4u: goto label_2ec0b4;
        case 0x2ec0d4u: goto label_2ec0d4;
        default: break;
    }

    ctx->pc = 0x2ec080u;

    // 0x2ec080: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ec080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ec084: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2ec084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x2ec088: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2ec088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2ec08c: 0x2450e778  addiu       $s0, $v0, -0x1888
    ctx->pc = 0x2ec08cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961016));
    // 0x2ec090: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ec090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ec094: 0xc0b6c62  jal         func_2DB188
    ctx->pc = 0x2EC094u;
    SET_GPR_U32(ctx, 31, 0x2EC09Cu);
    ctx->pc = 0x2EC098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC094u;
    // 0x2ec098: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB188u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DB188u, 0x2EC094u, 0x2EC09Cu)) {
        return;
    }
    ctx->pc = 0x2EC09Cu;
label_2ec09c:
    // 0x2ec09c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2EC09Cu;
    {
        const bool branch_taken_0x2ec09c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC09Cu;
        // 0x2ec0a0: 0x3c05006b  lui         $a1, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec09c) {
            ctx->pc = 0x2EC0DCu;
            goto label_2ec0dc;
        }
    }
    ctx->pc = 0x2EC0A4u;
    // 0x2ec0a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ec0a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec0a8: 0x24a5ff18  addiu       $a1, $a1, -0xE8
    ctx->pc = 0x2ec0a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967064));
    // 0x2ec0ac: 0xc0b6c52  jal         func_2DB148
    ctx->pc = 0x2EC0ACu;
    SET_GPR_U32(ctx, 31, 0x2EC0B4u);
    ctx->pc = 0x2EC0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC0ACu;
    // 0x2ec0b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB148u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DB148u, 0x2EC0ACu, 0x2EC0B4u)) {
        return;
    }
    ctx->pc = 0x2EC0B4u;
label_2ec0b4:
    // 0x2ec0b4: 0x3c050068  lui         $a1, 0x68
    ctx->pc = 0x2ec0b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
    // 0x2ec0b8: 0x3c070068  lui         $a3, 0x68
    ctx->pc = 0x2ec0b8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)104 << 16));
    // 0x2ec0bc: 0x24a55cf0  addiu       $a1, $a1, 0x5CF0
    ctx->pc = 0x2ec0bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23792));
    // 0x2ec0c0: 0x24e75d80  addiu       $a3, $a3, 0x5D80
    ctx->pc = 0x2ec0c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 23936));
    // 0x2ec0c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ec0c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec0c8: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x2ec0c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2ec0cc: 0xc0b6cfc  jal         func_2DB3F0
    ctx->pc = 0x2EC0CCu;
    SET_GPR_U32(ctx, 31, 0x2EC0D4u);
    ctx->pc = 0x2EC0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC0CCu;
    // 0x2ec0d0: 0x24080006  addiu       $t0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB3F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DB3F0u, 0x2EC0CCu, 0x2EC0D4u)) {
        return;
    }
    ctx->pc = 0x2EC0D4u;
label_2ec0d4:
    // 0x2ec0d4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2EC0D4u;
    {
        const bool branch_taken_0x2ec0d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC0D4u;
        // 0x2ec0d8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec0d4) {
            ctx->pc = 0x2EC0E0u;
            goto label_2ec0e0;
        }
    }
    ctx->pc = 0x2EC0DCu;
label_2ec0dc:
    // 0x2ec0dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ec0dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ec0e0:
    // 0x2ec0e0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2ec0e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ec0e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ec0e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ec0e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2EC0E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EC0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC0E8u;
        // 0x2ec0ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EC0E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EC0F0u;
}

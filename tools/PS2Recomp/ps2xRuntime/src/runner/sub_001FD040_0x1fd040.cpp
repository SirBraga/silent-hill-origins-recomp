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

// Function: sub_001FD040
// Address: 0x1fd040 - 0x1fd0e0
void sub_001FD040_0x1fd040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FD040_0x1fd040");
#endif

    switch (ctx->pc) {
        case 0x1fd058u: goto label_1fd058;
        case 0x1fd068u: goto label_1fd068;
        case 0x1fd070u: goto label_1fd070;
        case 0x1fd098u: goto label_1fd098;
        case 0x1fd0a0u: goto label_1fd0a0;
        case 0x1fd0b0u: goto label_1fd0b0;
        case 0x1fd0b8u: goto label_1fd0b8;
        default: break;
    }

    ctx->pc = 0x1fd040u;

    // 0x1fd040: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1fd040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1fd044: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1fd044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1fd048: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fd048u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd04c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1fd04cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1fd050: 0xc07f2f2  jal         func_1FCBC8
    ctx->pc = 0x1FD050u;
    SET_GPR_U32(ctx, 31, 0x1FD058u);
    ctx->pc = 0x1FD054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD050u;
    // 0x1fd054: 0xafb00020  sw          $s0, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FCBC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FCBC8u, 0x1FD050u, 0x1FD058u)) {
        return;
    }
    ctx->pc = 0x1FD058u;
label_1fd058:
    // 0x1fd058: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1fd058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd05c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1fd05cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd060: 0xc07f622  jal         func_1FD888
    ctx->pc = 0x1FD060u;
    SET_GPR_U32(ctx, 31, 0x1FD068u);
    ctx->pc = 0x1FD064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD060u;
    // 0x1fd064: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD888u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD888u, 0x1FD060u, 0x1FD068u)) {
        return;
    }
    ctx->pc = 0x1FD068u;
label_1fd068:
    // 0x1fd068: 0xc07f2f2  jal         func_1FCBC8
    ctx->pc = 0x1FD068u;
    SET_GPR_U32(ctx, 31, 0x1FD070u);
    ctx->pc = 0x1FCBC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FCBC8u, 0x1FD068u, 0x1FD070u)) {
        return;
    }
    ctx->pc = 0x1FD070u;
label_1fd070:
    // 0x1fd070: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1fd070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fd074: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1fd074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fd078: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1fd078u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x1fd07c: 0x10640002  beq         $v1, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FD07Cu;
    {
        const bool branch_taken_0x1fd07c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1FD080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD07Cu;
        // 0x1fd080: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd07c) {
            ctx->pc = 0x1FD088u;
            goto label_1fd088;
        }
    }
    ctx->pc = 0x1FD084u;
    // 0x1fd084: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x1fd084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_1fd088:
    // 0x1fd088: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x1FD088u;
    {
        const bool branch_taken_0x1fd088 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fd088) {
            ctx->pc = 0x1FD08Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD088u;
            // 0x1fd08c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD0D4u;
            goto label_1fd0d4;
        }
    }
    ctx->pc = 0x1FD090u;
    // 0x1fd090: 0xc07f326  jal         func_1FCC98
    ctx->pc = 0x1FD090u;
    SET_GPR_U32(ctx, 31, 0x1FD098u);
    ctx->pc = 0x1FD094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD090u;
    // 0x1fd094: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FCC98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FCC98u, 0x1FD090u, 0x1FD098u)) {
        return;
    }
    ctx->pc = 0x1FD098u;
label_1fd098:
    // 0x1fd098: 0xc07f2f2  jal         func_1FCBC8
    ctx->pc = 0x1FD098u;
    SET_GPR_U32(ctx, 31, 0x1FD0A0u);
    ctx->pc = 0x1FD09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD098u;
    // 0x1fd09c: 0xafb00024  sw          $s0, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FCBC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FCBC8u, 0x1FD098u, 0x1FD0A0u)) {
        return;
    }
    ctx->pc = 0x1FD0A0u;
label_1fd0a0:
    // 0x1fd0a0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1fd0a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd0a4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1fd0a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd0a8: 0xc07f622  jal         func_1FD888
    ctx->pc = 0x1FD0A8u;
    SET_GPR_U32(ctx, 31, 0x1FD0B0u);
    ctx->pc = 0x1FD0ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD0A8u;
    // 0x1fd0ac: 0x27a60024  addiu       $a2, $sp, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD888u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD888u, 0x1FD0A8u, 0x1FD0B0u)) {
        return;
    }
    ctx->pc = 0x1FD0B0u;
label_1fd0b0:
    // 0x1fd0b0: 0xc07f2f2  jal         func_1FCBC8
    ctx->pc = 0x1FD0B0u;
    SET_GPR_U32(ctx, 31, 0x1FD0B8u);
    ctx->pc = 0x1FCBC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FCBC8u, 0x1FD0B0u, 0x1FD0B8u)) {
        return;
    }
    ctx->pc = 0x1FD0B8u;
label_1fd0b8:
    // 0x1fd0b8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1fd0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fd0bc: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1fd0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fd0c0: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1fd0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x1fd0c4: 0x10640002  beq         $v1, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FD0C4u;
    {
        const bool branch_taken_0x1fd0c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1FD0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD0C4u;
        // 0x1fd0c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd0c4) {
            ctx->pc = 0x1FD0D0u;
            goto label_1fd0d0;
        }
    }
    ctx->pc = 0x1FD0CCu;
    // 0x1fd0cc: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x1fd0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_1fd0d0:
    // 0x1fd0d0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1fd0d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1fd0d4:
    // 0x1fd0d4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1fd0d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fd0d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1FD0D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD0D8u;
        // 0x1fd0dc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD0D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FD0E0u;
}

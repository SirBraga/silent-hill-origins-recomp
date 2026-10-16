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

// Function: sub_001819F8
// Address: 0x1819f8 - 0x181a60
void sub_001819F8_0x1819f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001819F8_0x1819f8");
#endif

    switch (ctx->pc) {
        case 0x181a18u: goto label_181a18;
        case 0x181a28u: goto label_181a28;
        case 0x181a3cu: goto label_181a3c;
        default: break;
    }

    ctx->pc = 0x1819f8u;

    // 0x1819f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1819f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1819fc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1819fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x181a00: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x181a00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x181a04: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x181a04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181a08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x181a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x181a0c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x181a0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181a10: 0x36060980  ori         $a2, $s0, 0x980
    ctx->pc = 0x181a10u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)2432);
    // 0x181a14: 0x0  nop
    ctx->pc = 0x181a14u;
    // NOP
label_181a18:
    // 0x181a18: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x181a18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x181a1c: 0x34058010  ori         $a1, $zero, 0x8010
    ctx->pc = 0x181a1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32784);
    // 0x181a20: 0xc0be22c  jal         func_2F88B0
    ctx->pc = 0x181A20u;
    SET_GPR_U32(ctx, 31, 0x181A28u);
    ctx->pc = 0x181A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181A20u;
    // 0x181a24: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F88B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F88B0u, 0x181A20u, 0x181A28u)) {
        return;
    }
    ctx->pc = 0x181A28u;
label_181a28:
    // 0x181a28: 0x36060a80  ori         $a2, $s0, 0xA80
    ctx->pc = 0x181a28u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)2688);
    // 0x181a2c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x181a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x181a30: 0x34058010  ori         $a1, $zero, 0x8010
    ctx->pc = 0x181a30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32784);
    // 0x181a34: 0xc0be22c  jal         func_2F88B0
    ctx->pc = 0x181A34u;
    SET_GPR_U32(ctx, 31, 0x181A3Cu);
    ctx->pc = 0x181A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181A34u;
    // 0x181a38: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F88B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F88B0u, 0x181A34u, 0x181A3Cu)) {
        return;
    }
    ctx->pc = 0x181A3Cu;
label_181a3c:
    // 0x181a3c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x181a3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x181a40: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x181a40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x181a44: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x181A44u;
    {
        const bool branch_taken_0x181a44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x181A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181A44u;
        // 0x181a48: 0x36060980  ori         $a2, $s0, 0x980 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)2432);
        ctx->in_delay_slot = false;
        if (branch_taken_0x181a44) {
            ctx->pc = 0x181A18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_181a18;
        }
    }
    ctx->pc = 0x181A4Cu;
    // 0x181a4c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x181a4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x181a50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x181a50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x181a54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x181a54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x181a58: 0x3e00008  jr          $ra
    ctx->pc = 0x181A58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181A58u;
        // 0x181a5c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181A58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x181A60u;
}

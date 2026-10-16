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

// Function: sub_002E9080
// Address: 0x2e9080 - 0x2e9110
void sub_002E9080_0x2e9080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E9080_0x2e9080");
#endif

    switch (ctx->pc) {
        case 0x2e9098u: goto label_2e9098;
        case 0x2e90acu: goto label_2e90ac;
        case 0x2e90c4u: goto label_2e90c4;
        case 0x2e90d8u: goto label_2e90d8;
        case 0x2e90f4u: goto label_2e90f4;
        default: break;
    }

    ctx->pc = 0x2e9080u;

    // 0x2e9080: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e9080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e9084: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2e9084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2e9088: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e9088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e908c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e908cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e9090: 0xc0c8f12  jal         func_323C48
    ctx->pc = 0x2E9090u;
    SET_GPR_U32(ctx, 31, 0x2E9098u);
    ctx->pc = 0x2E9094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9090u;
    // 0x2e9094: 0x24110002  addiu       $s1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323C48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x323C48u, 0x2E9090u, 0x2E9098u)) {
        return;
    }
    ctx->pc = 0x2E9098u;
label_2e9098:
    // 0x2e9098: 0x8f828d94  lw          $v0, -0x726C($gp)
    ctx->pc = 0x2e9098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938004)));
    // 0x2e909c: 0x54510006  bnel        $v0, $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E909Cu;
    {
        const bool branch_taken_0x2e909c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x2e909c) {
            ctx->pc = 0x2E90A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E909Cu;
            // 0x2e90a0: 0x3c040071  lui         $a0, 0x71 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E90B8u;
            goto label_2e90b8;
        }
    }
    ctx->pc = 0x2E90A4u;
    // 0x2e90a4: 0xc0c9ba4  jal         func_326E90
    ctx->pc = 0x2E90A4u;
    SET_GPR_U32(ctx, 31, 0x2E90ACu);
    ctx->pc = 0x326E90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326E90u, 0x2E90A4u, 0x2E90ACu)) {
        return;
    }
    ctx->pc = 0x2E90ACu;
label_2e90ac:
    // 0x2e90ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e90acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e90b0: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x2e90b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
    // 0x2e90b4: 0x0  nop
    ctx->pc = 0x2e90b4u;
    // NOP
label_2e90b8:
    // 0x2e90b8: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x2e90b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2e90bc: 0xc0c8fc0  jal         func_323F00
    ctx->pc = 0x2E90BCu;
    SET_GPR_U32(ctx, 31, 0x2E90C4u);
    ctx->pc = 0x2E90C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E90BCu;
    // 0x2e90c0: 0x248485c0  addiu       $a0, $a0, -0x7A40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323F00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x323F00u, 0x2E90BCu, 0x2E90C4u)) {
        return;
    }
    ctx->pc = 0x2E90C4u;
label_2e90c4:
    // 0x2e90c4: 0x3c05002f  lui         $a1, 0x2F
    ctx->pc = 0x2e90c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
    // 0x2e90c8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2e90c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e90cc: 0x24a591a0  addiu       $a1, $a1, -0x6E60
    ctx->pc = 0x2e90ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939040));
    // 0x2e90d0: 0xc0c8fc6  jal         func_323F18
    ctx->pc = 0x2E90D0u;
    SET_GPR_U32(ctx, 31, 0x2E90D8u);
    ctx->pc = 0x2E90D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E90D0u;
    // 0x2e90d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323F18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x323F18u, 0x2E90D0u, 0x2E90D8u)) {
        return;
    }
    ctx->pc = 0x2E90D8u;
label_2e90d8:
    // 0x2e90d8: 0x8f828d94  lw          $v0, -0x726C($gp)
    ctx->pc = 0x2e90d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938004)));
    // 0x2e90dc: 0x14510006  bne         $v0, $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E90DCu;
    {
        const bool branch_taken_0x2e90dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x2E90E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E90DCu;
        // 0x2e90e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e90dc) {
            ctx->pc = 0x2E90F8u;
            goto label_2e90f8;
        }
    }
    ctx->pc = 0x2E90E4u;
    // 0x2e90e4: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E90E4u;
    {
        const bool branch_taken_0x2e90e4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E90E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E90E4u;
        // 0x2e90e8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e90e4) {
            ctx->pc = 0x2E90FCu;
            goto label_2e90fc;
        }
    }
    ctx->pc = 0x2E90ECu;
    // 0x2e90ec: 0xc0c9bb8  jal         func_326EE0
    ctx->pc = 0x2E90ECu;
    SET_GPR_U32(ctx, 31, 0x2E90F4u);
    ctx->pc = 0x326EE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326EE0u, 0x2E90ECu, 0x2E90F4u)) {
        return;
    }
    ctx->pc = 0x2E90F4u;
label_2e90f4:
    // 0x2e90f4: 0x0  nop
    ctx->pc = 0x2e90f4u;
    // NOP
label_2e90f8:
    // 0x2e90f8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2e90f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2e90fc:
    // 0x2e90fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e90fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e9100: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e9100u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e9104: 0x3e00008  jr          $ra
    ctx->pc = 0x2E9104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E9108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9104u;
        // 0x2e9108: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E9104u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E910Cu;
    // 0x2e910c: 0x0  nop
    ctx->pc = 0x2e910cu;
    // NOP
    ctx->pc = 0x2e9110u;
}

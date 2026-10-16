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

// Function: sub_001FBE10
// Address: 0x1fbe10 - 0x1fbe60
void sub_001FBE10_0x1fbe10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FBE10_0x1fbe10");
#endif

    switch (ctx->pc) {
        case 0x1fbe34u: goto label_1fbe34;
        case 0x1fbe4cu: goto label_1fbe4c;
        default: break;
    }

    ctx->pc = 0x1fbe10u;

    // 0x1fbe10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fbe10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fbe14: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x1fbe14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x1fbe18: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fbe18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fbe1c: 0x8c625530  lw          $v0, 0x5530($v1)
    ctx->pc = 0x1fbe1cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x735530u));
    // 0x1fbe20: 0x24705530  addiu       $s0, $v1, 0x5530
    ctx->pc = 0x1fbe20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 21808));
    // 0x1fbe24: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FBE24u;
    {
        const bool branch_taken_0x1fbe24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FBE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBE24u;
        // 0x1fbe28: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbe24) {
            ctx->pc = 0x1FBE4Cu;
            goto label_1fbe4c;
        }
    }
    ctx->pc = 0x1FBE2Cu;
    // 0x1fbe2c: 0xc07ec84  jal         func_1FB210
    ctx->pc = 0x1FBE2Cu;
    SET_GPR_U32(ctx, 31, 0x1FBE34u);
    ctx->pc = 0x1FB210u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FB210u, 0x1FBE2Cu, 0x1FBE34u)) {
        return;
    }
    ctx->pc = 0x1FBE34u;
label_1fbe34:
    // 0x1fbe34: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1fbe34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1fbe38: 0x3c06006b  lui         $a2, 0x6B
    ctx->pc = 0x1fbe38u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)107 << 16));
    // 0x1fbe3c: 0x24a530a0  addiu       $a1, $a1, 0x30A0
    ctx->pc = 0x1fbe3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12448));
    // 0x1fbe40: 0x24c64150  addiu       $a2, $a2, 0x4150
    ctx->pc = 0x1fbe40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16720));
    // 0x1fbe44: 0xc07eb06  jal         func_1FAC18
    ctx->pc = 0x1FBE44u;
    SET_GPR_U32(ctx, 31, 0x1FBE4Cu);
    ctx->pc = 0x1FBE48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBE44u;
    // 0x1fbe48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAC18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FAC18u, 0x1FBE44u, 0x1FBE4Cu)) {
        return;
    }
    ctx->pc = 0x1FBE4Cu;
label_1fbe4c:
    // 0x1fbe4c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1fbe4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbe50: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fbe50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fbe54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fbe54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fbe58: 0x3e00008  jr          $ra
    ctx->pc = 0x1FBE58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FBE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBE58u;
        // 0x1fbe5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FBE58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FBE60u;
}

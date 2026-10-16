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

// Function: sub_00189768
// Address: 0x189768 - 0x1897e0
void sub_00189768_0x189768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00189768_0x189768");
#endif

    switch (ctx->pc) {
        case 0x189790u: goto label_189790;
        case 0x1897b4u: goto label_1897b4;
        case 0x1897ccu: goto label_1897cc;
        default: break;
    }

    ctx->pc = 0x189768u;

    // 0x189768: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x189768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18976c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x18976cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x189770: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x189770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x189774: 0x14a20015  bne         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x189774u;
    {
        const bool branch_taken_0x189774 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x189778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189774u;
        // 0x189778: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189774) {
            ctx->pc = 0x1897CCu;
            goto label_1897cc;
        }
    }
    ctx->pc = 0x18977Cu;
    // 0x18977c: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x18977Cu;
    {
        const bool branch_taken_0x18977c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x189780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18977Cu;
        // 0x189780: 0x3c10006a  lui         $s0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18977c) {
            ctx->pc = 0x1897BCu;
            goto label_1897bc;
        }
    }
    ctx->pc = 0x189784u;
    // 0x189784: 0x26108cf0  addiu       $s0, $s0, -0x7310
    ctx->pc = 0x189784u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294937840));
    // 0x189788: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x189788u;
    SET_GPR_U32(ctx, 31, 0x189790u);
    ctx->pc = 0x18978Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189788u;
    // 0x18978c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x189788u, 0x189790u)) {
        return;
    }
    ctx->pc = 0x189790u;
label_189790:
    // 0x189790: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x189790u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
    // 0x189794: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x189794u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
    // 0x189798: 0x3c060019  lui         $a2, 0x19
    ctx->pc = 0x189798u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)25 << 16));
    // 0x18979c: 0xac62bd30  sw          $v0, -0x42D0($v1)
    ctx->pc = 0x18979cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6CBD30u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6CBD30u, _value); } while (0);
    // 0x1897a0: 0x2484bd38  addiu       $a0, $a0, -0x42C8
    ctx->pc = 0x1897a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950200));
    // 0x1897a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1897a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1897a8: 0x24c697e0  addiu       $a2, $a2, -0x6820
    ctx->pc = 0x1897a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940640));
    // 0x1897ac: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x1897ACu;
    SET_GPR_U32(ctx, 31, 0x1897B4u);
    ctx->pc = 0x1897B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1897ACu;
    // 0x1897b0: 0x24070054  addiu       $a3, $zero, 0x54 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x1897ACu, 0x1897B4u)) {
        return;
    }
    ctx->pc = 0x1897B4u;
label_1897b4:
    // 0x1897b4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1897B4u;
    {
        const bool branch_taken_0x1897b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1897B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1897B4u;
        // 0x1897b8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1897b4) {
            ctx->pc = 0x1897D0u;
            goto label_1897d0;
        }
    }
    ctx->pc = 0x1897BCu;
label_1897bc:
    // 0x1897bc: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x1897bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
    // 0x1897c0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1897c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1897c4: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x1897C4u;
    SET_GPR_U32(ctx, 31, 0x1897CCu);
    ctx->pc = 0x1897C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1897C4u;
    // 0x1897c8: 0x2484bd38  addiu       $a0, $a0, -0x42C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x1897C4u, 0x1897CCu)) {
        return;
    }
    ctx->pc = 0x1897CCu;
label_1897cc:
    // 0x1897cc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1897ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1897d0:
    // 0x1897d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1897d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1897d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1897D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1897D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1897D4u;
        // 0x1897d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1897D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1897DCu;
    // 0x1897dc: 0x0  nop
    ctx->pc = 0x1897dcu;
    // NOP
    ctx->pc = 0x1897e0u;
}

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

// Function: sub_001870D8
// Address: 0x1870d8 - 0x187168
void sub_001870D8_0x1870d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001870D8_0x1870d8");
#endif

    switch (ctx->pc) {
        case 0x1870fcu: goto label_1870fc;
        case 0x187110u: goto label_187110;
        case 0x18711cu: goto label_18711c;
        case 0x187128u: goto label_187128;
        case 0x18713cu: goto label_18713c;
        case 0x18714cu: goto label_18714c;
        case 0x18715cu: goto label_18715c;
        default: break;
    }

    ctx->pc = 0x1870d8u;

    // 0x1870d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1870d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1870dc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1870dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1870e0: 0x14a2001e  bne         $a1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1870E0u;
    {
        const bool branch_taken_0x1870e0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1870E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1870E0u;
        // 0x1870e4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1870e0) {
            ctx->pc = 0x18715Cu;
            goto label_18715c;
        }
    }
    ctx->pc = 0x1870E8u;
    // 0x1870e8: 0x50800011  beql        $a0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1870E8u;
    {
        const bool branch_taken_0x1870e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1870e8) {
            ctx->pc = 0x1870ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1870E8u;
            // 0x1870ec: 0x3c04006d  lui         $a0, 0x6D (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x187130u;
            goto label_187130;
        }
    }
    ctx->pc = 0x1870F0u;
    // 0x1870f0: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x1870f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
    // 0x1870f4: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x1870F4u;
    SET_GPR_U32(ctx, 31, 0x1870FCu);
    ctx->pc = 0x1870F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1870F4u;
    // 0x1870f8: 0x24848780  addiu       $a0, $a0, -0x7880 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x1870F4u, 0x1870FCu)) {
        return;
    }
    ctx->pc = 0x1870FCu;
label_1870fc:
    // 0x1870fc: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x1870fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
    // 0x187100: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x187100u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
    // 0x187104: 0x2484bcc8  addiu       $a0, $a0, -0x4338
    ctx->pc = 0x187104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950088));
    // 0x187108: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x187108u;
    SET_GPR_U32(ctx, 31, 0x187110u);
    ctx->pc = 0x18710Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187108u;
    // 0x18710c: 0xac62bcc0  sw          $v0, -0x4340($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294950080), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x187108u, 0x187110u)) {
        return;
    }
    ctx->pc = 0x187110u;
label_187110:
    // 0x187110: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x187110u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
    // 0x187114: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x187114u;
    SET_GPR_U32(ctx, 31, 0x18711Cu);
    ctx->pc = 0x187118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187114u;
    // 0x187118: 0x2484bcd0  addiu       $a0, $a0, -0x4330 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x187114u, 0x18711Cu)) {
        return;
    }
    ctx->pc = 0x18711Cu;
label_18711c:
    // 0x18711c: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x18711cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
    // 0x187120: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x187120u;
    SET_GPR_U32(ctx, 31, 0x187128u);
    ctx->pc = 0x187124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187120u;
    // 0x187124: 0x2484bcd8  addiu       $a0, $a0, -0x4328 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x187120u, 0x187128u)) {
        return;
    }
    ctx->pc = 0x187128u;
label_187128:
    // 0x187128: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x187128u;
    {
        const bool branch_taken_0x187128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18712Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187128u;
        // 0x18712c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187128) {
            ctx->pc = 0x187160u;
            goto label_187160;
        }
    }
    ctx->pc = 0x187130u;
label_187130:
    // 0x187130: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x187130u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x187134: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x187134u;
    SET_GPR_U32(ctx, 31, 0x18713Cu);
    ctx->pc = 0x187138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187134u;
    // 0x187138: 0x2484bcd8  addiu       $a0, $a0, -0x4328 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x187134u, 0x18713Cu)) {
        return;
    }
    ctx->pc = 0x18713Cu;
label_18713c:
    // 0x18713c: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x18713cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
    // 0x187140: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x187140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x187144: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x187144u;
    SET_GPR_U32(ctx, 31, 0x18714Cu);
    ctx->pc = 0x187148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187144u;
    // 0x187148: 0x2484bcd0  addiu       $a0, $a0, -0x4330 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x187144u, 0x18714Cu)) {
        return;
    }
    ctx->pc = 0x18714Cu;
label_18714c:
    // 0x18714c: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x18714cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
    // 0x187150: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x187150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x187154: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x187154u;
    SET_GPR_U32(ctx, 31, 0x18715Cu);
    ctx->pc = 0x187158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187154u;
    // 0x187158: 0x2484bcc8  addiu       $a0, $a0, -0x4338 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x187154u, 0x18715Cu)) {
        return;
    }
    ctx->pc = 0x18715Cu;
label_18715c:
    // 0x18715c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18715cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_187160:
    // 0x187160: 0x3e00008  jr          $ra
    ctx->pc = 0x187160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187160u;
        // 0x187164: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187160u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x187168u;
}

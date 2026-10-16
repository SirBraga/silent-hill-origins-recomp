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

// Function: sub_001A46B0
// Address: 0x1a46b0 - 0x1a4720
void sub_001A46B0_0x1a46b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A46B0_0x1a46b0");
#endif

    switch (ctx->pc) {
        case 0x1a46d4u: goto label_1a46d4;
        case 0x1a46e0u: goto label_1a46e0;
        case 0x1a46ecu: goto label_1a46ec;
        case 0x1a4704u: goto label_1a4704;
        case 0x1a4714u: goto label_1a4714;
        default: break;
    }

    ctx->pc = 0x1a46b0u;

    // 0x1a46b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a46b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a46b4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1a46b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1a46b8: 0x14a20016  bne         $a1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1A46B8u;
    {
        const bool branch_taken_0x1a46b8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A46BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A46B8u;
        // 0x1a46bc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a46b8) {
            ctx->pc = 0x1A4714u;
            goto label_1a4714;
        }
    }
    ctx->pc = 0x1A46C0u;
    // 0x1a46c0: 0x5080000d  beql        $a0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1A46C0u;
    {
        const bool branch_taken_0x1a46c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a46c0) {
            ctx->pc = 0x1A46C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A46C0u;
            // 0x1a46c4: 0x3c040070  lui         $a0, 0x70 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A46F8u;
            goto label_1a46f8;
        }
    }
    ctx->pc = 0x1A46C8u;
    // 0x1a46c8: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1a46c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1a46cc: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x1A46CCu;
    SET_GPR_U32(ctx, 31, 0x1A46D4u);
    ctx->pc = 0x1A46D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A46CCu;
    // 0x1a46d0: 0x24848180  addiu       $a0, $a0, -0x7E80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x1A46CCu, 0x1A46D4u)) {
        return;
    }
    ctx->pc = 0x1A46D4u;
label_1a46d4:
    // 0x1a46d4: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1a46d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1a46d8: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x1A46D8u;
    SET_GPR_U32(ctx, 31, 0x1A46E0u);
    ctx->pc = 0x1A46DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A46D8u;
    // 0x1a46dc: 0x24848188  addiu       $a0, $a0, -0x7E78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x1A46D8u, 0x1A46E0u)) {
        return;
    }
    ctx->pc = 0x1A46E0u;
label_1a46e0:
    // 0x1a46e0: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x1a46e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
    // 0x1a46e4: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x1A46E4u;
    SET_GPR_U32(ctx, 31, 0x1A46ECu);
    ctx->pc = 0x1A46E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A46E4u;
    // 0x1a46e8: 0x2484b148  addiu       $a0, $a0, -0x4EB8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x1A46E4u, 0x1A46ECu)) {
        return;
    }
    ctx->pc = 0x1A46ECu;
label_1a46ec:
    // 0x1a46ec: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x1a46ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x1a46f0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1A46F0u;
    {
        const bool branch_taken_0x1a46f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A46F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A46F0u;
        // 0x1a46f4: 0xac628190  sw          $v0, -0x7E70($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294934928), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a46f0) {
            ctx->pc = 0x1A4714u;
            goto label_1a4714;
        }
    }
    ctx->pc = 0x1A46F8u;
label_1a46f8:
    // 0x1a46f8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1a46f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a46fc: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x1A46FCu;
    SET_GPR_U32(ctx, 31, 0x1A4704u);
    ctx->pc = 0x1A4700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A46FCu;
    // 0x1a4700: 0x24848188  addiu       $a0, $a0, -0x7E78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x1A46FCu, 0x1A4704u)) {
        return;
    }
    ctx->pc = 0x1A4704u;
label_1a4704:
    // 0x1a4704: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1a4704u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1a4708: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1a4708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a470c: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x1A470Cu;
    SET_GPR_U32(ctx, 31, 0x1A4714u);
    ctx->pc = 0x1A4710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A470Cu;
    // 0x1a4710: 0x24848180  addiu       $a0, $a0, -0x7E80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x1A470Cu, 0x1A4714u)) {
        return;
    }
    ctx->pc = 0x1A4714u;
label_1a4714:
    // 0x1a4714: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a4714u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a4718: 0x3e00008  jr          $ra
    ctx->pc = 0x1A4718u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A471Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4718u;
        // 0x1a471c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4718u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4720u;
}

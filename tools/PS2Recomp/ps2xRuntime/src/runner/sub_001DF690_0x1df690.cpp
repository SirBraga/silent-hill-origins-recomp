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

// Function: sub_001DF690
// Address: 0x1df690 - 0x1df728
void sub_001DF690_0x1df690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DF690_0x1df690");
#endif

    switch (ctx->pc) {
        case 0x1df6a8u: goto label_1df6a8;
        case 0x1df6dcu: goto label_1df6dc;
        case 0x1df704u: goto label_1df704;
        default: break;
    }

    ctx->pc = 0x1df690u;

    // 0x1df690: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1df690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1df694: 0x24040a0b  addiu       $a0, $zero, 0xA0B
    ctx->pc = 0x1df694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2571));
    // 0x1df698: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1df698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1df69c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1df69cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1df6a0: 0xc089a36  jal         func_2268D8
    ctx->pc = 0x1DF6A0u;
    SET_GPR_U32(ctx, 31, 0x1DF6A8u);
    ctx->pc = 0x1DF6A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF6A0u;
    // 0x1df6a4: 0x3c100034  lui         $s0, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)52 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2268D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2268D8u, 0x1DF6A0u, 0x1DF6A8u)) {
        return;
    }
    ctx->pc = 0x1DF6A8u;
label_1df6a8:
    // 0x1df6a8: 0x4400003  bltz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DF6A8u;
    {
        const bool branch_taken_0x1df6a8 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x1DF6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF6A8u;
        // 0x1df6ac: 0xae02e6c8  sw          $v0, -0x1938($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294960840), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df6a8) {
            ctx->pc = 0x1DF6B8u;
            goto label_1df6b8;
        }
    }
    ctx->pc = 0x1DF6B0u;
    // 0x1df6b0: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1DF6B0u;
    {
        const bool branch_taken_0x1df6b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF6B0u;
        // 0x1df6b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df6b0) {
            ctx->pc = 0x1DF718u;
            goto label_1df718;
        }
    }
    ctx->pc = 0x1DF6B8u;
label_1df6b8:
    // 0x1df6b8: 0x3c06001e  lui         $a2, 0x1E
    ctx->pc = 0x1df6b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)30 << 16));
    // 0x1df6bc: 0x3c07001e  lui         $a3, 0x1E
    ctx->pc = 0x1df6bcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)30 << 16));
    // 0x1df6c0: 0x3c08001e  lui         $t0, 0x1E
    ctx->pc = 0x1df6c0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)30 << 16));
    // 0x1df6c4: 0x24c6f778  addiu       $a2, $a2, -0x888
    ctx->pc = 0x1df6c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965112));
    // 0x1df6c8: 0x24e7f7d8  addiu       $a3, $a3, -0x828
    ctx->pc = 0x1df6c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294965208));
    // 0x1df6cc: 0x2508f7e0  addiu       $t0, $t0, -0x820
    ctx->pc = 0x1df6ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294965216));
    // 0x1df6d0: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1df6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1df6d4: 0xc089a24  jal         func_226890
    ctx->pc = 0x1DF6D4u;
    SET_GPR_U32(ctx, 31, 0x1DF6DCu);
    ctx->pc = 0x1DF6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF6D4u;
    // 0x1df6d8: 0x24050a0b  addiu       $a1, $zero, 0xA0B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2571));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226890u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226890u, 0x1DF6D4u, 0x1DF6DCu)) {
        return;
    }
    ctx->pc = 0x1DF6DCu;
label_1df6dc:
    // 0x1df6dc: 0x440000d  bltz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1DF6DCu;
    {
        const bool branch_taken_0x1df6dc = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x1DF6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF6DCu;
        // 0x1df6e0: 0xae02e6c8  sw          $v0, -0x1938($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294960840), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df6dc) {
            ctx->pc = 0x1DF714u;
            goto label_1df714;
        }
    }
    ctx->pc = 0x1DF6E4u;
    // 0x1df6e4: 0x3c05001e  lui         $a1, 0x1E
    ctx->pc = 0x1df6e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)30 << 16));
    // 0x1df6e8: 0x3c06001e  lui         $a2, 0x1E
    ctx->pc = 0x1df6e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)30 << 16));
    // 0x1df6ec: 0x3c07001e  lui         $a3, 0x1E
    ctx->pc = 0x1df6ecu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)30 << 16));
    // 0x1df6f0: 0x24a5f838  addiu       $a1, $a1, -0x7C8
    ctx->pc = 0x1df6f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965304));
    // 0x1df6f4: 0x24c6f8f8  addiu       $a2, $a2, -0x708
    ctx->pc = 0x1df6f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965496));
    // 0x1df6f8: 0x24e7f9a8  addiu       $a3, $a3, -0x658
    ctx->pc = 0x1df6f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294965672));
    // 0x1df6fc: 0xc088b96  jal         func_222E58
    ctx->pc = 0x1DF6FCu;
    SET_GPR_U32(ctx, 31, 0x1DF704u);
    ctx->pc = 0x1DF700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF6FCu;
    // 0x1df700: 0x24040a0b  addiu       $a0, $zero, 0xA0B (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2571));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222E58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x222E58u, 0x1DF6FCu, 0x1DF704u)) {
        return;
    }
    ctx->pc = 0x1DF704u;
label_1df704:
    // 0x1df704: 0x8e03e6c8  lw          $v1, -0x1938($s0)
    ctx->pc = 0x1df704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294960840)));
    // 0x1df708: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1df708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1df70c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1DF70Cu;
    {
        const bool branch_taken_0x1df70c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF70Cu;
        // 0x1df710: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df70c) {
            ctx->pc = 0x1DF718u;
            goto label_1df718;
        }
    }
    ctx->pc = 0x1DF714u;
label_1df714:
    // 0x1df714: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1df714u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1df718:
    // 0x1df718: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1df718u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1df71c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1df71cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1df720: 0x3e00008  jr          $ra
    ctx->pc = 0x1DF720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DF724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF720u;
        // 0x1df724: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DF720u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DF728u;
}

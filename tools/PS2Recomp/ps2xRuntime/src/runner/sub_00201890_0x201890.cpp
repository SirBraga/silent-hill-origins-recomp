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

// Function: sub_00201890
// Address: 0x201890 - 0x2018f0
void sub_00201890_0x201890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00201890_0x201890");
#endif

    switch (ctx->pc) {
        case 0x201890u: goto label_201890;
        case 0x201894u: goto label_201894;
        case 0x201898u: goto label_201898;
        case 0x20189cu: goto label_20189c;
        case 0x2018a0u: goto label_2018a0;
        case 0x2018a4u: goto label_2018a4;
        case 0x2018a8u: goto label_2018a8;
        case 0x2018acu: goto label_2018ac;
        case 0x2018b0u: goto label_2018b0;
        case 0x2018b4u: goto label_2018b4;
        case 0x2018b8u: goto label_2018b8;
        case 0x2018bcu: goto label_2018bc;
        case 0x2018c0u: goto label_2018c0;
        case 0x2018c4u: goto label_2018c4;
        case 0x2018c8u: goto label_2018c8;
        case 0x2018ccu: goto label_2018cc;
        case 0x2018d0u: goto label_2018d0;
        case 0x2018d4u: goto label_2018d4;
        case 0x2018d8u: goto label_2018d8;
        case 0x2018dcu: goto label_2018dc;
        case 0x2018e0u: goto label_2018e0;
        case 0x2018e4u: goto label_2018e4;
        case 0x2018e8u: goto label_2018e8;
        case 0x2018ecu: goto label_2018ec;
        default: break;
    }

    ctx->pc = 0x201890u;

label_201890:
    // 0x201890: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x201890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_201894:
    // 0x201894: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x201894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_201898:
    // 0x201898: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x201898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_20189c:
    // 0x20189c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x20189cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2018a0:
    // 0x2018a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2018a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2018a4:
    // 0x2018a4: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x2018a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2018a8:
    // 0x2018a8: 0x8cc20020  lw          $v0, 0x20($a2)
    ctx->pc = 0x2018a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
label_2018ac:
    // 0x2018ac: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_2018b0:
    if (ctx->pc == 0x2018B0u) {
        ctx->pc = 0x2018B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2018ACu;
        // 0x2018b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2018B4u;
        goto label_2018b4;
    }
    ctx->pc = 0x2018ACu;
    {
        const bool branch_taken_0x2018ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2018ac) {
            ctx->pc = 0x2018B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2018ACu;
            // 0x2018b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2018DCu;
            goto label_2018dc;
        }
    }
    ctx->pc = 0x2018B4u;
label_2018b4:
    // 0x2018b4: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_2018b8:
    if (ctx->pc == 0x2018B8u) {
        ctx->pc = 0x2018B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2018B4u;
        // 0x2018b8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2018BCu;
        goto label_2018bc;
    }
    ctx->pc = 0x2018B4u;
    {
        const bool branch_taken_0x2018b4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2018B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2018B4u;
        // 0x2018b8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2018b4) {
            ctx->pc = 0x2018D8u;
            goto label_2018d8;
        }
    }
    ctx->pc = 0x2018BCu;
label_2018bc:
    // 0x2018bc: 0x8cc3003c  lw          $v1, 0x3C($a2)
    ctx->pc = 0x2018bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 60)));
label_2018c0:
    // 0x2018c0: 0x8cd00000  lw          $s0, 0x0($a2)
    ctx->pc = 0x2018c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2018c4:
    // 0x2018c4: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x2018c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_2018c8:
    // 0x2018c8: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2018c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2018cc:
    // 0x2018cc: 0x40f809  jalr        $v0
label_2018d0:
    if (ctx->pc == 0x2018D0u) {
        ctx->pc = 0x2018D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2018CCu;
        // 0x2018d0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2018D4u;
        goto label_2018d4;
    }
    ctx->pc = 0x2018CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2018D4u);
        ctx->pc = 0x2018D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2018CCu;
        // 0x2018d0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2018CCu, 0x2018D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2018D4u;
label_2018d4:
    // 0x2018d4: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x2018d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
label_2018d8:
    // 0x2018d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2018d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2018dc:
    // 0x2018dc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2018dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2018e0:
    // 0x2018e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2018e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2018e4:
    // 0x2018e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2018e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2018e8:
    // 0x2018e8: 0x3e00008  jr          $ra
label_2018ec:
    if (ctx->pc == 0x2018ECu) {
        ctx->pc = 0x2018ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2018E8u;
        // 0x2018ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2018F0u;
        goto label_fallthrough_0x2018e8;
    }
    ctx->pc = 0x2018E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2018ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2018E8u;
        // 0x2018ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2018E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2018e8:
    ctx->pc = 0x2018F0u;
}

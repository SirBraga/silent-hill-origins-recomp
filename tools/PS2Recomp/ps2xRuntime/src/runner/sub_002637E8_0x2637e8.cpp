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

// Function: sub_002637E8
// Address: 0x2637e8 - 0x263888
void sub_002637E8_0x2637e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002637E8_0x2637e8");
#endif

    switch (ctx->pc) {
        case 0x2637f8u: goto label_2637f8;
        case 0x263820u: goto label_263820;
        case 0x26383cu: goto label_26383c;
        case 0x263848u: goto label_263848;
        case 0x263858u: goto label_263858;
        default: break;
    }

    ctx->pc = 0x2637e8u;

    // 0x2637e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2637e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2637ec: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2637ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2637f0: 0xc09945a  jal         func_265168
    ctx->pc = 0x2637F0u;
    SET_GPR_U32(ctx, 31, 0x2637F8u);
    ctx->pc = 0x2637F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2637F0u;
    // 0x2637f4: 0x24041002  addiu       $a0, $zero, 0x1002 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4098));
    ctx->in_delay_slot = false;
    ctx->pc = 0x265168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x265168u, 0x2637F0u, 0x2637F8u)) {
        return;
    }
    ctx->pc = 0x2637F8u;
label_2637f8:
    // 0x2637f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2637f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2637fc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x2637fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x263800: 0x8c634190  lw          $v1, 0x4190($v1)
    ctx->pc = 0x263800u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B4190u));
    // 0x263804: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x263804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x263808: 0x24420fc8  addiu       $v0, $v0, 0xFC8
    ctx->pc = 0x263808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
    // 0x26380c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x26380cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x263810: 0x1480000f  bnez        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x263810u;
    {
        const bool branch_taken_0x263810 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x263814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263810u;
        // 0x263814: 0xac640054  sw          $a0, 0x54($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263810) {
            ctx->pc = 0x263850u;
            goto label_263850;
        }
    }
    ctx->pc = 0x263818u;
    // 0x263818: 0xc098df2  jal         func_2637C8
    ctx->pc = 0x263818u;
    SET_GPR_U32(ctx, 31, 0x263820u);
    ctx->pc = 0x2637C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2637C8u, 0x263818u, 0x263820u)) {
        return;
    }
    ctx->pc = 0x263820u;
label_263820:
    // 0x263820: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x263820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x263824: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x263824u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x263828: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x263828u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x26382c: 0x24a5b880  addiu       $a1, $a1, -0x4780
    ctx->pc = 0x26382cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948992));
    // 0x263830: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x263830u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x263834: 0xc092848  jal         func_24A120
    ctx->pc = 0x263834u;
    SET_GPR_U32(ctx, 31, 0x26383Cu);
    ctx->pc = 0x263838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263834u;
    // 0x263838: 0x34840006  ori         $a0, $a0, 0x6 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)6);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x263834u, 0x26383Cu)) {
        return;
    }
    ctx->pc = 0x26383Cu;
label_26383c:
    // 0x26383c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x26383cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263840: 0xc09281a  jal         func_24A068
    ctx->pc = 0x263840u;
    SET_GPR_U32(ctx, 31, 0x263848u);
    ctx->pc = 0x263844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263840u;
    // 0x263844: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x263840u, 0x263848u)) {
        return;
    }
    ctx->pc = 0x263848u;
label_263848:
    // 0x263848: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x263848u;
    {
        const bool branch_taken_0x263848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26384Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263848u;
        // 0x26384c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263848) {
            ctx->pc = 0x263860u;
            goto label_263860;
        }
    }
    ctx->pc = 0x263850u;
label_263850:
    // 0x263850: 0xc097b96  jal         func_25EE58
    ctx->pc = 0x263850u;
    SET_GPR_U32(ctx, 31, 0x263858u);
    ctx->pc = 0x25EE58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25EE58u, 0x263850u, 0x263858u)) {
        return;
    }
    ctx->pc = 0x263858u;
label_263858:
    // 0x263858: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x263858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26385c: 0x0  nop
    ctx->pc = 0x26385cu;
    // NOP
label_263860:
    // 0x263860: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x263860u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x263864: 0x3e00008  jr          $ra
    ctx->pc = 0x263864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x263868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263864u;
        // 0x263868: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x263864u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26386Cu;
    // 0x26386c: 0x0  nop
    ctx->pc = 0x26386cu;
    // NOP
    // 0x263870: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x263870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x263874: 0x0  nop
    ctx->pc = 0x263874u;
    // NOP
    // 0x263878: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x263878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x26387c: 0x0  nop
    ctx->pc = 0x26387cu;
    // NOP
    // 0x263880: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x263880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x263884: 0x0  nop
    ctx->pc = 0x263884u;
    // NOP
    ctx->pc = 0x263888u;
}

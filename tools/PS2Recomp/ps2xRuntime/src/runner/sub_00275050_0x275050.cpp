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

// Function: sub_00275050
// Address: 0x275050 - 0x2750b0
void sub_00275050_0x275050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00275050_0x275050");
#endif

    switch (ctx->pc) {
        case 0x275050u: goto label_275050;
        case 0x275054u: goto label_275054;
        case 0x275058u: goto label_275058;
        case 0x27505cu: goto label_27505c;
        case 0x275060u: goto label_275060;
        case 0x275064u: goto label_275064;
        case 0x275068u: goto label_275068;
        case 0x27506cu: goto label_27506c;
        case 0x275070u: goto label_275070;
        case 0x275074u: goto label_275074;
        case 0x275078u: goto label_275078;
        case 0x27507cu: goto label_27507c;
        case 0x275080u: goto label_275080;
        case 0x275084u: goto label_275084;
        case 0x275088u: goto label_275088;
        case 0x27508cu: goto label_27508c;
        case 0x275090u: goto label_275090;
        case 0x275094u: goto label_275094;
        case 0x275098u: goto label_275098;
        case 0x27509cu: goto label_27509c;
        case 0x2750a0u: goto label_2750a0;
        case 0x2750a4u: goto label_2750a4;
        case 0x2750a8u: goto label_2750a8;
        case 0x2750acu: goto label_2750ac;
        default: break;
    }

    ctx->pc = 0x275050u;

label_275050:
    // 0x275050: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x275050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_275054:
    // 0x275054: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x275054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_275058:
    // 0x275058: 0x10a20006  beq         $a1, $v0, . + 4 + (0x6 << 2)
label_27505c:
    if (ctx->pc == 0x27505Cu) {
        ctx->pc = 0x27505Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275058u;
        // 0x27505c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275060u;
        goto label_275060;
    }
    ctx->pc = 0x275058u;
    {
        const bool branch_taken_0x275058 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x27505Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275058u;
        // 0x27505c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275058) {
            ctx->pc = 0x275074u;
            goto label_275074;
        }
    }
    ctx->pc = 0x275060u;
label_275060:
    // 0x275060: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x275060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_275064:
    // 0x275064: 0x10a2000a  beq         $a1, $v0, . + 4 + (0xA << 2)
label_275068:
    if (ctx->pc == 0x275068u) {
        ctx->pc = 0x275068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275064u;
        // 0x275068: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27506Cu;
        goto label_27506c;
    }
    ctx->pc = 0x275064u;
    {
        const bool branch_taken_0x275064 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x275068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275064u;
        // 0x275068: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275064) {
            ctx->pc = 0x275090u;
            goto label_275090;
        }
    }
    ctx->pc = 0x27506Cu;
label_27506c:
    // 0x27506c: 0x1000000e  b           . + 4 + (0xE << 2)
label_275070:
    if (ctx->pc == 0x275070u) {
        ctx->pc = 0x275074u;
        goto label_275074;
    }
    ctx->pc = 0x27506Cu;
    {
        const bool branch_taken_0x27506c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27506c) {
            ctx->pc = 0x2750A8u;
            goto label_2750a8;
        }
    }
    ctx->pc = 0x275074u;
label_275074:
    // 0x275074: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x275074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_275078:
    // 0x275078: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_27507c:
    if (ctx->pc == 0x27507Cu) {
        ctx->pc = 0x27507Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275078u;
        // 0x27507c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275080u;
        goto label_275080;
    }
    ctx->pc = 0x275078u;
    {
        const bool branch_taken_0x275078 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27507Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275078u;
        // 0x27507c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275078) {
            ctx->pc = 0x2750A8u;
            goto label_2750a8;
        }
    }
    ctx->pc = 0x275080u;
label_275080:
    // 0x275080: 0x40f809  jalr        $v0
label_275084:
    if (ctx->pc == 0x275084u) {
        ctx->pc = 0x275084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275080u;
        // 0x275084: 0x24840050  addiu       $a0, $a0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275088u;
        goto label_275088;
    }
    ctx->pc = 0x275080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x275088u);
        ctx->pc = 0x275084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275080u;
        // 0x275084: 0x24840050  addiu       $a0, $a0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275080u, 0x275088u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x275088u;
label_275088:
    // 0x275088: 0x10000007  b           . + 4 + (0x7 << 2)
label_27508c:
    if (ctx->pc == 0x27508Cu) {
        ctx->pc = 0x27508Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275088u;
        // 0x27508c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275090u;
        goto label_275090;
    }
    ctx->pc = 0x275088u;
    {
        const bool branch_taken_0x275088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27508Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275088u;
        // 0x27508c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275088) {
            ctx->pc = 0x2750A8u;
            goto label_2750a8;
        }
    }
    ctx->pc = 0x275090u;
label_275090:
    // 0x275090: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x275090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_275094:
    // 0x275094: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_275098:
    if (ctx->pc == 0x275098u) {
        ctx->pc = 0x27509Cu;
        goto label_27509c;
    }
    ctx->pc = 0x275094u;
    {
        const bool branch_taken_0x275094 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x275094) {
            ctx->pc = 0x2750A8u;
            goto label_2750a8;
        }
    }
    ctx->pc = 0x27509Cu;
label_27509c:
    // 0x27509c: 0x40f809  jalr        $v0
label_2750a0:
    if (ctx->pc == 0x2750A0u) {
        ctx->pc = 0x2750A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27509Cu;
        // 0x2750a0: 0x24840050  addiu       $a0, $a0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2750A4u;
        goto label_2750a4;
    }
    ctx->pc = 0x27509Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2750A4u);
        ctx->pc = 0x2750A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27509Cu;
        // 0x2750a0: 0x24840050  addiu       $a0, $a0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27509Cu, 0x2750A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2750A4u;
label_2750a4:
    // 0x2750a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2750a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2750a8:
    // 0x2750a8: 0x3e00008  jr          $ra
label_2750ac:
    if (ctx->pc == 0x2750ACu) {
        ctx->pc = 0x2750ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2750A8u;
        // 0x2750ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2750B0u;
        goto label_fallthrough_0x2750a8;
    }
    ctx->pc = 0x2750A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2750ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2750A8u;
        // 0x2750ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2750A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2750a8:
    ctx->pc = 0x2750B0u;
}

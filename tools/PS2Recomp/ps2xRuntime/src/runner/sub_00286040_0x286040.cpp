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

// Function: sub_00286040
// Address: 0x286040 - 0x2860b8
void sub_00286040_0x286040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00286040_0x286040");
#endif

    switch (ctx->pc) {
        case 0x286040u: goto label_286040;
        case 0x286044u: goto label_286044;
        case 0x286048u: goto label_286048;
        case 0x28604cu: goto label_28604c;
        case 0x286050u: goto label_286050;
        case 0x286054u: goto label_286054;
        case 0x286058u: goto label_286058;
        case 0x28605cu: goto label_28605c;
        case 0x286060u: goto label_286060;
        case 0x286064u: goto label_286064;
        case 0x286068u: goto label_286068;
        case 0x28606cu: goto label_28606c;
        case 0x286070u: goto label_286070;
        case 0x286074u: goto label_286074;
        case 0x286078u: goto label_286078;
        case 0x28607cu: goto label_28607c;
        case 0x286080u: goto label_286080;
        case 0x286084u: goto label_286084;
        case 0x286088u: goto label_286088;
        case 0x28608cu: goto label_28608c;
        case 0x286090u: goto label_286090;
        case 0x286094u: goto label_286094;
        case 0x286098u: goto label_286098;
        case 0x28609cu: goto label_28609c;
        case 0x2860a0u: goto label_2860a0;
        case 0x2860a4u: goto label_2860a4;
        case 0x2860a8u: goto label_2860a8;
        case 0x2860acu: goto label_2860ac;
        case 0x2860b0u: goto label_2860b0;
        case 0x2860b4u: goto label_2860b4;
        default: break;
    }

    ctx->pc = 0x286040u;

label_286040:
    // 0x286040: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x286040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_286044:
    // 0x286044: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x286044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_286048:
    // 0x286048: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x286048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_28604c:
    // 0x28604c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28604cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_286050:
    // 0x286050: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x286050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_286054:
    // 0x286054: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x286054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_286058:
    // 0x286058: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_28605c:
    if (ctx->pc == 0x28605Cu) {
        ctx->pc = 0x28605Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286058u;
        // 0x28605c: 0x3c110073  lui         $s1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286060u;
        goto label_286060;
    }
    ctx->pc = 0x286058u;
    {
        const bool branch_taken_0x286058 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28605Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286058u;
        // 0x28605c: 0x3c110073  lui         $s1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286058) {
            ctx->pc = 0x286074u;
            goto label_286074;
        }
    }
    ctx->pc = 0x286060u;
label_286060:
    // 0x286060: 0x26220fc8  addiu       $v0, $s1, 0xFC8
    ctx->pc = 0x286060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4040));
label_286064:
    // 0x286064: 0x8c43010c  lw          $v1, 0x10C($v0)
    ctx->pc = 0x286064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_286068:
    // 0x286068: 0x60f809  jalr        $v1
label_28606c:
    if (ctx->pc == 0x28606Cu) {
        ctx->pc = 0x286070u;
        goto label_286070;
    }
    ctx->pc = 0x286068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x286070u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x286068u, 0x286070u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x286070u;
label_286070:
    // 0x286070: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x286070u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_286074:
    // 0x286074: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x286074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_286078:
    // 0x286078: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_28607c:
    if (ctx->pc == 0x28607Cu) {
        ctx->pc = 0x28607Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286078u;
        // 0x28607c: 0x26230fc8  addiu       $v1, $s1, 0xFC8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4040));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286080u;
        goto label_286080;
    }
    ctx->pc = 0x286078u;
    {
        const bool branch_taken_0x286078 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28607Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286078u;
        // 0x28607c: 0x26230fc8  addiu       $v1, $s1, 0xFC8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286078) {
            ctx->pc = 0x286090u;
            goto label_286090;
        }
    }
    ctx->pc = 0x286080u;
label_286080:
    // 0x286080: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x286080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_286084:
    // 0x286084: 0x40f809  jalr        $v0
label_286088:
    if (ctx->pc == 0x286088u) {
        ctx->pc = 0x28608Cu;
        goto label_28608c;
    }
    ctx->pc = 0x286084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28608Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x286084u, 0x28608Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28608Cu;
label_28608c:
    // 0x28608c: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x28608cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_286090:
    // 0x286090: 0x26230fc8  addiu       $v1, $s1, 0xFC8
    ctx->pc = 0x286090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4040));
label_286094:
    // 0x286094: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x286094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_286098:
    // 0x286098: 0x40f809  jalr        $v0
label_28609c:
    if (ctx->pc == 0x28609Cu) {
        ctx->pc = 0x28609Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286098u;
        // 0x28609c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2860A0u;
        goto label_2860a0;
    }
    ctx->pc = 0x286098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2860A0u);
        ctx->pc = 0x28609Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286098u;
        // 0x28609c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x286098u, 0x2860A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2860A0u;
label_2860a0:
    // 0x2860a0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2860a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2860a4:
    // 0x2860a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2860a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2860a8:
    // 0x2860a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2860a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2860ac:
    // 0x2860ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2860acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2860b0:
    // 0x2860b0: 0x3e00008  jr          $ra
label_2860b4:
    if (ctx->pc == 0x2860B4u) {
        ctx->pc = 0x2860B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2860B0u;
        // 0x2860b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2860B8u;
        goto label_fallthrough_0x2860b0;
    }
    ctx->pc = 0x2860B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2860B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2860B0u;
        // 0x2860b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2860B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2860b0:
    ctx->pc = 0x2860B8u;
}

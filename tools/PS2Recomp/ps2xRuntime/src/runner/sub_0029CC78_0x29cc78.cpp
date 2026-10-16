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

// Function: sub_0029CC78
// Address: 0x29cc78 - 0x29ccc8
void sub_0029CC78_0x29cc78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029CC78_0x29cc78");
#endif

    switch (ctx->pc) {
        case 0x29cc78u: goto label_29cc78;
        case 0x29cc7cu: goto label_29cc7c;
        case 0x29cc80u: goto label_29cc80;
        case 0x29cc84u: goto label_29cc84;
        case 0x29cc88u: goto label_29cc88;
        case 0x29cc8cu: goto label_29cc8c;
        case 0x29cc90u: goto label_29cc90;
        case 0x29cc94u: goto label_29cc94;
        case 0x29cc98u: goto label_29cc98;
        case 0x29cc9cu: goto label_29cc9c;
        case 0x29cca0u: goto label_29cca0;
        case 0x29cca4u: goto label_29cca4;
        case 0x29cca8u: goto label_29cca8;
        case 0x29ccacu: goto label_29ccac;
        case 0x29ccb0u: goto label_29ccb0;
        case 0x29ccb4u: goto label_29ccb4;
        case 0x29ccb8u: goto label_29ccb8;
        case 0x29ccbcu: goto label_29ccbc;
        case 0x29ccc0u: goto label_29ccc0;
        case 0x29ccc4u: goto label_29ccc4;
        default: break;
    }

    ctx->pc = 0x29cc78u;

label_29cc78:
    // 0x29cc78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29cc78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_29cc7c:
    // 0x29cc7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29cc7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_29cc80:
    // 0x29cc80: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29cc80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_29cc84:
    // 0x29cc84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29cc84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29cc88:
    // 0x29cc88: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x29cc88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_29cc8c:
    // 0x29cc8c: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x29cc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_29cc90:
    // 0x29cc90: 0x40f809  jalr        $v0
label_29cc94:
    if (ctx->pc == 0x29CC94u) {
        ctx->pc = 0x29CC98u;
        goto label_29cc98;
    }
    ctx->pc = 0x29CC90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29CC98u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29CC90u, 0x29CC98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29CC98u;
label_29cc98:
    // 0x29cc98: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x29cc98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_29cc9c:
    // 0x29cc9c: 0x54430003  bnel        $v0, $v1, . + 4 + (0x3 << 2)
label_29cca0:
    if (ctx->pc == 0x29CCA0u) {
        ctx->pc = 0x29CCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CC9Cu;
        // 0x29cca0: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CCA4u;
        goto label_29cca4;
    }
    ctx->pc = 0x29CC9Cu;
    {
        const bool branch_taken_0x29cc9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x29cc9c) {
            ctx->pc = 0x29CCA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29CC9Cu;
            // 0x29cca0: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29CCACu;
            goto label_29ccac;
        }
    }
    ctx->pc = 0x29CCA4u;
label_29cca4:
    // 0x29cca4: 0x10000004  b           . + 4 + (0x4 << 2)
label_29cca8:
    if (ctx->pc == 0x29CCA8u) {
        ctx->pc = 0x29CCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CCA4u;
        // 0x29cca8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CCACu;
        goto label_29ccac;
    }
    ctx->pc = 0x29CCA4u;
    {
        const bool branch_taken_0x29cca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29CCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CCA4u;
        // 0x29cca8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cca4) {
            ctx->pc = 0x29CCB8u;
            goto label_29ccb8;
        }
    }
    ctx->pc = 0x29CCACu;
label_29ccac:
    // 0x29ccac: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x29ccacu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_29ccb0:
    // 0x29ccb0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x29ccb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_29ccb4:
    // 0x29ccb4: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x29ccb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_29ccb8:
    // 0x29ccb8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29ccb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_29ccbc:
    // 0x29ccbc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29ccbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29ccc0:
    // 0x29ccc0: 0x3e00008  jr          $ra
label_29ccc4:
    if (ctx->pc == 0x29CCC4u) {
        ctx->pc = 0x29CCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CCC0u;
        // 0x29ccc4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CCC8u;
        goto label_fallthrough_0x29ccc0;
    }
    ctx->pc = 0x29CCC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29CCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CCC0u;
        // 0x29ccc4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29CCC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x29ccc0:
    ctx->pc = 0x29CCC8u;
}

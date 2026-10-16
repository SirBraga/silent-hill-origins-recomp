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

// Function: sub_0017DAE0
// Address: 0x17dae0 - 0x17db70
void sub_0017DAE0_0x17dae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017DAE0_0x17dae0");
#endif

    switch (ctx->pc) {
        case 0x17dae0u: goto label_17dae0;
        case 0x17dae4u: goto label_17dae4;
        case 0x17dae8u: goto label_17dae8;
        case 0x17daecu: goto label_17daec;
        case 0x17daf0u: goto label_17daf0;
        case 0x17daf4u: goto label_17daf4;
        case 0x17daf8u: goto label_17daf8;
        case 0x17dafcu: goto label_17dafc;
        case 0x17db00u: goto label_17db00;
        case 0x17db04u: goto label_17db04;
        case 0x17db08u: goto label_17db08;
        case 0x17db0cu: goto label_17db0c;
        case 0x17db10u: goto label_17db10;
        case 0x17db14u: goto label_17db14;
        case 0x17db18u: goto label_17db18;
        case 0x17db1cu: goto label_17db1c;
        case 0x17db20u: goto label_17db20;
        case 0x17db24u: goto label_17db24;
        case 0x17db28u: goto label_17db28;
        case 0x17db2cu: goto label_17db2c;
        case 0x17db30u: goto label_17db30;
        case 0x17db34u: goto label_17db34;
        case 0x17db38u: goto label_17db38;
        case 0x17db3cu: goto label_17db3c;
        case 0x17db40u: goto label_17db40;
        case 0x17db44u: goto label_17db44;
        case 0x17db48u: goto label_17db48;
        case 0x17db4cu: goto label_17db4c;
        case 0x17db50u: goto label_17db50;
        case 0x17db54u: goto label_17db54;
        case 0x17db58u: goto label_17db58;
        case 0x17db5cu: goto label_17db5c;
        case 0x17db60u: goto label_17db60;
        case 0x17db64u: goto label_17db64;
        case 0x17db68u: goto label_17db68;
        case 0x17db6cu: goto label_17db6c;
        default: break;
    }

    ctx->pc = 0x17dae0u;

label_17dae0:
    // 0x17dae0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17dae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_17dae4:
    // 0x17dae4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x17dae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_17dae8:
    // 0x17dae8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17dae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_17daec:
    // 0x17daec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17daecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17daf0:
    // 0x17daf0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17daf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_17daf4:
    // 0x17daf4: 0xc04f0bc  jal         func_13C2F0
label_17daf8:
    if (ctx->pc == 0x17DAF8u) {
        ctx->pc = 0x17DAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DAF4u;
        // 0x17daf8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DAFCu;
        goto label_17dafc;
    }
    ctx->pc = 0x17DAF4u;
    SET_GPR_U32(ctx, 31, 0x17DAFCu);
    ctx->pc = 0x17DAF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DAF4u;
    // 0x17daf8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C2F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C2F0u, 0x17DAF4u, 0x17DAFCu)) {
        return;
    }
    ctx->pc = 0x17DAFCu;
label_17dafc:
    // 0x17dafc: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x17dafcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_17db00:
    // 0x17db00: 0x50600017  beql        $v1, $zero, . + 4 + (0x17 << 2)
label_17db04:
    if (ctx->pc == 0x17DB04u) {
        ctx->pc = 0x17DB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DB00u;
        // 0x17db04: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DB08u;
        goto label_17db08;
    }
    ctx->pc = 0x17DB00u;
    {
        const bool branch_taken_0x17db00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17db00) {
            ctx->pc = 0x17DB04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17DB00u;
            // 0x17db04: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17DB60u;
            goto label_17db60;
        }
    }
    ctx->pc = 0x17DB08u;
label_17db08:
    // 0x17db08: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x17db08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_17db0c:
    // 0x17db0c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x17db0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_17db10:
    // 0x17db10: 0x54430013  bnel        $v0, $v1, . + 4 + (0x13 << 2)
label_17db14:
    if (ctx->pc == 0x17DB14u) {
        ctx->pc = 0x17DB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DB10u;
        // 0x17db14: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DB18u;
        goto label_17db18;
    }
    ctx->pc = 0x17DB10u;
    {
        const bool branch_taken_0x17db10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x17db10) {
            ctx->pc = 0x17DB14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17DB10u;
            // 0x17db14: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17DB60u;
            goto label_17db60;
        }
    }
    ctx->pc = 0x17DB18u;
label_17db18:
    // 0x17db18: 0x8e100048  lw          $s0, 0x48($s0)
    ctx->pc = 0x17db18u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_17db1c:
    // 0x17db1c: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
label_17db20:
    if (ctx->pc == 0x17DB20u) {
        ctx->pc = 0x17DB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DB1Cu;
        // 0x17db20: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DB24u;
        goto label_17db24;
    }
    ctx->pc = 0x17DB1Cu;
    {
        const bool branch_taken_0x17db1c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DB1Cu;
        // 0x17db20: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17db1c) {
            ctx->pc = 0x17DB48u;
            goto label_17db48;
        }
    }
    ctx->pc = 0x17DB24u;
label_17db24:
    // 0x17db24: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x17db24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_17db28:
    // 0x17db28: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x17db28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_17db2c:
    // 0x17db2c: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x17db2cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
label_17db30:
    // 0x17db30: 0x8c430084  lw          $v1, 0x84($v0)
    ctx->pc = 0x17db30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
label_17db34:
    // 0x17db34: 0x60f809  jalr        $v1
label_17db38:
    if (ctx->pc == 0x17DB38u) {
        ctx->pc = 0x17DB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DB34u;
        // 0x17db38: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DB3Cu;
        goto label_17db3c;
    }
    ctx->pc = 0x17DB34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x17DB3Cu);
        ctx->pc = 0x17DB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DB34u;
        // 0x17db38: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17DB34u, 0x17DB3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17DB3Cu;
label_17db3c:
    // 0x17db3c: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x17db3cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_17db40:
    // 0x17db40: 0x5600fff9  bnel        $s0, $zero, . + 4 + (-0x7 << 2)
label_17db44:
    if (ctx->pc == 0x17DB44u) {
        ctx->pc = 0x17DB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DB40u;
        // 0x17db44: 0x8e220034  lw          $v0, 0x34($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DB48u;
        goto label_17db48;
    }
    ctx->pc = 0x17DB40u;
    {
        const bool branch_taken_0x17db40 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x17db40) {
            ctx->pc = 0x17DB44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17DB40u;
            // 0x17db44: 0x8e220034  lw          $v0, 0x34($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17DB28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17db28;
        }
    }
    ctx->pc = 0x17DB48u;
label_17db48:
    // 0x17db48: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x17db48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_17db4c:
    // 0x17db4c: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x17db4cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
label_17db50:
    // 0x17db50: 0x8c430094  lw          $v1, 0x94($v0)
    ctx->pc = 0x17db50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_17db54:
    // 0x17db54: 0x60f809  jalr        $v1
label_17db58:
    if (ctx->pc == 0x17DB58u) {
        ctx->pc = 0x17DB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DB54u;
        // 0x17db58: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DB5Cu;
        goto label_17db5c;
    }
    ctx->pc = 0x17DB54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x17DB5Cu);
        ctx->pc = 0x17DB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DB54u;
        // 0x17db58: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17DB54u, 0x17DB5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17DB5Cu;
label_17db5c:
    // 0x17db5c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x17db5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_17db60:
    // 0x17db60: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17db60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_17db64:
    // 0x17db64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17db64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17db68:
    // 0x17db68: 0x3e00008  jr          $ra
label_17db6c:
    if (ctx->pc == 0x17DB6Cu) {
        ctx->pc = 0x17DB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DB68u;
        // 0x17db6c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DB70u;
        goto label_fallthrough_0x17db68;
    }
    ctx->pc = 0x17DB68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17DB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DB68u;
        // 0x17db6c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17DB68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x17db68:
    ctx->pc = 0x17DB70u;
}

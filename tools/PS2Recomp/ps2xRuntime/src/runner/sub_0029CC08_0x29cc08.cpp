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

// Function: sub_0029CC08
// Address: 0x29cc08 - 0x29cc78
void sub_0029CC08_0x29cc08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029CC08_0x29cc08");
#endif

    switch (ctx->pc) {
        case 0x29cc08u: goto label_29cc08;
        case 0x29cc0cu: goto label_29cc0c;
        case 0x29cc10u: goto label_29cc10;
        case 0x29cc14u: goto label_29cc14;
        case 0x29cc18u: goto label_29cc18;
        case 0x29cc1cu: goto label_29cc1c;
        case 0x29cc20u: goto label_29cc20;
        case 0x29cc24u: goto label_29cc24;
        case 0x29cc28u: goto label_29cc28;
        case 0x29cc2cu: goto label_29cc2c;
        case 0x29cc30u: goto label_29cc30;
        case 0x29cc34u: goto label_29cc34;
        case 0x29cc38u: goto label_29cc38;
        case 0x29cc3cu: goto label_29cc3c;
        case 0x29cc40u: goto label_29cc40;
        case 0x29cc44u: goto label_29cc44;
        case 0x29cc48u: goto label_29cc48;
        case 0x29cc4cu: goto label_29cc4c;
        case 0x29cc50u: goto label_29cc50;
        case 0x29cc54u: goto label_29cc54;
        case 0x29cc58u: goto label_29cc58;
        case 0x29cc5cu: goto label_29cc5c;
        case 0x29cc60u: goto label_29cc60;
        case 0x29cc64u: goto label_29cc64;
        case 0x29cc68u: goto label_29cc68;
        case 0x29cc6cu: goto label_29cc6c;
        case 0x29cc70u: goto label_29cc70;
        case 0x29cc74u: goto label_29cc74;
        default: break;
    }

    ctx->pc = 0x29cc08u;

label_29cc08:
    // 0x29cc08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29cc08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_29cc0c:
    // 0x29cc0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29cc0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_29cc10:
    // 0x29cc10: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29cc10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_29cc14:
    // 0x29cc14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29cc14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29cc18:
    // 0x29cc18: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x29cc18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_29cc1c:
    // 0x29cc1c: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
label_29cc20:
    if (ctx->pc == 0x29CC20u) {
        ctx->pc = 0x29CC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CC1Cu;
        // 0x29cc20: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CC24u;
        goto label_29cc24;
    }
    ctx->pc = 0x29CC1Cu;
    {
        const bool branch_taken_0x29cc1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29CC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CC1Cu;
        // 0x29cc20: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cc1c) {
            ctx->pc = 0x29CC6Cu;
            goto label_29cc6c;
        }
    }
    ctx->pc = 0x29CC24u;
label_29cc24:
    // 0x29cc24: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x29cc24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_29cc28:
    // 0x29cc28: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x29cc28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_29cc2c:
    // 0x29cc2c: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_29cc30:
    if (ctx->pc == 0x29CC30u) {
        ctx->pc = 0x29CC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CC2Cu;
        // 0x29cc30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CC34u;
        goto label_29cc34;
    }
    ctx->pc = 0x29CC2Cu;
    {
        const bool branch_taken_0x29cc2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29cc2c) {
            ctx->pc = 0x29CC30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29CC2Cu;
            // 0x29cc30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29CC54u;
            goto label_29cc54;
        }
    }
    ctx->pc = 0x29CC34u;
label_29cc34:
    // 0x29cc34: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x29cc34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_29cc38:
    // 0x29cc38: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x29cc38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_29cc3c:
    // 0x29cc3c: 0x40f809  jalr        $v0
label_29cc40:
    if (ctx->pc == 0x29CC40u) {
        ctx->pc = 0x29CC44u;
        goto label_29cc44;
    }
    ctx->pc = 0x29CC3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29CC44u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29CC3Cu, 0x29CC44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29CC44u;
label_29cc44:
    // 0x29cc44: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x29cc44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_29cc48:
    // 0x29cc48: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
label_29cc4c:
    if (ctx->pc == 0x29CC4Cu) {
        ctx->pc = 0x29CC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CC48u;
        // 0x29cc4c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CC50u;
        goto label_29cc50;
    }
    ctx->pc = 0x29CC48u;
    {
        const bool branch_taken_0x29cc48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x29CC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CC48u;
        // 0x29cc4c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cc48) {
            ctx->pc = 0x29CC6Cu;
            goto label_29cc6c;
        }
    }
    ctx->pc = 0x29CC50u;
label_29cc50:
    // 0x29cc50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29cc50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29cc54:
    // 0x29cc54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29cc54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29cc58:
    // 0x29cc58: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x29cc58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29cc5c:
    // 0x29cc5c: 0x2485004b  addiu       $a1, $a0, 0x4B
    ctx->pc = 0x29cc5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 75));
label_29cc60:
    // 0x29cc60: 0x2486004c  addiu       $a2, $a0, 0x4C
    ctx->pc = 0x29cc60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 76));
label_29cc64:
    // 0x29cc64: 0x80a72e0  j           func_29CB80
label_29cc68:
    if (ctx->pc == 0x29CC68u) {
        ctx->pc = 0x29CC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CC64u;
        // 0x29cc68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CC6Cu;
        goto label_29cc6c;
    }
    ctx->pc = 0x29CC64u;
    ctx->pc = 0x29CC68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CC64u;
    // 0x29cc68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29CB80u;
    sub_0029CB80_0x29cb80(rdram, ctx, runtime); return;
    ctx->pc = 0x29CC6Cu;
label_29cc6c:
    // 0x29cc6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29cc6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29cc70:
    // 0x29cc70: 0x3e00008  jr          $ra
label_29cc74:
    if (ctx->pc == 0x29CC74u) {
        ctx->pc = 0x29CC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CC70u;
        // 0x29cc74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CC78u;
        goto label_fallthrough_0x29cc70;
    }
    ctx->pc = 0x29CC70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29CC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CC70u;
        // 0x29cc74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29CC70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x29cc70:
    ctx->pc = 0x29CC78u;
}

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

// Function: sub_0025CBC8
// Address: 0x25cbc8 - 0x25cc68
void sub_0025CBC8_0x25cbc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025CBC8_0x25cbc8");
#endif

    switch (ctx->pc) {
        case 0x25cbc8u: goto label_25cbc8;
        case 0x25cbccu: goto label_25cbcc;
        case 0x25cbd0u: goto label_25cbd0;
        case 0x25cbd4u: goto label_25cbd4;
        case 0x25cbd8u: goto label_25cbd8;
        case 0x25cbdcu: goto label_25cbdc;
        case 0x25cbe0u: goto label_25cbe0;
        case 0x25cbe4u: goto label_25cbe4;
        case 0x25cbe8u: goto label_25cbe8;
        case 0x25cbecu: goto label_25cbec;
        case 0x25cbf0u: goto label_25cbf0;
        case 0x25cbf4u: goto label_25cbf4;
        case 0x25cbf8u: goto label_25cbf8;
        case 0x25cbfcu: goto label_25cbfc;
        case 0x25cc00u: goto label_25cc00;
        case 0x25cc04u: goto label_25cc04;
        case 0x25cc08u: goto label_25cc08;
        case 0x25cc0cu: goto label_25cc0c;
        case 0x25cc10u: goto label_25cc10;
        case 0x25cc14u: goto label_25cc14;
        case 0x25cc18u: goto label_25cc18;
        case 0x25cc1cu: goto label_25cc1c;
        case 0x25cc20u: goto label_25cc20;
        case 0x25cc24u: goto label_25cc24;
        case 0x25cc28u: goto label_25cc28;
        case 0x25cc2cu: goto label_25cc2c;
        case 0x25cc30u: goto label_25cc30;
        case 0x25cc34u: goto label_25cc34;
        case 0x25cc38u: goto label_25cc38;
        case 0x25cc3cu: goto label_25cc3c;
        case 0x25cc40u: goto label_25cc40;
        case 0x25cc44u: goto label_25cc44;
        case 0x25cc48u: goto label_25cc48;
        case 0x25cc4cu: goto label_25cc4c;
        case 0x25cc50u: goto label_25cc50;
        case 0x25cc54u: goto label_25cc54;
        case 0x25cc58u: goto label_25cc58;
        case 0x25cc5cu: goto label_25cc5c;
        case 0x25cc60u: goto label_25cc60;
        case 0x25cc64u: goto label_25cc64;
        default: break;
    }

    ctx->pc = 0x25cbc8u;

label_25cbc8:
    // 0x25cbc8: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x25cbc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
label_25cbcc:
    // 0x25cbcc: 0x7fb00150  sq          $s0, 0x150($sp)
    ctx->pc = 0x25cbccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 16));
label_25cbd0:
    // 0x25cbd0: 0x7fb10140  sq          $s1, 0x140($sp)
    ctx->pc = 0x25cbd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 17));
label_25cbd4:
    // 0x25cbd4: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x25cbd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_25cbd8:
    // 0x25cbd8: 0x7fb20130  sq          $s2, 0x130($sp)
    ctx->pc = 0x25cbd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 18));
label_25cbdc:
    // 0x25cbdc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x25cbdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25cbe0:
    // 0x25cbe0: 0x7fb30120  sq          $s3, 0x120($sp)
    ctx->pc = 0x25cbe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 19));
label_25cbe4:
    // 0x25cbe4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x25cbe4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_25cbe8:
    // 0x25cbe8: 0x7fb40110  sq          $s4, 0x110($sp)
    ctx->pc = 0x25cbe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 20));
label_25cbec:
    // 0x25cbec: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x25cbecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_25cbf0:
    // 0x25cbf0: 0xffbf0100  sd          $ra, 0x100($sp)
    ctx->pc = 0x25cbf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
label_25cbf4:
    // 0x25cbf4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x25cbf4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_25cbf8:
    // 0x25cbf8: 0x8e44001c  lw          $a0, 0x1C($s2)
    ctx->pc = 0x25cbf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_25cbfc:
    // 0x25cbfc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x25cbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_25cc00:
    // 0x25cc00: 0x4410008  bgez        $v0, . + 4 + (0x8 << 2)
label_25cc04:
    if (ctx->pc == 0x25CC04u) {
        ctx->pc = 0x25CC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CC00u;
        // 0x25cc04: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CC08u;
        goto label_25cc08;
    }
    ctx->pc = 0x25CC00u;
    {
        const bool branch_taken_0x25cc00 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x25CC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CC00u;
        // 0x25cc04: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cc00) {
            ctx->pc = 0x25CC24u;
            goto label_25cc24;
        }
    }
    ctx->pc = 0x25CC08u;
label_25cc08:
    // 0x25cc08: 0x280f809  jalr        $s4
label_25cc0c:
    if (ctx->pc == 0x25CC0Cu) {
        ctx->pc = 0x25CC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CC08u;
        // 0x25cc0c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CC10u;
        goto label_25cc10;
    }
    ctx->pc = 0x25CC08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x25CC10u);
        ctx->pc = 0x25CC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CC08u;
        // 0x25cc0c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25CC08u, 0x25CC10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25CC10u;
label_25cc10:
    // 0x25cc10: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_25cc14:
    if (ctx->pc == 0x25CC14u) {
        ctx->pc = 0x25CC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CC10u;
        // 0x25cc14: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CC18u;
        goto label_25cc18;
    }
    ctx->pc = 0x25CC10u;
    {
        const bool branch_taken_0x25cc10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25CC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CC10u;
        // 0x25cc14: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cc10) {
            ctx->pc = 0x25CC40u;
            goto label_25cc40;
        }
    }
    ctx->pc = 0x25CC18u;
label_25cc18:
    // 0x25cc18: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x25cc18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_25cc1c:
    // 0x25cc1c: 0x10000006  b           . + 4 + (0x6 << 2)
label_25cc20:
    if (ctx->pc == 0x25CC20u) {
        ctx->pc = 0x25CC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CC1Cu;
        // 0x25cc20: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CC24u;
        goto label_25cc24;
    }
    ctx->pc = 0x25CC1Cu;
    {
        const bool branch_taken_0x25cc1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25CC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CC1Cu;
        // 0x25cc20: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cc1c) {
            ctx->pc = 0x25CC38u;
            goto label_25cc38;
        }
    }
    ctx->pc = 0x25CC24u;
label_25cc24:
    // 0x25cc24: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x25cc24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_25cc28:
    // 0x25cc28: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x25cc28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_25cc2c:
    // 0x25cc2c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x25cc2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_25cc30:
    // 0x25cc30: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x25cc30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_25cc34:
    // 0x25cc34: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x25cc34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_25cc38:
    // 0x25cc38: 0x623fff1  bgezl       $s1, . + 4 + (-0xF << 2)
label_25cc3c:
    if (ctx->pc == 0x25CC3Cu) {
        ctx->pc = 0x25CC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CC38u;
        // 0x25cc3c: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CC40u;
        goto label_25cc40;
    }
    ctx->pc = 0x25CC38u;
    {
        const bool branch_taken_0x25cc38 = (GPR_S64(ctx, 17) >= 0);
        if (branch_taken_0x25cc38) {
            ctx->pc = 0x25CC3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25CC38u;
            // 0x25cc3c: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25CC00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25cc00;
        }
    }
    ctx->pc = 0x25CC40u;
label_25cc40:
    // 0x25cc40: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x25cc40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25cc44:
    // 0x25cc44: 0x7bb00150  lq          $s0, 0x150($sp)
    ctx->pc = 0x25cc44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_25cc48:
    // 0x25cc48: 0x7bb10140  lq          $s1, 0x140($sp)
    ctx->pc = 0x25cc48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_25cc4c:
    // 0x25cc4c: 0x7bb20130  lq          $s2, 0x130($sp)
    ctx->pc = 0x25cc4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_25cc50:
    // 0x25cc50: 0x7bb30120  lq          $s3, 0x120($sp)
    ctx->pc = 0x25cc50u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_25cc54:
    // 0x25cc54: 0x7bb40110  lq          $s4, 0x110($sp)
    ctx->pc = 0x25cc54u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_25cc58:
    // 0x25cc58: 0xdfbf0100  ld          $ra, 0x100($sp)
    ctx->pc = 0x25cc58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
label_25cc5c:
    // 0x25cc5c: 0x3e00008  jr          $ra
label_25cc60:
    if (ctx->pc == 0x25CC60u) {
        ctx->pc = 0x25CC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CC5Cu;
        // 0x25cc60: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CC64u;
        goto label_25cc64;
    }
    ctx->pc = 0x25CC5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25CC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CC5Cu;
        // 0x25cc60: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25CC5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25CC64u;
label_25cc64:
    // 0x25cc64: 0x0  nop
    ctx->pc = 0x25cc64u;
    // NOP
    ctx->pc = 0x25cc68u;
}

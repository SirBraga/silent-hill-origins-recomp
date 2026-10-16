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

// Function: sub_00113D00
// Address: 0x113d00 - 0x113db8
void sub_00113D00_0x113d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00113D00_0x113d00");
#endif

    switch (ctx->pc) {
        case 0x113d00u: goto label_113d00;
        case 0x113d04u: goto label_113d04;
        case 0x113d08u: goto label_113d08;
        case 0x113d0cu: goto label_113d0c;
        case 0x113d10u: goto label_113d10;
        case 0x113d14u: goto label_113d14;
        case 0x113d18u: goto label_113d18;
        case 0x113d1cu: goto label_113d1c;
        case 0x113d20u: goto label_113d20;
        case 0x113d24u: goto label_113d24;
        case 0x113d28u: goto label_113d28;
        case 0x113d2cu: goto label_113d2c;
        case 0x113d30u: goto label_113d30;
        case 0x113d34u: goto label_113d34;
        case 0x113d38u: goto label_113d38;
        case 0x113d3cu: goto label_113d3c;
        case 0x113d40u: goto label_113d40;
        case 0x113d44u: goto label_113d44;
        case 0x113d48u: goto label_113d48;
        case 0x113d4cu: goto label_113d4c;
        case 0x113d50u: goto label_113d50;
        case 0x113d54u: goto label_113d54;
        case 0x113d58u: goto label_113d58;
        case 0x113d5cu: goto label_113d5c;
        case 0x113d60u: goto label_113d60;
        case 0x113d64u: goto label_113d64;
        case 0x113d68u: goto label_113d68;
        case 0x113d6cu: goto label_113d6c;
        case 0x113d70u: goto label_113d70;
        case 0x113d74u: goto label_113d74;
        case 0x113d78u: goto label_113d78;
        case 0x113d7cu: goto label_113d7c;
        case 0x113d80u: goto label_113d80;
        case 0x113d84u: goto label_113d84;
        case 0x113d88u: goto label_113d88;
        case 0x113d8cu: goto label_113d8c;
        case 0x113d90u: goto label_113d90;
        case 0x113d94u: goto label_113d94;
        case 0x113d98u: goto label_113d98;
        case 0x113d9cu: goto label_113d9c;
        case 0x113da0u: goto label_113da0;
        case 0x113da4u: goto label_113da4;
        case 0x113da8u: goto label_113da8;
        case 0x113dacu: goto label_113dac;
        case 0x113db0u: goto label_113db0;
        case 0x113db4u: goto label_113db4;
        default: break;
    }

    ctx->pc = 0x113d00u;

label_113d00:
    // 0x113d00: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x113d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_113d04:
    // 0x113d04: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x113d04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_113d08:
    // 0x113d08: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x113d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_113d0c:
    // 0x113d0c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x113d0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_113d10:
    // 0x113d10: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x113d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_113d14:
    // 0x113d14: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x113d14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_113d18:
    // 0x113d18: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x113d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_113d1c:
    // 0x113d1c: 0x263200d8  addiu       $s2, $s1, 0xD8
    ctx->pc = 0x113d1cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 216));
label_113d20:
    // 0x113d20: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x113d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_113d24:
    // 0x113d24: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x113d24u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_113d28:
    // 0x113d28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x113d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_113d2c:
    // 0x113d2c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x113d2cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_113d30:
    // 0x113d30: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x113d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_113d34:
    // 0x113d34: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x113d34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_113d38:
    // 0x113d38: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x113d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_113d3c:
    // 0x113d3c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x113d3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_113d40:
    // 0x113d40: 0x8cc30034  lw          $v1, 0x34($a2)
    ctx->pc = 0x113d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_113d44:
    // 0x113d44: 0x84640060  lh          $a0, 0x60($v1)
    ctx->pc = 0x113d44u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 96)));
label_113d48:
    // 0x113d48: 0x8c650064  lw          $a1, 0x64($v1)
    ctx->pc = 0x113d48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_113d4c:
    // 0x113d4c: 0xa0f809  jalr        $a1
label_113d50:
    if (ctx->pc == 0x113D50u) {
        ctx->pc = 0x113D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113D4Cu;
        // 0x113d50: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113D54u;
        goto label_113d54;
    }
    ctx->pc = 0x113D4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x113D54u);
        ctx->pc = 0x113D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113D4Cu;
        // 0x113d50: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113D4Cu, 0x113D54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x113D54u;
label_113d54:
    // 0x113d54: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x113d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_113d58:
    // 0x113d58: 0x5840000f  blezl       $v0, . + 4 + (0xF << 2)
label_113d5c:
    if (ctx->pc == 0x113D5Cu) {
        ctx->pc = 0x113D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113D58u;
        // 0x113d5c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113D60u;
        goto label_113d60;
    }
    ctx->pc = 0x113D58u;
    {
        const bool branch_taken_0x113d58 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x113d58) {
            ctx->pc = 0x113D5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x113D58u;
            // 0x113d5c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x113D98u;
            goto label_113d98;
        }
    }
    ctx->pc = 0x113D60u;
label_113d60:
    // 0x113d60: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x113d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_113d64:
    // 0x113d64: 0x56820007  bnel        $s4, $v0, . + 4 + (0x7 << 2)
label_113d68:
    if (ctx->pc == 0x113D68u) {
        ctx->pc = 0x113D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113D64u;
        // 0x113d68: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113D6Cu;
        goto label_113d6c;
    }
    ctx->pc = 0x113D64u;
    {
        const bool branch_taken_0x113d64 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x113d64) {
            ctx->pc = 0x113D68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x113D64u;
            // 0x113d68: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x113D84u;
            goto label_113d84;
        }
    }
    ctx->pc = 0x113D6Cu;
label_113d6c:
    // 0x113d6c: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x113d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_113d70:
    // 0x113d70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x113d70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_113d74:
    // 0x113d74: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x113d74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_113d78:
    // 0x113d78: 0xc0448c4  jal         func_112310
label_113d7c:
    if (ctx->pc == 0x113D7Cu) {
        ctx->pc = 0x113D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113D78u;
        // 0x113d7c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113D80u;
        goto label_113d80;
    }
    ctx->pc = 0x113D78u;
    SET_GPR_U32(ctx, 31, 0x113D80u);
    ctx->pc = 0x113D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113D78u;
    // 0x113d7c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112310u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x112310u, 0x113D78u, 0x113D80u)) {
        return;
    }
    ctx->pc = 0x113D80u;
label_113d80:
    // 0x113d80: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x113d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_113d84:
    // 0x113d84: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x113d84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_113d88:
    // 0x113d88: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x113d88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_113d8c:
    // 0x113d8c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_113d90:
    if (ctx->pc == 0x113D90u) {
        ctx->pc = 0x113D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113D8Cu;
        // 0x113d90: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113D94u;
        goto label_113d94;
    }
    ctx->pc = 0x113D8Cu;
    {
        const bool branch_taken_0x113d8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x113D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113D8Cu;
        // 0x113d90: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113d8c) {
            ctx->pc = 0x113D60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_113d60;
        }
    }
    ctx->pc = 0x113D94u;
label_113d94:
    // 0x113d94: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x113d94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_113d98:
    // 0x113d98: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x113d98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_113d9c:
    // 0x113d9c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x113d9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_113da0:
    // 0x113da0: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x113da0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_113da4:
    // 0x113da4: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x113da4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_113da8:
    // 0x113da8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x113da8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_113dac:
    // 0x113dac: 0x3e00008  jr          $ra
label_113db0:
    if (ctx->pc == 0x113DB0u) {
        ctx->pc = 0x113DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113DACu;
        // 0x113db0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113DB4u;
        goto label_113db4;
    }
    ctx->pc = 0x113DACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x113DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113DACu;
        // 0x113db0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113DACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x113DB4u;
label_113db4:
    // 0x113db4: 0x0  nop
    ctx->pc = 0x113db4u;
    // NOP
    ctx->pc = 0x113db8u;
}

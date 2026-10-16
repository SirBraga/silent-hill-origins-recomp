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

// Function: sub_0024DAB8
// Address: 0x24dab8 - 0x24db70
void sub_0024DAB8_0x24dab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024DAB8_0x24dab8");
#endif

    switch (ctx->pc) {
        case 0x24dab8u: goto label_24dab8;
        case 0x24dabcu: goto label_24dabc;
        case 0x24dac0u: goto label_24dac0;
        case 0x24dac4u: goto label_24dac4;
        case 0x24dac8u: goto label_24dac8;
        case 0x24daccu: goto label_24dacc;
        case 0x24dad0u: goto label_24dad0;
        case 0x24dad4u: goto label_24dad4;
        case 0x24dad8u: goto label_24dad8;
        case 0x24dadcu: goto label_24dadc;
        case 0x24dae0u: goto label_24dae0;
        case 0x24dae4u: goto label_24dae4;
        case 0x24dae8u: goto label_24dae8;
        case 0x24daecu: goto label_24daec;
        case 0x24daf0u: goto label_24daf0;
        case 0x24daf4u: goto label_24daf4;
        case 0x24daf8u: goto label_24daf8;
        case 0x24dafcu: goto label_24dafc;
        case 0x24db00u: goto label_24db00;
        case 0x24db04u: goto label_24db04;
        case 0x24db08u: goto label_24db08;
        case 0x24db0cu: goto label_24db0c;
        case 0x24db10u: goto label_24db10;
        case 0x24db14u: goto label_24db14;
        case 0x24db18u: goto label_24db18;
        case 0x24db1cu: goto label_24db1c;
        case 0x24db20u: goto label_24db20;
        case 0x24db24u: goto label_24db24;
        case 0x24db28u: goto label_24db28;
        case 0x24db2cu: goto label_24db2c;
        case 0x24db30u: goto label_24db30;
        case 0x24db34u: goto label_24db34;
        case 0x24db38u: goto label_24db38;
        case 0x24db3cu: goto label_24db3c;
        case 0x24db40u: goto label_24db40;
        case 0x24db44u: goto label_24db44;
        case 0x24db48u: goto label_24db48;
        case 0x24db4cu: goto label_24db4c;
        case 0x24db50u: goto label_24db50;
        case 0x24db54u: goto label_24db54;
        case 0x24db58u: goto label_24db58;
        case 0x24db5cu: goto label_24db5c;
        case 0x24db60u: goto label_24db60;
        case 0x24db64u: goto label_24db64;
        case 0x24db68u: goto label_24db68;
        case 0x24db6cu: goto label_24db6c;
        default: break;
    }

    ctx->pc = 0x24dab8u;

label_24dab8:
    // 0x24dab8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x24dab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_24dabc:
    // 0x24dabc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x24dabcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_24dac0:
    // 0x24dac0: 0x8c633f70  lw          $v1, 0x3F70($v1)
    ctx->pc = 0x24dac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16240)));
label_24dac4:
    // 0x24dac4: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x24dac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_24dac8:
    // 0x24dac8: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x24dac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_24dacc:
    // 0x24dacc: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x24daccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_24dad0:
    // 0x24dad0: 0x24540fc8  addiu       $s4, $v0, 0xFC8
    ctx->pc = 0x24dad0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
label_24dad4:
    // 0x24dad4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x24dad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_24dad8:
    // 0x24dad8: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x24dad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_24dadc:
    // 0x24dadc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x24dadcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_24dae0:
    // 0x24dae0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x24dae0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_24dae4:
    // 0x24dae4: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x24dae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_24dae8:
    // 0x24dae8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x24dae8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_24daec:
    // 0x24daec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24daecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_24daf0:
    // 0x24daf0: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x24daf0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_24daf4:
    // 0x24daf4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x24daf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_24daf8:
    // 0x24daf8: 0x34a50404  ori         $a1, $a1, 0x404
    ctx->pc = 0x24daf8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1028);
label_24dafc:
    // 0x24dafc: 0x8e820118  lw          $v0, 0x118($s4)
    ctx->pc = 0x24dafcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 280)));
label_24db00:
    // 0x24db00: 0x40f809  jalr        $v0
label_24db04:
    if (ctx->pc == 0x24DB04u) {
        ctx->pc = 0x24DB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DB00u;
        // 0x24db04: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DB08u;
        goto label_24db08;
    }
    ctx->pc = 0x24DB00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24DB08u);
        ctx->pc = 0x24DB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DB00u;
        // 0x24db04: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24DB00u, 0x24DB08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24DB08u;
label_24db08:
    // 0x24db08: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x24db08u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24db0c:
    // 0x24db0c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x24db0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_24db10:
    // 0x24db10: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x24db10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_24db14:
    // 0x24db14: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x24db14u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24db18:
    // 0x24db18: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x24db18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_24db1c:
    // 0x24db1c: 0xc093510  jal         func_24D440
label_24db20:
    if (ctx->pc == 0x24DB20u) {
        ctx->pc = 0x24DB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DB1Cu;
        // 0x24db20: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DB24u;
        goto label_24db24;
    }
    ctx->pc = 0x24DB1Cu;
    SET_GPR_U32(ctx, 31, 0x24DB24u);
    ctx->pc = 0x24DB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24DB1Cu;
    // 0x24db20: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D440u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D440u, 0x24DB1Cu, 0x24DB24u)) {
        return;
    }
    ctx->pc = 0x24DB24u;
label_24db24:
    // 0x24db24: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_24db28:
    if (ctx->pc == 0x24DB28u) {
        ctx->pc = 0x24DB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DB24u;
        // 0x24db28: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DB2Cu;
        goto label_24db2c;
    }
    ctx->pc = 0x24DB24u;
    {
        const bool branch_taken_0x24db24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24DB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DB24u;
        // 0x24db28: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24db24) {
            ctx->pc = 0x24DB50u;
            goto label_24db50;
        }
    }
    ctx->pc = 0x24DB2Cu;
label_24db2c:
    // 0x24db2c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x24db2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_24db30:
    // 0x24db30: 0x8c633f70  lw          $v1, 0x3F70($v1)
    ctx->pc = 0x24db30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16240)));
label_24db34:
    // 0x24db34: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x24db34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_24db38:
    // 0x24db38: 0x8e82011c  lw          $v0, 0x11C($s4)
    ctx->pc = 0x24db38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 284)));
label_24db3c:
    // 0x24db3c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x24db3cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24db40:
    // 0x24db40: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x24db40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_24db44:
    // 0x24db44: 0x40f809  jalr        $v0
label_24db48:
    if (ctx->pc == 0x24DB48u) {
        ctx->pc = 0x24DB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DB44u;
        // 0x24db48: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DB4Cu;
        goto label_24db4c;
    }
    ctx->pc = 0x24DB44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24DB4Cu);
        ctx->pc = 0x24DB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DB44u;
        // 0x24db48: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24DB44u, 0x24DB4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24DB4Cu;
label_24db4c:
    // 0x24db4c: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x24db4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_24db50:
    // 0x24db50: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x24db50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_24db54:
    // 0x24db54: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x24db54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_24db58:
    // 0x24db58: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x24db58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_24db5c:
    // 0x24db5c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x24db5cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_24db60:
    // 0x24db60: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x24db60u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_24db64:
    // 0x24db64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24db64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_24db68:
    // 0x24db68: 0x3e00008  jr          $ra
label_24db6c:
    if (ctx->pc == 0x24DB6Cu) {
        ctx->pc = 0x24DB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DB68u;
        // 0x24db6c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DB70u;
        goto label_fallthrough_0x24db68;
    }
    ctx->pc = 0x24DB68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24DB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DB68u;
        // 0x24db6c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24DB68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x24db68:
    ctx->pc = 0x24DB70u;
}

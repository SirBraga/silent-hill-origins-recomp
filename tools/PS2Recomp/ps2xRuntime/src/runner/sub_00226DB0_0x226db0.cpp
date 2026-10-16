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

// Function: sub_00226DB0
// Address: 0x226db0 - 0x226e58
void sub_00226DB0_0x226db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00226DB0_0x226db0");
#endif

    switch (ctx->pc) {
        case 0x226db0u: goto label_226db0;
        case 0x226db4u: goto label_226db4;
        case 0x226db8u: goto label_226db8;
        case 0x226dbcu: goto label_226dbc;
        case 0x226dc0u: goto label_226dc0;
        case 0x226dc4u: goto label_226dc4;
        case 0x226dc8u: goto label_226dc8;
        case 0x226dccu: goto label_226dcc;
        case 0x226dd0u: goto label_226dd0;
        case 0x226dd4u: goto label_226dd4;
        case 0x226dd8u: goto label_226dd8;
        case 0x226ddcu: goto label_226ddc;
        case 0x226de0u: goto label_226de0;
        case 0x226de4u: goto label_226de4;
        case 0x226de8u: goto label_226de8;
        case 0x226decu: goto label_226dec;
        case 0x226df0u: goto label_226df0;
        case 0x226df4u: goto label_226df4;
        case 0x226df8u: goto label_226df8;
        case 0x226dfcu: goto label_226dfc;
        case 0x226e00u: goto label_226e00;
        case 0x226e04u: goto label_226e04;
        case 0x226e08u: goto label_226e08;
        case 0x226e0cu: goto label_226e0c;
        case 0x226e10u: goto label_226e10;
        case 0x226e14u: goto label_226e14;
        case 0x226e18u: goto label_226e18;
        case 0x226e1cu: goto label_226e1c;
        case 0x226e20u: goto label_226e20;
        case 0x226e24u: goto label_226e24;
        case 0x226e28u: goto label_226e28;
        case 0x226e2cu: goto label_226e2c;
        case 0x226e30u: goto label_226e30;
        case 0x226e34u: goto label_226e34;
        case 0x226e38u: goto label_226e38;
        case 0x226e3cu: goto label_226e3c;
        case 0x226e40u: goto label_226e40;
        case 0x226e44u: goto label_226e44;
        case 0x226e48u: goto label_226e48;
        case 0x226e4cu: goto label_226e4c;
        case 0x226e50u: goto label_226e50;
        case 0x226e54u: goto label_226e54;
        default: break;
    }

    ctx->pc = 0x226db0u;

label_226db0:
    // 0x226db0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x226db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_226db4:
    // 0x226db4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x226db4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_226db8:
    // 0x226db8: 0x8c633e90  lw          $v1, 0x3E90($v1)
    ctx->pc = 0x226db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16016)));
label_226dbc:
    // 0x226dbc: 0x3c070073  lui         $a3, 0x73
    ctx->pc = 0x226dbcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)115 << 16));
label_226dc0:
    // 0x226dc0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x226dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_226dc4:
    // 0x226dc4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x226dc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_226dc8:
    // 0x226dc8: 0x24e70fc8  addiu       $a3, $a3, 0xFC8
    ctx->pc = 0x226dc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4040));
label_226dcc:
    // 0x226dcc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x226dccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_226dd0:
    // 0x226dd0: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x226dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_226dd4:
    // 0x226dd4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x226dd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_226dd8:
    // 0x226dd8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x226dd8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_226ddc:
    // 0x226ddc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x226ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_226de0:
    // 0x226de0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x226de0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_226de4:
    // 0x226de4: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x226de4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_226de8:
    // 0x226de8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x226de8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_226dec:
    // 0x226dec: 0x8ce20118  lw          $v0, 0x118($a3)
    ctx->pc = 0x226decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 280)));
label_226df0:
    // 0x226df0: 0x34a50018  ori         $a1, $a1, 0x18
    ctx->pc = 0x226df0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)24);
label_226df4:
    // 0x226df4: 0x40f809  jalr        $v0
label_226df8:
    if (ctx->pc == 0x226DF8u) {
        ctx->pc = 0x226DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226DF4u;
        // 0x226df8: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226DFCu;
        goto label_226dfc;
    }
    ctx->pc = 0x226DF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x226DFCu);
        ctx->pc = 0x226DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226DF4u;
        // 0x226df8: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226DF4u, 0x226DFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x226DFCu;
label_226dfc:
    // 0x226dfc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x226dfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_226e00:
    // 0x226e00: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_226e04:
    if (ctx->pc == 0x226E04u) {
        ctx->pc = 0x226E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226E00u;
        // 0x226e04: 0x3c04005c  lui         $a0, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226E08u;
        goto label_226e08;
    }
    ctx->pc = 0x226E00u;
    {
        const bool branch_taken_0x226e00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x226E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226E00u;
        // 0x226e04: 0x3c04005c  lui         $a0, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226e00) {
            ctx->pc = 0x226E34u;
            goto label_226e34;
        }
    }
    ctx->pc = 0x226E08u;
label_226e08:
    // 0x226e08: 0xae120004  sw          $s2, 0x4($s0)
    ctx->pc = 0x226e08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 18));
label_226e0c:
    // 0x226e0c: 0xae130008  sw          $s3, 0x8($s0)
    ctx->pc = 0x226e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 19));
label_226e10:
    // 0x226e10: 0x24840418  addiu       $a0, $a0, 0x418
    ctx->pc = 0x226e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1048));
label_226e14:
    // 0x226e14: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x226e14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
label_226e18:
    // 0x226e18: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x226e18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_226e1c:
    // 0x226e1c: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x226e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_226e20:
    // 0x226e20: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x226e20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
label_226e24:
    // 0x226e24: 0xc093958  jal         func_24E560
label_226e28:
    if (ctx->pc == 0x226E28u) {
        ctx->pc = 0x226E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226E24u;
        // 0x226e28: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226E2Cu;
        goto label_226e2c;
    }
    ctx->pc = 0x226E24u;
    SET_GPR_U32(ctx, 31, 0x226E2Cu);
    ctx->pc = 0x226E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226E24u;
    // 0x226e28: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24E560u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24E560u, 0x226E24u, 0x226E2Cu)) {
        return;
    }
    ctx->pc = 0x226E2Cu;
label_226e2c:
    // 0x226e2c: 0x10000002  b           . + 4 + (0x2 << 2)
label_226e30:
    if (ctx->pc == 0x226E30u) {
        ctx->pc = 0x226E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226E2Cu;
        // 0x226e30: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226E34u;
        goto label_226e34;
    }
    ctx->pc = 0x226E2Cu;
    {
        const bool branch_taken_0x226e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226E2Cu;
        // 0x226e30: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226e2c) {
            ctx->pc = 0x226E38u;
            goto label_226e38;
        }
    }
    ctx->pc = 0x226E34u;
label_226e34:
    // 0x226e34: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x226e34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_226e38:
    // 0x226e38: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x226e38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_226e3c:
    // 0x226e3c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x226e3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_226e40:
    // 0x226e40: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x226e40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_226e44:
    // 0x226e44: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x226e44u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_226e48:
    // 0x226e48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x226e48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_226e4c:
    // 0x226e4c: 0x3e00008  jr          $ra
label_226e50:
    if (ctx->pc == 0x226E50u) {
        ctx->pc = 0x226E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226E4Cu;
        // 0x226e50: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226E54u;
        goto label_226e54;
    }
    ctx->pc = 0x226E4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226E4Cu;
        // 0x226e50: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226E4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x226E54u;
label_226e54:
    // 0x226e54: 0x0  nop
    ctx->pc = 0x226e54u;
    // NOP
    ctx->pc = 0x226e58u;
}

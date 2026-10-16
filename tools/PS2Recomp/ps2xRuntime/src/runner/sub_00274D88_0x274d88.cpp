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

// Function: sub_00274D88
// Address: 0x274d88 - 0x274df8
void sub_00274D88_0x274d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00274D88_0x274d88");
#endif

    switch (ctx->pc) {
        case 0x274d88u: goto label_274d88;
        case 0x274d8cu: goto label_274d8c;
        case 0x274d90u: goto label_274d90;
        case 0x274d94u: goto label_274d94;
        case 0x274d98u: goto label_274d98;
        case 0x274d9cu: goto label_274d9c;
        case 0x274da0u: goto label_274da0;
        case 0x274da4u: goto label_274da4;
        case 0x274da8u: goto label_274da8;
        case 0x274dacu: goto label_274dac;
        case 0x274db0u: goto label_274db0;
        case 0x274db4u: goto label_274db4;
        case 0x274db8u: goto label_274db8;
        case 0x274dbcu: goto label_274dbc;
        case 0x274dc0u: goto label_274dc0;
        case 0x274dc4u: goto label_274dc4;
        case 0x274dc8u: goto label_274dc8;
        case 0x274dccu: goto label_274dcc;
        case 0x274dd0u: goto label_274dd0;
        case 0x274dd4u: goto label_274dd4;
        case 0x274dd8u: goto label_274dd8;
        case 0x274ddcu: goto label_274ddc;
        case 0x274de0u: goto label_274de0;
        case 0x274de4u: goto label_274de4;
        case 0x274de8u: goto label_274de8;
        case 0x274decu: goto label_274dec;
        case 0x274df0u: goto label_274df0;
        case 0x274df4u: goto label_274df4;
        default: break;
    }

    ctx->pc = 0x274d88u;

label_274d88:
    // 0x274d88: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x274d88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_274d8c:
    // 0x274d8c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x274d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_274d90:
    // 0x274d90: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x274d90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_274d94:
    // 0x274d94: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x274d94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_274d98:
    // 0x274d98: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x274d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_274d9c:
    // 0x274d9c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x274d9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_274da0:
    // 0x274da0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x274da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_274da4:
    // 0x274da4: 0x3c120073  lui         $s2, 0x73
    ctx->pc = 0x274da4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)115 << 16));
label_274da8:
    // 0x274da8: 0x26430fc8  addiu       $v1, $s2, 0xFC8
    ctx->pc = 0x274da8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4040));
label_274dac:
    // 0x274dac: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x274dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_274db0:
    // 0x274db0: 0x40f809  jalr        $v0
label_274db4:
    if (ctx->pc == 0x274DB4u) {
        ctx->pc = 0x274DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274DB0u;
        // 0x274db4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274DB8u;
        goto label_274db8;
    }
    ctx->pc = 0x274DB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x274DB8u);
        ctx->pc = 0x274DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274DB0u;
        // 0x274db4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274DB0u, 0x274DB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x274DB8u;
label_274db8:
    // 0x274db8: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x274db8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_274dbc:
    // 0x274dbc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_274dc0:
    if (ctx->pc == 0x274DC0u) {
        ctx->pc = 0x274DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274DBCu;
        // 0x274dc0: 0x2111021  addu        $v0, $s0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274DC4u;
        goto label_274dc4;
    }
    ctx->pc = 0x274DBCu;
    {
        const bool branch_taken_0x274dbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x274DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274DBCu;
        // 0x274dc0: 0x2111021  addu        $v0, $s0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274dbc) {
            ctx->pc = 0x274DDCu;
            goto label_274ddc;
        }
    }
    ctx->pc = 0x274DC4u;
label_274dc4:
    // 0x274dc4: 0x2404003a  addiu       $a0, $zero, 0x3A
    ctx->pc = 0x274dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
label_274dc8:
    // 0x274dc8: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x274dc8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_274dcc:
    // 0x274dcc: 0x5464fff6  bnel        $v1, $a0, . + 4 + (-0xA << 2)
label_274dd0:
    if (ctx->pc == 0x274DD0u) {
        ctx->pc = 0x274DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274DCCu;
        // 0x274dd0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274DD4u;
        goto label_274dd4;
    }
    ctx->pc = 0x274DCCu;
    {
        const bool branch_taken_0x274dcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x274dcc) {
            ctx->pc = 0x274DD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x274DCCu;
            // 0x274dd0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x274DA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_274da8;
        }
    }
    ctx->pc = 0x274DD4u;
label_274dd4:
    // 0x274dd4: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x274dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_274dd8:
    // 0x274dd8: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x274dd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_274ddc:
    // 0x274ddc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x274ddcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_274de0:
    // 0x274de0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x274de0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_274de4:
    // 0x274de4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x274de4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_274de8:
    // 0x274de8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x274de8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_274dec:
    // 0x274dec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x274decu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_274df0:
    // 0x274df0: 0x3e00008  jr          $ra
label_274df4:
    if (ctx->pc == 0x274DF4u) {
        ctx->pc = 0x274DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274DF0u;
        // 0x274df4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274DF8u;
        goto label_fallthrough_0x274df0;
    }
    ctx->pc = 0x274DF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x274DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274DF0u;
        // 0x274df4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274DF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x274df0:
    ctx->pc = 0x274DF8u;
}

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

// Function: sub_002DBD70
// Address: 0x2dbd70 - 0x2dbe10
void sub_002DBD70_0x2dbd70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DBD70_0x2dbd70");
#endif

    switch (ctx->pc) {
        case 0x2dbd98u: goto label_2dbd98;
        case 0x2dbda0u: goto label_2dbda0;
        case 0x2dbdb4u: goto label_2dbdb4;
        case 0x2dbdc4u: goto label_2dbdc4;
        case 0x2dbdd0u: goto label_2dbdd0;
        case 0x2dbde0u: goto label_2dbde0;
        case 0x2dbdf0u: goto label_2dbdf0;
        default: break;
    }

    ctx->pc = 0x2dbd70u;

    // 0x2dbd70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2dbd70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2dbd74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2dbd74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dbd78: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2dbd78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2dbd7c: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x2dbd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x2dbd80: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2dbd80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2dbd84: 0x24707c98  addiu       $s0, $v1, 0x7C98
    ctx->pc = 0x2dbd84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 31896));
    // 0x2dbd88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dbd88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2dbd8c: 0xaf828fe0  sw          $v0, -0x7020($gp)
    ctx->pc = 0x2dbd8cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938592), GPR_U32(ctx, 2));
    // 0x2dbd90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dbd90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbd94: 0x0  nop
    ctx->pc = 0x2dbd94u;
    // NOP
label_2dbd98:
    // 0x2dbd98: 0xc0b7042  jal         func_2DC108
    ctx->pc = 0x2DBD98u;
    SET_GPR_U32(ctx, 31, 0x2DBDA0u);
    ctx->pc = 0x2DBD9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBD98u;
    // 0x2dbd9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC108u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DC108u, 0x2DBD98u, 0x2DBDA0u)) {
        return;
    }
    ctx->pc = 0x2DBDA0u;
label_2dbda0:
    // 0x2dbda0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2DBDA0u;
    {
        const bool branch_taken_0x2dbda0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dbda0) {
            ctx->pc = 0x2DBDBCu;
            goto label_2dbdbc;
        }
    }
    ctx->pc = 0x2DBDA8u;
    // 0x2dbda8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2dbda8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbdac: 0xc0b6dee  jal         func_2DB7B8
    ctx->pc = 0x2DBDACu;
    SET_GPR_U32(ctx, 31, 0x2DBDB4u);
    ctx->pc = 0x2DBDB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBDACu;
    // 0x2dbdb0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB7B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DB7B8u, 0x2DBDACu, 0x2DBDB4u)) {
        return;
    }
    ctx->pc = 0x2DBDB4u;
label_2dbdb4:
    // 0x2dbdb4: 0x1000fff8  b           . + 4 + (-0x8 << 2)
    ctx->pc = 0x2DBDB4u;
    {
        const bool branch_taken_0x2dbdb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBDB4u;
        // 0x2dbdb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbdb4) {
            ctx->pc = 0x2DBD98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dbd98;
        }
    }
    ctx->pc = 0x2DBDBCu;
label_2dbdbc:
    // 0x2dbdbc: 0xc0b6fee  jal         func_2DBFB8
    ctx->pc = 0x2DBDBCu;
    SET_GPR_U32(ctx, 31, 0x2DBDC4u);
    ctx->pc = 0x2DBDC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBDBCu;
    // 0x2dbdc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DBFB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DBFB8u, 0x2DBDBCu, 0x2DBDC4u)) {
        return;
    }
    ctx->pc = 0x2DBDC4u;
label_2dbdc4:
    // 0x2dbdc4: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x2dbdc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x2dbdc8: 0xc0b82d0  jal         func_2E0B40
    ctx->pc = 0x2DBDC8u;
    SET_GPR_U32(ctx, 31, 0x2DBDD0u);
    ctx->pc = 0x2DBDCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBDC8u;
    // 0x2dbdcc: 0x24847ca8  addiu       $a0, $a0, 0x7CA8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0B40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E0B40u, 0x2DBDC8u, 0x2DBDD0u)) {
        return;
    }
    ctx->pc = 0x2DBDD0u;
label_2dbdd0:
    // 0x2dbdd0: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x2dbdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x2dbdd4: 0x24100005  addiu       $s0, $zero, 0x5
    ctx->pc = 0x2dbdd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2dbdd8: 0x245140e8  addiu       $s1, $v0, 0x40E8
    ctx->pc = 0x2dbdd8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 16616));
    // 0x2dbddc: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2dbddcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_2dbde0:
    // 0x2dbde0: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x2dbde0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2dbde4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2dbde4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2dbde8: 0xc0b82d0  jal         func_2E0B40
    ctx->pc = 0x2DBDE8u;
    SET_GPR_U32(ctx, 31, 0x2DBDF0u);
    ctx->pc = 0x2DBDECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBDE8u;
    // 0x2dbdec: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0B40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E0B40u, 0x2DBDE8u, 0x2DBDF0u)) {
        return;
    }
    ctx->pc = 0x2DBDF0u;
label_2dbdf0:
    // 0x2dbdf0: 0x1600fffb  bnez        $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2DBDF0u;
    {
        const bool branch_taken_0x2dbdf0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DBDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBDF0u;
        // 0x2dbdf4: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbdf0) {
            ctx->pc = 0x2DBDE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dbde0;
        }
    }
    ctx->pc = 0x2DBDF8u;
    // 0x2dbdf8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2dbdf8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dbdfc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2dbdfcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dbe00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dbe00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dbe04: 0xaf808b68  sw          $zero, -0x7498($gp)
    ctx->pc = 0x2dbe04u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937448), GPR_U32(ctx, 0));
    // 0x2dbe08: 0x3e00008  jr          $ra
    ctx->pc = 0x2DBE08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DBE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBE08u;
        // 0x2dbe0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DBE08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DBE10u;
}

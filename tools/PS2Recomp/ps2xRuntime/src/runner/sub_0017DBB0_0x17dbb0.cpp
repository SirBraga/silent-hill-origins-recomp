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

// Function: sub_0017DBB0
// Address: 0x17dbb0 - 0x17dc58
void sub_0017DBB0_0x17dbb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017DBB0_0x17dbb0");
#endif

    switch (ctx->pc) {
        case 0x17dbccu: goto label_17dbcc;
        case 0x17dbe0u: goto label_17dbe0;
        case 0x17dbf8u: goto label_17dbf8;
        case 0x17dc18u: goto label_17dc18;
        case 0x17dc34u: goto label_17dc34;
        default: break;
    }

    ctx->pc = 0x17dbb0u;

    // 0x17dbb0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x17dbb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17dbb4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x17dbb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x17dbb8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x17dbb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x17dbbc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x17dbbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dbc0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17dbc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17dbc4: 0xc04efda  jal         func_13BF68
    ctx->pc = 0x17DBC4u;
    SET_GPR_U32(ctx, 31, 0x17DBCCu);
    ctx->pc = 0x17DBC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DBC4u;
    // 0x17dbc8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BF68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13BF68u, 0x17DBC4u, 0x17DBCCu)) {
        return;
    }
    ctx->pc = 0x17DBCCu;
label_17dbcc:
    // 0x17dbcc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x17dbccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x17dbd0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17dbd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dbd4: 0x8c46f978  lw          $a2, -0x688($v0)
    ctx->pc = 0x17dbd4u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6BF978u));
    // 0x17dbd8: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x17DBD8u;
    SET_GPR_U32(ctx, 31, 0x17DBE0u);
    ctx->pc = 0x17DBDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DBD8u;
    // 0x17dbdc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x17DBD8u, 0x17DBE0u)) {
        return;
    }
    ctx->pc = 0x17DBE0u;
label_17dbe0:
    // 0x17dbe0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x17dbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17dbe4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x17dbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17dbe8: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x17DBE8u;
    {
        const bool branch_taken_0x17dbe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DBE8u;
        // 0x17dbec: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dbe8) {
            ctx->pc = 0x17DC48u;
            goto label_17dc48;
        }
    }
    ctx->pc = 0x17DBF0u;
    // 0x17dbf0: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x17dbf0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17dbf4: 0x0  nop
    ctx->pc = 0x17dbf4u;
    // NOP
label_17dbf8:
    // 0x17dbf8: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x17dbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x17dbfc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x17DBFCu;
    {
        const bool branch_taken_0x17dbfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17DC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DBFCu;
        // 0x17dc00: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dbfc) {
            ctx->pc = 0x17DC1Cu;
            goto label_17dc1c;
        }
    }
    ctx->pc = 0x17DC04u;
    // 0x17dc04: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x17dc04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x17dc08: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x17dc08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x17dc0c: 0x26250044  addiu       $a1, $s1, 0x44
    ctx->pc = 0x17dc0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
    // 0x17dc10: 0xc07fcf4  jal         func_1FF3D0
    ctx->pc = 0x17DC10u;
    SET_GPR_U32(ctx, 31, 0x17DC18u);
    ctx->pc = 0x17DC14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DC10u;
    // 0x17dc14: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF3D0u, 0x17DC10u, 0x17DC18u)) {
        return;
    }
    ctx->pc = 0x17DC18u;
label_17dc18:
    // 0x17dc18: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x17dc18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_17dc1c:
    // 0x17dc1c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17dc1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dc20: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x17dc20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17dc24: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x17dc24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17dc28: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x17dc28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17dc2c: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x17DC2Cu;
    SET_GPR_U32(ctx, 31, 0x17DC34u);
    ctx->pc = 0x17DC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DC2Cu;
    // 0x17dc30: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x17DC2Cu, 0x17DC34u)) {
        return;
    }
    ctx->pc = 0x17DC34u;
label_17dc34:
    // 0x17dc34: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x17dc34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17dc38: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x17dc38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17dc3c: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x17DC3Cu;
    {
        const bool branch_taken_0x17dc3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17DC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DC3Cu;
        // 0x17dc40: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dc3c) {
            ctx->pc = 0x17DBF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17dbf8;
        }
    }
    ctx->pc = 0x17DC44u;
    // 0x17dc44: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x17dc44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_17dc48:
    // 0x17dc48: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x17dc48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17dc4c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17dc4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17dc50: 0x3e00008  jr          $ra
    ctx->pc = 0x17DC50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17DC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DC50u;
        // 0x17dc54: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17DC50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17DC58u;
}

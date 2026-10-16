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

// Function: sub_002DAFA8
// Address: 0x2dafa8 - 0x2db008
void sub_002DAFA8_0x2dafa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DAFA8_0x2dafa8");
#endif

    switch (ctx->pc) {
        case 0x2dafe0u: goto label_2dafe0;
        default: break;
    }

    ctx->pc = 0x2dafa8u;

    // 0x2dafa8: 0x27828fd8  addiu       $v0, $gp, -0x7028
    ctx->pc = 0x2dafa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938584));
    // 0x2dafac: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2dafacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2dafb0: 0x3c080070  lui         $t0, 0x70
    ctx->pc = 0x2dafb0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)112 << 16));
    // 0x2dafb4: 0x3c090004  lui         $t1, 0x4
    ctx->pc = 0x2dafb4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4 << 16));
    // 0x2dafb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dafb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2dafbc: 0x25087c70  addiu       $t0, $t0, 0x7C70
    ctx->pc = 0x2dafbcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 31856));
    // 0x2dafc0: 0xaf828fdc  sw          $v0, -0x7024($gp)
    ctx->pc = 0x2dafc0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938588), GPR_U32(ctx, 2));
    // 0x2dafc4: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x2dafc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2dafc8: 0xaf828fd8  sw          $v0, -0x7028($gp)
    ctx->pc = 0x2dafc8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938584), GPR_U32(ctx, 2));
    // 0x2dafcc: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2dafccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2dafd0: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x2dafd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2dafd4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2dafd4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dafd8: 0xc0b8270  jal         func_2E09C0
    ctx->pc = 0x2DAFD8u;
    SET_GPR_U32(ctx, 31, 0x2DAFE0u);
    ctx->pc = 0x2DAFDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DAFD8u;
    // 0x2dafdc: 0x3529080a  ori         $t1, $t1, 0x80A (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)2058);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E09C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E09C0u, 0x2DAFD8u, 0x2DAFE0u)) {
        return;
    }
    ctx->pc = 0x2DAFE0u;
label_2dafe0:
    // 0x2dafe0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DAFE0u;
    {
        const bool branch_taken_0x2dafe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DAFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAFE0u;
        // 0x2dafe4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dafe0) {
            ctx->pc = 0x2DAFF0u;
            goto label_2daff0;
        }
    }
    ctx->pc = 0x2DAFE8u;
    // 0x2dafe8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2DAFE8u;
    {
        const bool branch_taken_0x2dafe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DAFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAFE8u;
        // 0x2dafec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dafe8) {
            ctx->pc = 0x2DAFF8u;
            goto label_2daff8;
        }
    }
    ctx->pc = 0x2DAFF0u;
label_2daff0:
    // 0x2daff0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2daff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2daff4: 0xaf838b64  sw          $v1, -0x749C($gp)
    ctx->pc = 0x2daff4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937444), GPR_U32(ctx, 3));
label_2daff8:
    // 0x2daff8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2daff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2daffc: 0x3e00008  jr          $ra
    ctx->pc = 0x2DAFFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DB000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAFFCu;
        // 0x2db000: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DAFFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DB004u;
    // 0x2db004: 0x0  nop
    ctx->pc = 0x2db004u;
    // NOP
    ctx->pc = 0x2db008u;
}

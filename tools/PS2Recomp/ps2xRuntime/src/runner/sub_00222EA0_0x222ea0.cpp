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

// Function: sub_00222EA0
// Address: 0x222ea0 - 0x222ef0
void sub_00222EA0_0x222ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00222EA0_0x222ea0");
#endif

    switch (ctx->pc) {
        case 0x222ea0u: goto label_222ea0;
        case 0x222ea4u: goto label_222ea4;
        case 0x222ea8u: goto label_222ea8;
        case 0x222eacu: goto label_222eac;
        case 0x222eb0u: goto label_222eb0;
        case 0x222eb4u: goto label_222eb4;
        case 0x222eb8u: goto label_222eb8;
        case 0x222ebcu: goto label_222ebc;
        case 0x222ec0u: goto label_222ec0;
        case 0x222ec4u: goto label_222ec4;
        case 0x222ec8u: goto label_222ec8;
        case 0x222eccu: goto label_222ecc;
        case 0x222ed0u: goto label_222ed0;
        case 0x222ed4u: goto label_222ed4;
        case 0x222ed8u: goto label_222ed8;
        case 0x222edcu: goto label_222edc;
        case 0x222ee0u: goto label_222ee0;
        case 0x222ee4u: goto label_222ee4;
        case 0x222ee8u: goto label_222ee8;
        case 0x222eecu: goto label_222eec;
        default: break;
    }

    ctx->pc = 0x222ea0u;

label_222ea0:
    // 0x222ea0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x222ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_222ea4:
    // 0x222ea4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x222ea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_222ea8:
    // 0x222ea8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x222ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_222eac:
    // 0x222eac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x222eacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_222eb0:
    // 0x222eb0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x222eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_222eb4:
    // 0x222eb4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_222eb8:
    if (ctx->pc == 0x222EB8u) {
        ctx->pc = 0x222EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222EB4u;
        // 0x222eb8: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x222EBCu;
        goto label_222ebc;
    }
    ctx->pc = 0x222EB4u;
    {
        const bool branch_taken_0x222eb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x222EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222EB4u;
        // 0x222eb8: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222eb4) {
            ctx->pc = 0x222EC8u;
            goto label_222ec8;
        }
    }
    ctx->pc = 0x222EBCu;
label_222ebc:
    // 0x222ebc: 0x8c6210d4  lw          $v0, 0x10D4($v1)
    ctx->pc = 0x222ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4308)));
label_222ec0:
    // 0x222ec0: 0x40f809  jalr        $v0
label_222ec4:
    if (ctx->pc == 0x222EC4u) {
        ctx->pc = 0x222EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222EC0u;
        // 0x222ec4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x222EC8u;
        goto label_222ec8;
    }
    ctx->pc = 0x222EC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x222EC8u);
        ctx->pc = 0x222EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222EC0u;
        // 0x222ec4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x222EC0u, 0x222EC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x222EC8u;
label_222ec8:
    // 0x222ec8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x222ec8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_222ecc:
    // 0x222ecc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x222eccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_222ed0:
    // 0x222ed0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x222ed0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_222ed4:
    // 0x222ed4: 0x3e00008  jr          $ra
label_222ed8:
    if (ctx->pc == 0x222ED8u) {
        ctx->pc = 0x222ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222ED4u;
        // 0x222ed8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x222EDCu;
        goto label_222edc;
    }
    ctx->pc = 0x222ED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x222ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222ED4u;
        // 0x222ed8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x222ED4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x222EDCu;
label_222edc:
    // 0x222edc: 0x0  nop
    ctx->pc = 0x222edcu;
    // NOP
label_222ee0:
    // 0x222ee0: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x222ee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_222ee4:
    // 0x222ee4: 0x0  nop
    ctx->pc = 0x222ee4u;
    // NOP
label_222ee8:
    // 0x222ee8: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x222ee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_222eec:
    // 0x222eec: 0x0  nop
    ctx->pc = 0x222eecu;
    // NOP
    ctx->pc = 0x222ef0u;
}

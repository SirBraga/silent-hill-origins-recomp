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

// Function: sub_00137CC8
// Address: 0x137cc8 - 0x137d10
void sub_00137CC8_0x137cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00137CC8_0x137cc8");
#endif

    switch (ctx->pc) {
        case 0x137cc8u: goto label_137cc8;
        case 0x137cccu: goto label_137ccc;
        case 0x137cd0u: goto label_137cd0;
        case 0x137cd4u: goto label_137cd4;
        case 0x137cd8u: goto label_137cd8;
        case 0x137cdcu: goto label_137cdc;
        case 0x137ce0u: goto label_137ce0;
        case 0x137ce4u: goto label_137ce4;
        case 0x137ce8u: goto label_137ce8;
        case 0x137cecu: goto label_137cec;
        case 0x137cf0u: goto label_137cf0;
        case 0x137cf4u: goto label_137cf4;
        case 0x137cf8u: goto label_137cf8;
        case 0x137cfcu: goto label_137cfc;
        case 0x137d00u: goto label_137d00;
        case 0x137d04u: goto label_137d04;
        case 0x137d08u: goto label_137d08;
        case 0x137d0cu: goto label_137d0c;
        default: break;
    }

    ctx->pc = 0x137cc8u;

label_137cc8:
    // 0x137cc8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x137cc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_137ccc:
    // 0x137ccc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x137cccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_137cd0:
    // 0x137cd0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x137cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_137cd4:
    // 0x137cd4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x137cd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_137cd8:
    // 0x137cd8: 0x8e021a58  lw          $v0, 0x1A58($s0)
    ctx->pc = 0x137cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6744)));
label_137cdc:
    // 0x137cdc: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_137ce0:
    if (ctx->pc == 0x137CE0u) {
        ctx->pc = 0x137CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137CDCu;
        // 0x137ce0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137CE4u;
        goto label_137ce4;
    }
    ctx->pc = 0x137CDCu;
    {
        const bool branch_taken_0x137cdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x137cdc) {
            ctx->pc = 0x137CE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x137CDCu;
            // 0x137ce0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x137D04u;
            goto label_137d04;
        }
    }
    ctx->pc = 0x137CE4u;
label_137ce4:
    // 0x137ce4: 0xc067fae  jal         func_19FEB8
label_137ce8:
    if (ctx->pc == 0x137CE8u) {
        ctx->pc = 0x137CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137CE4u;
        // 0x137ce8: 0x26040320  addiu       $a0, $s0, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 800));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137CECu;
        goto label_137cec;
    }
    ctx->pc = 0x137CE4u;
    SET_GPR_U32(ctx, 31, 0x137CECu);
    ctx->pc = 0x137CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137CE4u;
    // 0x137ce8: 0x26040320  addiu       $a0, $s0, 0x320 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FEB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19FEB8u, 0x137CE4u, 0x137CECu)) {
        return;
    }
    ctx->pc = 0x137CECu;
label_137cec:
    // 0x137cec: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x137cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_137cf0:
    // 0x137cf0: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x137cf0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_137cf4:
    // 0x137cf4: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x137cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_137cf8:
    // 0x137cf8: 0x60f809  jalr        $v1
label_137cfc:
    if (ctx->pc == 0x137CFCu) {
        ctx->pc = 0x137CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137CF8u;
        // 0x137cfc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137D00u;
        goto label_137d00;
    }
    ctx->pc = 0x137CF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x137D00u);
        ctx->pc = 0x137CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137CF8u;
        // 0x137cfc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x137CF8u, 0x137D00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x137D00u;
label_137d00:
    // 0x137d00: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x137d00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_137d04:
    // 0x137d04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x137d04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_137d08:
    // 0x137d08: 0x3e00008  jr          $ra
label_137d0c:
    if (ctx->pc == 0x137D0Cu) {
        ctx->pc = 0x137D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137D08u;
        // 0x137d0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137D10u;
        goto label_fallthrough_0x137d08;
    }
    ctx->pc = 0x137D08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x137D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137D08u;
        // 0x137d0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x137D08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x137d08:
    ctx->pc = 0x137D10u;
}

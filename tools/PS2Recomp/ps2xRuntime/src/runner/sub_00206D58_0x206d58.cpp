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

// Function: sub_00206D58
// Address: 0x206d58 - 0x206de0
void sub_00206D58_0x206d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00206D58_0x206d58");
#endif

    switch (ctx->pc) {
        case 0x206d58u: goto label_206d58;
        case 0x206d5cu: goto label_206d5c;
        case 0x206d60u: goto label_206d60;
        case 0x206d64u: goto label_206d64;
        case 0x206d68u: goto label_206d68;
        case 0x206d6cu: goto label_206d6c;
        case 0x206d70u: goto label_206d70;
        case 0x206d74u: goto label_206d74;
        case 0x206d78u: goto label_206d78;
        case 0x206d7cu: goto label_206d7c;
        case 0x206d80u: goto label_206d80;
        case 0x206d84u: goto label_206d84;
        case 0x206d88u: goto label_206d88;
        case 0x206d8cu: goto label_206d8c;
        case 0x206d90u: goto label_206d90;
        case 0x206d94u: goto label_206d94;
        case 0x206d98u: goto label_206d98;
        case 0x206d9cu: goto label_206d9c;
        case 0x206da0u: goto label_206da0;
        case 0x206da4u: goto label_206da4;
        case 0x206da8u: goto label_206da8;
        case 0x206dacu: goto label_206dac;
        case 0x206db0u: goto label_206db0;
        case 0x206db4u: goto label_206db4;
        case 0x206db8u: goto label_206db8;
        case 0x206dbcu: goto label_206dbc;
        case 0x206dc0u: goto label_206dc0;
        case 0x206dc4u: goto label_206dc4;
        case 0x206dc8u: goto label_206dc8;
        case 0x206dccu: goto label_206dcc;
        case 0x206dd0u: goto label_206dd0;
        case 0x206dd4u: goto label_206dd4;
        case 0x206dd8u: goto label_206dd8;
        case 0x206ddcu: goto label_206ddc;
        default: break;
    }

    ctx->pc = 0x206d58u;

label_206d58:
    // 0x206d58: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x206d58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_206d5c:
    // 0x206d5c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x206d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_206d60:
    // 0x206d60: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x206d60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_206d64:
    // 0x206d64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x206d64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_206d68:
    // 0x206d68: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x206d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_206d6c:
    // 0x206d6c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x206d6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_206d70:
    // 0x206d70: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x206d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_206d74:
    // 0x206d74: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x206d74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_206d78:
    // 0x206d78: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_206d7c:
    if (ctx->pc == 0x206D7Cu) {
        ctx->pc = 0x206D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206D78u;
        // 0x206d7c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206D80u;
        goto label_206d80;
    }
    ctx->pc = 0x206D78u;
    {
        const bool branch_taken_0x206d78 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x206D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206D78u;
        // 0x206d7c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206d78) {
            ctx->pc = 0x206DC0u;
            goto label_206dc0;
        }
    }
    ctx->pc = 0x206D80u;
label_206d80:
    // 0x206d80: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x206d80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_206d84:
    // 0x206d84: 0x2453108c  addiu       $s3, $v0, 0x108C
    ctx->pc = 0x206d84u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4236));
label_206d88:
    // 0x206d88: 0x8e620030  lw          $v0, 0x30($s3)
    ctx->pc = 0x206d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
label_206d8c:
    // 0x206d8c: 0x40f809  jalr        $v0
label_206d90:
    if (ctx->pc == 0x206D90u) {
        ctx->pc = 0x206D94u;
        goto label_206d94;
    }
    ctx->pc = 0x206D8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x206D94u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206D8Cu, 0x206D94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x206D94u;
label_206d94:
    // 0x206d94: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x206d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_206d98:
    // 0x206d98: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_206d9c:
    if (ctx->pc == 0x206D9Cu) {
        ctx->pc = 0x206D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206D98u;
        // 0x206d9c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206DA0u;
        goto label_206da0;
    }
    ctx->pc = 0x206D98u;
    {
        const bool branch_taken_0x206d98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x206d98) {
            ctx->pc = 0x206D9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206D98u;
            // 0x206d9c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x206DC4u;
            goto label_206dc4;
        }
    }
    ctx->pc = 0x206DA0u;
label_206da0:
    // 0x206da0: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x206da0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_206da4:
    // 0x206da4: 0xc080924  jal         func_202490
label_206da8:
    if (ctx->pc == 0x206DA8u) {
        ctx->pc = 0x206DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206DA4u;
        // 0x206da8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206DACu;
        goto label_206dac;
    }
    ctx->pc = 0x206DA4u;
    SET_GPR_U32(ctx, 31, 0x206DACu);
    ctx->pc = 0x206DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206DA4u;
    // 0x206da8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202490u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202490u, 0x206DA4u, 0x206DACu)) {
        return;
    }
    ctx->pc = 0x206DACu;
label_206dac:
    // 0x206dac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x206dacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_206db0:
    // 0x206db0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x206db0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_206db4:
    // 0x206db4: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x206db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_206db8:
    // 0x206db8: 0x40f809  jalr        $v0
label_206dbc:
    if (ctx->pc == 0x206DBCu) {
        ctx->pc = 0x206DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206DB8u;
        // 0x206dbc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206DC0u;
        goto label_206dc0;
    }
    ctx->pc = 0x206DB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x206DC0u);
        ctx->pc = 0x206DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206DB8u;
        // 0x206dbc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206DB8u, 0x206DC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x206DC0u;
label_206dc0:
    // 0x206dc0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x206dc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_206dc4:
    // 0x206dc4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x206dc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_206dc8:
    // 0x206dc8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x206dc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_206dcc:
    // 0x206dcc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x206dccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_206dd0:
    // 0x206dd0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x206dd0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_206dd4:
    // 0x206dd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x206dd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_206dd8:
    // 0x206dd8: 0x3e00008  jr          $ra
label_206ddc:
    if (ctx->pc == 0x206DDCu) {
        ctx->pc = 0x206DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206DD8u;
        // 0x206ddc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206DE0u;
        goto label_fallthrough_0x206dd8;
    }
    ctx->pc = 0x206DD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206DD8u;
        // 0x206ddc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206DD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x206dd8:
    ctx->pc = 0x206DE0u;
}

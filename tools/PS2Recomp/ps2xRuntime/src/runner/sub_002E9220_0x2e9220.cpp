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

// Function: sub_002E9220
// Address: 0x2e9220 - 0x2e92e0
void sub_002E9220_0x2e9220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E9220_0x2e9220");
#endif

    switch (ctx->pc) {
        case 0x2e9258u: goto label_2e9258;
        case 0x2e9268u: goto label_2e9268;
        case 0x2e929cu: goto label_2e929c;
        default: break;
    }

    ctx->pc = 0x2e9220u;

    // 0x2e9220: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2e9220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2e9224: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e9224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e9228: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2e9228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2e922c: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x2e922cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x2e9230: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2e9230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2e9234: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x2e9234u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e9238: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e9238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2e923c: 0x24110030  addiu       $s1, $zero, 0x30
    ctx->pc = 0x2e923cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2e9240: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2e9240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x2e9244: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x2e9244u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e9248: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e9248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e924c: 0x24739400  addiu       $s3, $v1, -0x6C00
    ctx->pc = 0x2e924cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939648));
    // 0x2e9250: 0xaf829070  sw          $v0, -0x6F90($gp)
    ctx->pc = 0x2e9250u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938736), GPR_U32(ctx, 2));
    // 0x2e9254: 0x8f828d94  lw          $v0, -0x726C($gp)
    ctx->pc = 0x2e9254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938004)));
label_2e9258:
    // 0x2e9258: 0x14500004  bne         $v0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E9258u;
    {
        const bool branch_taken_0x2e9258 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x2E925Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9258u;
        // 0x2e925c: 0x8f829070  lw          $v0, -0x6F90($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938736)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9258) {
            ctx->pc = 0x2E926Cu;
            goto label_2e926c;
        }
    }
    ctx->pc = 0x2E9260u;
    // 0x2e9260: 0xc0c84d8  jal         func_321360
    ctx->pc = 0x2E9260u;
    SET_GPR_U32(ctx, 31, 0x2E9268u);
    ctx->pc = 0x2E9264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9260u;
    // 0x2e9264: 0x8f849078  lw          $a0, -0x6F88($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938744)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321360u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321360u, 0x2E9260u, 0x2E9268u)) {
        return;
    }
    ctx->pc = 0x2E9268u;
label_2e9268:
    // 0x2e9268: 0x8f829070  lw          $v0, -0x6F90($gp)
    ctx->pc = 0x2e9268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938736)));
label_2e926c:
    // 0x2e926c: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x2E926Cu;
    {
        const bool branch_taken_0x2e926c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e926c) {
            ctx->pc = 0x2E9270u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E926Cu;
            // 0x2e9270: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E92C0u;
            goto label_2e92c0;
        }
    }
    ctx->pc = 0x2E9274u;
    // 0x2e9274: 0x8f848c70  lw          $a0, -0x7390($gp)
    ctx->pc = 0x2e9274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937712)));
    // 0x2e9278: 0x244182a  slt         $v1, $s2, $a0
    ctx->pc = 0x2e9278u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2e927c: 0x2482007f  addiu       $v0, $a0, 0x7F
    ctx->pc = 0x2e927cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 127));
    // 0x2e9280: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x2e9280u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4));
    // 0x2e9284: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x2e9284u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
    // 0x2e9288: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x2e9288u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x2e928c: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x2e928cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2e9290: 0x911018  mult        $v0, $a0, $s1
    ctx->pc = 0x2e9290u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2e9294: 0xc0ba314  jal         func_2E8C50
    ctx->pc = 0x2E9294u;
    SET_GPR_U32(ctx, 31, 0x2E929Cu);
    ctx->pc = 0x2E9298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9294u;
    // 0x2e9298: 0x532021  addu        $a0, $v0, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E8C50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E8C50u, 0x2E9294u, 0x2E929Cu)) {
        return;
    }
    ctx->pc = 0x2E929Cu;
label_2e929c:
    // 0x2e929c: 0x8f838c70  lw          $v1, -0x7390($gp)
    ctx->pc = 0x2e929cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937712)));
    // 0x2e92a0: 0xaf829070  sw          $v0, -0x6F90($gp)
    ctx->pc = 0x2e92a0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938736), GPR_U32(ctx, 2));
    // 0x2e92a4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2e92a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2e92a8: 0xaf838c70  sw          $v1, -0x7390($gp)
    ctx->pc = 0x2e92a8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937712), GPR_U32(ctx, 3));
    // 0x2e92ac: 0x8f848c70  lw          $a0, -0x7390($gp)
    ctx->pc = 0x2e92acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937712)));
    // 0x2e92b0: 0x8f838c74  lw          $v1, -0x738C($gp)
    ctx->pc = 0x2e92b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937716)));
    // 0x2e92b4: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x2E92B4u;
    {
        const bool branch_taken_0x2e92b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E92B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E92B4u;
        // 0x2e92b8: 0x8f828d94  lw          $v0, -0x726C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938004)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e92b4) {
            ctx->pc = 0x2E9258u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e9258;
        }
    }
    ctx->pc = 0x2E92BCu;
    // 0x2e92bc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2e92bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2e92c0:
    // 0x2e92c0: 0x27829078  addiu       $v0, $gp, -0x6F88
    ctx->pc = 0x2e92c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938744));
    // 0x2e92c4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2e92c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e92c8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e92c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e92cc: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2e92ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e92d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e92d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e92d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E92D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E92D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E92D4u;
        // 0x2e92d8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E92D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E92DCu;
    // 0x2e92dc: 0x0  nop
    ctx->pc = 0x2e92dcu;
    // NOP
    ctx->pc = 0x2e92e0u;
}

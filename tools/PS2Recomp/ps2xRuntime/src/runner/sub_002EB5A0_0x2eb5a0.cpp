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

// Function: sub_002EB5A0
// Address: 0x2eb5a0 - 0x2eb630
void sub_002EB5A0_0x2eb5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EB5A0_0x2eb5a0");
#endif

    switch (ctx->pc) {
        case 0x2eb5b4u: goto label_2eb5b4;
        case 0x2eb5c8u: goto label_2eb5c8;
        case 0x2eb61cu: goto label_2eb61c;
        default: break;
    }

    ctx->pc = 0x2eb5a0u;

    // 0x2eb5a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2eb5a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2eb5a4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2eb5a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2eb5a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2eb5a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2eb5ac: 0xc0c9ba4  jal         func_326E90
    ctx->pc = 0x2EB5ACu;
    SET_GPR_U32(ctx, 31, 0x2EB5B4u);
    ctx->pc = 0x2EB5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB5ACu;
    // 0x2eb5b0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326E90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326E90u, 0x2EB5ACu, 0x2EB5B4u)) {
        return;
    }
    ctx->pc = 0x2EB5B4u;
label_2eb5b4:
    // 0x2eb5b4: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2eb5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x2eb5b8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2eb5b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2eb5bc: 0x2445e5c0  addiu       $a1, $v0, -0x1A40
    ctx->pc = 0x2eb5bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960576));
    // 0x2eb5c0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2eb5c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb5c4: 0x0  nop
    ctx->pc = 0x2eb5c4u;
    // NOP
label_2eb5c8:
    // 0x2eb5c8: 0x2c820018  sltiu       $v0, $a0, 0x18
    ctx->pc = 0x2eb5c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)24) ? 1 : 0);
    // 0x2eb5cc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EB5CCu;
    {
        const bool branch_taken_0x2eb5cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB5CCu;
        // 0x2eb5d0: 0x861804  sllv        $v1, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 4) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb5cc) {
            ctx->pc = 0x2EB5ECu;
            goto label_2eb5ec;
        }
    }
    ctx->pc = 0x2EB5D4u;
    // 0x2eb5d4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2eb5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2eb5d8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2eb5d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2eb5dc: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2EB5DCu;
    {
        const bool branch_taken_0x2eb5dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eb5dc) {
            ctx->pc = 0x2EB5E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB5DCu;
            // 0x2eb5e0: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB608u;
            goto label_2eb608;
        }
    }
    ctx->pc = 0x2EB5E4u;
    // 0x2eb5e4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2EB5E4u;
    {
        const bool branch_taken_0x2eb5e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB5E4u;
        // 0x2eb5e8: 0xaca00000  sw          $zero, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb5e4) {
            ctx->pc = 0x2EB604u;
            goto label_2eb604;
        }
    }
    ctx->pc = 0x2EB5ECu;
label_2eb5ec:
    // 0x2eb5ec: 0x2482ffe8  addiu       $v0, $a0, -0x18
    ctx->pc = 0x2eb5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967272));
    // 0x2eb5f0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2eb5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2eb5f4: 0x461004  sllv        $v0, $a2, $v0
    ctx->pc = 0x2eb5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 2) & 0x1F));
    // 0x2eb5f8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2eb5f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2eb5fc: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2EB5FCu;
    {
        const bool branch_taken_0x2eb5fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eb5fc) {
            ctx->pc = 0x2EB600u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB5FCu;
            // 0x2eb600: 0xaca00000  sw          $zero, 0x0($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB604u;
            goto label_2eb604;
        }
    }
    ctx->pc = 0x2EB604u;
label_2eb604:
    // 0x2eb604: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2eb604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2eb608:
    // 0x2eb608: 0x2c820030  sltiu       $v0, $a0, 0x30
    ctx->pc = 0x2eb608u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)48) ? 1 : 0);
    // 0x2eb60c: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2EB60Cu;
    {
        const bool branch_taken_0x2eb60c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EB610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB60Cu;
        // 0x2eb610: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb60c) {
            ctx->pc = 0x2EB5C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2eb5c8;
        }
    }
    ctx->pc = 0x2EB614u;
    // 0x2eb614: 0xc0c9bb8  jal         func_326EE0
    ctx->pc = 0x2EB614u;
    SET_GPR_U32(ctx, 31, 0x2EB61Cu);
    ctx->pc = 0x326EE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326EE0u, 0x2EB614u, 0x2EB61Cu)) {
        return;
    }
    ctx->pc = 0x2EB61Cu;
label_2eb61c:
    // 0x2eb61c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2eb61cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2eb620: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2eb620u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2eb624: 0x3e00008  jr          $ra
    ctx->pc = 0x2EB624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EB628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB624u;
        // 0x2eb628: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EB624u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EB62Cu;
    // 0x2eb62c: 0x0  nop
    ctx->pc = 0x2eb62cu;
    // NOP
    ctx->pc = 0x2eb630u;
}

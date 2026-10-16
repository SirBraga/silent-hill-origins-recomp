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

// Function: sub_003175B0
// Address: 0x3175b0 - 0x317630
void sub_003175B0_0x3175b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003175B0_0x3175b0");
#endif

    switch (ctx->pc) {
        case 0x3175e0u: goto label_3175e0;
        case 0x3175fcu: goto label_3175fc;
        default: break;
    }

    ctx->pc = 0x3175b0u;

    // 0x3175b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3175b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3175b4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3175b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3175b8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3175b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3175bc: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3175bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x3175c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3175c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3175c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3175c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3175c8: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x3175c8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3175cc: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3175CCu;
    {
        const bool branch_taken_0x3175cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3175D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3175CCu;
        // 0x3175d0: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3175cc) {
            ctx->pc = 0x317610u;
            goto label_317610;
        }
    }
    ctx->pc = 0x3175D4u;
    // 0x3175d4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3175d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x3175d8: 0x245211d1  addiu       $s2, $v0, 0x11D1
    ctx->pc = 0x3175d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4561));
    // 0x3175dc: 0x82040000  lb          $a0, 0x0($s0)
    ctx->pc = 0x3175dcu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_3175e0:
    // 0x3175e0: 0x921821  addu        $v1, $a0, $s2
    ctx->pc = 0x3175e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x3175e4: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3175e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3175e8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3175e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x3175ec: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3175ECu;
    {
        const bool branch_taken_0x3175ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3175ec) {
            ctx->pc = 0x3175F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3175ECu;
            // 0x3175f0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x317604u;
            goto label_317604;
        }
    }
    ctx->pc = 0x3175F4u;
    // 0x3175f4: 0xc0c79c2  jal         func_31E708
    ctx->pc = 0x3175F4u;
    SET_GPR_U32(ctx, 31, 0x3175FCu);
    ctx->pc = 0x31E708u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31E708u, 0x3175F4u, 0x3175FCu)) {
        return;
    }
    ctx->pc = 0x3175FCu;
label_3175fc:
    // 0x3175fc: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x3175fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x317600: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x317600u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_317604:
    // 0x317604: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x317604u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x317608: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x317608u;
    {
        const bool branch_taken_0x317608 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x317608) {
            ctx->pc = 0x31760Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x317608u;
            // 0x31760c: 0x82040000  lb          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3175E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3175e0;
        }
    }
    ctx->pc = 0x317610u;
label_317610:
    // 0x317610: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x317610u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317614: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x317614u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x317618: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x317618u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31761c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x31761cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x317620: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x317620u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x317624: 0x3e00008  jr          $ra
    ctx->pc = 0x317624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x317628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317624u;
        // 0x317628: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x317624u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31762Cu;
    // 0x31762c: 0x0  nop
    ctx->pc = 0x31762cu;
    // NOP
    ctx->pc = 0x317630u;
}

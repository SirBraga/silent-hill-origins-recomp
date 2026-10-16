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

// Function: sub_0015D5C8
// Address: 0x15d5c8 - 0x15d688
void sub_0015D5C8_0x15d5c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015D5C8_0x15d5c8");
#endif

    switch (ctx->pc) {
        case 0x15d620u: goto label_15d620;
        case 0x15d630u: goto label_15d630;
        case 0x15d644u: goto label_15d644;
        case 0x15d668u: goto label_15d668;
        default: break;
    }

    ctx->pc = 0x15d5c8u;

    // 0x15d5c8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x15d5c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x15d5cc: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x15d5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x15d5d0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x15d5d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x15d5d4: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x15d5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x15d5d8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x15d5d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x15d5dc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x15d5dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d5e0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x15d5e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x15d5e4: 0x24423178  addiu       $v0, $v0, 0x3178
    ctx->pc = 0x15d5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12664));
    // 0x15d5e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15d5e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15d5ec: 0x24633198  addiu       $v1, $v1, 0x3198
    ctx->pc = 0x15d5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12696));
    // 0x15d5f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15d5f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15d5f4: 0xae230034  sw          $v1, 0x34($s1)
    ctx->pc = 0x15d5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
    // 0x15d5f8: 0xae22003c  sw          $v0, 0x3C($s1)
    ctx->pc = 0x15d5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 2));
    // 0x15d5fc: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x15d5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x15d600: 0x8c628638  lw          $v0, -0x79C8($v1)
    ctx->pc = 0x15d600u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x338638u));
    // 0x15d604: 0x14510002  bne         $v0, $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x15D604u;
    {
        const bool branch_taken_0x15d604 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x15D608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D604u;
        // 0x15d608: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d604) {
            ctx->pc = 0x15D610u;
            goto label_15d610;
        }
    }
    ctx->pc = 0x15D60Cu;
    // 0x15d60c: 0xac608638  sw          $zero, -0x79C8($v1)
    ctx->pc = 0x15d60cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294936120), GPR_U32(ctx, 0));
label_15d610:
    // 0x15d610: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x15d610u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x15d614: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x15d614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x15d618: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x15D618u;
    SET_GPR_U32(ctx, 31, 0x15D620u);
    ctx->pc = 0x15D61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D618u;
    // 0x15d61c: 0x24a58880  addiu       $a1, $a1, -0x7780 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x15D618u, 0x15D620u)) {
        return;
    }
    ctx->pc = 0x15D620u;
label_15d620:
    // 0x15d620: 0x8e220228  lw          $v0, 0x228($s1)
    ctx->pc = 0x15d620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 552)));
    // 0x15d624: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x15D624u;
    {
        const bool branch_taken_0x15d624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D624u;
        // 0x15d628: 0x3c120034  lui         $s2, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d624) {
            ctx->pc = 0x15D65Cu;
            goto label_15d65c;
        }
    }
    ctx->pc = 0x15D62Cu;
    // 0x15d62c: 0x8e300228  lw          $s0, 0x228($s1)
    ctx->pc = 0x15d62cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 552)));
label_15d630:
    // 0x15d630: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x15d630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15d634: 0xae220228  sw          $v0, 0x228($s1)
    ctx->pc = 0x15d634u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 552), GPR_U32(ctx, 2));
    // 0x15d638: 0x8e448668  lw          $a0, -0x7998($s2)
    ctx->pc = 0x15d638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294936168)));
    // 0x15d63c: 0xc059092  jal         func_164248
    ctx->pc = 0x15D63Cu;
    SET_GPR_U32(ctx, 31, 0x15D644u);
    ctx->pc = 0x15D640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D63Cu;
    // 0x15d640: 0x8e050008  lw          $a1, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164248u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x164248u, 0x15D63Cu, 0x15D644u)) {
        return;
    }
    ctx->pc = 0x15D644u;
label_15d644:
    // 0x15d644: 0x8e220224  lw          $v0, 0x224($s1)
    ctx->pc = 0x15d644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 548)));
    // 0x15d648: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x15d648u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x15d64c: 0xae300224  sw          $s0, 0x224($s1)
    ctx->pc = 0x15d64cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 548), GPR_U32(ctx, 16));
    // 0x15d650: 0x8e220228  lw          $v0, 0x228($s1)
    ctx->pc = 0x15d650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 552)));
    // 0x15d654: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x15D654u;
    {
        const bool branch_taken_0x15d654 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15d654) {
            ctx->pc = 0x15D658u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15D654u;
            // 0x15d658: 0x8e300228  lw          $s0, 0x228($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 552)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15D630u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15d630;
        }
    }
    ctx->pc = 0x15D65Cu;
label_15d65c:
    // 0x15d65c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15d65cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d660: 0xc04f084  jal         func_13C210
    ctx->pc = 0x15D660u;
    SET_GPR_U32(ctx, 31, 0x15D668u);
    ctx->pc = 0x15D664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D660u;
    // 0x15d664: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C210u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C210u, 0x15D660u, 0x15D668u)) {
        return;
    }
    ctx->pc = 0x15D668u;
label_15d668:
    // 0x15d668: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x15d668u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15d66c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x15d66cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15d670: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15d670u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15d674: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x15d674u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15d678: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15d678u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15d67c: 0x3e00008  jr          $ra
    ctx->pc = 0x15D67Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15D680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D67Cu;
        // 0x15d680: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D67Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15D684u;
    // 0x15d684: 0x0  nop
    ctx->pc = 0x15d684u;
    // NOP
    ctx->pc = 0x15d688u;
}

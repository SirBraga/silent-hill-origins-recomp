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

// Function: sub_001FD888
// Address: 0x1fd888 - 0x1fd930
void sub_001FD888_0x1fd888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FD888_0x1fd888");
#endif

    switch (ctx->pc) {
        case 0x1fd8c0u: goto label_1fd8c0;
        case 0x1fd8c8u: goto label_1fd8c8;
        case 0x1fd8fcu: goto label_1fd8fc;
        default: break;
    }

    ctx->pc = 0x1fd888u;

    // 0x1fd888: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1fd888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1fd88c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1fd88cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x1fd890: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1fd890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1fd894: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1fd894u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd898: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x1fd898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x1fd89c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1fd89cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd8a0: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1fd8a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x1fd8a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1fd8a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1fd8a8: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x1fd8a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x1fd8ac: 0x8e710000  lw          $s1, 0x0($s3)
    ctx->pc = 0x1fd8acu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1fd8b0: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x1fd8b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1fd8b4: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x1FD8B4u;
    {
        const bool branch_taken_0x1fd8b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD8B4u;
        // 0x1fd8b8: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd8b4) {
            ctx->pc = 0x1FD8E0u;
            goto label_1fd8e0;
        }
    }
    ctx->pc = 0x1FD8BCu;
    // 0x1fd8bc: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x1fd8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1fd8c0:
    // 0x1fd8c0: 0xc0c4a1f  jal         func_31287C
    ctx->pc = 0x1FD8C0u;
    SET_GPR_U32(ctx, 31, 0x1FD8C8u);
    ctx->pc = 0x1FD8C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD8C0u;
    // 0x1fd8c4: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31287Cu;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31287Cu, 0x1FD8C0u, 0x1FD8C8u)) {
        return;
    }
    ctx->pc = 0x1FD8C8u;
label_1fd8c8:
    // 0x1fd8c8: 0x4420003  bltzl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FD8C8u;
    {
        const bool branch_taken_0x1fd8c8 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x1fd8c8) {
            ctx->pc = 0x1FD8CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD8C8u;
            // 0x1fd8cc: 0x8e10000c  lw          $s0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD8D8u;
            goto label_1fd8d8;
        }
    }
    ctx->pc = 0x1FD8D0u;
    // 0x1fd8d0: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x1fd8d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd8d4: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x1fd8d4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1fd8d8:
    // 0x1fd8d8: 0x5600fff9  bnel        $s0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1FD8D8u;
    {
        const bool branch_taken_0x1fd8d8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fd8d8) {
            ctx->pc = 0x1FD8DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD8D8u;
            // 0x1fd8dc: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD8C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fd8c0;
        }
    }
    ctx->pc = 0x1FD8E0u;
label_1fd8e0:
    // 0x1fd8e0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1fd8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1fd8e4: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x1fd8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    // 0x1fd8e8: 0x12220006  beq         $s1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FD8E8u;
    {
        const bool branch_taken_0x1fd8e8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FD8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD8E8u;
        // 0x1fd8ec: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd8e8) {
            ctx->pc = 0x1FD904u;
            goto label_1fd904;
        }
    }
    ctx->pc = 0x1FD8F0u;
    // 0x1fd8f0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1fd8f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1fd8f4: 0xc0c4a1f  jal         func_31287C
    ctx->pc = 0x1FD8F4u;
    SET_GPR_U32(ctx, 31, 0x1FD8FCu);
    ctx->pc = 0x1FD8F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD8F4u;
    // 0x1fd8f8: 0x8e250010  lw          $a1, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31287Cu;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31287Cu, 0x1FD8F4u, 0x1FD8FCu)) {
        return;
    }
    ctx->pc = 0x1FD8FCu;
label_1fd8fc:
    // 0x1fd8fc: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FD8FCu;
    {
        const bool branch_taken_0x1fd8fc = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x1FD900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD8FCu;
        // 0x1fd900: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd8fc) {
            ctx->pc = 0x1FD908u;
            goto label_1fd908;
        }
    }
    ctx->pc = 0x1FD904u;
label_1fd904:
    // 0x1fd904: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1fd904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1fd908:
    // 0x1fd908: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x1fd908u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x1fd90c: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x1fd90cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd910: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1fd910u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1fd914: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x1fd914u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1fd918: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1fd918u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1fd91c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1fd91cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fd920: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x1fd920u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fd924: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1fd924u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fd928: 0x3e00008  jr          $ra
    ctx->pc = 0x1FD928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD928u;
        // 0x1fd92c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD928u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FD930u;
}

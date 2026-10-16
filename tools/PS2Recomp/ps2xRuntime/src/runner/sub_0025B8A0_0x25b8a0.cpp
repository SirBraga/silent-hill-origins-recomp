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

// Function: sub_0025B8A0
// Address: 0x25b8a0 - 0x25b950
void sub_0025B8A0_0x25b8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025B8A0_0x25b8a0");
#endif

    switch (ctx->pc) {
        case 0x25b8a0u: goto label_25b8a0;
        case 0x25b8a4u: goto label_25b8a4;
        case 0x25b8a8u: goto label_25b8a8;
        case 0x25b8acu: goto label_25b8ac;
        case 0x25b8b0u: goto label_25b8b0;
        case 0x25b8b4u: goto label_25b8b4;
        case 0x25b8b8u: goto label_25b8b8;
        case 0x25b8bcu: goto label_25b8bc;
        case 0x25b8c0u: goto label_25b8c0;
        case 0x25b8c4u: goto label_25b8c4;
        case 0x25b8c8u: goto label_25b8c8;
        case 0x25b8ccu: goto label_25b8cc;
        case 0x25b8d0u: goto label_25b8d0;
        case 0x25b8d4u: goto label_25b8d4;
        case 0x25b8d8u: goto label_25b8d8;
        case 0x25b8dcu: goto label_25b8dc;
        case 0x25b8e0u: goto label_25b8e0;
        case 0x25b8e4u: goto label_25b8e4;
        case 0x25b8e8u: goto label_25b8e8;
        case 0x25b8ecu: goto label_25b8ec;
        case 0x25b8f0u: goto label_25b8f0;
        case 0x25b8f4u: goto label_25b8f4;
        case 0x25b8f8u: goto label_25b8f8;
        case 0x25b8fcu: goto label_25b8fc;
        case 0x25b900u: goto label_25b900;
        case 0x25b904u: goto label_25b904;
        case 0x25b908u: goto label_25b908;
        case 0x25b90cu: goto label_25b90c;
        case 0x25b910u: goto label_25b910;
        case 0x25b914u: goto label_25b914;
        case 0x25b918u: goto label_25b918;
        case 0x25b91cu: goto label_25b91c;
        case 0x25b920u: goto label_25b920;
        case 0x25b924u: goto label_25b924;
        case 0x25b928u: goto label_25b928;
        case 0x25b92cu: goto label_25b92c;
        case 0x25b930u: goto label_25b930;
        case 0x25b934u: goto label_25b934;
        case 0x25b938u: goto label_25b938;
        case 0x25b93cu: goto label_25b93c;
        case 0x25b940u: goto label_25b940;
        case 0x25b944u: goto label_25b944;
        case 0x25b948u: goto label_25b948;
        case 0x25b94cu: goto label_25b94c;
        default: break;
    }

    ctx->pc = 0x25b8a0u;

label_25b8a0:
    // 0x25b8a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x25b8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_25b8a4:
    // 0x25b8a4: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x25b8a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_25b8a8:
    // 0x25b8a8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x25b8a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_25b8ac:
    // 0x25b8ac: 0x24940038  addiu       $s4, $a0, 0x38
    ctx->pc = 0x25b8acu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 56));
label_25b8b0:
    // 0x25b8b0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x25b8b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_25b8b4:
    // 0x25b8b4: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x25b8b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_25b8b8:
    // 0x25b8b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25b8b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_25b8bc:
    // 0x25b8bc: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x25b8bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_25b8c0:
    // 0x25b8c0: 0x8c910038  lw          $s1, 0x38($a0)
    ctx->pc = 0x25b8c0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_25b8c4:
    // 0x25b8c4: 0x1234001b  beq         $s1, $s4, . + 4 + (0x1B << 2)
label_25b8c8:
    if (ctx->pc == 0x25B8C8u) {
        ctx->pc = 0x25B8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B8C4u;
        // 0x25b8c8: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B8CCu;
        goto label_25b8cc;
    }
    ctx->pc = 0x25B8C4u;
    {
        const bool branch_taken_0x25b8c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 20));
        ctx->pc = 0x25B8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B8C4u;
        // 0x25b8c8: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b8c4) {
            ctx->pc = 0x25B934u;
            goto label_25b934;
        }
    }
    ctx->pc = 0x25B8CCu;
label_25b8cc:
    // 0x25b8cc: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x25b8ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_25b8d0:
    // 0x25b8d0: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x25b8d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_25b8d4:
    // 0x25b8d4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x25b8d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_25b8d8:
    // 0x25b8d8: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_25b8dc:
    if (ctx->pc == 0x25B8DCu) {
        ctx->pc = 0x25B8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B8D8u;
        // 0x25b8dc: 0x3c120073  lui         $s2, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B8E0u;
        goto label_25b8e0;
    }
    ctx->pc = 0x25B8D8u;
    {
        const bool branch_taken_0x25b8d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B8D8u;
        // 0x25b8dc: 0x3c120073  lui         $s2, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b8d8) {
            ctx->pc = 0x25B924u;
            goto label_25b924;
        }
    }
    ctx->pc = 0x25B8E0u;
label_25b8e0:
    // 0x25b8e0: 0x96030060  lhu         $v1, 0x60($s0)
    ctx->pc = 0x25b8e0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
label_25b8e4:
    // 0x25b8e4: 0x26530fc8  addiu       $s3, $s2, 0xFC8
    ctx->pc = 0x25b8e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 4040));
label_25b8e8:
    // 0x25b8e8: 0x96620008  lhu         $v0, 0x8($s3)
    ctx->pc = 0x25b8e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 8)));
label_25b8ec:
    // 0x25b8ec: 0x5062000e  beql        $v1, $v0, . + 4 + (0xE << 2)
label_25b8f0:
    if (ctx->pc == 0x25B8F0u) {
        ctx->pc = 0x25B8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B8ECu;
        // 0x25b8f0: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B8F4u;
        goto label_25b8f4;
    }
    ctx->pc = 0x25B8ECu;
    {
        const bool branch_taken_0x25b8ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x25b8ec) {
            ctx->pc = 0x25B8F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25B8ECu;
            // 0x25b8f0: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25B928u;
            goto label_25b928;
        }
    }
    ctx->pc = 0x25B8F4u;
label_25b8f4:
    // 0x25b8f4: 0xc09533c  jal         func_254CF0
label_25b8f8:
    if (ctx->pc == 0x25B8F8u) {
        ctx->pc = 0x25B8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B8F4u;
        // 0x25b8f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B8FCu;
        goto label_25b8fc;
    }
    ctx->pc = 0x25B8F4u;
    SET_GPR_U32(ctx, 31, 0x25B8FCu);
    ctx->pc = 0x25B8F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B8F4u;
    // 0x25b8f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254CF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x254CF0u, 0x25B8F4u, 0x25B8FCu)) {
        return;
    }
    ctx->pc = 0x25B8FCu;
label_25b8fc:
    // 0x25b8fc: 0x8e440fc8  lw          $a0, 0xFC8($s2)
    ctx->pc = 0x25b8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4040)));
label_25b900:
    // 0x25b900: 0xc0893dc  jal         func_224F70
label_25b904:
    if (ctx->pc == 0x25B904u) {
        ctx->pc = 0x25B904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B900u;
        // 0x25b904: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B908u;
        goto label_25b908;
    }
    ctx->pc = 0x25B900u;
    SET_GPR_U32(ctx, 31, 0x25B908u);
    ctx->pc = 0x25B904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B900u;
    // 0x25b904: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x224F70u, 0x25B900u, 0x25B908u)) {
        return;
    }
    ctx->pc = 0x25B908u;
label_25b908:
    // 0x25b908: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_25b90c:
    if (ctx->pc == 0x25B90Cu) {
        ctx->pc = 0x25B90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B908u;
        // 0x25b90c: 0x96620008  lhu         $v0, 0x8($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B910u;
        goto label_25b910;
    }
    ctx->pc = 0x25B908u;
    {
        const bool branch_taken_0x25b908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b908) {
            ctx->pc = 0x25B90Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25B908u;
            // 0x25b90c: 0x96620008  lhu         $v0, 0x8($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25B920u;
            goto label_25b920;
        }
    }
    ctx->pc = 0x25B910u;
label_25b910:
    // 0x25b910: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x25b910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_25b914:
    // 0x25b914: 0x40f809  jalr        $v0
label_25b918:
    if (ctx->pc == 0x25B918u) {
        ctx->pc = 0x25B918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B914u;
        // 0x25b918: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B91Cu;
        goto label_25b91c;
    }
    ctx->pc = 0x25B914u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25B91Cu);
        ctx->pc = 0x25B918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B914u;
        // 0x25b918: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B914u, 0x25B91Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25B91Cu;
label_25b91c:
    // 0x25b91c: 0x96620008  lhu         $v0, 0x8($s3)
    ctx->pc = 0x25b91cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 8)));
label_25b920:
    // 0x25b920: 0xa6020060  sh          $v0, 0x60($s0)
    ctx->pc = 0x25b920u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 96), (uint16_t)GPR_U32(ctx, 2));
label_25b924:
    // 0x25b924: 0x8e310000  lw          $s1, 0x0($s1)
    ctx->pc = 0x25b924u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_25b928:
    // 0x25b928: 0x5634ffe9  bnel        $s1, $s4, . + 4 + (-0x17 << 2)
label_25b92c:
    if (ctx->pc == 0x25B92Cu) {
        ctx->pc = 0x25B92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B928u;
        // 0x25b92c: 0x8e300008  lw          $s0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B930u;
        goto label_25b930;
    }
    ctx->pc = 0x25B928u;
    {
        const bool branch_taken_0x25b928 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 20));
        if (branch_taken_0x25b928) {
            ctx->pc = 0x25B92Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25B928u;
            // 0x25b92c: 0x8e300008  lw          $s0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25B8D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25b8d0;
        }
    }
    ctx->pc = 0x25B930u;
label_25b930:
    // 0x25b930: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x25b930u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_25b934:
    // 0x25b934: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x25b934u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_25b938:
    // 0x25b938: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x25b938u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_25b93c:
    // 0x25b93c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x25b93cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_25b940:
    // 0x25b940: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x25b940u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_25b944:
    // 0x25b944: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25b944u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_25b948:
    // 0x25b948: 0x3e00008  jr          $ra
label_25b94c:
    if (ctx->pc == 0x25B94Cu) {
        ctx->pc = 0x25B94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B948u;
        // 0x25b94c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B950u;
        goto label_fallthrough_0x25b948;
    }
    ctx->pc = 0x25B948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25B94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B948u;
        // 0x25b94c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B948u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x25b948:
    ctx->pc = 0x25B950u;
}

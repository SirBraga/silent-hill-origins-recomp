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

// Function: sub_002AC838
// Address: 0x2ac838 - 0x2ac958
void sub_002AC838_0x2ac838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AC838_0x2ac838");
#endif

    switch (ctx->pc) {
        case 0x2ac89cu: goto label_2ac89c;
        case 0x2ac900u: goto label_2ac900;
        default: break;
    }

    ctx->pc = 0x2ac838u;

    // 0x2ac838: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2ac838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2ac83c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2ac83cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x2ac840: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2ac840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x2ac844: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ac844u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac848: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2ac848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2ac84c: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x2ac84cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x2ac850: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2ac850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x2ac854: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2ac854u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac858: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ac858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ac85c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2ac85cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ac860: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x2ac860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x2ac864: 0x96950020  lhu         $s5, 0x20($s4)
    ctx->pc = 0x2ac864u;
    SET_GPR_ZE32(ctx, 21, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x2ac868: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x2ac868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x2ac86c: 0x151142  srl         $v0, $s5, 5
    ctx->pc = 0x2ac86cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 21), 5));
    // 0x2ac870: 0x32a4001f  andi        $a0, $s5, 0x1F
    ctx->pc = 0x2ac870u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)31);
    // 0x2ac874: 0x28880  sll         $s1, $v0, 2
    ctx->pc = 0x2ac874u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2ac878: 0x859804  sllv        $s3, $a1, $a0
    ctx->pc = 0x2ac878u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 4) & 0x1F));
    // 0x2ac87c: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x2ac87cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2ac880: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2ac880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ac884: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x2ac884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x2ac888: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AC888u;
    {
        const bool branch_taken_0x2ac888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ac888) {
            ctx->pc = 0x2AC88Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AC888u;
            // 0x2ac88c: 0x8e030058  lw          $v1, 0x58($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AC8A0u;
            goto label_2ac8a0;
        }
    }
    ctx->pc = 0x2AC890u;
    // 0x2ac890: 0x8e840024  lw          $a0, 0x24($s4)
    ctx->pc = 0x2ac890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x2ac894: 0xc0ab512  jal         func_2AD448
    ctx->pc = 0x2AC894u;
    SET_GPR_U32(ctx, 31, 0x2AC89Cu);
    ctx->pc = 0x2AC898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC894u;
    // 0x2ac898: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AD448u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AD448u, 0x2AC894u, 0x2AC89Cu)) {
        return;
    }
    ctx->pc = 0x2AC89Cu;
label_2ac89c:
    // 0x2ac89c: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x2ac89cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_2ac8a0:
    // 0x2ac8a0: 0x139027  nor         $s2, $zero, $s3
    ctx->pc = 0x2ac8a0u;
    SET_GPR_U64(ctx, 18, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 19)));
    // 0x2ac8a4: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x2ac8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x2ac8a8: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x2ac8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2ac8ac: 0x8e060064  lw          $a2, 0x64($s0)
    ctx->pc = 0x2ac8acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x2ac8b0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2ac8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ac8b4: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x2ac8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x2ac8b8: 0x2263021  addu        $a2, $s1, $a2
    ctx->pc = 0x2ac8b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x2ac8bc: 0x8e050068  lw          $a1, 0x68($s0)
    ctx->pc = 0x2ac8bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x2ac8c0: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x2ac8c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x2ac8c4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2ac8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2ac8c8: 0x2252821  addu        $a1, $s1, $a1
    ctx->pc = 0x2ac8c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x2ac8cc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2ac8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ac8d0: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x2ac8d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x2ac8d4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2ac8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2ac8d8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2ac8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2ac8dc: 0x721824  and         $v1, $v1, $s2
    ctx->pc = 0x2ac8dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 18));
    // 0x2ac8e0: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x2ac8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x2ac8e4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2ac8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2ac8e8: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x2ac8e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x2ac8ec: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2AC8ECu;
    {
        const bool branch_taken_0x2ac8ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ac8ec) {
            ctx->pc = 0x2AC8F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AC8ECu;
            // 0x2ac8f0: 0x8e020050  lw          $v0, 0x50($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AC918u;
            goto label_2ac918;
        }
    }
    ctx->pc = 0x2AC8F4u;
    // 0x2ac8f4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2ac8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ac8f8: 0xc0adcce  jal         func_2B7338
    ctx->pc = 0x2AC8F8u;
    SET_GPR_U32(ctx, 31, 0x2AC900u);
    ctx->pc = 0x2AC8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC8F8u;
    // 0x2ac8fc: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7338u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B7338u, 0x2AC8F8u, 0x2AC900u)) {
        return;
    }
    ctx->pc = 0x2AC900u;
label_2ac900:
    // 0x2ac900: 0x8e030068  lw          $v1, 0x68($s0)
    ctx->pc = 0x2ac900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x2ac904: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x2ac904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2ac908: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2ac908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ac90c: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x2ac90cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x2ac910: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2ac910u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2ac914: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x2ac914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_2ac918:
    // 0x2ac918: 0x151880  sll         $v1, $s5, 2
    ctx->pc = 0x2ac918u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x2ac91c: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x2ac91cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ac920: 0xae800024  sw          $zero, 0x24($s4)
    ctx->pc = 0x2ac920u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 0));
    // 0x2ac924: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2ac924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ac928: 0xa6840020  sh          $a0, 0x20($s4)
    ctx->pc = 0x2ac928u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 32), (uint16_t)GPR_U32(ctx, 4));
    // 0x2ac92c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2ac92cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac930: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2ac930u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ac934: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2ac934u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ac938: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2ac938u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ac93c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2ac93cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ac940: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x2ac940u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ac944: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x2ac944u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ac948: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ac948u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ac94c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2ac94cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x2ac950: 0x3e00008  jr          $ra
    ctx->pc = 0x2AC950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AC954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC950u;
        // 0x2ac954: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AC950u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AC958u;
}

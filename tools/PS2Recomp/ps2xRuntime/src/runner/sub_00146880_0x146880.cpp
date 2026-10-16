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

// Function: sub_00146880
// Address: 0x146880 - 0x146940
void sub_00146880_0x146880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00146880_0x146880");
#endif

    switch (ctx->pc) {
        case 0x1468b8u: goto label_1468b8;
        case 0x1468c0u: goto label_1468c0;
        case 0x1468e0u: goto label_1468e0;
        case 0x1468e8u: goto label_1468e8;
        case 0x146908u: goto label_146908;
        case 0x146910u: goto label_146910;
        default: break;
    }

    ctx->pc = 0x146880u;

    // 0x146880: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x146880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x146884: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x146884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x146888: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x146888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x14688c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x14688cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x146890: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x146890u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146894: 0x8c4384b4  lw          $v1, -0x7B4C($v0)
    ctx->pc = 0x146894u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3384B4u));
    // 0x146898: 0x3c120034  lui         $s2, 0x34
    ctx->pc = 0x146898u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)52 << 16));
    // 0x14689c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x14689cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1468a0: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1468A0u;
    {
        const bool branch_taken_0x1468a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1468A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1468A0u;
        // 0x1468a4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1468a0) {
            ctx->pc = 0x1468D0u;
            goto label_1468d0;
        }
    }
    ctx->pc = 0x1468A8u;
    // 0x1468a8: 0x8e50847c  lw          $s0, -0x7B84($s2)
    ctx->pc = 0x1468a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294935676)));
    // 0x1468ac: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1468ACu;
    {
        const bool branch_taken_0x1468ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1468ac) {
            ctx->pc = 0x1468FCu;
            goto label_1468fc;
        }
    }
    ctx->pc = 0x1468B4u;
    // 0x1468b4: 0x0  nop
    ctx->pc = 0x1468b4u;
    // NOP
label_1468b8:
    // 0x1468b8: 0xc051a9c  jal         func_146A70
    ctx->pc = 0x1468B8u;
    SET_GPR_U32(ctx, 31, 0x1468C0u);
    ctx->pc = 0x1468BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1468B8u;
    // 0x1468bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146A70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x146A70u, 0x1468B8u, 0x1468C0u)) {
        return;
    }
    ctx->pc = 0x1468C0u;
label_1468c0:
    // 0x1468c0: 0x8e1000ec  lw          $s0, 0xEC($s0)
    ctx->pc = 0x1468c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
    // 0x1468c4: 0x0  nop
    ctx->pc = 0x1468c4u;
    // NOP
    // 0x1468c8: 0x1600fffb  bnez        $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1468C8u;
    {
        const bool branch_taken_0x1468c8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1468c8) {
            ctx->pc = 0x1468B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1468b8;
        }
    }
    ctx->pc = 0x1468D0u;
label_1468d0:
    // 0x1468d0: 0x8e50847c  lw          $s0, -0x7B84($s2)
    ctx->pc = 0x1468d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294935676)));
    // 0x1468d4: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1468D4u;
    {
        const bool branch_taken_0x1468d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1468d4) {
            ctx->pc = 0x1468FCu;
            goto label_1468fc;
        }
    }
    ctx->pc = 0x1468DCu;
    // 0x1468dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1468dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1468e0:
    // 0x1468e0: 0xc051506  jal         func_145418
    ctx->pc = 0x1468E0u;
    SET_GPR_U32(ctx, 31, 0x1468E8u);
    ctx->pc = 0x1468E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1468E0u;
    // 0x1468e4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145418u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x145418u, 0x1468E0u, 0x1468E8u)) {
        return;
    }
    ctx->pc = 0x1468E8u;
label_1468e8:
    // 0x1468e8: 0x8e1000ec  lw          $s0, 0xEC($s0)
    ctx->pc = 0x1468e8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
    // 0x1468ec: 0x0  nop
    ctx->pc = 0x1468ecu;
    // NOP
    // 0x1468f0: 0x1600fffb  bnez        $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1468F0u;
    {
        const bool branch_taken_0x1468f0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1468F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1468F0u;
        // 0x1468f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1468f0) {
            ctx->pc = 0x1468E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1468e0;
        }
    }
    ctx->pc = 0x1468F8u;
    // 0x1468f8: 0x8e50847c  lw          $s0, -0x7B84($s2)
    ctx->pc = 0x1468f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294935676)));
label_1468fc:
    // 0x1468fc: 0x52000009  beql        $s0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1468FCu;
    {
        const bool branch_taken_0x1468fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1468fc) {
            ctx->pc = 0x146900u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1468FCu;
            // 0x146900: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x146924u;
            goto label_146924;
        }
    }
    ctx->pc = 0x146904u;
    // 0x146904: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x146904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_146908:
    // 0x146908: 0xc051674  jal         func_1459D0
    ctx->pc = 0x146908u;
    SET_GPR_U32(ctx, 31, 0x146910u);
    ctx->pc = 0x14690Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146908u;
    // 0x14690c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1459D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1459D0u, 0x146908u, 0x146910u)) {
        return;
    }
    ctx->pc = 0x146910u;
label_146910:
    // 0x146910: 0x8e1000ec  lw          $s0, 0xEC($s0)
    ctx->pc = 0x146910u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
    // 0x146914: 0x0  nop
    ctx->pc = 0x146914u;
    // NOP
    // 0x146918: 0x1600fffb  bnez        $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x146918u;
    {
        const bool branch_taken_0x146918 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x14691Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146918u;
        // 0x14691c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146918) {
            ctx->pc = 0x146908u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_146908;
        }
    }
    ctx->pc = 0x146920u;
    // 0x146920: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x146920u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_146924:
    // 0x146924: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x146924u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x146928: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x146928u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14692c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14692cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x146930: 0x3e00008  jr          $ra
    ctx->pc = 0x146930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x146934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146930u;
        // 0x146934: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x146930u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x146938u;
    // 0x146938: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x146938u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x14693c: 0x0  nop
    ctx->pc = 0x14693cu;
    // NOP
    ctx->pc = 0x146940u;
}

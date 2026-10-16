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

// Function: sub_00229528
// Address: 0x229528 - 0x2295b0
void sub_00229528_0x229528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00229528_0x229528");
#endif

    switch (ctx->pc) {
        case 0x229550u: goto label_229550;
        case 0x229570u: goto label_229570;
        case 0x229588u: goto label_229588;
        default: break;
    }

    ctx->pc = 0x229528u;

label_229528:
    // 0x229528: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x229528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x22952c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x22952cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x229530: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x229530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x229534: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x229534u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229538: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x229538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x22953c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x22953cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229540: 0x12000014  beqz        $s0, . + 4 + (0x14 << 2)
    ctx->pc = 0x229540u;
    {
        const bool branch_taken_0x229540 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x229544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229540u;
        // 0x229544: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229540) {
            ctx->pc = 0x229594u;
            goto label_229594;
        }
    }
    ctx->pc = 0x229548u;
    // 0x229548: 0x92020003  lbu         $v0, 0x3($s0)
    ctx->pc = 0x229548u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x22954c: 0x0  nop
    ctx->pc = 0x22954cu;
    // NOP
label_229550:
    // 0x229550: 0x2428825  or          $s1, $s2, $v0
    ctx->pc = 0x229550u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x229554: 0x32230004  andi        $v1, $s1, 0x4
    ctx->pc = 0x229554u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)4);
    // 0x229558: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x229558u;
    {
        const bool branch_taken_0x229558 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22955Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229558u;
        // 0x22955c: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229558) {
            ctx->pc = 0x22957Cu;
            goto label_22957c;
        }
    }
    ctx->pc = 0x229560u;
    // 0x229560: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x229560u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x229564: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x229564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x229568: 0xc092d9c  jal         func_24B670
    ctx->pc = 0x229568u;
    SET_GPR_U32(ctx, 31, 0x229570u);
    ctx->pc = 0x22956Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229568u;
    // 0x22956c: 0x24c60050  addiu       $a2, $a2, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B670u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B670u, 0x229568u, 0x229570u)) {
        return;
    }
    ctx->pc = 0x229570u;
label_229570:
    // 0x229570: 0x92030003  lbu         $v1, 0x3($s0)
    ctx->pc = 0x229570u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x229574: 0x306300fb  andi        $v1, $v1, 0xFB
    ctx->pc = 0x229574u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)251);
    // 0x229578: 0xa2030003  sb          $v1, 0x3($s0)
    ctx->pc = 0x229578u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 3));
label_22957c:
    // 0x22957c: 0x8e040098  lw          $a0, 0x98($s0)
    ctx->pc = 0x22957cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x229580: 0xc08a54a  jal         func_229528
    ctx->pc = 0x229580u;
    SET_GPR_U32(ctx, 31, 0x229588u);
    ctx->pc = 0x229584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229580u;
    // 0x229584: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229528u;
    goto label_229528;
    ctx->pc = 0x229588u;
label_229588:
    // 0x229588: 0x8e10009c  lw          $s0, 0x9C($s0)
    ctx->pc = 0x229588u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x22958c: 0x5600fff0  bnel        $s0, $zero, . + 4 + (-0x10 << 2)
    ctx->pc = 0x22958Cu;
    {
        const bool branch_taken_0x22958c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x22958c) {
            ctx->pc = 0x229590u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22958Cu;
            // 0x229590: 0x92020003  lbu         $v0, 0x3($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x229550u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_229550;
        }
    }
    ctx->pc = 0x229594u;
label_229594:
    // 0x229594: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x229594u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x229598: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x229598u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22959c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x22959cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2295a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2295a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2295a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2295A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2295A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2295A4u;
        // 0x2295a8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2295A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2295ACu;
    // 0x2295ac: 0x0  nop
    ctx->pc = 0x2295acu;
    // NOP
    ctx->pc = 0x2295b0u;
}

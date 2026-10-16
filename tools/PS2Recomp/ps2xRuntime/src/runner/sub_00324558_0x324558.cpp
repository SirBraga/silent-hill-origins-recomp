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

// Function: sub_00324558
// Address: 0x324558 - 0x324600
void sub_00324558_0x324558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00324558_0x324558");
#endif

    switch (ctx->pc) {
        case 0x324570u: goto label_324570;
        case 0x324588u: goto label_324588;
        case 0x3245ccu: goto label_3245cc;
        case 0x3245e8u: goto label_3245e8;
        default: break;
    }

    ctx->pc = 0x324558u;

    // 0x324558: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x324558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x32455c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x32455cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x324560: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x324560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x324564: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x324564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x324568: 0xc0c9ba4  jal         func_326E90
    ctx->pc = 0x324568u;
    SET_GPR_U32(ctx, 31, 0x324570u);
    ctx->pc = 0x32456Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324568u;
    // 0x32456c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326E90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326E90u, 0x324568u, 0x324570u)) {
        return;
    }
    ctx->pc = 0x324570u;
label_324570:
    // 0x324570: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x324570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x324574: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x324574u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324578: 0x18800019  blez        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x324578u;
    {
        const bool branch_taken_0x324578 = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x32457Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324578u;
        // 0x32457c: 0x8e300004  lw          $s0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324578) {
            ctx->pc = 0x3245E0u;
            goto label_3245e0;
        }
    }
    ctx->pc = 0x324580u;
    // 0x324580: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x324580u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x324584: 0x0  nop
    ctx->pc = 0x324584u;
    // NOP
label_324588:
    // 0x324588: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x324588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x32458c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x32458cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x324590: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x324590u;
    {
        const bool branch_taken_0x324590 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x324590) {
            ctx->pc = 0x324594u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x324590u;
            // 0x324594: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3245D4u;
            goto label_3245d4;
        }
    }
    ctx->pc = 0x324598u;
    // 0x324598: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x324598u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x32459c: 0x34420005  ori         $v0, $v0, 0x5
    ctx->pc = 0x32459cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5);
    // 0x3245a0: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x3245a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x3245a4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3245a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3245a8: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x3245a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3245ac: 0x14650004  bne         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3245ACu;
    {
        const bool branch_taken_0x3245ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x3245B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3245ACu;
        // 0x3245b0: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3245ac) {
            ctx->pc = 0x3245C0u;
            goto label_3245c0;
        }
    }
    ctx->pc = 0x3245B4u;
    // 0x3245b4: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x3245b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x3245b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3245b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3245bc: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3245bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_3245c0:
    // 0x3245c0: 0xae100014  sw          $s0, 0x14($s0)
    ctx->pc = 0x3245c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 16));
    // 0x3245c4: 0xc0c9bb8  jal         func_326EE0
    ctx->pc = 0x3245C4u;
    SET_GPR_U32(ctx, 31, 0x3245CCu);
    ctx->pc = 0x3245C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3245C4u;
    // 0x3245c8: 0xae030018  sw          $v1, 0x18($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326EE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326EE0u, 0x3245C4u, 0x3245CCu)) {
        return;
    }
    ctx->pc = 0x3245CCu;
label_3245cc:
    // 0x3245cc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3245CCu;
    {
        const bool branch_taken_0x3245cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3245D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3245CCu;
        // 0x3245d0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3245cc) {
            ctx->pc = 0x3245ECu;
            goto label_3245ec;
        }
    }
    ctx->pc = 0x3245D4u;
label_3245d4:
    // 0x3245d4: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x3245d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3245d8: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x3245D8u;
    {
        const bool branch_taken_0x3245d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3245DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3245D8u;
        // 0x3245dc: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3245d8) {
            ctx->pc = 0x324588u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_324588;
        }
    }
    ctx->pc = 0x3245E0u;
label_3245e0:
    // 0x3245e0: 0xc0c9bb8  jal         func_326EE0
    ctx->pc = 0x3245E0u;
    SET_GPR_U32(ctx, 31, 0x3245E8u);
    ctx->pc = 0x326EE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326EE0u, 0x3245E0u, 0x3245E8u)) {
        return;
    }
    ctx->pc = 0x3245E8u;
label_3245e8:
    // 0x3245e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3245e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3245ec:
    // 0x3245ec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3245ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3245f0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3245f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3245f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3245f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3245f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3245F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3245FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3245F8u;
        // 0x3245fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3245F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x324600u;
}

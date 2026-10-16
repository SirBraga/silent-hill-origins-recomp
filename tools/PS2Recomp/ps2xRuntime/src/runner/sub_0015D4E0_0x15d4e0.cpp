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

// Function: sub_0015D4E0
// Address: 0x15d4e0 - 0x15d5c8
void sub_0015D4E0_0x15d4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015D4E0_0x15d4e0");
#endif

    switch (ctx->pc) {
        case 0x15d508u: goto label_15d508;
        case 0x15d544u: goto label_15d544;
        case 0x15d548u: goto label_15d548;
        case 0x15d55cu: goto label_15d55c;
        case 0x15d580u: goto label_15d580;
        case 0x15d594u: goto label_15d594;
        default: break;
    }

    ctx->pc = 0x15d4e0u;

    // 0x15d4e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x15d4e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x15d4e4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x15d4e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x15d4e8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x15d4e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d4ec: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x15d4ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x15d4f0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15d4f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15d4f4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x15d4f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x15d4f8: 0x2630022c  addiu       $s0, $s1, 0x22C
    ctx->pc = 0x15d4f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 556));
    // 0x15d4fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15d4fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15d500: 0xc04f05a  jal         func_13C168
    ctx->pc = 0x15D500u;
    SET_GPR_U32(ctx, 31, 0x15D508u);
    ctx->pc = 0x15D504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D500u;
    // 0x15d504: 0x24130002  addiu       $s3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C168u, 0x15D500u, 0x15D508u)) {
        return;
    }
    ctx->pc = 0x15D508u;
label_15d508:
    // 0x15d508: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x15d508u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d50c: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x15d50cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x15d510: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x15d510u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x15d514: 0x24423178  addiu       $v0, $v0, 0x3178
    ctx->pc = 0x15d514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12664));
    // 0x15d518: 0x24633198  addiu       $v1, $v1, 0x3198
    ctx->pc = 0x15d518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12696));
    // 0x15d51c: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x15d51cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x15d520: 0xae22003c  sw          $v0, 0x3C($s1)
    ctx->pc = 0x15d520u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 2));
    // 0x15d524: 0xae230034  sw          $v1, 0x34($s1)
    ctx->pc = 0x15d524u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
    // 0x15d528: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x15d528u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x15d52c: 0xac918638  sw          $s1, -0x79C8($a0)
    ctx->pc = 0x15d52cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x338638u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x338638u, _value); } while (0);
    // 0x15d530: 0x24a58880  addiu       $a1, $a1, -0x7780
    ctx->pc = 0x15d530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936704));
    // 0x15d534: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x15d534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x15d538: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15d538u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d53c: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x15D53Cu;
    SET_GPR_U32(ctx, 31, 0x15D544u);
    ctx->pc = 0x15D540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D53Cu;
    // 0x15d540: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x15D53Cu, 0x15D544u)) {
        return;
    }
    ctx->pc = 0x15D544u;
label_15d544:
    // 0x15d544: 0x0  nop
    ctx->pc = 0x15d544u;
    // NOP
label_15d548:
    // 0x15d548: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15d548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d54c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15d54cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d550: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x15d550u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x15d554: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x15D554u;
    SET_GPR_U32(ctx, 31, 0x15D55Cu);
    ctx->pc = 0x15D558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D554u;
    // 0x15d558: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x15D554u, 0x15D55Cu)) {
        return;
    }
    ctx->pc = 0x15D55Cu;
label_15d55c:
    // 0x15d55c: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x15d55cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x15d560: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x15d560u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x15d564: 0x661fff8  bgez        $s3, . + 4 + (-0x8 << 2)
    ctx->pc = 0x15D564u;
    {
        const bool branch_taken_0x15d564 = (GPR_S64(ctx, 19) >= 0);
        ctx->pc = 0x15D568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D564u;
        // 0x15d568: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d564) {
            ctx->pc = 0x15D548u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15d548;
        }
    }
    ctx->pc = 0x15D56Cu;
    // 0x15d56c: 0xae200224  sw          $zero, 0x224($s1)
    ctx->pc = 0x15d56cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 548), GPR_U32(ctx, 0));
    // 0x15d570: 0x26300044  addiu       $s0, $s1, 0x44
    ctx->pc = 0x15d570u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
    // 0x15d574: 0xae200228  sw          $zero, 0x228($s1)
    ctx->pc = 0x15d574u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 552), GPR_U32(ctx, 0));
    // 0x15d578: 0x24120013  addiu       $s2, $zero, 0x13
    ctx->pc = 0x15d578u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x15d57c: 0x0  nop
    ctx->pc = 0x15d57cu;
    // NOP
label_15d580:
    // 0x15d580: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15d580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d584: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15d584u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d588: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x15d588u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x15d58c: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x15D58Cu;
    SET_GPR_U32(ctx, 31, 0x15D594u);
    ctx->pc = 0x15D590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D58Cu;
    // 0x15d590: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x15D58Cu, 0x15D594u)) {
        return;
    }
    ctx->pc = 0x15D594u;
label_15d594:
    // 0x15d594: 0x8e230224  lw          $v1, 0x224($s1)
    ctx->pc = 0x15d594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 548)));
    // 0x15d598: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x15d598u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x15d59c: 0xae300224  sw          $s0, 0x224($s1)
    ctx->pc = 0x15d59cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 548), GPR_U32(ctx, 16));
    // 0x15d5a0: 0x641fff7  bgez        $s2, . + 4 + (-0x9 << 2)
    ctx->pc = 0x15D5A0u;
    {
        const bool branch_taken_0x15d5a0 = (GPR_S64(ctx, 18) >= 0);
        ctx->pc = 0x15D5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D5A0u;
        // 0x15d5a4: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d5a0) {
            ctx->pc = 0x15D580u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15d580;
        }
    }
    ctx->pc = 0x15D5A8u;
    // 0x15d5a8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x15d5a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d5ac: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x15d5acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15d5b0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x15d5b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15d5b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15d5b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15d5b8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x15d5b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15d5bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15d5bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15d5c0: 0x3e00008  jr          $ra
    ctx->pc = 0x15D5C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15D5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D5C0u;
        // 0x15d5c4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D5C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15D5C8u;
}

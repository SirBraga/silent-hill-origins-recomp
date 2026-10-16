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

// Function: sub_001F98C8
// Address: 0x1f98c8 - 0x1f993c
void sub_001F98C8_0x1f98c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F98C8_0x1f98c8");
#endif

    switch (ctx->pc) {
        case 0x1f98c8u: goto label_1f98c8;
        case 0x1f98ccu: goto label_1f98cc;
        case 0x1f98d0u: goto label_1f98d0;
        case 0x1f98d4u: goto label_1f98d4;
        case 0x1f98d8u: goto label_1f98d8;
        case 0x1f98dcu: goto label_1f98dc;
        case 0x1f98e0u: goto label_1f98e0;
        case 0x1f98e4u: goto label_1f98e4;
        case 0x1f98e8u: goto label_1f98e8;
        case 0x1f98ecu: goto label_1f98ec;
        case 0x1f98f0u: goto label_1f98f0;
        case 0x1f98f4u: goto label_1f98f4;
        case 0x1f98f8u: goto label_1f98f8;
        case 0x1f98fcu: goto label_1f98fc;
        case 0x1f9900u: goto label_1f9900;
        case 0x1f9904u: goto label_1f9904;
        case 0x1f9908u: goto label_1f9908;
        case 0x1f990cu: goto label_1f990c;
        case 0x1f9910u: goto label_1f9910;
        case 0x1f9914u: goto label_1f9914;
        case 0x1f9918u: goto label_1f9918;
        case 0x1f991cu: goto label_1f991c;
        case 0x1f9920u: goto label_1f9920;
        case 0x1f9924u: goto label_1f9924;
        case 0x1f9928u: goto label_1f9928;
        case 0x1f992cu: goto label_1f992c;
        case 0x1f9930u: goto label_1f9930;
        case 0x1f9934u: goto label_1f9934;
        case 0x1f9938u: goto label_1f9938;
        default: break;
    }

    ctx->pc = 0x1f98c8u;

label_1f98c8:
    // 0x1f98c8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1f98c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1f98cc:
    // 0x1f98cc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f98ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1f98d0:
    // 0x1f98d0: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1f98d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_1f98d4:
    // 0x1f98d4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1f98d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1f98d8:
    // 0x1f98d8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1f98d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_1f98dc:
    // 0x1f98dc: 0x24512eb0  addiu       $s1, $v0, 0x2EB0
    ctx->pc = 0x1f98dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 11952));
label_1f98e0:
    // 0x1f98e0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1f98e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1f98e4:
    // 0x1f98e4: 0x3c12006a  lui         $s2, 0x6A
    ctx->pc = 0x1f98e4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)106 << 16));
label_1f98e8:
    // 0x1f98e8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1f98e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1f98ec:
    // 0x1f98ec: 0xc07e534  jal         func_1F94D0
label_1f98f0:
    if (ctx->pc == 0x1F98F0u) {
        ctx->pc = 0x1F98F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F98ECu;
        // 0x1f98f0: 0xafb10000  sw          $s1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F98F4u;
        goto label_1f98f4;
    }
    ctx->pc = 0x1F98ECu;
    SET_GPR_U32(ctx, 31, 0x1F98F4u);
    ctx->pc = 0x1F98F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F98ECu;
    // 0x1f98f0: 0xafb10000  sw          $s1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F94D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F94D0u, 0x1F98ECu, 0x1F98F4u)) {
        return;
    }
    ctx->pc = 0x1F98F4u;
label_1f98f4:
    // 0x1f98f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f98f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f98f8:
    // 0x1f98f8: 0x10000003  b           . + 4 + (0x3 << 2)
label_1f98fc:
    if (ctx->pc == 0x1F98FCu) {
        ctx->pc = 0x1F98FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F98F8u;
        // 0x1f98fc: 0xae110000  sw          $s1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9900u;
        goto label_1f9900;
    }
    ctx->pc = 0x1F98F8u;
    {
        const bool branch_taken_0x1f98f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F98FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F98F8u;
        // 0x1f98fc: 0xae110000  sw          $s1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f98f8) {
            ctx->pc = 0x1F9908u;
            goto label_1f9908;
        }
    }
    ctx->pc = 0x1F9900u;
label_1f9900:
    // 0x1f9900: 0xc07e3f2  jal         func_1F8FC8
label_1f9904:
    if (ctx->pc == 0x1F9904u) {
        ctx->pc = 0x1F9908u;
        goto label_1f9908;
    }
    ctx->pc = 0x1F9900u;
    SET_GPR_U32(ctx, 31, 0x1F9908u);
    ctx->pc = 0x1F8FC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8FC8u, 0x1F9900u, 0x1F9908u)) {
        return;
    }
    ctx->pc = 0x1F9908u;
label_1f9908:
    // 0x1f9908: 0x26422cf8  addiu       $v0, $s2, 0x2CF8
    ctx->pc = 0x1f9908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 11512));
label_1f990c:
    // 0x1f990c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1f990cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_1f9910:
    // 0x1f9910: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1f9910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1f9914:
    // 0x1f9914: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1f9914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1f9918:
    // 0x1f9918: 0x40f809  jalr        $v0
label_1f991c:
    if (ctx->pc == 0x1F991Cu) {
        ctx->pc = 0x1F9920u;
        goto label_1f9920;
    }
    ctx->pc = 0x1F9918u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F9920u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9918u, 0x1F9920u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F9920u;
label_1f9920:
    // 0x1f9920: 0x3c060020  lui         $a2, 0x20
    ctx->pc = 0x1f9920u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32 << 16));
label_1f9924:
    // 0x1f9924: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f9924u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f9928:
    // 0x1f9928: 0x24c6b138  addiu       $a2, $a2, -0x4EC8
    ctx->pc = 0x1f9928u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294947128));
label_1f992c:
    // 0x1f992c: 0xc07e562  jal         func_1F9588
label_1f9930:
    if (ctx->pc == 0x1F9930u) {
        ctx->pc = 0x1F9930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F992Cu;
        // 0x1f9930: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9934u;
        goto label_1f9934;
    }
    ctx->pc = 0x1F992Cu;
    SET_GPR_U32(ctx, 31, 0x1F9934u);
    ctx->pc = 0x1F9930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F992Cu;
    // 0x1f9930: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9588u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9588u, 0x1F992Cu, 0x1F9934u)) {
        return;
    }
    ctx->pc = 0x1F9934u;
label_1f9934:
    // 0x1f9934: 0xc07e3f2  jal         func_1F8FC8
label_1f9938:
    if (ctx->pc == 0x1F9938u) {
        ctx->pc = 0x1F993Cu;
        goto label_fallthrough_0x1f9934;
    }
    ctx->pc = 0x1F9934u;
    SET_GPR_U32(ctx, 31, 0x1F993Cu);
    ctx->pc = 0x1F8FC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8FC8u, 0x1F9934u, 0x1F993Cu)) {
        return;
    }
label_fallthrough_0x1f9934:
    ctx->pc = 0x1F993Cu;
}

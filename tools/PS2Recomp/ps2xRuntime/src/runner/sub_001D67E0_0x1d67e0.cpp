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

// Function: sub_001D67E0
// Address: 0x1d67e0 - 0x1d6858
void sub_001D67E0_0x1d67e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D67E0_0x1d67e0");
#endif

    switch (ctx->pc) {
        case 0x1d6808u: goto label_1d6808;
        case 0x1d682cu: goto label_1d682c;
        case 0x1d6844u: goto label_1d6844;
        default: break;
    }

    ctx->pc = 0x1d67e0u;

    // 0x1d67e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d67e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d67e4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d67e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1d67e8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d67e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d67ec: 0x14a20015  bne         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1D67ECu;
    {
        const bool branch_taken_0x1d67ec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D67F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D67ECu;
        // 0x1d67f0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d67ec) {
            ctx->pc = 0x1D6844u;
            goto label_1d6844;
        }
    }
    ctx->pc = 0x1D67F4u;
    // 0x1d67f4: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x1D67F4u;
    {
        const bool branch_taken_0x1d67f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D67F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D67F4u;
        // 0x1d67f8: 0x3c10006a  lui         $s0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d67f4) {
            ctx->pc = 0x1D6834u;
            goto label_1d6834;
        }
    }
    ctx->pc = 0x1D67FCu;
    // 0x1d67fc: 0x26101478  addiu       $s0, $s0, 0x1478
    ctx->pc = 0x1d67fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5240));
    // 0x1d6800: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x1D6800u;
    SET_GPR_U32(ctx, 31, 0x1D6808u);
    ctx->pc = 0x1D6804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6800u;
    // 0x1d6804: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x1D6800u, 0x1D6808u)) {
        return;
    }
    ctx->pc = 0x1D6808u;
label_1d6808:
    // 0x1d6808: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x1d6808u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x1d680c: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1d680cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1d6810: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x1d6810u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x1d6814: 0xac628840  sw          $v0, -0x77C0($v1)
    ctx->pc = 0x1d6814u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6F8840u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6F8840u, _value); } while (0);
    // 0x1d6818: 0x24848848  addiu       $a0, $a0, -0x77B8
    ctx->pc = 0x1d6818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936648));
    // 0x1d681c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d681cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6820: 0x24c66858  addiu       $a2, $a2, 0x6858
    ctx->pc = 0x1d6820u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 26712));
    // 0x1d6824: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x1D6824u;
    SET_GPR_U32(ctx, 31, 0x1D682Cu);
    ctx->pc = 0x1D6828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6824u;
    // 0x1d6828: 0x24070090  addiu       $a3, $zero, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x1D6824u, 0x1D682Cu)) {
        return;
    }
    ctx->pc = 0x1D682Cu;
label_1d682c:
    // 0x1d682c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1D682Cu;
    {
        const bool branch_taken_0x1d682c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D682Cu;
        // 0x1d6830: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d682c) {
            ctx->pc = 0x1D6848u;
            goto label_1d6848;
        }
    }
    ctx->pc = 0x1D6834u;
label_1d6834:
    // 0x1d6834: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1d6834u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1d6838: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1d6838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d683c: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x1D683Cu;
    SET_GPR_U32(ctx, 31, 0x1D6844u);
    ctx->pc = 0x1D6840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D683Cu;
    // 0x1d6840: 0x24848848  addiu       $a0, $a0, -0x77B8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x1D683Cu, 0x1D6844u)) {
        return;
    }
    ctx->pc = 0x1D6844u;
label_1d6844:
    // 0x1d6844: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d6844u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d6848:
    // 0x1d6848: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d6848u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d684c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D684Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D6850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D684Cu;
        // 0x1d6850: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D684Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D6854u;
    // 0x1d6854: 0x0  nop
    ctx->pc = 0x1d6854u;
    // NOP
    ctx->pc = 0x1d6858u;
}

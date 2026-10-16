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

// Function: sub_0017D8B0
// Address: 0x17d8b0 - 0x17d928
void sub_0017D8B0_0x17d8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017D8B0_0x17d8b0");
#endif

    switch (ctx->pc) {
        case 0x17d8d8u: goto label_17d8d8;
        case 0x17d8fcu: goto label_17d8fc;
        case 0x17d914u: goto label_17d914;
        default: break;
    }

    ctx->pc = 0x17d8b0u;

    // 0x17d8b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17d8b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17d8b4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x17d8b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x17d8b8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17d8b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x17d8bc: 0x14a20015  bne         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x17D8BCu;
    {
        const bool branch_taken_0x17d8bc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x17D8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D8BCu;
        // 0x17d8c0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d8bc) {
            ctx->pc = 0x17D914u;
            goto label_17d914;
        }
    }
    ctx->pc = 0x17D8C4u;
    // 0x17d8c4: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x17D8C4u;
    {
        const bool branch_taken_0x17d8c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D8C4u;
        // 0x17d8c8: 0x3c100069  lui         $s0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d8c4) {
            ctx->pc = 0x17D904u;
            goto label_17d904;
        }
    }
    ctx->pc = 0x17D8CCu;
    // 0x17d8cc: 0x261075b8  addiu       $s0, $s0, 0x75B8
    ctx->pc = 0x17d8ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 30136));
    // 0x17d8d0: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x17D8D0u;
    SET_GPR_U32(ctx, 31, 0x17D8D8u);
    ctx->pc = 0x17D8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D8D0u;
    // 0x17d8d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x17D8D0u, 0x17D8D8u)) {
        return;
    }
    ctx->pc = 0x17D8D8u;
label_17d8d8:
    // 0x17d8d8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x17d8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x17d8dc: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x17d8dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x17d8e0: 0x3c060018  lui         $a2, 0x18
    ctx->pc = 0x17d8e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)24 << 16));
    // 0x17d8e4: 0xac62f968  sw          $v0, -0x698($v1)
    ctx->pc = 0x17d8e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6BF968u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BF968u, _value); } while (0);
    // 0x17d8e8: 0x2484f970  addiu       $a0, $a0, -0x690
    ctx->pc = 0x17d8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965616));
    // 0x17d8ec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17d8ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d8f0: 0x24c6d928  addiu       $a2, $a2, -0x26D8
    ctx->pc = 0x17d8f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957352));
    // 0x17d8f4: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x17D8F4u;
    SET_GPR_U32(ctx, 31, 0x17D8FCu);
    ctx->pc = 0x17D8F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D8F4u;
    // 0x17d8f8: 0x2407005c  addiu       $a3, $zero, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x17D8F4u, 0x17D8FCu)) {
        return;
    }
    ctx->pc = 0x17D8FCu;
label_17d8fc:
    // 0x17d8fc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x17D8FCu;
    {
        const bool branch_taken_0x17d8fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D8FCu;
        // 0x17d900: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d8fc) {
            ctx->pc = 0x17D918u;
            goto label_17d918;
        }
    }
    ctx->pc = 0x17D904u;
label_17d904:
    // 0x17d904: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x17d904u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x17d908: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x17d908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17d90c: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x17D90Cu;
    SET_GPR_U32(ctx, 31, 0x17D914u);
    ctx->pc = 0x17D910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D90Cu;
    // 0x17d910: 0x2484f970  addiu       $a0, $a0, -0x690 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x17D90Cu, 0x17D914u)) {
        return;
    }
    ctx->pc = 0x17D914u;
label_17d914:
    // 0x17d914: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17d914u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_17d918:
    // 0x17d918: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17d918u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17d91c: 0x3e00008  jr          $ra
    ctx->pc = 0x17D91Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D91Cu;
        // 0x17d920: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D91Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17D924u;
    // 0x17d924: 0x0  nop
    ctx->pc = 0x17d924u;
    // NOP
    ctx->pc = 0x17d928u;
}

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

// Function: sub_001FE548
// Address: 0x1fe548 - 0x1fe580
void sub_001FE548_0x1fe548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FE548_0x1fe548");
#endif

    switch (ctx->pc) {
        case 0x1fe56cu: goto label_1fe56c;
        default: break;
    }

    ctx->pc = 0x1fe548u;

    // 0x1fe548: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fe548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fe54c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1fe54cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1fe550: 0x14a20008  bne         $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FE550u;
    {
        const bool branch_taken_0x1fe550 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1FE554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE550u;
        // 0x1fe554: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe550) {
            ctx->pc = 0x1FE574u;
            goto label_1fe574;
        }
    }
    ctx->pc = 0x1FE558u;
    // 0x1fe558: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FE558u;
    {
        const bool branch_taken_0x1fe558 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE558u;
        // 0x1fe55c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe558) {
            ctx->pc = 0x1FE578u;
            goto label_1fe578;
        }
    }
    ctx->pc = 0x1FE560u;
    // 0x1fe560: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x1fe560u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
    // 0x1fe564: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x1FE564u;
    SET_GPR_U32(ctx, 31, 0x1FE56Cu);
    ctx->pc = 0x1FE568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE564u;
    // 0x1fe568: 0x24843538  addiu       $a0, $a0, 0x3538 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x1FE564u, 0x1FE56Cu)) {
        return;
    }
    ctx->pc = 0x1FE56Cu;
label_1fe56c:
    // 0x1fe56c: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x1fe56cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x1fe570: 0xac621a68  sw          $v0, 0x1A68($v1)
    ctx->pc = 0x1fe570u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x701A68u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x701A68u, _value); } while (0);
label_1fe574:
    // 0x1fe574: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fe574u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fe578:
    // 0x1fe578: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE578u;
        // 0x1fe57c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE578u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FE580u;
}

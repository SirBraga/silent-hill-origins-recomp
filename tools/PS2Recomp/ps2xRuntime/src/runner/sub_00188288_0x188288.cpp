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

// Function: sub_00188288
// Address: 0x188288 - 0x1882c0
void sub_00188288_0x188288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00188288_0x188288");
#endif

    switch (ctx->pc) {
        case 0x1882acu: goto label_1882ac;
        default: break;
    }

    ctx->pc = 0x188288u;

    // 0x188288: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x188288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18828c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x18828cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x188290: 0x14a20008  bne         $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x188290u;
    {
        const bool branch_taken_0x188290 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x188294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188290u;
        // 0x188294: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188290) {
            ctx->pc = 0x1882B4u;
            goto label_1882b4;
        }
    }
    ctx->pc = 0x188298u;
    // 0x188298: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x188298u;
    {
        const bool branch_taken_0x188298 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x18829Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188298u;
        // 0x18829c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188298) {
            ctx->pc = 0x1882B8u;
            goto label_1882b8;
        }
    }
    ctx->pc = 0x1882A0u;
    // 0x1882a0: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x1882a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
    // 0x1882a4: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x1882A4u;
    SET_GPR_U32(ctx, 31, 0x1882ACu);
    ctx->pc = 0x1882A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1882A4u;
    // 0x1882a8: 0x24848a80  addiu       $a0, $a0, -0x7580 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x1882A4u, 0x1882ACu)) {
        return;
    }
    ctx->pc = 0x1882ACu;
label_1882ac:
    // 0x1882ac: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x1882acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
    // 0x1882b0: 0xac62bd18  sw          $v0, -0x42E8($v1)
    ctx->pc = 0x1882b0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6CBD18u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6CBD18u, _value); } while (0);
label_1882b4:
    // 0x1882b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1882b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1882b8:
    // 0x1882b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1882B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1882BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1882B8u;
        // 0x1882bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1882B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1882C0u;
}

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

// Function: sub_0013C118
// Address: 0x13c118 - 0x13c168
void sub_0013C118_0x13c118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013C118_0x13c118");
#endif

    switch (ctx->pc) {
        case 0x13c13cu: goto label_13c13c;
        default: break;
    }

    ctx->pc = 0x13c118u;

    // 0x13c118: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13c118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13c11c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x13c11cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x13c120: 0x14a20008  bne         $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x13C120u;
    {
        const bool branch_taken_0x13c120 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x13C124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C120u;
        // 0x13c124: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c120) {
            ctx->pc = 0x13C144u;
            goto label_13c144;
        }
    }
    ctx->pc = 0x13C128u;
    // 0x13c128: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x13C128u;
    {
        const bool branch_taken_0x13c128 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C128u;
        // 0x13c12c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c128) {
            ctx->pc = 0x13C148u;
            goto label_13c148;
        }
    }
    ctx->pc = 0x13C130u;
    // 0x13c130: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x13c130u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x13c134: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x13C134u;
    SET_GPR_U32(ctx, 31, 0x13C13Cu);
    ctx->pc = 0x13C138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C134u;
    // 0x13c138: 0x2484f798  addiu       $a0, $a0, -0x868 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x13C134u, 0x13C13Cu)) {
        return;
    }
    ctx->pc = 0x13C13Cu;
label_13c13c:
    // 0x13c13c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x13c13cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x13c140: 0xac6247bc  sw          $v0, 0x47BC($v1)
    ctx->pc = 0x13c140u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B47BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B47BCu, _value); } while (0);
label_13c144:
    // 0x13c144: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13c144u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13c148:
    // 0x13c148: 0x3e00008  jr          $ra
    ctx->pc = 0x13C148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13C14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C148u;
        // 0x13c14c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C148u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13C150u;
    // 0x13c150: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x13c150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x13c154: 0x0  nop
    ctx->pc = 0x13c154u;
    // NOP
    // 0x13c158: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x13c158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x13c15c: 0x0  nop
    ctx->pc = 0x13c15cu;
    // NOP
    // 0x13c160: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x13c160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x13c164: 0x0  nop
    ctx->pc = 0x13c164u;
    // NOP
    ctx->pc = 0x13c168u;
}

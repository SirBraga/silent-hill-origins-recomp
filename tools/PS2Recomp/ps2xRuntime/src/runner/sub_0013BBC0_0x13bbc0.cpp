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

// Function: sub_0013BBC0
// Address: 0x13bbc0 - 0x13bc18
void sub_0013BBC0_0x13bbc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013BBC0_0x13bbc0");
#endif

    switch (ctx->pc) {
        case 0x13bc00u: goto label_13bc00;
        default: break;
    }

    ctx->pc = 0x13bbc0u;

    // 0x13bbc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13bbc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13bbc4: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x13bbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x13bbc8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x13bbc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x13bbcc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13bbccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13bbd0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x13bbd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bbd4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13bbd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bbd8: 0x3c060034  lui         $a2, 0x34
    ctx->pc = 0x13bbd8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)52 << 16));
    // 0x13bbdc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x13bbdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bbe0: 0x262200cc  addiu       $v0, $s1, 0xCC
    ctx->pc = 0x13bbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 204));
    // 0x13bbe4: 0xacc08418  sw          $zero, -0x7BE8($a2)
    ctx->pc = 0x13bbe4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x338418u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x338418u, _value); } while (0);
    // 0x13bbe8: 0x3c050014  lui         $a1, 0x14
    ctx->pc = 0x13bbe8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20 << 16));
    // 0x13bbec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13bbecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13bbf0: 0x10302b  sltu        $a2, $zero, $s0
    ctx->pc = 0x13bbf0u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x13bbf4: 0xac62841c  sw          $v0, -0x7BE4($v1)
    ctx->pc = 0x13bbf4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294935580), GPR_U32(ctx, 2));
    // 0x13bbf8: 0xc09545a  jal         func_255168
    ctx->pc = 0x13BBF8u;
    SET_GPR_U32(ctx, 31, 0x13BC00u);
    ctx->pc = 0x13BBFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BBF8u;
    // 0x13bbfc: 0x24a5bad8  addiu       $a1, $a1, -0x4528 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255168u, 0x13BBF8u, 0x13BC00u)) {
        return;
    }
    ctx->pc = 0x13BC00u;
label_13bc00:
    // 0x13bc00: 0xae3000d0  sw          $s0, 0xD0($s1)
    ctx->pc = 0x13bc00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 16));
    // 0x13bc04: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x13bc04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13bc08: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13bc08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13bc0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13bc0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13bc10: 0x3e00008  jr          $ra
    ctx->pc = 0x13BC10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13BC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BC10u;
        // 0x13bc14: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13BC10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13BC18u;
}

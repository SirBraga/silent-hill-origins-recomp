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

// Function: sub_001B44D0
// Address: 0x1b44d0 - 0x1b4548
void sub_001B44D0_0x1b44d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B44D0_0x1b44d0");
#endif

    switch (ctx->pc) {
        case 0x1b4508u: goto label_1b4508;
        case 0x1b4514u: goto label_1b4514;
        case 0x1b452cu: goto label_1b452c;
        default: break;
    }

    ctx->pc = 0x1b44d0u;

    // 0x1b44d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b44d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b44d4: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x1b44d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x1b44d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b44d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b44dc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1b44dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1b44e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b44e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b44e4: 0xac608668  sw          $zero, -0x7998($v1)
    ctx->pc = 0x1b44e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6F8668u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6F8668u, _value); } while (0);
    // 0x1b44e8: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x1b44e8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b44ec: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1B44ECu;
    {
        const bool branch_taken_0x1b44ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B44F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B44ECu;
        // 0x1b44f0: 0x24718668  addiu       $s1, $v1, -0x7998 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b44ec) {
            ctx->pc = 0x1B452Cu;
            goto label_1b452c;
        }
    }
    ctx->pc = 0x1B44F4u;
    // 0x1b44f4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1b44f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b44f8: 0x26300004  addiu       $s0, $s1, 0x4
    ctx->pc = 0x1b44f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x1b44fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b44fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4500: 0xc081b9a  jal         func_206E68
    ctx->pc = 0x1B4500u;
    SET_GPR_U32(ctx, 31, 0x1B4508u);
    ctx->pc = 0x1B4504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4500u;
    // 0x1b4504: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206E68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206E68u, 0x1B4500u, 0x1B4508u)) {
        return;
    }
    ctx->pc = 0x1B4508u;
label_1b4508:
    // 0x1b4508: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b4508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b450c: 0xc0c5d08  jal         func_317420
    ctx->pc = 0x1B450Cu;
    SET_GPR_U32(ctx, 31, 0x1B4514u);
    ctx->pc = 0x1B4510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B450Cu;
    // 0x1b4510: 0x2405002e  addiu       $a1, $zero, 0x2E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    ctx->in_delay_slot = false;
    ctx->pc = 0x317420u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x317420u, 0x1B450Cu, 0x1B4514u)) {
        return;
    }
    ctx->pc = 0x1B4514u;
label_1b4514:
    // 0x1b4514: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B4514u;
    {
        const bool branch_taken_0x1b4514 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b4514) {
            ctx->pc = 0x1B4518u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B4514u;
            // 0x1b4518: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B451Cu;
            goto label_1b451c;
        }
    }
    ctx->pc = 0x1B451Cu;
label_1b451c:
    // 0x1b451c: 0x3c04001b  lui         $a0, 0x1B
    ctx->pc = 0x1b451cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)27 << 16));
    // 0x1b4520: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b4520u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4524: 0xc08ab32  jal         func_22ACC8
    ctx->pc = 0x1B4524u;
    SET_GPR_U32(ctx, 31, 0x1B452Cu);
    ctx->pc = 0x1B4528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4524u;
    // 0x1b4528: 0x24844480  addiu       $a0, $a0, 0x4480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22ACC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22ACC8u, 0x1B4524u, 0x1B452Cu)) {
        return;
    }
    ctx->pc = 0x1B452Cu;
label_1b452c:
    // 0x1b452c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1b452cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1b4530: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1b4530u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b4534: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b4534u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b4538: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b4538u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b453c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B453Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B453Cu;
        // 0x1b4540: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B453Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B4544u;
    // 0x1b4544: 0x0  nop
    ctx->pc = 0x1b4544u;
    // NOP
    ctx->pc = 0x1b4548u;
}

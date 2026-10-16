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

// Function: sub_002D7000
// Address: 0x2d7000 - 0x2d7048
void sub_002D7000_0x2d7000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D7000_0x2d7000");
#endif

    switch (ctx->pc) {
        case 0x2d7000u: goto label_2d7000;
        case 0x2d7004u: goto label_2d7004;
        case 0x2d7008u: goto label_2d7008;
        case 0x2d700cu: goto label_2d700c;
        case 0x2d7010u: goto label_2d7010;
        case 0x2d7014u: goto label_2d7014;
        case 0x2d7018u: goto label_2d7018;
        case 0x2d701cu: goto label_2d701c;
        case 0x2d7020u: goto label_2d7020;
        case 0x2d7024u: goto label_2d7024;
        case 0x2d7028u: goto label_2d7028;
        case 0x2d702cu: goto label_2d702c;
        case 0x2d7030u: goto label_2d7030;
        case 0x2d7034u: goto label_2d7034;
        case 0x2d7038u: goto label_2d7038;
        case 0x2d703cu: goto label_2d703c;
        case 0x2d7040u: goto label_2d7040;
        case 0x2d7044u: goto label_2d7044;
        default: break;
    }

    ctx->pc = 0x2d7000u;

label_2d7000:
    // 0x2d7000: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d7000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2d7004:
    // 0x2d7004: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2d7004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2d7008:
    // 0x2d7008: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d7008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2d700c:
    // 0x2d700c: 0xc0b5c28  jal         func_2D70A0
label_2d7010:
    if (ctx->pc == 0x2D7010u) {
        ctx->pc = 0x2D7010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D700Cu;
        // 0x2d7010: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D7014u;
        goto label_2d7014;
    }
    ctx->pc = 0x2D700Cu;
    SET_GPR_U32(ctx, 31, 0x2D7014u);
    ctx->pc = 0x2D7010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D700Cu;
    // 0x2d7010: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D70A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D70A0u, 0x2D700Cu, 0x2D7014u)) {
        return;
    }
    ctx->pc = 0x2D7014u;
label_2d7014:
    // 0x2d7014: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x2d7014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_2d7018:
    // 0x2d7018: 0x54600006  bnel        $v1, $zero, . + 4 + (0x6 << 2)
label_2d701c:
    if (ctx->pc == 0x2D701Cu) {
        ctx->pc = 0x2D701Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7018u;
        // 0x2d701c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D7020u;
        goto label_2d7020;
    }
    ctx->pc = 0x2D7018u;
    {
        const bool branch_taken_0x2d7018 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d7018) {
            ctx->pc = 0x2D701Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D7018u;
            // 0x2d701c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D7034u;
            goto label_2d7034;
        }
    }
    ctx->pc = 0x2D7020u;
label_2d7020:
    // 0x2d7020: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x2d7020u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_2d7024:
    // 0x2d7024: 0x8c6210d4  lw          $v0, 0x10D4($v1)
    ctx->pc = 0x2d7024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4308)));
label_2d7028:
    // 0x2d7028: 0x40f809  jalr        $v0
label_2d702c:
    if (ctx->pc == 0x2D702Cu) {
        ctx->pc = 0x2D702Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7028u;
        // 0x2d702c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D7030u;
        goto label_2d7030;
    }
    ctx->pc = 0x2D7028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D7030u);
        ctx->pc = 0x2D702Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7028u;
        // 0x2d702c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D7028u, 0x2D7030u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D7030u;
label_2d7030:
    // 0x2d7030: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2d7030u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2d7034:
    // 0x2d7034: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d7034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d7038:
    // 0x2d7038: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d7038u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d703c:
    // 0x2d703c: 0x3e00008  jr          $ra
label_2d7040:
    if (ctx->pc == 0x2D7040u) {
        ctx->pc = 0x2D7040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D703Cu;
        // 0x2d7040: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D7044u;
        goto label_2d7044;
    }
    ctx->pc = 0x2D703Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D7040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D703Cu;
        // 0x2d7040: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D703Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D7044u;
label_2d7044:
    // 0x2d7044: 0x0  nop
    ctx->pc = 0x2d7044u;
    // NOP
    ctx->pc = 0x2d7048u;
}

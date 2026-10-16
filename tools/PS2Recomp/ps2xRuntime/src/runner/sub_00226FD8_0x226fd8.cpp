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

// Function: sub_00226FD8
// Address: 0x226fd8 - 0x227030
void sub_00226FD8_0x226fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00226FD8_0x226fd8");
#endif

    switch (ctx->pc) {
        case 0x226fd8u: goto label_226fd8;
        case 0x226fdcu: goto label_226fdc;
        case 0x226fe0u: goto label_226fe0;
        case 0x226fe4u: goto label_226fe4;
        case 0x226fe8u: goto label_226fe8;
        case 0x226fecu: goto label_226fec;
        case 0x226ff0u: goto label_226ff0;
        case 0x226ff4u: goto label_226ff4;
        case 0x226ff8u: goto label_226ff8;
        case 0x226ffcu: goto label_226ffc;
        case 0x227000u: goto label_227000;
        case 0x227004u: goto label_227004;
        case 0x227008u: goto label_227008;
        case 0x22700cu: goto label_22700c;
        case 0x227010u: goto label_227010;
        case 0x227014u: goto label_227014;
        case 0x227018u: goto label_227018;
        case 0x22701cu: goto label_22701c;
        case 0x227020u: goto label_227020;
        case 0x227024u: goto label_227024;
        case 0x227028u: goto label_227028;
        case 0x22702cu: goto label_22702c;
        default: break;
    }

    ctx->pc = 0x226fd8u;

label_226fd8:
    // 0x226fd8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x226fd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_226fdc:
    // 0x226fdc: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x226fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_226fe0:
    // 0x226fe0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x226fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_226fe4:
    // 0x226fe4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x226fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_226fe8:
    // 0x226fe8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x226fe8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_226fec:
    // 0x226fec: 0x8c4510d4  lw          $a1, 0x10D4($v0)
    ctx->pc = 0x226fecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4308)));
label_226ff0:
    // 0x226ff0: 0xa0f809  jalr        $a1
label_226ff4:
    if (ctx->pc == 0x226FF4u) {
        ctx->pc = 0x226FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226FF0u;
        // 0x226ff4: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226FF8u;
        goto label_226ff8;
    }
    ctx->pc = 0x226FF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x226FF8u);
        ctx->pc = 0x226FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226FF0u;
        // 0x226ff4: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226FF0u, 0x226FF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x226FF8u;
label_226ff8:
    // 0x226ff8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x226ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_226ffc:
    // 0x226ffc: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x226ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_227000:
    // 0x227000: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x227000u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_227004:
    // 0x227004: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x227004u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_227008:
    // 0x227008: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x227008u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_22700c:
    // 0x22700c: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x22700cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
label_227010:
    // 0x227010: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x227010u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_227014:
    // 0x227014: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x227014u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_227018:
    // 0x227018: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x227018u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22701c:
    // 0x22701c: 0x3e00008  jr          $ra
label_227020:
    if (ctx->pc == 0x227020u) {
        ctx->pc = 0x227020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22701Cu;
        // 0x227020: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227024u;
        goto label_227024;
    }
    ctx->pc = 0x22701Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22701Cu;
        // 0x227020: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22701Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227024u;
label_227024:
    // 0x227024: 0x0  nop
    ctx->pc = 0x227024u;
    // NOP
label_227028:
    // 0x227028: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x227028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_22702c:
    // 0x22702c: 0x0  nop
    ctx->pc = 0x22702cu;
    // NOP
    ctx->pc = 0x227030u;
}

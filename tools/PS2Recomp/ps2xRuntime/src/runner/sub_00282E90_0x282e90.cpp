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

// Function: sub_00282E90
// Address: 0x282e90 - 0x282ef8
void sub_00282E90_0x282e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00282E90_0x282e90");
#endif

    switch (ctx->pc) {
        case 0x282e90u: goto label_282e90;
        case 0x282e94u: goto label_282e94;
        case 0x282e98u: goto label_282e98;
        case 0x282e9cu: goto label_282e9c;
        case 0x282ea0u: goto label_282ea0;
        case 0x282ea4u: goto label_282ea4;
        case 0x282ea8u: goto label_282ea8;
        case 0x282eacu: goto label_282eac;
        case 0x282eb0u: goto label_282eb0;
        case 0x282eb4u: goto label_282eb4;
        case 0x282eb8u: goto label_282eb8;
        case 0x282ebcu: goto label_282ebc;
        case 0x282ec0u: goto label_282ec0;
        case 0x282ec4u: goto label_282ec4;
        case 0x282ec8u: goto label_282ec8;
        case 0x282eccu: goto label_282ecc;
        case 0x282ed0u: goto label_282ed0;
        case 0x282ed4u: goto label_282ed4;
        case 0x282ed8u: goto label_282ed8;
        case 0x282edcu: goto label_282edc;
        case 0x282ee0u: goto label_282ee0;
        case 0x282ee4u: goto label_282ee4;
        case 0x282ee8u: goto label_282ee8;
        case 0x282eecu: goto label_282eec;
        case 0x282ef0u: goto label_282ef0;
        case 0x282ef4u: goto label_282ef4;
        default: break;
    }

    ctx->pc = 0x282e90u;

label_282e90:
    // 0x282e90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x282e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_282e94:
    // 0x282e94: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x282e94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_282e98:
    // 0x282e98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x282e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_282e9c:
    // 0x282e9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x282e9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_282ea0:
    // 0x282ea0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x282ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_282ea4:
    // 0x282ea4: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x282ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_282ea8:
    // 0x282ea8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_282eac:
    if (ctx->pc == 0x282EACu) {
        ctx->pc = 0x282EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282EA8u;
        // 0x282eac: 0x3c110073  lui         $s1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x282EB0u;
        goto label_282eb0;
    }
    ctx->pc = 0x282EA8u;
    {
        const bool branch_taken_0x282ea8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x282EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282EA8u;
        // 0x282eac: 0x3c110073  lui         $s1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282ea8) {
            ctx->pc = 0x282EC0u;
            goto label_282ec0;
        }
    }
    ctx->pc = 0x282EB0u;
label_282eb0:
    // 0x282eb0: 0x26220fc8  addiu       $v0, $s1, 0xFC8
    ctx->pc = 0x282eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4040));
label_282eb4:
    // 0x282eb4: 0x8c43010c  lw          $v1, 0x10C($v0)
    ctx->pc = 0x282eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_282eb8:
    // 0x282eb8: 0x60f809  jalr        $v1
label_282ebc:
    if (ctx->pc == 0x282EBCu) {
        ctx->pc = 0x282EC0u;
        goto label_282ec0;
    }
    ctx->pc = 0x282EB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x282EC0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x282EB8u, 0x282EC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x282EC0u;
label_282ec0:
    // 0x282ec0: 0xc0a0f02  jal         func_283C08
label_282ec4:
    if (ctx->pc == 0x282EC4u) {
        ctx->pc = 0x282EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282EC0u;
        // 0x282ec4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x282EC8u;
        goto label_282ec8;
    }
    ctx->pc = 0x282EC0u;
    SET_GPR_U32(ctx, 31, 0x282EC8u);
    ctx->pc = 0x282EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282EC0u;
    // 0x282ec4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x283C08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x283C08u, 0x282EC0u, 0x282EC8u)) {
        return;
    }
    ctx->pc = 0x282EC8u;
label_282ec8:
    // 0x282ec8: 0x26230fc8  addiu       $v1, $s1, 0xFC8
    ctx->pc = 0x282ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4040));
label_282ecc:
    // 0x282ecc: 0x3c060068  lui         $a2, 0x68
    ctx->pc = 0x282eccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)104 << 16));
label_282ed0:
    // 0x282ed0: 0x8c62011c  lw          $v0, 0x11C($v1)
    ctx->pc = 0x282ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 284)));
label_282ed4:
    // 0x282ed4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x282ed4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_282ed8:
    // 0x282ed8: 0x40f809  jalr        $v0
label_282edc:
    if (ctx->pc == 0x282EDCu) {
        ctx->pc = 0x282EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282ED8u;
        // 0x282edc: 0x8cc4e6f8  lw          $a0, -0x1908($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294960888)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x282EE0u;
        goto label_282ee0;
    }
    ctx->pc = 0x282ED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x282EE0u);
        ctx->pc = 0x282EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282ED8u;
        // 0x282edc: 0x8cc4e6f8  lw          $a0, -0x1908($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294960888)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x282ED8u, 0x282EE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x282EE0u;
label_282ee0:
    // 0x282ee0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x282ee0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_282ee4:
    // 0x282ee4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x282ee4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_282ee8:
    // 0x282ee8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x282ee8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_282eec:
    // 0x282eec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x282eecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_282ef0:
    // 0x282ef0: 0x3e00008  jr          $ra
label_282ef4:
    if (ctx->pc == 0x282EF4u) {
        ctx->pc = 0x282EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282EF0u;
        // 0x282ef4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x282EF8u;
        goto label_fallthrough_0x282ef0;
    }
    ctx->pc = 0x282EF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x282EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282EF0u;
        // 0x282ef4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x282EF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x282ef0:
    ctx->pc = 0x282EF8u;
}

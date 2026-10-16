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

// Function: sub_0025CFF0
// Address: 0x25cff0 - 0x25d038
void sub_0025CFF0_0x25cff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025CFF0_0x25cff0");
#endif

    switch (ctx->pc) {
        case 0x25cff0u: goto label_25cff0;
        case 0x25cff4u: goto label_25cff4;
        case 0x25cff8u: goto label_25cff8;
        case 0x25cffcu: goto label_25cffc;
        case 0x25d000u: goto label_25d000;
        case 0x25d004u: goto label_25d004;
        case 0x25d008u: goto label_25d008;
        case 0x25d00cu: goto label_25d00c;
        case 0x25d010u: goto label_25d010;
        case 0x25d014u: goto label_25d014;
        case 0x25d018u: goto label_25d018;
        case 0x25d01cu: goto label_25d01c;
        case 0x25d020u: goto label_25d020;
        case 0x25d024u: goto label_25d024;
        case 0x25d028u: goto label_25d028;
        case 0x25d02cu: goto label_25d02c;
        case 0x25d030u: goto label_25d030;
        case 0x25d034u: goto label_25d034;
        default: break;
    }

    ctx->pc = 0x25cff0u;

label_25cff0:
    // 0x25cff0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25cff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_25cff4:
    // 0x25cff4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x25cff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_25cff8:
    // 0x25cff8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25cff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_25cffc:
    // 0x25cffc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25cffcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_25d000:
    // 0x25d000: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x25d000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_25d004:
    // 0x25d004: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_25d008:
    if (ctx->pc == 0x25D008u) {
        ctx->pc = 0x25D008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D004u;
        // 0x25d008: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D00Cu;
        goto label_25d00c;
    }
    ctx->pc = 0x25D004u;
    {
        const bool branch_taken_0x25d004 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D004u;
        // 0x25d008: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d004) {
            ctx->pc = 0x25D018u;
            goto label_25d018;
        }
    }
    ctx->pc = 0x25D00Cu;
label_25d00c:
    // 0x25d00c: 0x8c6210d4  lw          $v0, 0x10D4($v1)
    ctx->pc = 0x25d00cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4308)));
label_25d010:
    // 0x25d010: 0x40f809  jalr        $v0
label_25d014:
    if (ctx->pc == 0x25D014u) {
        ctx->pc = 0x25D018u;
        goto label_25d018;
    }
    ctx->pc = 0x25D010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25D018u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D010u, 0x25D018u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25D018u;
label_25d018:
    // 0x25d018: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x25d018u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_25d01c:
    // 0x25d01c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25d01cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25d020:
    // 0x25d020: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x25d020u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_25d024:
    // 0x25d024: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x25d024u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_25d028:
    // 0x25d028: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x25d028u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_25d02c:
    // 0x25d02c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25d02cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_25d030:
    // 0x25d030: 0x3e00008  jr          $ra
label_25d034:
    if (ctx->pc == 0x25D034u) {
        ctx->pc = 0x25D034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D030u;
        // 0x25d034: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D038u;
        goto label_fallthrough_0x25d030;
    }
    ctx->pc = 0x25D030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25D034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D030u;
        // 0x25d034: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D030u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x25d030:
    ctx->pc = 0x25D038u;
}

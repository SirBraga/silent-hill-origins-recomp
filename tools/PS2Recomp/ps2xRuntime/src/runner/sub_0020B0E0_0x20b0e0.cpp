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

// Function: sub_0020B0E0
// Address: 0x20b0e0 - 0x20b140
void sub_0020B0E0_0x20b0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020B0E0_0x20b0e0");
#endif

    switch (ctx->pc) {
        case 0x20b0e0u: goto label_20b0e0;
        case 0x20b0e4u: goto label_20b0e4;
        case 0x20b0e8u: goto label_20b0e8;
        case 0x20b0ecu: goto label_20b0ec;
        case 0x20b0f0u: goto label_20b0f0;
        case 0x20b0f4u: goto label_20b0f4;
        case 0x20b0f8u: goto label_20b0f8;
        case 0x20b0fcu: goto label_20b0fc;
        case 0x20b100u: goto label_20b100;
        case 0x20b104u: goto label_20b104;
        case 0x20b108u: goto label_20b108;
        case 0x20b10cu: goto label_20b10c;
        case 0x20b110u: goto label_20b110;
        case 0x20b114u: goto label_20b114;
        case 0x20b118u: goto label_20b118;
        case 0x20b11cu: goto label_20b11c;
        case 0x20b120u: goto label_20b120;
        case 0x20b124u: goto label_20b124;
        case 0x20b128u: goto label_20b128;
        case 0x20b12cu: goto label_20b12c;
        case 0x20b130u: goto label_20b130;
        case 0x20b134u: goto label_20b134;
        case 0x20b138u: goto label_20b138;
        case 0x20b13cu: goto label_20b13c;
        default: break;
    }

    ctx->pc = 0x20b0e0u;

label_20b0e0:
    // 0x20b0e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20b0e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_20b0e4:
    // 0x20b0e4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20b0e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20b0e8:
    // 0x20b0e8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x20b0e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_20b0ec:
    // 0x20b0ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20b0ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_20b0f0:
    // 0x20b0f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20b0f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20b0f4:
    // 0x20b0f4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x20b0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_20b0f8:
    // 0x20b0f8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x20b0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_20b0fc:
    // 0x20b0fc: 0x40f809  jalr        $v0
label_20b100:
    if (ctx->pc == 0x20B100u) {
        ctx->pc = 0x20B100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B0FCu;
        // 0x20b100: 0x2406001c  addiu       $a2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B104u;
        goto label_20b104;
    }
    ctx->pc = 0x20B0FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20B104u);
        ctx->pc = 0x20B100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B0FCu;
        // 0x20b100: 0x2406001c  addiu       $a2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B0FCu, 0x20B104u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20B104u;
label_20b104:
    // 0x20b104: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x20b104u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
label_20b108:
    // 0x20b108: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x20b108u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
label_20b10c:
    // 0x20b10c: 0xae0201a4  sw          $v0, 0x1A4($s0)
    ctx->pc = 0x20b10cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 420), GPR_U32(ctx, 2));
label_20b110:
    // 0x20b110: 0x2463aee8  addiu       $v1, $v1, -0x5118
    ctx->pc = 0x20b110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946536));
label_20b114:
    // 0x20b114: 0x24a5b140  addiu       $a1, $a1, -0x4EC0
    ctx->pc = 0x20b114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947136));
label_20b118:
    // 0x20b118: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20b118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20b11c:
    // 0x20b11c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x20b11cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_20b120:
    // 0x20b120: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x20b120u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
label_20b124:
    // 0x20b124: 0xc082a84  jal         func_20AA10
label_20b128:
    if (ctx->pc == 0x20B128u) {
        ctx->pc = 0x20B128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B124u;
        // 0x20b128: 0xac400008  sw          $zero, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B12Cu;
        goto label_20b12c;
    }
    ctx->pc = 0x20B124u;
    SET_GPR_U32(ctx, 31, 0x20B12Cu);
    ctx->pc = 0x20B128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B124u;
    // 0x20b128: 0xac400008  sw          $zero, 0x8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20AA10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x20AA10u, 0x20B124u, 0x20B12Cu)) {
        return;
    }
    ctx->pc = 0x20B12Cu;
label_20b12c:
    // 0x20b12c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x20b12cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20b130:
    // 0x20b130: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20b130u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20b134:
    // 0x20b134: 0x3e00008  jr          $ra
label_20b138:
    if (ctx->pc == 0x20B138u) {
        ctx->pc = 0x20B138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B134u;
        // 0x20b138: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B13Cu;
        goto label_20b13c;
    }
    ctx->pc = 0x20B134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20B138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B134u;
        // 0x20b138: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B134u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20B13Cu;
label_20b13c:
    // 0x20b13c: 0x0  nop
    ctx->pc = 0x20b13cu;
    // NOP
    ctx->pc = 0x20b140u;
}

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

// Function: sub_0018BFF0
// Address: 0x18bff0 - 0x18c060
void sub_0018BFF0_0x18bff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018BFF0_0x18bff0");
#endif

    switch (ctx->pc) {
        case 0x18c004u: goto label_18c004;
        case 0x18c024u: goto label_18c024;
        case 0x18c048u: goto label_18c048;
        default: break;
    }

    ctx->pc = 0x18bff0u;

    // 0x18bff0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18bff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18bff4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x18bff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x18bff8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18bff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18bffc: 0xc04f05a  jal         func_13C168
    ctx->pc = 0x18BFFCu;
    SET_GPR_U32(ctx, 31, 0x18C004u);
    ctx->pc = 0x18C000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BFFCu;
    // 0x18c000: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C168u, 0x18BFFCu, 0x18C004u)) {
        return;
    }
    ctx->pc = 0x18C004u;
label_18c004:
    // 0x18c004: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x18c004u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x18c008: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x18c008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x18c00c: 0x246390c0  addiu       $v1, $v1, -0x6F40
    ctx->pc = 0x18c00cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938816));
    // 0x18c010: 0x24429078  addiu       $v0, $v0, -0x6F88
    ctx->pc = 0x18c010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938744));
    // 0x18c014: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x18c014u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x18c018: 0x26040044  addiu       $a0, $s0, 0x44
    ctx->pc = 0x18c018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x18c01c: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x18C01Cu;
    SET_GPR_U32(ctx, 31, 0x18C024u);
    ctx->pc = 0x18C020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C01Cu;
    // 0x18c020: 0xae020034  sw          $v0, 0x34($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x18C01Cu, 0x18C024u)) {
        return;
    }
    ctx->pc = 0x18C024u;
label_18c024:
    // 0x18c024: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x18c024u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x18c028: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x18c028u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x18c02c: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x18c02cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x18c030: 0x26040038  addiu       $a0, $s0, 0x38
    ctx->pc = 0x18c030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x18c034: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x18c034u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    // 0x18c038: 0x24a5f898  addiu       $a1, $a1, -0x768
    ctx->pc = 0x18c038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965400));
    // 0x18c03c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18c03cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c040: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x18C040u;
    SET_GPR_U32(ctx, 31, 0x18C048u);
    ctx->pc = 0x18C044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C040u;
    // 0x18c044: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x18C040u, 0x18C048u)) {
        return;
    }
    ctx->pc = 0x18C048u;
label_18c048:
    // 0x18c048: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x18c048u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c04c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18c04cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18c050: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x18c050u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18c054: 0x3e00008  jr          $ra
    ctx->pc = 0x18C054u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18C058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C054u;
        // 0x18c058: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C054u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18C05Cu;
    // 0x18c05c: 0x0  nop
    ctx->pc = 0x18c05cu;
    // NOP
    ctx->pc = 0x18c060u;
}

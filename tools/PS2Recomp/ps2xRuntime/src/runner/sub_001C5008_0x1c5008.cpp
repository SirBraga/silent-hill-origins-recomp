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

// Function: sub_001C5008
// Address: 0x1c5008 - 0x1c5098
void sub_001C5008_0x1c5008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C5008_0x1c5008");
#endif

    switch (ctx->pc) {
        case 0x1c5024u: goto label_1c5024;
        case 0x1c504cu: goto label_1c504c;
        case 0x1c5064u: goto label_1c5064;
        case 0x1c5078u: goto label_1c5078;
        default: break;
    }

    ctx->pc = 0x1c5008u;

    // 0x1c5008: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1c5008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1c500c: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x1c500cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x1c5010: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x1c5010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x1c5014: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1c5014u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5018: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1c5018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1c501c: 0xc06d512  jal         func_1B5448
    ctx->pc = 0x1C501Cu;
    SET_GPR_U32(ctx, 31, 0x1C5024u);
    ctx->pc = 0x1C5020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C501Cu;
    // 0x1c5020: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5448u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B5448u, 0x1C501Cu, 0x1C5024u)) {
        return;
    }
    ctx->pc = 0x1C5024u;
label_1c5024:
    // 0x1c5024: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1c5024u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1c5028: 0xae2002d0  sw          $zero, 0x2D0($s1)
    ctx->pc = 0x1c5028u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 720), GPR_U32(ctx, 0));
    // 0x1c502c: 0x2463ea28  addiu       $v1, $v1, -0x15D8
    ctx->pc = 0x1c502cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961704));
    // 0x1c5030: 0xae2002d4  sw          $zero, 0x2D4($s1)
    ctx->pc = 0x1c5030u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 724), GPR_U32(ctx, 0));
    // 0x1c5034: 0xae2002d8  sw          $zero, 0x2D8($s1)
    ctx->pc = 0x1c5034u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 728), GPR_U32(ctx, 0));
    // 0x1c5038: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c5038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c503c: 0xae230258  sw          $v1, 0x258($s1)
    ctx->pc = 0x1c503cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 600), GPR_U32(ctx, 3));
    // 0x1c5040: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c5040u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5044: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1C5044u;
    SET_GPR_U32(ctx, 31, 0x1C504Cu);
    ctx->pc = 0x1C5048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5044u;
    // 0x1c5048: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1C5044u, 0x1C504Cu)) {
        return;
    }
    ctx->pc = 0x1C504Cu;
label_1c504c:
    // 0x1c504c: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1c504cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1c5050: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c5050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5054: 0x24a5ea18  addiu       $a1, $a1, -0x15E8
    ctx->pc = 0x1c5054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961688));
    // 0x1c5058: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1c5058u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c505c: 0xc065f2c  jal         func_197CB0
    ctx->pc = 0x1C505Cu;
    SET_GPR_U32(ctx, 31, 0x1C5064u);
    ctx->pc = 0x1C5060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C505Cu;
    // 0x1c5060: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197CB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197CB0u, 0x1C505Cu, 0x1C5064u)) {
        return;
    }
    ctx->pc = 0x1C5064u;
label_1c5064:
    // 0x1c5064: 0x83a30000  lb          $v1, 0x0($sp)
    ctx->pc = 0x1c5064u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c5068: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C5068u;
    {
        const bool branch_taken_0x1c5068 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C506Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5068u;
        // 0x1c506c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5068) {
            ctx->pc = 0x1C507Cu;
            goto label_1c507c;
        }
    }
    ctx->pc = 0x1C5070u;
    // 0x1c5070: 0xc065c40  jal         func_197100
    ctx->pc = 0x1C5070u;
    SET_GPR_U32(ctx, 31, 0x1C5078u);
    ctx->pc = 0x1C5074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5070u;
    // 0x1c5074: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197100u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197100u, 0x1C5070u, 0x1C5078u)) {
        return;
    }
    ctx->pc = 0x1C5078u;
label_1c5078:
    // 0x1c5078: 0xae2202d4  sw          $v0, 0x2D4($s1)
    ctx->pc = 0x1c5078u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 724), GPR_U32(ctx, 2));
label_1c507c:
    // 0x1c507c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1c507cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5080: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x1c5080u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1c5084: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x1c5084u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c5088: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1c5088u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1c508c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C508Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C5090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C508Cu;
        // 0x1c5090: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C508Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C5094u;
    // 0x1c5094: 0x0  nop
    ctx->pc = 0x1c5094u;
    // NOP
    ctx->pc = 0x1c5098u;
}

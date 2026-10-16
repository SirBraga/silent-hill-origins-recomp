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

// Function: sub_0014CFC0
// Address: 0x14cfc0 - 0x14d098
void sub_0014CFC0_0x14cfc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014CFC0_0x14cfc0");
#endif

    switch (ctx->pc) {
        case 0x14cff4u: goto label_14cff4;
        case 0x14cffcu: goto label_14cffc;
        case 0x14d00cu: goto label_14d00c;
        case 0x14d018u: goto label_14d018;
        case 0x14d024u: goto label_14d024;
        case 0x14d030u: goto label_14d030;
        case 0x14d040u: goto label_14d040;
        case 0x14d054u: goto label_14d054;
        case 0x14d07cu: goto label_14d07c;
        default: break;
    }

    ctx->pc = 0x14cfc0u;

    // 0x14cfc0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x14cfc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x14cfc4: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x14cfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x14cfc8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x14cfc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x14cfcc: 0x24421e48  addiu       $v0, $v0, 0x1E48
    ctx->pc = 0x14cfccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7752));
    // 0x14cfd0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14cfd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cfd4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14cfd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14cfd8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x14cfd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x14cfdc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x14cfdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x14cfe0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x14cfe0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cfe4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14cfe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14cfe8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x14cfe8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cfec: 0xc0534f4  jal         func_14D3D0
    ctx->pc = 0x14CFECu;
    SET_GPR_U32(ctx, 31, 0x14CFF4u);
    ctx->pc = 0x14CFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CFECu;
    // 0x14cff0: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x14D3D0u, 0x14CFECu, 0x14CFF4u)) {
        return;
    }
    ctx->pc = 0x14CFF4u;
label_14cff4:
    // 0x14cff4: 0xc095df4  jal         func_2577D0
    ctx->pc = 0x14CFF4u;
    SET_GPR_U32(ctx, 31, 0x14CFFCu);
    ctx->pc = 0x14CFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CFF4u;
    // 0x14cff8: 0x8e240120  lw          $a0, 0x120($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 288)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2577D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2577D0u, 0x14CFF4u, 0x14CFFCu)) {
        return;
    }
    ctx->pc = 0x14CFFCu;
label_14cffc:
    // 0x14cffc: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x14cffcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x14d000: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14d000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d004: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x14D004u;
    SET_GPR_U32(ctx, 31, 0x14D00Cu);
    ctx->pc = 0x14D008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D004u;
    // 0x14d008: 0x24a58908  addiu       $a1, $a1, -0x76F8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x14D004u, 0x14D00Cu)) {
        return;
    }
    ctx->pc = 0x14D00Cu;
label_14d00c:
    // 0x14d00c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14d00cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d010: 0xc053254  jal         func_14C950
    ctx->pc = 0x14D010u;
    SET_GPR_U32(ctx, 31, 0x14D018u);
    ctx->pc = 0x14D014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D010u;
    // 0x14d014: 0x26250008  addiu       $a1, $s1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14C950u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x14C950u, 0x14D010u, 0x14D018u)) {
        return;
    }
    ctx->pc = 0x14D018u;
label_14d018:
    // 0x14d018: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14d018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d01c: 0xc053254  jal         func_14C950
    ctx->pc = 0x14D01Cu;
    SET_GPR_U32(ctx, 31, 0x14D024u);
    ctx->pc = 0x14D020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D01Cu;
    // 0x14d020: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14C950u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x14C950u, 0x14D01Cu, 0x14D024u)) {
        return;
    }
    ctx->pc = 0x14D024u;
label_14d024:
    // 0x14d024: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14d024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d028: 0xc053254  jal         func_14C950
    ctx->pc = 0x14D028u;
    SET_GPR_U32(ctx, 31, 0x14D030u);
    ctx->pc = 0x14D02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D028u;
    // 0x14d02c: 0x26250038  addiu       $a1, $s1, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14C950u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x14C950u, 0x14D028u, 0x14D030u)) {
        return;
    }
    ctx->pc = 0x14D030u;
label_14d030:
    // 0x14d030: 0x8e220158  lw          $v0, 0x158($s1)
    ctx->pc = 0x14d030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 344)));
    // 0x14d034: 0x1840000d  blez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x14D034u;
    {
        const bool branch_taken_0x14d034 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x14D038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D034u;
        // 0x14d038: 0x2630015c  addiu       $s0, $s1, 0x15C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 348));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d034) {
            ctx->pc = 0x14D06Cu;
            goto label_14d06c;
        }
    }
    ctx->pc = 0x14D03Cu;
    // 0x14d03c: 0x0  nop
    ctx->pc = 0x14d03cu;
    // NOP
label_14d040:
    // 0x14d040: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x14d040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14d044: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x14D044u;
    {
        const bool branch_taken_0x14d044 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d044) {
            ctx->pc = 0x14D048u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14D044u;
            // 0x14d048: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14D058u;
            goto label_14d058;
        }
    }
    ctx->pc = 0x14D04Cu;
    // 0x14d04c: 0xc0410c8  jal         func_104320
    ctx->pc = 0x14D04Cu;
    SET_GPR_U32(ctx, 31, 0x14D054u);
    ctx->pc = 0x14D050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D04Cu;
    // 0x14d050: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x104320u, 0x14D04Cu, 0x14D054u)) {
        return;
    }
    ctx->pc = 0x14D054u;
label_14d054:
    // 0x14d054: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x14d054u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_14d058:
    // 0x14d058: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x14d058u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x14d05c: 0x8e220158  lw          $v0, 0x158($s1)
    ctx->pc = 0x14d05cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 344)));
    // 0x14d060: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x14d060u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14d064: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x14D064u;
    {
        const bool branch_taken_0x14d064 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14D068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D064u;
        // 0x14d068: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d064) {
            ctx->pc = 0x14D040u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14d040;
        }
    }
    ctx->pc = 0x14D06Cu;
label_14d06c:
    // 0x14d06c: 0xae200158  sw          $zero, 0x158($s1)
    ctx->pc = 0x14d06cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 344), GPR_U32(ctx, 0));
    // 0x14d070: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14d070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d074: 0xc07fc62  jal         func_1FF188
    ctx->pc = 0x14D074u;
    SET_GPR_U32(ctx, 31, 0x14D07Cu);
    ctx->pc = 0x14D078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D074u;
    // 0x14d078: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF188u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF188u, 0x14D074u, 0x14D07Cu)) {
        return;
    }
    ctx->pc = 0x14D07Cu;
label_14d07c:
    // 0x14d07c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x14d07cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14d080: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x14d080u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14d084: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14d084u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14d088: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x14d088u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14d08c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14d08cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14d090: 0x3e00008  jr          $ra
    ctx->pc = 0x14D090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14D094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D090u;
        // 0x14d094: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D090u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14D098u;
}

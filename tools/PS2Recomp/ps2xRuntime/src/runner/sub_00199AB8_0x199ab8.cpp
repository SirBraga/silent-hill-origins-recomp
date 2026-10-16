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

// Function: sub_00199AB8
// Address: 0x199ab8 - 0x199b88
void sub_00199AB8_0x199ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00199AB8_0x199ab8");
#endif

    switch (ctx->pc) {
        case 0x199af4u: goto label_199af4;
        case 0x199b2cu: goto label_199b2c;
        case 0x199b3cu: goto label_199b3c;
        case 0x199b74u: goto label_199b74;
        default: break;
    }

    ctx->pc = 0x199ab8u;

    // 0x199ab8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x199ab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x199abc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x199abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x199ac0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x199ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x199ac4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x199ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x199ac8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x199ac8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199acc: 0x8e030070  lw          $v1, 0x70($s0)
    ctx->pc = 0x199accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x199ad0: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x199AD0u;
    {
        const bool branch_taken_0x199ad0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x199AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199AD0u;
        // 0x199ad4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199ad0) {
            ctx->pc = 0x199AE8u;
            goto label_199ae8;
        }
    }
    ctx->pc = 0x199AD8u;
    // 0x199ad8: 0x50620016  beql        $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x199AD8u;
    {
        const bool branch_taken_0x199ad8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x199ad8) {
            ctx->pc = 0x199ADCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x199AD8u;
            // 0x199adc: 0xc60c0040  lwc1        $f12, 0x40($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x199B34u;
            goto label_199b34;
        }
    }
    ctx->pc = 0x199AE0u;
    // 0x199ae0: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x199AE0u;
    {
        const bool branch_taken_0x199ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199AE0u;
        // 0x199ae4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199ae0) {
            ctx->pc = 0x199B78u;
            goto label_199b78;
        }
    }
    ctx->pc = 0x199AE8u;
label_199ae8:
    // 0x199ae8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x199ae8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x199aec: 0xc076566  jal         func_1D9598
    ctx->pc = 0x199AECu;
    SET_GPR_U32(ctx, 31, 0x199AF4u);
    ctx->pc = 0x199AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199AECu;
    // 0x199af0: 0xc60d005c  lwc1        $f13, 0x5C($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9598u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D9598u, 0x199AECu, 0x199AF4u)) {
        return;
    }
    ctx->pc = 0x199AF4u;
label_199af4:
    // 0x199af4: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x199AF4u;
    {
        const bool branch_taken_0x199af4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x199AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199AF4u;
        // 0x199af8: 0x3c030070  lui         $v1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199af4) {
            ctx->pc = 0x199B74u;
            goto label_199b74;
        }
    }
    ctx->pc = 0x199AFCu;
    // 0x199afc: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x199afcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
    // 0x199b00: 0x8e040074  lw          $a0, 0x74($s0)
    ctx->pc = 0x199b00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x199b04: 0x8c621a70  lw          $v0, 0x1A70($v1)
    ctx->pc = 0x199b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6768)));
    // 0x199b08: 0x1082001b  beq         $a0, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x199B08u;
    {
        const bool branch_taken_0x199b08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x199B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199B08u;
        // 0x199b0c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199b08) {
            ctx->pc = 0x199B78u;
            goto label_199b78;
        }
    }
    ctx->pc = 0x199B10u;
    // 0x199b10: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x199b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x199b14: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x199B14u;
    {
        const bool branch_taken_0x199b14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x199B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199B14u;
        // 0x199b18: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199b14) {
            ctx->pc = 0x199B7Cu;
            goto label_199b7c;
        }
    }
    ctx->pc = 0x199B1Cu;
    // 0x199b1c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x199b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x199b20: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x199b20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199b24: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x199B24u;
    SET_GPR_U32(ctx, 31, 0x199B2Cu);
    ctx->pc = 0x199B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199B24u;
    // 0x199b28: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x199B24u, 0x199B2Cu)) {
        return;
    }
    ctx->pc = 0x199B2Cu;
label_199b2c:
    // 0x199b2c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x199B2Cu;
    {
        const bool branch_taken_0x199b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199B2Cu;
        // 0x199b30: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199b2c) {
            ctx->pc = 0x199B78u;
            goto label_199b78;
        }
    }
    ctx->pc = 0x199B34u;
label_199b34:
    // 0x199b34: 0xc076566  jal         func_1D9598
    ctx->pc = 0x199B34u;
    SET_GPR_U32(ctx, 31, 0x199B3Cu);
    ctx->pc = 0x199B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199B34u;
    // 0x199b38: 0xc60d005c  lwc1        $f13, 0x5C($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9598u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D9598u, 0x199B34u, 0x199B3Cu)) {
        return;
    }
    ctx->pc = 0x199B3Cu;
label_199b3c:
    // 0x199b3c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x199B3Cu;
    {
        const bool branch_taken_0x199b3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x199B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199B3Cu;
        // 0x199b40: 0x3c030070  lui         $v1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199b3c) {
            ctx->pc = 0x199B74u;
            goto label_199b74;
        }
    }
    ctx->pc = 0x199B44u;
    // 0x199b44: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x199b44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
    // 0x199b48: 0x8e040074  lw          $a0, 0x74($s0)
    ctx->pc = 0x199b48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x199b4c: 0x8c621a70  lw          $v0, 0x1A70($v1)
    ctx->pc = 0x199b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6768)));
    // 0x199b50: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x199B50u;
    {
        const bool branch_taken_0x199b50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x199B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199B50u;
        // 0x199b54: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199b50) {
            ctx->pc = 0x199B78u;
            goto label_199b78;
        }
    }
    ctx->pc = 0x199B58u;
    // 0x199b58: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x199b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x199b5c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x199B5Cu;
    {
        const bool branch_taken_0x199b5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x199B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199B5Cu;
        // 0x199b60: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199b5c) {
            ctx->pc = 0x199B7Cu;
            goto label_199b7c;
        }
    }
    ctx->pc = 0x199B64u;
    // 0x199b64: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x199b64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x199b68: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x199b68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199b6c: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x199B6Cu;
    SET_GPR_U32(ctx, 31, 0x199B74u);
    ctx->pc = 0x199B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199B6Cu;
    // 0x199b70: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x199B6Cu, 0x199B74u)) {
        return;
    }
    ctx->pc = 0x199B74u;
label_199b74:
    // 0x199b74: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x199b74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_199b78:
    // 0x199b78: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x199b78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_199b7c:
    // 0x199b7c: 0x3e00008  jr          $ra
    ctx->pc = 0x199B7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199B7Cu;
        // 0x199b80: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199B7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x199B84u;
    // 0x199b84: 0x0  nop
    ctx->pc = 0x199b84u;
    // NOP
    ctx->pc = 0x199b88u;
}
